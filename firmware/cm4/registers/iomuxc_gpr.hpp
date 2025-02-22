#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

#include "register32.hpp"

// // IOMUXC GPR
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nIOMUXC_GPR {



// GPR0 General Purpose Register

union GPR0 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t SAI1_MCLK1_SEL : 3;
        
        uint32_t SAI1_MCLK2_SEL : 3;
        
        uint32_t SAI1_MCLK3_SEL : 2;
        
        uint32_t SAI1_MCLK_DIR : 1;
        
        uint32_t _reserved_4 : 19;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR0() = delete;

    static inline volatile GPR0 &Instance() {
        return *reinterpret_cast<volatile GPR0*>(0x400E4000);
    }

    inline void Reset() volatile { this->value = 0x00000018; }
};



// GPR1 General Purpose Register

union GPR1 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t SAI2_MCLK3_SEL : 2;
        
        uint32_t _reserved_1 : 6;
        
        uint32_t SAI2_MCLK_DIR : 1;
        
        uint32_t _reserved_2 : 19;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR1() = delete;

    static inline volatile GPR1 &Instance() {
        return *reinterpret_cast<volatile GPR1*>(0x400E4004);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR2 General Purpose Register

union GPR2 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t SAI3_MCLK3_SEL : 2;
        
        uint32_t _reserved_1 : 6;
        
        uint32_t SAI3_MCLK_DIR : 1;
        
        uint32_t SAI4_MCLK_DIR : 1;
        
        uint32_t _reserved_3 : 18;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR2() = delete;

    static inline volatile GPR2 &Instance() {
        return *reinterpret_cast<volatile GPR2*>(0x400E4008);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR3 General Purpose Register

union GPR3 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t MQS_CLK_DIV : 8;
        
        uint32_t MQS_SW_RST : 1;
        
        uint32_t MQS_EN : 1;
        
        uint32_t MQS_OVERSAMPLE : 1;
        
        uint32_t _reserved_4 : 17;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR3() = delete;

    static inline volatile GPR3 &Instance() {
        return *reinterpret_cast<volatile GPR3*>(0x400E400C);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR4 General Purpose Register

union GPR4 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t ENET_TX_CLK_SEL : 1;
        
        uint32_t ENET_REF_CLK_DIR : 1;
        
        uint32_t ENET_TIME_SEL : 1;
        
        uint32_t ENET_EVENT0IN_SEL : 1;
        
        uint32_t _reserved_4 : 24;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR4() = delete;

    static inline volatile GPR4 &Instance() {
        return *reinterpret_cast<volatile GPR4*>(0x400E4010);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR5 General Purpose Register

union GPR5 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t ENET1G_TX_CLK_SEL : 1;
        
        uint32_t ENET1G_REF_CLK_DIR : 1;
        
        uint32_t ENET1G_RGMII_EN : 1;
        
        uint32_t ENET1G_TIME_SEL : 1;
        
        uint32_t ENET1G_EVENT0IN_SEL : 1;
        
        uint32_t _reserved_5 : 23;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR5() = delete;

    static inline volatile GPR5 &Instance() {
        return *reinterpret_cast<volatile GPR5*>(0x400E4014);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR6 General Purpose Register

union GPR6 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t ENET_QOS_REF_CLK_DIR : 1;
        
        uint32_t ENET_QOS_RGMII_EN : 1;
        
        uint32_t ENET_QOS_TIME_SEL : 1;
        
        uint32_t ENET_QOS_INTF_SEL : 3;
        
        uint32_t ENET_QOS_CLKGEN_EN : 1;
        
        uint32_t ENET_QOS_EVENT0IN_SEL : 1;
        
        uint32_t _reserved_6 : 20;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR6() = delete;

    static inline volatile GPR6 &Instance() {
        return *reinterpret_cast<volatile GPR6*>(0x400E4018);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR7 General Purpose Register

union GPR7 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t GINT : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR7() = delete;

    static inline volatile GPR7 &Instance() {
        return *reinterpret_cast<volatile GPR7*>(0x400E401C);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR8 General Purpose Register

union GPR8 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t WDOG1_MASK : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR8() = delete;

    static inline volatile GPR8 &Instance() {
        return *reinterpret_cast<volatile GPR8*>(0x400E4020);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR9 General Purpose Register

union GPR9 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t WDOG2_MASK : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR9() = delete;

    static inline volatile GPR9 &Instance() {
        return *reinterpret_cast<volatile GPR9*>(0x400E4024);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR10 General Purpose Register

union GPR10 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR10() = delete;

    static inline volatile GPR10 &Instance() {
        return *reinterpret_cast<volatile GPR10*>(0x400E4028);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR11 General Purpose Register

union GPR11 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR11() = delete;

    static inline volatile GPR11 &Instance() {
        return *reinterpret_cast<volatile GPR11*>(0x400E402C);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR12 General Purpose Register

union GPR12 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t QTIMER1_TMR_CNTS_FREEZE : 1;
        
        uint32_t _reserved_1 : 7;
        
        uint32_t QTIMER1_TRM0_INPUT_SEL : 1;
        
        uint32_t QTIMER1_TRM1_INPUT_SEL : 1;
        
        uint32_t QTIMER1_TRM2_INPUT_SEL : 1;
        
        uint32_t QTIMER1_TRM3_INPUT_SEL : 1;
        
        uint32_t _reserved_5 : 16;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR12() = delete;

    static inline volatile GPR12 &Instance() {
        return *reinterpret_cast<volatile GPR12*>(0x400E4030);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR13 General Purpose Register

union GPR13 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t QTIMER2_TMR_CNTS_FREEZE : 1;
        
        uint32_t _reserved_1 : 7;
        
        uint32_t QTIMER2_TRM0_INPUT_SEL : 1;
        
        uint32_t QTIMER2_TRM1_INPUT_SEL : 1;
        
        uint32_t QTIMER2_TRM2_INPUT_SEL : 1;
        
        uint32_t QTIMER2_TRM3_INPUT_SEL : 1;
        
        uint32_t _reserved_5 : 16;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR13() = delete;

    static inline volatile GPR13 &Instance() {
        return *reinterpret_cast<volatile GPR13*>(0x400E4034);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR14 General Purpose Register

union GPR14 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t QTIMER3_TMR_CNTS_FREEZE : 1;
        
        uint32_t _reserved_1 : 7;
        
        uint32_t QTIMER3_TRM0_INPUT_SEL : 1;
        
        uint32_t QTIMER3_TRM1_INPUT_SEL : 1;
        
        uint32_t QTIMER3_TRM2_INPUT_SEL : 1;
        
        uint32_t QTIMER3_TRM3_INPUT_SEL : 1;
        
        uint32_t _reserved_5 : 16;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR14() = delete;

    static inline volatile GPR14 &Instance() {
        return *reinterpret_cast<volatile GPR14*>(0x400E4038);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR15 General Purpose Register

union GPR15 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t QTIMER4_TMR_CNTS_FREEZE : 1;
        
        uint32_t _reserved_1 : 7;
        
        uint32_t QTIMER4_TRM0_INPUT_SEL : 1;
        
        uint32_t QTIMER4_TRM1_INPUT_SEL : 1;
        
        uint32_t QTIMER4_TRM2_INPUT_SEL : 1;
        
        uint32_t QTIMER4_TRM3_INPUT_SEL : 1;
        
        uint32_t _reserved_5 : 16;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR15() = delete;

    static inline volatile GPR15 &Instance() {
        return *reinterpret_cast<volatile GPR15*>(0x400E403C);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR16 General Purpose Register

union GPR16 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 2;
        
        uint32_t FLEXRAM_BANK_CFG_SEL : 1;
        
        uint32_t CM7_FORCE_HCLK_EN : 1;
        
        uint32_t _reserved_2 : 1;
        
        uint32_t M7_GPC_SLEEP_SEL : 1;
        
        uint32_t _reserved_3 : 22;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR16() = delete;

    static inline volatile GPR16 &Instance() {
        return *reinterpret_cast<volatile GPR16*>(0x400E4040);
    }

    inline void Reset() volatile { this->value = 0x0000AA03; }
};



// GPR17 General Purpose Register

union GPR17 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t FLEXRAM_BANK_CFG_LOW : 16;
        
        uint32_t _reserved_1 : 12;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR17() = delete;

    static inline volatile GPR17 &Instance() {
        return *reinterpret_cast<volatile GPR17*>(0x400E4044);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR18 General Purpose Register

union GPR18 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t FLEXRAM_BANK_CFG_HIGH : 16;
        
        uint32_t _reserved_1 : 12;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR18() = delete;

    static inline volatile GPR18 &Instance() {
        return *reinterpret_cast<volatile GPR18*>(0x400E4048);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR20 General Purpose Register

union GPR20 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t IOMUXC_XBAR_DIR_SEL_4 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_5 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_6 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_7 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_8 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_9 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_10 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_11 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_12 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_13 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_14 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_15 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_16 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_17 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_18 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_19 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_20 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_21 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_22 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_23 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_24 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_25 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_26 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_27 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_28 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_29 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_30 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_31 : 1;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR20() = delete;

    static inline volatile GPR20 &Instance() {
        return *reinterpret_cast<volatile GPR20*>(0x400E4050);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR21 General Purpose Register

union GPR21 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t IOMUXC_XBAR_DIR_SEL_32 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_33 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_34 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_35 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_36 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_37 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_38 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_39 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_40 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_41 : 1;
        
        uint32_t IOMUXC_XBAR_DIR_SEL_42 : 1;
        
        uint32_t _reserved_11 : 17;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR21() = delete;

    static inline volatile GPR21 &Instance() {
        return *reinterpret_cast<volatile GPR21*>(0x400E4054);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR22 General Purpose Register

union GPR22 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t REF_1M_CLK_GPT1 : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR22() = delete;

    static inline volatile GPR22 &Instance() {
        return *reinterpret_cast<volatile GPR22*>(0x400E4058);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR23 General Purpose Register

union GPR23 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t REF_1M_CLK_GPT2 : 1;
        
        uint32_t GPT2_CAPIN1_SEL : 1;
        
        uint32_t GPT2_CAPIN2_SEL : 1;
        
        uint32_t _reserved_3 : 25;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR23() = delete;

    static inline volatile GPR23 &Instance() {
        return *reinterpret_cast<volatile GPR23*>(0x400E405C);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR24 General Purpose Register

union GPR24 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t REF_1M_CLK_GPT3 : 1;
        
        uint32_t GPT3_CAPIN1_SEL : 1;
        
        uint32_t _reserved_2 : 26;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR24() = delete;

    static inline volatile GPR24 &Instance() {
        return *reinterpret_cast<volatile GPR24*>(0x400E4060);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR25 General Purpose Register

union GPR25 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t REF_1M_CLK_GPT4 : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR25() = delete;

    static inline volatile GPR25 &Instance() {
        return *reinterpret_cast<volatile GPR25*>(0x400E4064);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR26 General Purpose Register

union GPR26 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t REF_1M_CLK_GPT5 : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR26() = delete;

    static inline volatile GPR26 &Instance() {
        return *reinterpret_cast<volatile GPR26*>(0x400E4068);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR27 General Purpose Register

union GPR27 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t REF_1M_CLK_GPT6 : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR27() = delete;

    static inline volatile GPR27 &Instance() {
        return *reinterpret_cast<volatile GPR27*>(0x400E406C);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR28 General Purpose Register

union GPR28 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t ARCACHE_USDHC : 1;
        
        uint32_t AWCACHE_USDHC : 1;
        
        uint32_t _reserved_2 : 3;
        
        uint32_t CACHE_ENET1G : 1;
        
        uint32_t _reserved_3 : 1;
        
        uint32_t CACHE_ENET : 1;
        
        uint32_t _reserved_4 : 5;
        
        uint32_t CACHE_USB : 1;
        
        uint32_t _reserved_5 : 14;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR28() = delete;

    static inline volatile GPR28 &Instance() {
        return *reinterpret_cast<volatile GPR28*>(0x400E4070);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR29 General Purpose Register

union GPR29 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t USBPHY1_IPG_CLK_ACTIVE : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR29() = delete;

    static inline volatile GPR29 &Instance() {
        return *reinterpret_cast<volatile GPR29*>(0x400E4074);
    }

    inline void Reset() volatile { this->value = 0x00000001; }
};



// GPR30 General Purpose Register

union GPR30 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t USBPHY2_IPG_CLK_ACTIVE : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR30() = delete;

    static inline volatile GPR30 &Instance() {
        return *reinterpret_cast<volatile GPR30*>(0x400E4078);
    }

    inline void Reset() volatile { this->value = 0x00000001; }
};



// GPR31 General Purpose Register

union GPR31 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t RMW2_WAIT_BVALID_CPL : 1;
        
        uint32_t _reserved_1 : 1;
        
        uint32_t OCRAM_M7_CLK_GATING : 1;
        
        uint32_t _reserved_2 : 25;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR31() = delete;

    static inline volatile GPR31 &Instance() {
        return *reinterpret_cast<volatile GPR31*>(0x400E407C);
    }

    inline void Reset() volatile { this->value = 0x00000012; }
};



// GPR32 General Purpose Register

union GPR32 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t RMW1_WAIT_BVALID_CPL : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR32() = delete;

    static inline volatile GPR32 &Instance() {
        return *reinterpret_cast<volatile GPR32*>(0x400E4080);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR33 General Purpose Register

union GPR33 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t RMW2_WAIT_BVALID_CPL : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR33() = delete;

    static inline volatile GPR33 &Instance() {
        return *reinterpret_cast<volatile GPR33*>(0x400E4084);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR34 General Purpose Register

union GPR34 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t XECC_FLEXSPI1_WAIT_BVALID_CPL : 1;
        
        uint32_t FLEXSPI1_OTFAD_EN : 1;
        
        uint32_t _reserved_2 : 26;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR34() = delete;

    static inline volatile GPR34 &Instance() {
        return *reinterpret_cast<volatile GPR34*>(0x400E4088);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR35 General Purpose Register

union GPR35 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t XECC_FLEXSPI2_WAIT_BVALID_CPL : 1;
        
        uint32_t FLEXSPI2_OTFAD_EN : 1;
        
        uint32_t _reserved_2 : 26;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR35() = delete;

    static inline volatile GPR35 &Instance() {
        return *reinterpret_cast<volatile GPR35*>(0x400E408C);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR36 General Purpose Register

union GPR36 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t XECC_SEMC_WAIT_BVALID_CPL : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR36() = delete;

    static inline volatile GPR36 &Instance() {
        return *reinterpret_cast<volatile GPR36*>(0x400E4090);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR37 General Purpose Register

union GPR37 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t NIDEN : 1;
        
        uint32_t DBG_EN : 1;
        
        uint32_t _reserved_2 : 1;
        
        uint32_t EXC_MON : 1;
        
        uint32_t _reserved_3 : 1;
        
        uint32_t M7_DBG_ACK_MASK : 1;
        
        uint32_t M4_DBG_ACK_MASK : 1;
        
        uint32_t _reserved_5 : 21;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR37() = delete;

    static inline volatile GPR37 &Instance() {
        return *reinterpret_cast<volatile GPR37*>(0x400E4094);
    }

    inline void Reset() volatile { this->value = 0x00000017; }
};



// GPR38 General Purpose Register

union GPR38 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR38() = delete;

    static inline volatile GPR38 &Instance() {
        return *reinterpret_cast<volatile GPR38*>(0x400E4098);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR39 General Purpose Register

union GPR39 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR39() = delete;

    static inline volatile GPR39 &Instance() {
        return *reinterpret_cast<volatile GPR39*>(0x400E409C);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR40 General Purpose Register

union GPR40 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t GPIO_MUX2_GPIO_SEL_LOW : 16;
        
        uint32_t _reserved_1 : 12;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR40() = delete;

    static inline volatile GPR40 &Instance() {
        return *reinterpret_cast<volatile GPR40*>(0x400E40A0);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR41 General Purpose Register

union GPR41 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t GPIO_MUX2_GPIO_SEL_HIGH : 16;
        
        uint32_t _reserved_1 : 12;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR41() = delete;

    static inline volatile GPR41 &Instance() {
        return *reinterpret_cast<volatile GPR41*>(0x400E40A4);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR42 General Purpose Register

union GPR42 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t GPIO_MUX3_GPIO_SEL_LOW : 16;
        
        uint32_t _reserved_1 : 12;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR42() = delete;

    static inline volatile GPR42 &Instance() {
        return *reinterpret_cast<volatile GPR42*>(0x400E40A8);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR43 General Purpose Register

union GPR43 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t GPIO_MUX3_GPIO_SEL_HIGH : 16;
        
        uint32_t _reserved_1 : 12;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR43() = delete;

    static inline volatile GPR43 &Instance() {
        return *reinterpret_cast<volatile GPR43*>(0x400E40AC);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR44 General Purpose Register

union GPR44 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR44() = delete;

    static inline volatile GPR44 &Instance() {
        return *reinterpret_cast<volatile GPR44*>(0x400E40B0);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR45 General Purpose Register

union GPR45 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR45() = delete;

    static inline volatile GPR45 &Instance() {
        return *reinterpret_cast<volatile GPR45*>(0x400E40B4);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR46 General Purpose Register

union GPR46 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR46() = delete;

    static inline volatile GPR46 &Instance() {
        return *reinterpret_cast<volatile GPR46*>(0x400E40B8);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR47 General Purpose Register

union GPR47 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR47() = delete;

    static inline volatile GPR47 &Instance() {
        return *reinterpret_cast<volatile GPR47*>(0x400E40BC);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR48 General Purpose Register

union GPR48 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR48() = delete;

    static inline volatile GPR48 &Instance() {
        return *reinterpret_cast<volatile GPR48*>(0x400E40C0);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR49 General Purpose Register

union GPR49 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR49() = delete;

    static inline volatile GPR49 &Instance() {
        return *reinterpret_cast<volatile GPR49*>(0x400E40C4);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR50 General Purpose Register

union GPR50 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t CAAM_IPS_MGR : 5;
        
        uint32_t _reserved_1 : 23;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR50() = delete;

    static inline volatile GPR50 &Instance() {
        return *reinterpret_cast<volatile GPR50*>(0x400E40C8);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR51 General Purpose Register

union GPR51 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t M7_NMI_CLEAR : 1;
        
        uint32_t _reserved_1 : 27;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR51() = delete;

    static inline volatile GPR51 &Instance() {
        return *reinterpret_cast<volatile GPR51*>(0x400E40CC);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR52 General Purpose Register

union GPR52 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR52() = delete;

    static inline volatile GPR52 &Instance() {
        return *reinterpret_cast<volatile GPR52*>(0x400E40D0);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR53 General Purpose Register

union GPR53 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR53() = delete;

    static inline volatile GPR53 &Instance() {
        return *reinterpret_cast<volatile GPR53*>(0x400E40D4);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR54 General Purpose Register

union GPR54 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR54() = delete;

    static inline volatile GPR54 &Instance() {
        return *reinterpret_cast<volatile GPR54*>(0x400E40D8);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR55 General Purpose Register

union GPR55 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 28;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR55() = delete;

    static inline volatile GPR55 &Instance() {
        return *reinterpret_cast<volatile GPR55*>(0x400E40DC);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR59 General Purpose Register

union GPR59 {
    
    enum class eMIPI_CSI_SOFT_RST_N : uint32_t {
        eASSERT = 0, // Assert reset
        eDEAST = 1, // De-assert reset
    };
    
    enum class eMIPI_CSI_RXCDRP : uint32_t {
        eVAL0 = 0, // 344mV
        eVAL01 = 1, // 325mV (Default)
        eVAL10 = 2, // 307mV
        eVAL11 = 3, // Invalid
    };
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t MIPI_CSI_AUTO_PD_EN : 1;
        
        eMIPI_CSI_SOFT_RST_N MIPI_CSI_SOFT_RST_N : 1;
        
        uint32_t MIPI_CSI_CONT_CLK_MODE : 1;
        
        uint32_t MIPI_CSI_DDRCLK_EN : 1;
        
        uint32_t MIPI_CSI_PD_RX : 1;
        
        uint32_t MIPI_CSI_RX_ENABLE : 1;
        
        uint32_t MIPI_CSI_RX_RCAL : 2;
        
        eMIPI_CSI_RXCDRP MIPI_CSI_RXCDRP : 2;
        
        uint32_t MIPI_CSI_RXLPRP : 2;
        
        uint32_t MIPI_CSI_S_PRG_RXHS_SETTLE : 6;
        
        uint32_t _reserved_10 : 10;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR59() = delete;

    static inline volatile GPR59 &Instance() {
        return *reinterpret_cast<volatile GPR59*>(0x400E40EC);
    }

    inline void Reset() volatile { this->value = 0x00000550; }
};



// GPR62 General Purpose Register

union GPR62 {
    
    enum class eMIPI_DSI_PCLK_SOFT_RESET_N : uint32_t {
        eASSERT = 0, // Assert reset
        eDEASSERT = 1, // De-assert reset
    };
    
    enum class eMIPI_DSI_BYTE_SOFT_RESET_N : uint32_t {
        eASSERT = 0, // Assert reset
        eDEASSERT = 1, // De-assert reset
    };
    
    enum class eMIPI_DSI_DPI_SOFT_RESET_N : uint32_t {
        eASSERT = 0, // Assert reset
        eDEASSERT = 1, // De-assert reset
    };
    
    enum class eMIPI_DSI_ESC_SOFT_RESET_N : uint32_t {
        eASSERT = 0, // Assert reset
        eDEASSERT = 1, // De-assert reset
    };
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t MIPI_DSI_CLK_TM : 3;
        
        uint32_t MIPI_DSI_D0_TM : 3;
        
        uint32_t MIPI_DSI_D1_TM : 3;
        
        uint32_t MIPI_DSI_TX_RCAL : 2;
        
        uint32_t MIPI_DSI_TX_ULPS_ENABLE : 3;
        
        uint32_t _reserved_5 : 2;
        
        eMIPI_DSI_PCLK_SOFT_RESET_N MIPI_DSI_PCLK_SOFT_RESET_N : 1;
        
        eMIPI_DSI_BYTE_SOFT_RESET_N MIPI_DSI_BYTE_SOFT_RESET_N : 1;
        
        eMIPI_DSI_DPI_SOFT_RESET_N MIPI_DSI_DPI_SOFT_RESET_N : 1;
        
        eMIPI_DSI_ESC_SOFT_RESET_N MIPI_DSI_ESC_SOFT_RESET_N : 1;
        
        uint32_t _reserved_9 : 8;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR62() = delete;

    static inline volatile GPR62 &Instance() {
        return *reinterpret_cast<volatile GPR62*>(0x400E40F8);
    }

    inline void Reset() volatile { this->value = 0x000002DB; }
};



// GPR63 General Purpose Register

union GPR63 {
    
    struct {
        uint32_t MIPI_DSI_TX_ULPS_ACTIVE : 3;
        
        uint32_t _reserved_end : 29;
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR63() = delete;

    static inline volatile GPR63 &Instance() {
        return *reinterpret_cast<volatile GPR63*>(0x400E40FC);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR64 General Purpose Register

union GPR64 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t GPIO_DISP1_FREEZE : 1;
        
        uint32_t GPIO_DISP1_COMPTQ : 1;
        
        uint32_t GPIO_DISP1_COMPEN : 1;
        
        uint32_t GPIO_DISP1_FASTFRZ_EN : 1;
        
        uint32_t GPIO_DISP1_RASRCP : 4;
        
        uint32_t GPIO_DISP1_RASRCN : 4;
        
        uint32_t GPIO_DISP1_SELECT_NASRC : 1;
        
        uint32_t GPIO_DISP1_REFGEN_SLEEP : 1;
        
        uint32_t GPIO_DISP1_SUPLYDET_LATCH : 1;
        
        uint32_t _reserved_9 : 5;
        
        uint32_t GPIO_DISP1_COMPOK : 1;
        
        uint32_t GPIO_DISP1_NASRC : 4;
        
        uint32_t _reserved_11 : 3;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR64() = delete;

    static inline volatile GPR64 &Instance() {
        return *reinterpret_cast<volatile GPR64*>(0x400E4100);
    }

    inline void Reset() volatile { this->value = 0x00004000; }
};



// GPR65 General Purpose Register

union GPR65 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t GPIO_EMC1_FREEZE : 1;
        
        uint32_t GPIO_EMC1_COMPTQ : 1;
        
        uint32_t GPIO_EMC1_COMPEN : 1;
        
        uint32_t GPIO_EMC1_FASTFRZ_EN : 1;
        
        uint32_t GPIO_EMC1_RASRCP : 4;
        
        uint32_t GPIO_EMC1_RASRCN : 4;
        
        uint32_t GPIO_EMC1_SELECT_NASRC : 1;
        
        uint32_t GPIO_EMC1_REFGEN_SLEEP : 1;
        
        uint32_t GPIO_EMC1_SUPLYDET_LATCH : 1;
        
        uint32_t _reserved_9 : 5;
        
        uint32_t GPIO_EMC1_COMPOK : 1;
        
        uint32_t GPIO_EMC1_NASRC : 4;
        
        uint32_t _reserved_11 : 3;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR65() = delete;

    static inline volatile GPR65 &Instance() {
        return *reinterpret_cast<volatile GPR65*>(0x400E4104);
    }

    inline void Reset() volatile { this->value = 0x00004000; }
};



// GPR66 General Purpose Register

union GPR66 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t GPIO_EMC2_FREEZE : 1;
        
        uint32_t GPIO_EMC2_COMPTQ : 1;
        
        uint32_t GPIO_EMC2_COMPEN : 1;
        
        uint32_t GPIO_EMC2_FASTFRZ_EN : 1;
        
        uint32_t GPIO_EMC2_RASRCP : 4;
        
        uint32_t GPIO_EMC2_RASRCN : 4;
        
        uint32_t GPIO_EMC2_SELECT_NASRC : 1;
        
        uint32_t GPIO_EMC2_REFGEN_SLEEP : 1;
        
        uint32_t GPIO_EMC2_SUPLYDET_LATCH : 1;
        
        uint32_t _reserved_9 : 5;
        
        uint32_t GPIO_EMC2_COMPOK : 1;
        
        uint32_t GPIO_EMC2_NASRC : 4;
        
        uint32_t _reserved_11 : 3;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR66() = delete;

    static inline volatile GPR66 &Instance() {
        return *reinterpret_cast<volatile GPR66*>(0x400E4108);
    }

    inline void Reset() volatile { this->value = 0x00004000; }
};



// GPR67 General Purpose Register

union GPR67 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t GPIO_SD1_FREEZE : 1;
        
        uint32_t GPIO_SD1_COMPTQ : 1;
        
        uint32_t GPIO_SD1_COMPEN : 1;
        
        uint32_t GPIO_SD1_FASTFRZ_EN : 1;
        
        uint32_t GPIO_SD1_RASRCP : 4;
        
        uint32_t GPIO_SD1_RASRCN : 4;
        
        uint32_t GPIO_SD1_SELECT_NASRC : 1;
        
        uint32_t GPIO_SD1_REFGEN_SLEEP : 1;
        
        uint32_t GPIO_SD1_SUPLYDET_LATCH : 1;
        
        uint32_t _reserved_9 : 5;
        
        uint32_t GPIO_SD1_COMPOK : 1;
        
        uint32_t GPIO_SD1_NASRC : 4;
        
        uint32_t _reserved_11 : 3;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR67() = delete;

    static inline volatile GPR67 &Instance() {
        return *reinterpret_cast<volatile GPR67*>(0x400E410C);
    }

    inline void Reset() volatile { this->value = 0x00004000; }
};



// GPR68 General Purpose Register

union GPR68 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t GPIO_SD2_FREEZE : 1;
        
        uint32_t GPIO_SD2_COMPTQ : 1;
        
        uint32_t GPIO_SD2_COMPEN : 1;
        
        uint32_t GPIO_SD2_FASTFRZ_EN : 1;
        
        uint32_t GPIO_SD2_RASRCP : 4;
        
        uint32_t GPIO_SD2_RASRCN : 4;
        
        uint32_t GPIO_SD2_SELECT_NASRC : 1;
        
        uint32_t GPIO_SD2_REFGEN_SLEEP : 1;
        
        uint32_t GPIO_SD2_SUPLYDET_LATCH : 1;
        
        uint32_t _reserved_9 : 5;
        
        uint32_t GPIO_SD2_COMPOK : 1;
        
        uint32_t GPIO_SD2_NASRC : 4;
        
        uint32_t _reserved_11 : 3;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR68() = delete;

    static inline volatile GPR68 &Instance() {
        return *reinterpret_cast<volatile GPR68*>(0x400E4110);
    }

    inline void Reset() volatile { this->value = 0x00004000; }
};



// GPR69 General Purpose Register

union GPR69 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 1;
        
        uint32_t GPIO_DISP2_HIGH_RANGE : 1;
        
        uint32_t GPIO_DISP2_LOW_RANGE : 1;
        
        uint32_t _reserved_2 : 1;
        
        uint32_t GPIO_AD0_HIGH_RANGE : 1;
        
        uint32_t GPIO_AD0_LOW_RANGE : 1;
        
        uint32_t _reserved_4 : 1;
        
        uint32_t GPIO_AD1_HIGH_RANGE : 1;
        
        uint32_t GPIO_AD1_LOW_RANGE : 1;
        
        uint32_t SUPLYDET_DISP1_SLEEP : 1;
        
        uint32_t SUPLYDET_EMC1_SLEEP : 1;
        
        uint32_t SUPLYDET_EMC2_SLEEP : 1;
        
        uint32_t SUPLYDET_SD1_SLEEP : 1;
        
        uint32_t SUPLYDET_SD2_SLEEP : 1;
        
        uint32_t _reserved_11 : 14;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR69() = delete;

    static inline volatile GPR69 &Instance() {
        return *reinterpret_cast<volatile GPR69*>(0x400E4114);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR70 General Purpose Register

union GPR70 {
    
    enum class eADC1_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eADC2_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t ADC1_IPG_DOZE : 1;
        
        uint32_t ADC1_STOP_REQ : 1;
        
        eADC1_IPG_STOP_MODE ADC1_IPG_STOP_MODE : 1;
        
        uint32_t ADC2_IPG_DOZE : 1;
        
        uint32_t ADC2_STOP_REQ : 1;
        
        eADC2_IPG_STOP_MODE ADC2_IPG_STOP_MODE : 1;
        
        uint32_t CAAM_IPG_DOZE : 1;
        
        uint32_t CAAM_STOP_REQ : 1;
        
        uint32_t CAN1_IPG_DOZE : 1;
        
        uint32_t CAN1_STOP_REQ : 1;
        
        uint32_t CAN2_IPG_DOZE : 1;
        
        uint32_t CAN2_STOP_REQ : 1;
        
        uint32_t CAN3_IPG_DOZE : 1;
        
        uint32_t CAN3_STOP_REQ : 1;
        
        uint32_t _reserved_14 : 1;
        
        uint32_t EDMA_STOP_REQ : 1;
        
        uint32_t EDMA_LPSR_STOP_REQ : 1;
        
        uint32_t ENET_IPG_DOZE : 1;
        
        uint32_t ENET_STOP_REQ : 1;
        
        uint32_t ENET1G_IPG_DOZE : 1;
        
        uint32_t ENET1G_STOP_REQ : 1;
        
        uint32_t FLEXIO1_IPG_DOZE : 1;
        
        uint32_t FLEXIO2_IPG_DOZE : 1;
        
        uint32_t FLEXSPI1_IPG_DOZE : 1;
        
        uint32_t FLEXSPI1_STOP_REQ : 1;
        
        uint32_t FLEXSPI2_IPG_DOZE : 1;
        
        uint32_t FLEXSPI2_STOP_REQ : 1;
        
        uint32_t _reserved_26 : 1;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR70() = delete;

    static inline volatile GPR70 &Instance() {
        return *reinterpret_cast<volatile GPR70*>(0x400E4118);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR71 General Purpose Register

union GPR71 {
    
    enum class eLPI2C1_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPI2C2_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPI2C3_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPI2C4_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPI2C5_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPI2C6_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPSPI1_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t GPT1_IPG_DOZE : 1;
        
        uint32_t GPT2_IPG_DOZE : 1;
        
        uint32_t GPT3_IPG_DOZE : 1;
        
        uint32_t GPT4_IPG_DOZE : 1;
        
        uint32_t GPT5_IPG_DOZE : 1;
        
        uint32_t GPT6_IPG_DOZE : 1;
        
        uint32_t LPI2C1_IPG_DOZE : 1;
        
        uint32_t LPI2C1_STOP_REQ : 1;
        
        eLPI2C1_IPG_STOP_MODE LPI2C1_IPG_STOP_MODE : 1;
        
        uint32_t LPI2C2_IPG_DOZE : 1;
        
        uint32_t LPI2C2_STOP_REQ : 1;
        
        eLPI2C2_IPG_STOP_MODE LPI2C2_IPG_STOP_MODE : 1;
        
        uint32_t LPI2C3_IPG_DOZE : 1;
        
        uint32_t LPI2C3_STOP_REQ : 1;
        
        eLPI2C3_IPG_STOP_MODE LPI2C3_IPG_STOP_MODE : 1;
        
        uint32_t LPI2C4_IPG_DOZE : 1;
        
        uint32_t LPI2C4_STOP_REQ : 1;
        
        eLPI2C4_IPG_STOP_MODE LPI2C4_IPG_STOP_MODE : 1;
        
        uint32_t LPI2C5_IPG_DOZE : 1;
        
        uint32_t LPI2C5_STOP_REQ : 1;
        
        eLPI2C5_IPG_STOP_MODE LPI2C5_IPG_STOP_MODE : 1;
        
        uint32_t LPI2C6_IPG_DOZE : 1;
        
        uint32_t LPI2C6_STOP_REQ : 1;
        
        eLPI2C6_IPG_STOP_MODE LPI2C6_IPG_STOP_MODE : 1;
        
        uint32_t LPSPI1_IPG_DOZE : 1;
        
        uint32_t LPSPI1_STOP_REQ : 1;
        
        eLPSPI1_IPG_STOP_MODE LPSPI1_IPG_STOP_MODE : 1;
        
        uint32_t _reserved_27 : 1;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR71() = delete;

    static inline volatile GPR71 &Instance() {
        return *reinterpret_cast<volatile GPR71*>(0x400E411C);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR72 General Purpose Register

union GPR72 {
    
    enum class eLPSPI2_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPSPI3_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPSPI4_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPSPI5_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPSPI6_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPUART1_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPUART2_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPUART3_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPUART4_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t LPSPI2_IPG_DOZE : 1;
        
        uint32_t LPSPI2_STOP_REQ : 1;
        
        eLPSPI2_IPG_STOP_MODE LPSPI2_IPG_STOP_MODE : 1;
        
        uint32_t LPSPI3_IPG_DOZE : 1;
        
        uint32_t LPSPI3_STOP_REQ : 1;
        
        eLPSPI3_IPG_STOP_MODE LPSPI3_IPG_STOP_MODE : 1;
        
        uint32_t LPSPI4_IPG_DOZE : 1;
        
        uint32_t LPSPI4_STOP_REQ : 1;
        
        eLPSPI4_IPG_STOP_MODE LPSPI4_IPG_STOP_MODE : 1;
        
        uint32_t LPSPI5_IPG_DOZE : 1;
        
        uint32_t LPSPI5_STOP_REQ : 1;
        
        eLPSPI5_IPG_STOP_MODE LPSPI5_IPG_STOP_MODE : 1;
        
        uint32_t LPSPI6_IPG_DOZE : 1;
        
        uint32_t LPSPI6_STOP_REQ : 1;
        
        eLPSPI6_IPG_STOP_MODE LPSPI6_IPG_STOP_MODE : 1;
        
        uint32_t LPUART1_IPG_DOZE : 1;
        
        uint32_t LPUART1_STOP_REQ : 1;
        
        eLPUART1_IPG_STOP_MODE LPUART1_IPG_STOP_MODE : 1;
        
        uint32_t LPUART2_IPG_DOZE : 1;
        
        uint32_t LPUART2_STOP_REQ : 1;
        
        eLPUART2_IPG_STOP_MODE LPUART2_IPG_STOP_MODE : 1;
        
        uint32_t LPUART3_IPG_DOZE : 1;
        
        uint32_t LPUART3_STOP_REQ : 1;
        
        eLPUART3_IPG_STOP_MODE LPUART3_IPG_STOP_MODE : 1;
        
        uint32_t LPUART4_IPG_DOZE : 1;
        
        uint32_t LPUART4_STOP_REQ : 1;
        
        eLPUART4_IPG_STOP_MODE LPUART4_IPG_STOP_MODE : 1;
        
        uint32_t _reserved_27 : 1;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR72() = delete;

    static inline volatile GPR72 &Instance() {
        return *reinterpret_cast<volatile GPR72*>(0x400E4120);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR73 General Purpose Register

union GPR73 {
    
    enum class eLPUART5_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPUART6_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPUART7_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPUART8_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPUART9_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPUART10_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPUART11_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eLPUART12_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eMIC_IPG_STOP_MODE : uint32_t {
        eFUNC = 0, // This module is functional in Stop Mode
        eNONFUNC = 1, // This module is not functional in Stop Mode and the corresponding x_STOP_REQ field is set to '1'.
    };
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t LPUART5_IPG_DOZE : 1;
        
        uint32_t LPUART5_STOP_REQ : 1;
        
        eLPUART5_IPG_STOP_MODE LPUART5_IPG_STOP_MODE : 1;
        
        uint32_t LPUART6_IPG_DOZE : 1;
        
        uint32_t LPUART6_STOP_REQ : 1;
        
        eLPUART6_IPG_STOP_MODE LPUART6_IPG_STOP_MODE : 1;
        
        uint32_t LPUART7_IPG_DOZE : 1;
        
        uint32_t LPUART7_STOP_REQ : 1;
        
        eLPUART7_IPG_STOP_MODE LPUART7_IPG_STOP_MODE : 1;
        
        uint32_t LPUART8_IPG_DOZE : 1;
        
        uint32_t LPUART8_STOP_REQ : 1;
        
        eLPUART8_IPG_STOP_MODE LPUART8_IPG_STOP_MODE : 1;
        
        uint32_t LPUART9_IPG_DOZE : 1;
        
        uint32_t LPUART9_STOP_REQ : 1;
        
        eLPUART9_IPG_STOP_MODE LPUART9_IPG_STOP_MODE : 1;
        
        uint32_t LPUART10_IPG_DOZE : 1;
        
        uint32_t LPUART10_STOP_REQ : 1;
        
        eLPUART10_IPG_STOP_MODE LPUART10_IPG_STOP_MODE : 1;
        
        uint32_t LPUART11_IPG_DOZE : 1;
        
        uint32_t LPUART11_STOP_REQ : 1;
        
        eLPUART11_IPG_STOP_MODE LPUART11_IPG_STOP_MODE : 1;
        
        uint32_t LPUART12_IPG_DOZE : 1;
        
        uint32_t LPUART12_STOP_REQ : 1;
        
        eLPUART12_IPG_STOP_MODE LPUART12_IPG_STOP_MODE : 1;
        
        uint32_t MIC_IPG_DOZE : 1;
        
        uint32_t MIC_STOP_REQ : 1;
        
        eMIC_IPG_STOP_MODE MIC_IPG_STOP_MODE : 1;
        
        uint32_t _reserved_27 : 1;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR73() = delete;

    static inline volatile GPR73 &Instance() {
        return *reinterpret_cast<volatile GPR73*>(0x400E4124);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR74 General Purpose Register

union GPR74 {
    
    enum class eDWP : uint32_t {
        eforbid_none = 0, // Both cores are allowed
        eforbid_CM7 = 1, // CM7 is forbidden
        eforbid_CM4 = 2, // CM4 is forbidden
        eforbid_both = 3, // Both cores are forbidden
    };
    
    enum class eDWP_LOCK : uint32_t {
        elock_none = 0, // Neither of DWP bits is locked
        elock_low = 1, // The lower DWP bit is locked
        elock_high = 2, // The higher DWP bit is locked
        elock_both = 3, // Both DWP bits are locked
    };
    
    struct {
        uint32_t _reserved_0 : 1;
        
        uint32_t PIT1_STOP_REQ : 1;
        
        uint32_t PIT2_STOP_REQ : 1;
        
        uint32_t SEMC_STOP_REQ : 1;
        
        uint32_t SIM1_IPG_DOZE : 1;
        
        uint32_t SIM2_IPG_DOZE : 1;
        
        uint32_t SNVS_HP_IPG_DOZE : 1;
        
        uint32_t SNVS_HP_STOP_REQ : 1;
        
        uint32_t WDOG1_IPG_DOZE : 1;
        
        uint32_t WDOG2_IPG_DOZE : 1;
        
        uint32_t SAI1_STOP_REQ : 1;
        
        uint32_t SAI2_STOP_REQ : 1;
        
        uint32_t SAI3_STOP_REQ : 1;
        
        uint32_t SAI4_STOP_REQ : 1;
        
        uint32_t FLEXIO1_STOP_REQ_BUS : 1;
        
        uint32_t FLEXIO1_STOP_REQ_PER : 1;
        
        uint32_t FLEXIO2_STOP_REQ_BUS : 1;
        
        uint32_t FLEXIO2_STOP_REQ_PER : 1;
        
        uint32_t _reserved_17 : 10;
        
        eDWP DWP : 2;
        
        eDWP_LOCK DWP_LOCK : 2;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR74() = delete;

    static inline volatile GPR74 &Instance() {
        return *reinterpret_cast<volatile GPR74*>(0x400E4128);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR75 General Purpose Register

union GPR75 {
    
    struct {
        uint32_t ADC1_STOP_ACK : 1;
        
        uint32_t ADC2_STOP_ACK : 1;
        
        uint32_t CAAM_STOP_ACK : 1;
        
        uint32_t CAN1_STOP_ACK : 1;
        
        uint32_t CAN2_STOP_ACK : 1;
        
        uint32_t CAN3_STOP_ACK : 1;
        
        uint32_t EDMA_STOP_ACK : 1;
        
        uint32_t EDMA_LPSR_STOP_ACK : 1;
        
        uint32_t ENET_STOP_ACK : 1;
        
        uint32_t ENET1G_STOP_ACK : 1;
        
        uint32_t FLEXSPI1_STOP_ACK : 1;
        
        uint32_t FLEXSPI2_STOP_ACK : 1;
        
        uint32_t LPI2C1_STOP_ACK : 1;
        
        uint32_t LPI2C2_STOP_ACK : 1;
        
        uint32_t LPI2C3_STOP_ACK : 1;
        
        uint32_t LPI2C4_STOP_ACK : 1;
        
        uint32_t LPI2C5_STOP_ACK : 1;
        
        uint32_t LPI2C6_STOP_ACK : 1;
        
        uint32_t LPSPI1_STOP_ACK : 1;
        
        uint32_t LPSPI2_STOP_ACK : 1;
        
        uint32_t LPSPI3_STOP_ACK : 1;
        
        uint32_t LPSPI4_STOP_ACK : 1;
        
        uint32_t LPSPI5_STOP_ACK : 1;
        
        uint32_t LPSPI6_STOP_ACK : 1;
        
        uint32_t LPUART1_STOP_ACK : 1;
        
        uint32_t LPUART2_STOP_ACK : 1;
        
        uint32_t LPUART3_STOP_ACK : 1;
        
        uint32_t LPUART4_STOP_ACK : 1;
        
        uint32_t LPUART5_STOP_ACK : 1;
        
        uint32_t LPUART6_STOP_ACK : 1;
        
        uint32_t LPUART7_STOP_ACK : 1;
        
        uint32_t LPUART8_STOP_ACK : 1;
        
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR75() = delete;

    static inline volatile GPR75 &Instance() {
        return *reinterpret_cast<volatile GPR75*>(0x400E412C);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};



// GPR76 General Purpose Register

union GPR76 {
    
    struct {
        uint32_t LPUART9_STOP_ACK : 1;
        
        uint32_t LPUART10_STOP_ACK : 1;
        
        uint32_t LPUART11_STOP_ACK : 1;
        
        uint32_t LPUART12_STOP_ACK : 1;
        
        uint32_t MIC_STOP_ACK : 1;
        
        uint32_t PIT1_STOP_ACK : 1;
        
        uint32_t PIT2_STOP_ACK : 1;
        
        uint32_t SEMC_STOP_ACK : 1;
        
        uint32_t SNVS_HP_STOP_ACK : 1;
        
        uint32_t SAI1_STOP_ACK : 1;
        
        uint32_t SAI2_STOP_ACK : 1;
        
        uint32_t SAI3_STOP_ACK : 1;
        
        uint32_t SAI4_STOP_ACK : 1;
        
        uint32_t FLEXIO1_STOP_ACK_BUS : 1;
        
        uint32_t FLEXIO1_STOP_ACK_PER : 1;
        
        uint32_t FLEXIO2_STOP_ACK_BUS : 1;
        
        uint32_t FLEXIO2_STOP_ACK_PER : 1;
        
        uint32_t _reserved_end : 15;
    } bits;          // Bit-field struct (auto-filling reserved gaps)
    uint32_t value;  // Full 32-bit register access

    GPR76() = delete;

    static inline volatile GPR76 &Instance() {
        return *reinterpret_cast<volatile GPR76*>(0x400E4130);
    }

    inline void Reset() volatile { this->value = 0x00000000; }
};


} // namespace nIOMUXC_GPR