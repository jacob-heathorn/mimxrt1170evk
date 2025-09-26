#include "gtest/gtest.h"
#include "../../firmware/cm7/rtos/netxduo/tx_buffer_descriptor.h"
#include "../../firmware/cm7/utils/ocram2_allocator.hpp"
#include <cstring>
#include <new>

// Test fixture for TxBufferDescriptor tests
class TxBufferDescriptorTest : public ::testing::Test {
protected:
    TxBufferDescriptor* txbd_ptr = nullptr;

    void SetUp() override {
        // Allocate TxBufferDescriptor from OCRAM2 with 16-byte alignment
        void* mem = Ocram2Allocator::instance().allocate(sizeof(TxBufferDescriptor), 16);
        ASSERT_NE(mem, nullptr);

        // Placement new to construct TxBufferDescriptor
        txbd_ptr = new (mem) TxBufferDescriptor();
    }

    void TearDown() override {
        // Manually call destructor (placement new requires manual destructor call)
        if (txbd_ptr) {
            txbd_ptr->~TxBufferDescriptor();
            // Note: We don't deallocate from bump allocator
        }
    }

    // Helper to get reference
    TxBufferDescriptor& txbd() { return *txbd_ptr; }
};

TEST_F(TxBufferDescriptorTest, ConstructorInitialization) {
    // Check that descriptor is initialized with CRC enabled
    EXPECT_TRUE(txbd().isTransmitCRC());
    EXPECT_FALSE(txbd().isReady());
    EXPECT_FALSE(txbd().isWrap());
    EXPECT_FALSE(txbd().isLast());
    EXPECT_EQ(txbd().getLength(), 0u);
    EXPECT_EQ(txbd().getBuffer(), 0u);
}

TEST_F(TxBufferDescriptorTest, ReadyBit) {
    txbd().setReady(true);
    EXPECT_TRUE(txbd().isReady());

    txbd().setReady(false);
    EXPECT_FALSE(txbd().isReady());
}

TEST_F(TxBufferDescriptorTest, WrapBit) {
    txbd().setWrap(true);
    EXPECT_TRUE(txbd().isWrap());

    txbd().setWrap(false);
    EXPECT_FALSE(txbd().isWrap());
}

TEST_F(TxBufferDescriptorTest, LastBit) {
    txbd().setLast(true);
    EXPECT_TRUE(txbd().isLast());

    txbd().setLast(false);
    EXPECT_FALSE(txbd().isLast());
}

TEST_F(TxBufferDescriptorTest, TransmitCRCBit) {
    txbd().setTransmitCRC(false);
    EXPECT_FALSE(txbd().isTransmitCRC());

    txbd().setTransmitCRC(true);
    EXPECT_TRUE(txbd().isTransmitCRC());
}

TEST_F(TxBufferDescriptorTest, SoftwareOwnerBits) {
    // Test Software Owner 1
    txbd().setSoftwareOwner1(true);
    EXPECT_TRUE(txbd().isSoftwareOwner1());

    txbd().setSoftwareOwner1(false);
    EXPECT_FALSE(txbd().isSoftwareOwner1());

    // Test Software Owner 2
    txbd().setSoftwareOwner2(true);
    EXPECT_TRUE(txbd().isSoftwareOwner2());

    txbd().setSoftwareOwner2(false);
    EXPECT_FALSE(txbd().isSoftwareOwner2());
}

TEST_F(TxBufferDescriptorTest, Length) {
    txbd().setLength(1234);
    EXPECT_EQ(txbd().getLength(), 1234u);

    txbd().setLength(65535);
    EXPECT_EQ(txbd().getLength(), 65535u);

    txbd().setLength(0);
    EXPECT_EQ(txbd().getLength(), 0u);
}

TEST_F(TxBufferDescriptorTest, BufferAddress) {
    txbd().setBuffer(0xDEADBEEF);
    EXPECT_EQ(txbd().getBuffer(), 0xDEADBEEFu);

    // Test buffer pointer
    void* testPtr = reinterpret_cast<void*>(0x12345678);
    txbd().setBuffer(testPtr);
    EXPECT_EQ(txbd().getBufferPtr(), testPtr);

    txbd().setBuffer(nullptr);
    EXPECT_EQ(txbd().getBufferPtr(), nullptr);
}

TEST_F(TxBufferDescriptorTest, DirectControlAccess) {
    uint16_t testControl = 0xABCD;
    txbd().setControl(testControl);
    EXPECT_EQ(txbd().getControl(), testControl);

    // Verify individual bits still work
    txbd().setControl(TX_BD_READY_MASK | TX_BD_WRAP_MASK);
    EXPECT_TRUE(txbd().isReady());
    EXPECT_TRUE(txbd().isWrap());
    EXPECT_FALSE(txbd().isLast());
}

TEST_F(TxBufferDescriptorTest, Reset) {
    // Set various fields
    txbd().setReady(true);
    txbd().setWrap(true);
    txbd().setLast(true);
    txbd().setLength(0x1234);
    txbd().setBuffer(0xABCDEF00);

    // Reset
    txbd().reset();

    // Check reset state
    EXPECT_FALSE(txbd().isReady());
    EXPECT_FALSE(txbd().isWrap());
    EXPECT_FALSE(txbd().isLast());
    EXPECT_TRUE(txbd().isTransmitCRC());  // Should be set after reset
    EXPECT_EQ(txbd().getLength(), 0u);
    EXPECT_EQ(txbd().getBuffer(), 0u);
}

TEST_F(TxBufferDescriptorTest, MemoryLayout) {
    // Get raw memory pointer
    volatile void* raw = txbd().getRawMemory();
    ASSERT_NE(raw, nullptr);

    // Test alignment - should be 16-byte aligned from OCRAM2 allocation
    uintptr_t addr = reinterpret_cast<uintptr_t>(txbd_ptr);
    EXPECT_EQ(addr & 0xF, 0u);  // Should be 16-byte aligned

    // Set values through class interface
    txbd().setLength(0x1234);
    txbd().setControl(0x5678);
    txbd().setBuffer(0xABCDEF00);

    // Verify through raw memory access
    volatile uint16_t* raw16 = static_cast<volatile uint16_t*>(raw);
    EXPECT_EQ(raw16[0], 0x1234u);  // length
    EXPECT_EQ(raw16[1], 0x5678u);  // control

    volatile uint32_t* raw32 = reinterpret_cast<volatile uint32_t*>(&raw16[2]);
    EXPECT_EQ(*raw32, 0xABCDEF00u);  // buffer
}

TEST_F(TxBufferDescriptorTest, ComparisonOperators) {
    // Allocate second descriptor from OCRAM2
    void* mem2 = Ocram2Allocator::instance().allocate(sizeof(TxBufferDescriptor), 16);
    ASSERT_NE(mem2, nullptr);
    TxBufferDescriptor* txbd2 = new (mem2) TxBufferDescriptor();

    // Initially should be equal (both reset with CRC enabled)
    EXPECT_EQ(txbd(), *txbd2);
    EXPECT_FALSE(txbd() != *txbd2);

    // Change one field
    txbd2->setLength(100);
    EXPECT_NE(txbd(), *txbd2);
    EXPECT_TRUE(txbd() != *txbd2);

    // Make them equal again
    txbd().setLength(100);
    EXPECT_EQ(txbd(), *txbd2);

    // Change control
    txbd2->setReady(true);
    EXPECT_NE(txbd(), *txbd2);

    // Change buffer
    txbd().setReady(true);
    EXPECT_EQ(txbd(), *txbd2);
    txbd2->setBuffer(0x1000);
    EXPECT_NE(txbd(), *txbd2);

    // Clean up
    txbd2->~TxBufferDescriptor();
}

TEST_F(TxBufferDescriptorTest, CombinedOperations) {
    // Simulate typical usage pattern
    txbd().reset();
    txbd().setLength(1514);
    txbd().setBuffer(reinterpret_cast<void*>(0x20001000));
    txbd().setLast(true);
    txbd().setTransmitCRC(true);

    // Set ready last (typical pattern)
    txbd().setReady(true);

    // Verify state
    EXPECT_EQ(txbd().getLength(), 1514u);
    EXPECT_EQ(txbd().getBuffer(), 0x20001000u);
    EXPECT_TRUE(txbd().isLast());
    EXPECT_TRUE(txbd().isTransmitCRC());
    EXPECT_TRUE(txbd().isReady());

    // Simulate hardware clearing ready bit after transmission
    txbd().setReady(false);
    EXPECT_FALSE(txbd().isReady());
}

TEST(TxBufferDescriptorArrayTest, MultipleDescriptors) {
    // Test array of descriptors (as would be used in driver)
    const int count = 4;
    // Allocate array from OCRAM2
    void* mem = Ocram2Allocator::instance().allocate(sizeof(TxBufferDescriptor) * count, 16);
    ASSERT_NE(mem, nullptr);
    TxBufferDescriptor* descriptors = static_cast<TxBufferDescriptor*>(mem);

    // Construct in place
    for (int i = 0; i < count; i++) {
        new (&descriptors[i]) TxBufferDescriptor();
    }

    // Initialize all descriptors
    for (int i = 0; i < count; i++) {
        descriptors[i].reset();
        descriptors[i].setLength(1024 + i);
        descriptors[i].setBuffer(0x20000000 + (i * 0x1000));
    }

    // Set wrap on last descriptor
    descriptors[count - 1].setWrap(true);

    // Verify each descriptor
    for (int i = 0; i < count; i++) {
        EXPECT_EQ(descriptors[i].getLength(), static_cast<uint16_t>(1024 + i));
        EXPECT_EQ(descriptors[i].getBuffer(), static_cast<uint32_t>(0x20000000 + (i * 0x1000)));
        EXPECT_EQ(descriptors[i].isWrap(), (i == count - 1));
    }

    // Clean up
    for (int i = 0; i < count; i++) {
        descriptors[i].~TxBufferDescriptor();
    }
}

TEST(TxBufferDescriptorArrayTest, ChainedPackets) {
    // Simulate chained packet descriptors
    const int chainSize = 3;
    void* mem = Ocram2Allocator::instance().allocate(sizeof(TxBufferDescriptor) * chainSize, 16);
    ASSERT_NE(mem, nullptr);
    TxBufferDescriptor* chain = static_cast<TxBufferDescriptor*>(mem);

    // Construct in place
    for (int i = 0; i < chainSize; i++) {
        new (&chain[i]) TxBufferDescriptor();
    }

    // First descriptor
    chain[0].setLength(1500);
    chain[0].setBuffer(reinterpret_cast<void*>(0x20000000));
    chain[0].setLast(false);  // Not last in chain
    chain[0].setReady(true);

    // Middle descriptor
    chain[1].setLength(1500);
    chain[1].setBuffer(reinterpret_cast<void*>(0x20001000));
    chain[1].setLast(false);  // Not last in chain
    chain[1].setReady(true);

    // Last descriptor
    chain[2].setLength(500);
    chain[2].setBuffer(reinterpret_cast<void*>(0x20002000));
    chain[2].setLast(true);   // Last in chain
    chain[2].setReady(true);

    // Verify chain setup
    EXPECT_FALSE(chain[0].isLast());
    EXPECT_FALSE(chain[1].isLast());
    EXPECT_TRUE(chain[2].isLast());

    // All should be ready
    for (int i = 0; i < 3; i++) {
        EXPECT_TRUE(chain[i].isReady());
    }

    // Clean up
    for (int i = 0; i < chainSize; i++) {
        chain[i].~TxBufferDescriptor();
    }
}