#include <cstddef>  // for std::size_t

// Error handler for forbidden operations
[[noreturn]] static void dynamic_alloc_forbidden() {
    // In debug builds, this will halt the debugger
    __asm__("bkpt #0");
    // Infinite loop to ensure we never return
    while(1) { }
}

// Custom implementation of operator delete (sized deallocation)
void operator delete(void* ptr, std::size_t size) noexcept {
  (void)ptr;
  (void)size;
  dynamic_alloc_forbidden();
}

// Custom implementation of operator delete[] (sized deallocation)
void operator delete[](void* ptr, std::size_t size) noexcept {
  (void)ptr;
  (void)size;
  dynamic_alloc_forbidden();
}

// Custom implementation of operator delete
void operator delete(void* ptr) noexcept {
  (void)ptr;
  dynamic_alloc_forbidden();
}

// Custom implementation of operator delete[]
void operator delete[](void* ptr) noexcept {
  (void)ptr;
  dynamic_alloc_forbidden();
}

void* operator new(std::size_t size) {
  (void)size;
  dynamic_alloc_forbidden();
}

void* operator new[](std::size_t size) {
  (void)size;
  dynamic_alloc_forbidden();
}
