#include <cstdio>
#include <cstring>
#include <cassert>
#include "fsl_enet.h"
#include "../../firmware/cm7/rtos/netxduo/tx_buffer_descriptor.h"

// Test helper macros
#define TEST_ASSERT(condition) \
    do { \
        if (!(condition)) { \
            printf("FAIL: %s:%d - %s\n", __FILE__, __LINE__, #condition); \
            return false; \
        } \
    } while (0)

#define RUN_TEST(test_func) \
    do { \
        printf("Running %s... ", #test_func); \
        if (test_func()) { \
            printf("PASS\n"); \
            passed++; \
        } else { \
            printf("FAIL\n"); \
            failed++; \
        } \
        total++; \
    } while (0)

// Test functions
bool test_constructor_initialization() {
    TxBufferDescriptor txbd;

    // Check that descriptor is initialized with CRC enabled
    TEST_ASSERT(txbd.isTransmitCRC() == true);
    TEST_ASSERT(txbd.isReady() == false);
    TEST_ASSERT(txbd.isWrap() == false);
    TEST_ASSERT(txbd.isLast() == false);
    TEST_ASSERT(txbd.getLength() == 0);
    TEST_ASSERT(txbd.getBuffer() == 0);

    return true;
}

bool test_control_bits() {
    TxBufferDescriptor txbd;

    // Test Ready bit
    txbd.setReady(true);
    TEST_ASSERT(txbd.isReady() == true);
    txbd.setReady(false);
    TEST_ASSERT(txbd.isReady() == false);

    // Test Wrap bit
    txbd.setWrap(true);
    TEST_ASSERT(txbd.isWrap() == true);
    txbd.setWrap(false);
    TEST_ASSERT(txbd.isWrap() == false);

    // Test Last bit
    txbd.setLast(true);
    TEST_ASSERT(txbd.isLast() == true);
    txbd.setLast(false);
    TEST_ASSERT(txbd.isLast() == false);

    // Test Transmit CRC bit
    txbd.setTransmitCRC(false);
    TEST_ASSERT(txbd.isTransmitCRC() == false);
    txbd.setTransmitCRC(true);
    TEST_ASSERT(txbd.isTransmitCRC() == true);

    return true;
}

bool test_software_owner_bits() {
    TxBufferDescriptor txbd;

    // Test Software Owner 1
    txbd.setSoftwareOwner1(true);
    TEST_ASSERT(txbd.isSoftwareOwner1() == true);
    txbd.setSoftwareOwner1(false);
    TEST_ASSERT(txbd.isSoftwareOwner1() == false);

    // Test Software Owner 2
    txbd.setSoftwareOwner2(true);
    TEST_ASSERT(txbd.isSoftwareOwner2() == true);
    txbd.setSoftwareOwner2(false);
    TEST_ASSERT(txbd.isSoftwareOwner2() == false);

    return true;
}

bool test_length_and_buffer() {
    TxBufferDescriptor txbd;

    // Test length
    txbd.setLength(1234);
    TEST_ASSERT(txbd.getLength() == 1234);

    txbd.setLength(65535);
    TEST_ASSERT(txbd.getLength() == 65535);

    // Test buffer address
    txbd.setBuffer(0xDEADBEEF);
    TEST_ASSERT(txbd.getBuffer() == 0xDEADBEEF);

    // Test buffer pointer
    void* testPtr = reinterpret_cast<void*>(0x12345678);
    txbd.setBuffer(testPtr);
    TEST_ASSERT(txbd.getBufferPtr() == testPtr);

    return true;
}

bool test_direct_control_access() {
    TxBufferDescriptor txbd;

    // Test direct control field access
    uint16_t testControl = 0xABCD;
    txbd.setControl(testControl);
    TEST_ASSERT(txbd.getControl() == testControl);

    // Verify individual bits still work
    txbd.setControl(ENET_BUFFDESCRIPTOR_TX_READY_MASK | ENET_BUFFDESCRIPTOR_TX_WRAP_MASK);
    TEST_ASSERT(txbd.isReady() == true);
    TEST_ASSERT(txbd.isWrap() == true);
    TEST_ASSERT(txbd.isLast() == false);

    return true;
}

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
bool test_extended_control() {
    TxBufferDescriptor txbd;

    // Test interrupt enable
    txbd.setInterrupt(true);
    TEST_ASSERT(txbd.isInterrupt() == true);
    txbd.setInterrupt(false);
    TEST_ASSERT(txbd.isInterrupt() == false);

    // Test timestamp enable
    txbd.setTimestamp(true);
    TEST_ASSERT(txbd.isTimestamp() == true);
    txbd.setTimestamp(false);
    TEST_ASSERT(txbd.isTimestamp() == false);

    // Test IP checksum
    txbd.setIPChecksum(true);
    TEST_ASSERT(txbd.isIPChecksum() == true);
    txbd.setIPChecksum(false);
    TEST_ASSERT(txbd.isIPChecksum() == false);

    // Test protocol checksum
    txbd.setProtocolChecksum(true);
    TEST_ASSERT(txbd.isProtocolChecksum() == true);
    txbd.setProtocolChecksum(false);
    TEST_ASSERT(txbd.isProtocolChecksum() == false);

    return true;
}

bool test_error_flags() {
    TxBufferDescriptor txbd;

    // Test transmit error
    txbd.setTransmitError(true);
    TEST_ASSERT(txbd.hasTransmitError() == true);
    txbd.setTransmitError(false);
    TEST_ASSERT(txbd.hasTransmitError() == false);

    // Test underflow error
    txbd.setUnderflowError(true);
    TEST_ASSERT(txbd.hasUnderflowError() == true);
    txbd.setUnderflowError(false);
    TEST_ASSERT(txbd.hasUnderflowError() == false);

    // Test excess collision error
    txbd.setExcessCollisionError(true);
    TEST_ASSERT(txbd.hasExcessCollisionError() == true);
    txbd.setExcessCollisionError(false);
    TEST_ASSERT(txbd.hasExcessCollisionError() == false);

    // Test frame error
    txbd.setFrameError(true);
    TEST_ASSERT(txbd.hasFrameError() == true);
    txbd.setFrameError(false);
    TEST_ASSERT(txbd.hasFrameError() == false);

    // Test late collision error
    txbd.setLateCollisionError(true);
    TEST_ASSERT(txbd.hasLateCollisionError() == true);
    txbd.setLateCollisionError(false);
    TEST_ASSERT(txbd.hasLateCollisionError() == false);

    // Test overflow error
    txbd.setOverflowError(true);
    TEST_ASSERT(txbd.hasOverflowError() == true);
    txbd.setOverflowError(false);
    TEST_ASSERT(txbd.hasOverflowError() == false);

    // Test timestamp error
    txbd.setTimestampError(true);
    TEST_ASSERT(txbd.hasTimestampError() == true);
    txbd.setTimestampError(false);
    TEST_ASSERT(txbd.hasTimestampError() == false);

    return true;
}

bool test_extended_control_direct() {
    TxBufferDescriptor txbd;

    // Test direct extended control 0 access
    uint16_t testExtend0 = 0x1234;
    txbd.setControlExtend0(testExtend0);
    TEST_ASSERT(txbd.getControlExtend0() == testExtend0);

    // Test direct extended control 1 access
    uint16_t testExtend1 = 0x5678;
    txbd.setControlExtend1(testExtend1);
    TEST_ASSERT(txbd.getControlExtend1() == testExtend1);

    return true;
}
#endif

bool test_reset() {
    TxBufferDescriptor txbd;

    // Set various fields
    txbd.setReady(true);
    txbd.setWrap(true);
    txbd.setLast(true);
    txbd.setLength(0x1234);
    txbd.setBuffer(0xABCDEF00);

    // Reset
    txbd.reset();

    // Check reset state
    TEST_ASSERT(txbd.isReady() == false);
    TEST_ASSERT(txbd.isWrap() == false);
    TEST_ASSERT(txbd.isLast() == false);
    TEST_ASSERT(txbd.isTransmitCRC() == true);  // Should be set after reset
    TEST_ASSERT(txbd.getLength() == 0);
    TEST_ASSERT(txbd.getBuffer() == 0);

    return true;
}

bool test_legacy_compatibility() {
    TxBufferDescriptor txbd;
    enet_tx_bd_struct_t legacy;

    // Initialize legacy struct
    memset(&legacy, 0, sizeof(legacy));
    legacy.length = 1500;
    legacy.control = ENET_BUFFDESCRIPTOR_TX_READY_MASK | ENET_BUFFDESCRIPTOR_TX_LAST_MASK;
    legacy.buffer = 0x20000000;
#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
    legacy.controlExtend0 = 0x1111;
    legacy.controlExtend1 = 0x2222;
#endif

    // Copy from legacy
    txbd.copyFrom(legacy);

    // Verify copy
    TEST_ASSERT(txbd.getLength() == 1500);
    TEST_ASSERT(txbd.isReady() == true);
    TEST_ASSERT(txbd.isLast() == true);
    TEST_ASSERT(txbd.getBuffer() == 0x20000000);
#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
    TEST_ASSERT(txbd.getControlExtend0() == 0x1111);
    TEST_ASSERT(txbd.getControlExtend1() == 0x2222);
#endif

    // Test equivalence
    TEST_ASSERT(txbd.isEquivalentTo(legacy) == true);

    // Copy back to legacy
    enet_tx_bd_struct_t legacy2;
    memset(&legacy2, 0xFF, sizeof(legacy2));  // Fill with different pattern
    txbd.copyTo(legacy2);

    // Verify copy back
    TEST_ASSERT(legacy2.length == legacy.length);
    TEST_ASSERT(legacy2.control == legacy.control);
    TEST_ASSERT(legacy2.buffer == legacy.buffer);
#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
    TEST_ASSERT(legacy2.controlExtend0 == legacy.controlExtend0);
    TEST_ASSERT(legacy2.controlExtend1 == legacy.controlExtend1);
#endif

    return true;
}

bool test_memory_layout() {
    TxBufferDescriptor txbd;
    enet_tx_bd_struct_t legacy;

    // Verify size matches
    TEST_ASSERT(sizeof(txbd) >= sizeof(legacy));

    // Get raw memory pointer
    volatile uint16_t* raw = txbd.getRawMemory();
    TEST_ASSERT(raw != nullptr);

    // Test alignment
    uintptr_t addr = reinterpret_cast<uintptr_t>(&txbd);
    TEST_ASSERT((addr & 0xF) == 0);  // Should be 16-byte aligned

    // Set values through class interface
    txbd.setLength(0x1234);
    txbd.setControl(0x5678);
    txbd.setBuffer(0xABCDEF00);

    // Verify through raw memory access
    TEST_ASSERT(raw[0] == 0x1234);  // length
    TEST_ASSERT(raw[1] == 0x5678);  // control
    uint32_t* raw32 = reinterpret_cast<uint32_t*>(&raw[2]);
    TEST_ASSERT(*raw32 == 0xABCDEF00);  // buffer

    return true;
}

bool test_combined_operations() {
    TxBufferDescriptor txbd;

    // Simulate typical usage pattern
    txbd.reset();
    txbd.setLength(1514);
    txbd.setBuffer(reinterpret_cast<void*>(0x20001000));
    txbd.setLast(true);
    txbd.setTransmitCRC(true);

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
    txbd.setInterrupt(true);
#ifdef IMX_CHECKSUM_OFFLOAD
    txbd.setIPChecksum(true);
    txbd.setProtocolChecksum(true);
#endif
#endif

    // Set ready last (typical pattern)
    txbd.setReady(true);

    // Verify state
    TEST_ASSERT(txbd.getLength() == 1514);
    TEST_ASSERT(txbd.getBuffer() == 0x20001000);
    TEST_ASSERT(txbd.isLast() == true);
    TEST_ASSERT(txbd.isTransmitCRC() == true);
    TEST_ASSERT(txbd.isReady() == true);

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
    TEST_ASSERT(txbd.isInterrupt() == true);
#ifdef IMX_CHECKSUM_OFFLOAD
    TEST_ASSERT(txbd.isIPChecksum() == true);
    TEST_ASSERT(txbd.isProtocolChecksum() == true);
#endif
#endif

    // Simulate hardware clearing ready bit after transmission
    txbd.setReady(false);
    TEST_ASSERT(txbd.isReady() == false);

    return true;
}

// Main test runner
int main() {
    printf("\n=== TX Buffer Descriptor Unit Tests ===\n\n");

    int passed = 0;
    int failed = 0;
    int total = 0;

    // Run basic tests
    RUN_TEST(test_constructor_initialization);
    RUN_TEST(test_control_bits);
    RUN_TEST(test_software_owner_bits);
    RUN_TEST(test_length_and_buffer);
    RUN_TEST(test_direct_control_access);

#ifdef ENET_ENHANCEDBUFFERDESCRIPTOR_MODE
    // Run extended mode tests
    RUN_TEST(test_extended_control);
    RUN_TEST(test_error_flags);
    RUN_TEST(test_extended_control_direct);
#endif

    // Run common tests
    RUN_TEST(test_reset);
    RUN_TEST(test_legacy_compatibility);
    RUN_TEST(test_memory_layout);
    RUN_TEST(test_combined_operations);

    // Print summary
    printf("\n=== Test Summary ===\n");
    printf("Total:  %d\n", total);
    printf("Passed: %d\n", passed);
    printf("Failed: %d\n", failed);

    if (failed == 0) {
        printf("\n✓ All tests passed!\n");
    } else {
        printf("\n✗ Some tests failed.\n");
    }

    return failed;
}