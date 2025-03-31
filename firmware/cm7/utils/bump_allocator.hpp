#include <stddef.h>

class BumpAllocator {
public:
    BumpAllocator(uint8_t* base, size_t size)
        : ptr(base), end(base + size) {}

    void* alloc(size_t size, size_t alignment = alignof(max_align_t)) {
        uintptr_t current = reinterpret_cast<uintptr_t>(ptr);
        uintptr_t aligned = (current + alignment - 1) & ~(alignment - 1);
        if (aligned + size <= reinterpret_cast<uintptr_t>(end)) {
            ptr = reinterpret_cast<uint8_t*>(aligned + size);
            return reinterpret_cast<void*>(aligned);
        }
        return nullptr; // Out of memory
    }

    void reset() {
        ptr = base;
    }

private:
    uint8_t* ptr;
    uint8_t* end;
    uint8_t* base = ptr;
};
