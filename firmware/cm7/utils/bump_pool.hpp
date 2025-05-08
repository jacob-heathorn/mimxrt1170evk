#pragma once

#include <atomic>
#include <cstddef>
#include <mutex>
#include <new>       // for placement new
#include <utility>   // for std::forward

#include "ftl/bump_allocator.hpp"
#include "ftl/mutex.hpp"

//----------------------------------------------------------------
// BumpPool: a thread‑safe pool of Ts built on a bump allocator.
//----------------------------------------------------------------
template <typename T>
class BumpPool {
 public:
  // Construct a pool that preallocates 'initialSize' objects.
  // 'alloc' must outlive this pool.
  BumpPool(ftl::BumpAllocator& allocator, std::size_t initialSize = 1)
    : allocator_(allocator)
  {
    // prebuild initialSize nodes
    for (std::size_t i = 0; i < initialSize; ++i) {
      // bump‑alloc under lock
      void* mem;
      {
        ftl::LockGuard<ftl::Mutex> lock(allocatorMutex_);
        mem = allocator_.allocate(sizeof(Node));
      }
      auto* node = new (mem) Node{};
      pushNode_(node);
    }
  }

  // No copying or moving
  BumpPool(const BumpPool&) = delete;
  BumpPool& operator=(const BumpPool&) = delete;

  // Acquire an object.  If the free‑list is non‑empty, pop it lock‑free.
  // Otherwise grab a fresh node under the mutex.
  template <typename... Args>
  T* acquire(Args&&... args) {
    Node* node = popNode_();
    if (!node) {
      // free‑list empty → bump‑alloc a new one
      void* mem;
      {
        ftl::LockGuard<ftl::Mutex> lock(allocatorMutex_);
        mem = allocator_.allocate(sizeof(Node));
      }
      node = new (mem) Node{};
    }
    // placement‑new the T inside our node
    T* obj = ::new (&node->storage) T(std::forward<Args>(args)...);
    return obj;
  }

  // Release an object back into the pool.  Destroys the T and
  // pushes the node back lock‑free.
  void release(T* obj) noexcept {
    if (!obj) return;
    // call the destructor
    obj->~T();

    // recover our Node* (storage is first member, so pointer‑math is safe)
    Node* node = reinterpret_cast<Node*>(
      reinterpret_cast<unsigned char*>(obj) - offsetof(Node, storage)
    );
    pushNode_(node);
  }

 private:
  // Single‑linked list node; storage for T + next pointer
  struct Node {
    Node* next{nullptr};
    alignas(T) unsigned char storage[sizeof(T)];
  };

  // Pop head_ lock‑free, return nullptr if empty
  Node* popNode_() noexcept {
    Node* head = head_.load(std::memory_order_acquire);
    while (head) {
      Node* nxt = head->next;
      if (head_.compare_exchange_weak(
            head, nxt,
            std::memory_order_acquire,
            std::memory_order_relaxed)) {
        head->next = nullptr;
        return head;
      }
    }
    return nullptr;
  }

  // Push node onto head_ lock‑free
  void pushNode_(Node* node) noexcept {
    Node* head = head_.load(std::memory_order_relaxed);
    do {
      node->next = head;
    } while (!head_.compare_exchange_weak(
               head, node,
               std::memory_order_release,
               std::memory_order_relaxed));
  }

  ftl::BumpAllocator&        allocator_;
  ftl::Mutex            allocatorMutex_;  // only used when bump‑allocating
  std::atomic<Node*>    head_{nullptr};    // free‑list head
};
