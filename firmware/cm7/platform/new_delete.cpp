#include <cstddef>  // for std::size_t
#include <cassert>

// Custom implementation of operator delete
void operator delete(void* ptr, unsigned int size) {
  (void)ptr;
  (void)size;
  assert(false && "Dynamic memory allocation not supported!");
}

// Custom implementation of operator delete[]
void operator delete[](void* ptr, unsigned int size) {
  (void)ptr;
  (void)size;
  assert(false && "Dynamic memory allocation not supported!");
}

// Custom implementation of operator delete
void operator delete(void* ptr) {
  (void)ptr;
  assert(false && "Dynamic memory allocation not supported!");
}

// Custom implementation of operator delete[]
void operator delete[](void* ptr) {
  (void)ptr;
  assert(false && "Dynamic memory allocation not supported!");
}

void* operator new(std::size_t size) noexcept {
  (void)size;
  assert(false && "Dynamic memory allocation not supported!");
  return nullptr;
}

void* operator new[](std::size_t size) noexcept {
  (void)size;
  assert(false && "Dynamic memory allocation not supported!");
  return nullptr;
}
