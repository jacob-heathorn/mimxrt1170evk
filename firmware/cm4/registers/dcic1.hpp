#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// DCIC
namespace nDCIC1 {


// DCIC Control Register
union DCIC1_DCICC {
  
  // Integrity Check enable. Main enable switch.
  enum class eIC_EN : uint32_t {
    // Disabled
    eIC_EN_0 = 0,
    // Enabled
    eIC_EN_1 = 1,
  };
  
  // DATA_EN_IN signal polarity.
  enum class eDE_POL : uint32_t {
    // Active High.
    eDE_POL_0 = 0,
    // Active Low.
    eDE_POL_1 = 1,
  };
  
  // HSYNC_IN signal polarity.
  enum class eHSYNC_POL : uint32_t {
    // Active High.
    eHSYNC_POL_0 = 0,
    // Active Low.
    eHSYNC_POL_1 = 1,
  };
  
  // VSYNC_IN signal polarity.
  enum class eVSYNC_POL : uint32_t {
    // Active High.
    eVSYNC_POL_0 = 0,
    // Active Low.
    eVSYNC_POL_1 = 1,
  };
  
  // DISP_CLK signal polarity.
  enum class eCLK_POL : uint32_t {
    // Not inverted (default).
    eCLK_POL_0 = 0,
    // Inverted.
    eCLK_POL_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Integrity Check enable. Main enable switch.
    eIC_EN IC_EN : 1;
    uint32_t _reserved_0 : 3;
    // read-write - DATA_EN_IN signal polarity.
    eDE_POL DE_POL : 1;
    // read-write - HSYNC_IN signal polarity.
    eHSYNC_POL HSYNC_POL : 1;
    // read-write - VSYNC_IN signal polarity.
    eVSYNC_POL VSYNC_POL : 1;
    // read-write - DISP_CLK signal polarity.
    eCLK_POL CLK_POL : 1;
    uint32_t _reserved_1 : 24;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICC() = delete;
  inline void Reset() volatile { this->value = 0x00000070; }
  static inline volatile DCIC1_DCICC &Instance() { return *reinterpret_cast<volatile DCIC1_DCICC*>(0x40819000); }
};

// DCIC Interrupt Control Register
union DCIC1_DCICIC {
  
  // Error Interrupt mask. Can be changed only while FREEZE_MASK = 0.
  enum class eEI_MASK : uint32_t {
    // Mask disabled - Interrupt assertion enabled
    eEI_MASK_0 = 0,
    // Mask enabled - Interrupt assertion disabled
    eEI_MASK_1 = 1,
  };
  
  // Functional Interrupt mask. Can be changed only while FREEZE_MASK = 0.
  enum class eFI_MASK : uint32_t {
    // Mask disabled - Interrupt assertion enabled
    eFI_MASK_0 = 0,
    // Mask enabled - Interrupt assertion disabled
    eFI_MASK_1 = 1,
  };
  
  // Disable change of interrupt masks. "Sticky" bit which can be set once and cleared by reset only.
  enum class eFREEZE_MASK : uint32_t {
    // Masks change allowed
    eFREEZE_MASK_0 = 0,
    // Masks are frozen
    eFREEZE_MASK_1 = 1,
  };
  
  // External controller mismatch indication signal.
  enum class eEXT_SIG_EN : uint32_t {
    // Disabled
    eEXT_SIG_EN_0 = 0,
    // Enabled
    eEXT_SIG_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Error Interrupt mask. Can be changed only while FREEZE_MASK = 0.
    eEI_MASK EI_MASK : 1;
    // read-write - Functional Interrupt mask. Can be changed only while FREEZE_MASK = 0.
    eFI_MASK FI_MASK : 1;
    uint32_t _reserved_0 : 1;
    // read-write - Disable change of interrupt masks. "Sticky" bit which can be set once and cleared by reset only.
    eFREEZE_MASK FREEZE_MASK : 1;
    uint32_t _reserved_1 : 12;
    // read-write - External controller mismatch indication signal.
    eEXT_SIG_EN EXT_SIG_EN : 1;
    uint32_t _reserved_2 : 15;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICIC() = delete;
  inline void Reset() volatile { this->value = 0x00000003; }
  static inline volatile DCIC1_DCICIC &Instance() { return *reinterpret_cast<volatile DCIC1_DCICIC*>(0x40819004); }
};

// DCIC Status Register
union DCIC1_DCICS {
  
  // Each set bit of this field indicates there was a mismatch at the appropriate ROIs signature during the last frame
  enum class eROI_MATCH_STAT : uint32_t {
    // ROI calculated CRC matches expected signature
    eROI_MATCH_STAT_0 = 0,
    // Mismatch at ROI calculated CRC
    eROI_MATCH_STAT_1 = 1,
  };
  
  // Error Interrupt status
  enum class eEI_STAT : uint32_t {
    // No pending Interrupt
    eEI_STAT_0 = 0,
    // Pending Interrupt
    eEI_STAT_1 = 1,
  };
  
  // Functional Interrupt status. Write "1" to clear.
  enum class eFI_STAT : uint32_t {
    // No pending Interrupt
    eFI_STAT_0 = 0,
    // Pending Interrupt
    eFI_STAT_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Each set bit of this field indicates there was a mismatch at the appropriate ROIs signature during the last frame
    eROI_MATCH_STAT ROI_MATCH_STAT : 16;
    // read-only - Error Interrupt status
    eEI_STAT EI_STAT : 1;
    // read-write - Functional Interrupt status. Write "1" to clear.
    eFI_STAT FI_STAT : 1;
    uint32_t _reserved_0 : 14;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICS &Instance() { return *reinterpret_cast<volatile DCIC1_DCICS*>(0x40819008); }
};

// DCIC ROI Config Register
union DCIC1_DCICRC1 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC1 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC1*>(0x40819010); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC2 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC2 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC2*>(0x40819020); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC3 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC3 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC3*>(0x40819030); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC4 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC4 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC4*>(0x40819040); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC5 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC5 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC5*>(0x40819050); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC6 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC6 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC6*>(0x40819060); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC7 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC7 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC7*>(0x40819070); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC8 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC8 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC8*>(0x40819080); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC9 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC9 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC9*>(0x40819090); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC10 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC10 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC10*>(0x408190A0); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC11 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC11 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC11*>(0x408190B0); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC12 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC12 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC12*>(0x408190C0); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC13 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC13 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC13*>(0x408190D0); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC14 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC14 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC14*>(0x408190E0); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC15 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC15 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC15*>(0x408190F0); }
};
// DCIC ROI Config Register
union DCIC1_DCICRC16 {
  
  // When set, the only parameter of the ROI that can be changed is the reference signature
  enum class eROI_FREEZE : uint32_t {
    // ROI configuration can be changed
    eROI_FREEZE_0 = 0,
    // ROI configuration is frozen
    eROI_FREEZE_1 = 1,
  };
  
  // ROI tracking enable
  enum class eROI_EN : uint32_t {
    // Disabled
    eROI_EN_0 = 0,
    // Enabled
    eROI_EN_1 = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs upper-left corner (X coordinate) Range: 0 to 2^13-1
    uint32_t START_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs upper-left corner (Y coordinate) Range: 0 to 2^12-1
    uint32_t START_OFFSET_Y : 12;
    uint32_t _reserved_1 : 2;
    // read-write - When set, the only parameter of the ROI that can be changed is the reference signature
    eROI_FREEZE ROI_FREEZE : 1;
    // read-write - ROI tracking enable
    eROI_EN ROI_EN : 1;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRC16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRC16 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRC16*>(0x40819100); }
};

// DCIC ROI Size Register
union DCIC1_DCICRS1 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS1 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS1*>(0x40819014); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS2 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS2 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS2*>(0x40819024); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS3 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS3 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS3*>(0x40819034); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS4 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS4 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS4*>(0x40819044); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS5 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS5 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS5*>(0x40819054); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS6 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS6 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS6*>(0x40819064); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS7 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS7 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS7*>(0x40819074); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS8 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS8 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS8*>(0x40819084); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS9 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS9 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS9*>(0x40819094); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS10 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS10 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS10*>(0x408190A4); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS11 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS11 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS11*>(0x408190B4); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS12 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS12 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS12*>(0x408190C4); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS13 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS13 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS13*>(0x408190D4); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS14 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS14 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS14*>(0x408190E4); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS15 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS15 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS15*>(0x408190F4); }
};
// DCIC ROI Size Register
union DCIC1_DCICRS16 {
  
  // Bit field definition.
  struct {
    // read-write - Column number of ROIs lower-right corner (X coordinate) Range: 1 to 2^13-1
    uint32_t END_OFFSET_X : 13;
    uint32_t _reserved_0 : 3;
    // read-write - Row number of ROIs lower-right corner (Y coordinate) Range: 1 to 2^12-1
    uint32_t END_OFFSET_Y : 12;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRS16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRS16 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRS16*>(0x40819104); }
};

// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS1 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS1 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS1*>(0x40819018); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS2 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS2 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS2*>(0x40819028); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS3 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS3 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS3*>(0x40819038); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS4 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS4 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS4*>(0x40819048); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS5 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS5 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS5*>(0x40819058); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS6 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS6 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS6*>(0x40819068); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS7 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS7 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS7*>(0x40819078); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS8 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS8 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS8*>(0x40819088); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS9 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS9 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS9*>(0x40819098); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS10 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS10 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS10*>(0x408190A8); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS11 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS11 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS11*>(0x408190B8); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS12 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS12 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS12*>(0x408190C8); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS13 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS13 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS13*>(0x408190D8); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS14 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS14 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS14*>(0x408190E8); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS15 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS15 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS15*>(0x408190F8); }
};
// DCIC ROI Reference Signature Register
union DCIC1_DCICRRS16 {
  
  // Bit field definition.
  struct {
    // read-write - 32-bit expected signature (CRC calculation result) for the ROI
    uint32_t REFERENCE_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRRS16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRRS16 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRRS16*>(0x40819108); }
};

// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS1 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS1 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS1*>(0x4081901C); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS2 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS2 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS2*>(0x4081902C); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS3 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS3 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS3*>(0x4081903C); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS4 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS4 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS4*>(0x4081904C); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS5 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS5() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS5 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS5*>(0x4081905C); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS6 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS6() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS6 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS6*>(0x4081906C); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS7 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS7() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS7 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS7*>(0x4081907C); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS8 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS8() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS8 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS8*>(0x4081908C); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS9 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS9() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS9 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS9*>(0x4081909C); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS10 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS10() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS10 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS10*>(0x408190AC); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS11 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS11() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS11 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS11*>(0x408190BC); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS12 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS12() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS12 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS12*>(0x408190CC); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS13 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS13() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS13 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS13*>(0x408190DC); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS14 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS14() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS14 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS14*>(0x408190EC); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS15 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS15() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS15 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS15*>(0x408190FC); }
};
// DCIC ROI Calculated Signature Register
union DCIC1_DCICRCS16 {
  
  // Bit field definition.
  struct {
    // read-only - 32-bit actual signature (CRC calculation result) for the ROI during the last frame
    uint32_t CALCULATED_SIGNATURE : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DCIC1_DCICRCS16() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DCIC1_DCICRCS16 &Instance() { return *reinterpret_cast<volatile DCIC1_DCICRCS16*>(0x4081910C); }
};


} // namespace nDCIC1