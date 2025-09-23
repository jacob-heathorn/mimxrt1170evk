#pragma once

#include <stdint.h>
#include <stddef.h>
#include "registers/codegen/enet_1g.hpp"

class GigabitEthernetDriver {
public:
    static constexpr uint32_t kMaxFrameSize = 1518;
    static constexpr uint32_t kPhyAddr = 1;

    GigabitEthernetDriver();
    ~GigabitEthernetDriver();

    GigabitEthernetDriver(const GigabitEthernetDriver&) = delete;
    GigabitEthernetDriver& operator=(const GigabitEthernetDriver&) = delete;
    GigabitEthernetDriver(GigabitEthernetDriver&&) = delete;
    GigabitEthernetDriver& operator=(GigabitEthernetDriver&&) = delete;

    bool Initialize();
    bool SendPacket(const uint8_t* buffer, size_t length);

    struct BufferDescriptor {
        uint16_t control;
        uint16_t length;
        uint32_t buffer;
        uint32_t extend1;
        uint32_t extend2;
        uint32_t timestamp;
        uint16_t reserved0;
        uint16_t reserved1;
        uint16_t reserved2;
        uint16_t reserved3;
    } __attribute__((aligned(64)));

private:

    static constexpr uint32_t kBdTxReady = 0x8000;
    static constexpr uint32_t kBdTxLast = 0x0800;
    static constexpr uint32_t kBdRxEmpty = 0x8000;
    static constexpr uint32_t kBdRxWrap = 0x2000;
    static constexpr uint32_t kBdTxWrap = 0x2000;

    void InitClock();
    void InitPins();
    bool InitPhy();
    bool InitMac();

    void MdioWrite(uint8_t phyAddr, uint8_t regAddr, uint16_t data);
    uint16_t MdioRead(uint8_t phyAddr, uint8_t regAddr);
    void ResetPhy();

    bool WaitForMdio();

    BufferDescriptor* tx_bd_;
    BufferDescriptor* rx_bd_;
    uint8_t* tx_buffer_;
    uint8_t* rx_buffer_;
};