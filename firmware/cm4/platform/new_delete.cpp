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

// Placement new operators (these are safe - they don't allocate)
void* operator new(std::size_t, void* ptr) noexcept {
  return ptr;
}

void* operator new[](std::size_t, void* ptr) noexcept {
  return ptr;
}

// Placement delete operators (required to match placement new)
void operator delete(void*, void*) noexcept {
  // Nothing to do - placement delete doesn't free memory
}

void operator delete[](void*, void*) noexcept {
  // Nothing to do - placement delete doesn't free memory
}