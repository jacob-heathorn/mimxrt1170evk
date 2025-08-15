#include <cstdio>
#include <cstddef>
#include "tx_api.h"
#include "ftl/tx_thread.hpp"
#include "ftl/allocator/bump_pool_obj_strategy.hpp"
#include "ftl/allocator/obj_allocator.hpp"
#include "utils/dtcm_allocator.hpp"
#include "etl/delegate.h"

// Test structures of different sizes
struct SmallType {
    uint32_t data;
};

struct MediumType {
    uint32_t data[16];  // 64 bytes
};

struct LargeType {
    uint32_t data[256];  // 1KB
};

struct ComplexType {
    uint64_t id;
    uint32_t status;
    uint8_t buffer[128];
    void* next;
};

#define STACK_SIZE 4096
uint8_t footprint_test_stack[STACK_SIZE];

// Template function to test footprint of a specific type
template<typename T>
void test_allocation_footprint(const char* type_name, size_t initial_pool_size) {
    printf("\n=== Testing %s ===\n", type_name);
    printf("  sizeof(T): %u bytes\n", sizeof(T));
    printf("  Initial pool size: %u objects\n", initial_pool_size);
    
    // Get stack pointer before allocation
    void* stack_before = __builtin_frame_address(0);
    
    // Create allocation strategy on stack
    auto& dtcm = DtcmAllocator::instance();
    ftl::allocator::BumpPoolObjStrategy<T> strategy(dtcm);
    ftl::allocator::ObjAllocator<T> allocator(strategy);
    
    // Get stack pointer after allocation
    void* stack_after = __builtin_frame_address(0);
    
    // Calculate stack usage (approximate)
    ptrdiff_t stack_used = (char*)stack_before - (char*)stack_after;
    
    printf("  sizeof(BumpPoolObjStrategy<%s>): %u bytes\n", 
           type_name, sizeof(ftl::allocator::BumpPoolObjStrategy<T>));
    printf("  Stack consumed (approximate): %d bytes\n", (int)stack_used);
    // Node overhead is approximately pointer size for the 'next' field
    printf("  Estimated overhead per object: ~%u bytes (next pointer)\n", sizeof(void*));
    
    // Test allocations
    printf("  Testing allocations...\n");
    
    // Allocate and deallocate some objects using the allocator
    T* obj1 = allocator.allocate();
    T* obj2 = allocator.allocate();
    T* obj3 = allocator.allocate();
    
    if (obj1 && obj2 && obj3) {
        printf("    - Successfully allocated 3 objects\n");
    } else {
        printf("    - Failed to allocate some objects\n");
    }
    
    // Test deallocation
    allocator.deallocate(obj2);
    printf("    - Deallocated 1 object\n");
    
    // Allocate again to test reuse
    T* obj4 = allocator.allocate();
    if (obj4) {
        printf("    - Successfully allocated another object (pool reuse)\n");
    }
    
    // Clean up
    allocator.deallocate(obj1);
    allocator.deallocate(obj3);
    allocator.deallocate(obj4);
}

void footprint_test_function() {
    printf("=== BumpPoolObjStrategy Memory Footprint Analysis ===\n\n");
    
    ftl::allocator::BumpPoolObjStrategy<uint64_t> strategy2(DtcmAllocator::instance());
    ftl::allocator::ObjAllocator<uint64_t> allocator2(strategy2);
    (void)allocator2;

    ftl::allocator::BumpPoolObjStrategy<int64_t> strategy3(DtcmAllocator::instance());
    ftl::allocator::ObjAllocator<int64_t> allocator3(strategy3);
    (void)allocator3;

    // Print sizes of fundamental components
    printf("Base component sizes:\n");
    printf("  sizeof(void*): %u bytes\n", sizeof(void*));
    printf("  sizeof(size_t): %u bytes\n", sizeof(size_t));
    printf("  sizeof(ftl::Mutex): %u bytes\n", sizeof(ftl::Mutex));
    printf("  sizeof(ftl::BumpAllocator&): %u bytes\n", sizeof(ftl::BumpAllocator&));
    
    // Test different types with different pool sizes
    test_allocation_footprint<SmallType>("SmallType (4 bytes)", 10);
    test_allocation_footprint<MediumType>("MediumType (64 bytes)", 10);
    test_allocation_footprint<LargeType>("LargeType (1KB)", 5);
    test_allocation_footprint<ComplexType>("ComplexType (mixed)", 8);
    
    // Test with different pool sizes for the same type
    printf("\n=== Pool Size Impact (using MediumType) ===\n");
    test_allocation_footprint<MediumType>("MediumType - 1 object", 1);
    test_allocation_footprint<MediumType>("MediumType - 10 objects", 10);
    test_allocation_footprint<MediumType>("MediumType - 100 objects", 100);
    
    printf("\n=== Flash Memory Impact ===\n");
    printf("Note: The actual flash increase depends on:\n");
    printf("  1. Template instantiation (one per unique type T)\n");
    printf("  2. Inline functions and optimizations\n");
    printf("  3. Compiler settings and link-time optimization\n");
    printf("\nTo measure exact flash usage, compare binary sizes with/without\n");
    printf("each BumpPoolObjStrategy<T> instantiation.\n");
    
    printf("\n=== Test completed ===\n");
}

extern "C" void tx_application_define(void* first_unused_memory) {
    (void)first_unused_memory;
    
    // Create thread for footprint test
    static ftl::TxThread footprint_thread(
        "Footprint Test Thread",
        etl::delegate<void(void)>::create<footprint_test_function>(),
        footprint_test_stack,
        STACK_SIZE,
        1  // Priority
    );
}

int main() {
    tx_kernel_enter();
    return 0;
}