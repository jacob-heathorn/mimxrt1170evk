#include <cstddef>  // for std::size_t
#include <cstdlib>  // for malloc and free

extern "C" {
  void Default_Handler();
}

// Custom implementation of operator delete
void operator delete(void* ptr, unsigned int size) {
  // Your code to free the memory pointed to by 'ptr' with size 'size'
  // Implement the necessary logic to release the memory in your embedded system.
  (void)ptr;
  (void)size;
}

// Custom implementation of operator delete[]
void operator delete[](void* ptr, unsigned int size) {
  // Your code to free the memory pointed to by 'ptr' with size 'size'
  // Implement the necessary logic to release the memory in your embedded system.
  (void)ptr;
  (void)size;
}

// Custom implementation of operator delete
void operator delete(void* ptr) {
  // Your code to free the memory pointed to by 'ptr'
  // Implement the necessary logic to release the memory in your embedded system.
  (void)ptr;
}

// Custom implementation of operator delete[]
void operator delete[](void* ptr) {
  // Your code to free the memory pointed to by 'ptr'
  // Implement the necessary logic to release the memory in your embedded system.
  (void)ptr;
}

void* operator new(std::size_t size) {
  (void)size;
  // return malloc(size);
  // TODO
  auto x = nullptr;
  return static_cast<void*>(x);
}

void* operator new[](std::size_t size) {
  (void)size;
  // TODO
  // void* p = malloc(size);
  // if (!p) {
  //   Default_Handler();
  // }
  // return p;
  auto x = nullptr;
  return static_cast<void*>(x);
}
