#include <stddef.h>

class BumpAllocator {
public:
    BumpAllocator() = default;

    void initialize(uint8_t* base, size_t size)
    {
        ptr_ = base;
        end_ = base + size;
        base_ = base;
    }

    void* alloc(size_t size, size_t alignment = alignof(max_align_t)) {
        uintptr_t current = reinterpret_cast<uintptr_t>(ptr_);
        uintptr_t aligned = (current + alignment - 1) & ~(alignment - 1);
        if (aligned + size <= reinterpret_cast<uintptr_t>(end_)) {
            ptr_ = reinterpret_cast<uint8_t*>(aligned + size);
            return reinterpret_cast<void*>(aligned);
        }
        return nullptr; // Out of memory
    }

    void reset() {
        ptr_ = base_;
    }

private:
    uint8_t* ptr_ = nullptr;
    uint8_t* end_ = nullptr;
    uint8_t* base_ = nullptr;
};
