#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// IOMUXC SNVS
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace nIOMUXC_SNVS {


// SW_MUX_CTL_PAD_WAKEUP_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_WAKEUP_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT5 mux port: GPIO13_IO00 of instance: GPIO13
    eALT5_gpio13_IO0 = 5,
    // Select mux mode: ALT7 mux port: NMI_GLUE_NMI of instance: NMI_GLUE
    eALT7_nmi_glue_NMI = 7,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad WAKEUP_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_WAKEUP_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile SW_MUX_CTL_PAD_WAKEUP_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_WAKEUP_DIG*>(0x40C94000); }
};

// SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: SNVS_LP_PMIC_ON_REQ of instance: SNVS_LP
    eALT0_snvs_lp_PMIC_ON_REQ = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO01 of instance: GPIO13
    eALT5_gpio13_IO1 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad PMIC_ON_REQ_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_PMIC_ON_REQ_DIG*>(0x40C94004); }
};

// SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: CCM_PMIC_VSTBY_REQ of instance: CCM
    eALT0_ccm_PMIC_VSTBY_REQ = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO02 of instance: GPIO13
    eALT5_gpio13_IO2 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad PMIC_STBY_REQ_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_PMIC_STBY_REQ_DIG*>(0x40C94008); }
};

// SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: SNVS_TAMPER0 of instance: SNVS_LP
    eALT0_SNVS_TAMPER0 = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO03 of instance: GPIO13
    eALT5_gpio13_IO3 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_SNVS_00_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_SNVS_00_DIG*>(0x40C9400C); }
};

// SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: SNVS_TAMPER1 of instance: SNVS_LP
    eALT0_SNVS_TAMPER1 = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO04 of instance: GPIO13
    eALT5_gpio13_IO4 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_SNVS_01_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_SNVS_01_DIG*>(0x40C94010); }
};

// SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: SNVS_TAMPER2 of instance: SNVS_LP
    eALT0_SNVS_TAMPER2 = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO05 of instance: GPIO13
    eALT5_gpio13_IO5 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_SNVS_02_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_SNVS_02_DIG*>(0x40C94014); }
};

// SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: SNVS_TAMPER3 of instance: SNVS_LP
    eALT0_SNVS_TAMPER3 = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO06 of instance: GPIO13
    eALT5_gpio13_IO6 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_SNVS_03_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_SNVS_03_DIG*>(0x40C94018); }
};

// SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: SNVS_TAMPER4 of instance: SNVS_LP
    eALT0_SNVS_TAMPER4 = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO07 of instance: GPIO13
    eALT5_gpio13_IO7 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_SNVS_04_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_SNVS_04_DIG*>(0x40C9401C); }
};

// SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: SNVS_TAMPER5 of instance: SNVS_LP
    eALT0_SNVS_TAMPER5 = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO08 of instance: GPIO13
    eALT5_gpio13_IO8 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_SNVS_05_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_SNVS_05_DIG*>(0x40C94020); }
};

// SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: SNVS_TAMPER6 of instance: SNVS_LP
    eALT0_SNVS_TAMPER6 = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO09 of instance: GPIO13
    eALT5_gpio13_IO9 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_SNVS_06_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_SNVS_06_DIG*>(0x40C94024); }
};

// SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: SNVS_TAMPER7 of instance: SNVS_LP
    eALT0_SNVS_TAMPER7 = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO10 of instance: GPIO13
    eALT5_gpio13_IO10 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_SNVS_07_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_SNVS_07_DIG*>(0x40C94028); }
};

// SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: SNVS_TAMPER8 of instance: SNVS_LP
    eALT0_SNVS_TAMPER8 = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO11 of instance: GPIO13
    eALT5_gpio13_IO11 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_SNVS_08_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_SNVS_08_DIG*>(0x40C9402C); }
};

// SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG SW MUX Control Register
union SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG {
  
  // MUX Mode Select Field.
  enum class eMUX_MODE : uint32_t {
    // Select mux mode: ALT0 mux port: SNVS_TAMPER9 of instance: SNVS_LP
    eALT0_SNVS_TAMPER9 = 0,
    // Select mux mode: ALT5 mux port: GPIO13_IO12 of instance: GPIO13
    eALT5_gpio13_IO12 = 5,
  };
  
  // Software Input On Field.
  enum class eSION : uint32_t {
    // Input Path is determined by functionality
    eDISABLED = 0,
    // Force input path of pad GPIO_SNVS_09_DIG
    eENABLED = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - MUX Mode Select Field.
    eMUX_MODE MUX_MODE : 3;
    uint32_t _reserved_0 : 1;
    // read-write - Software Input On Field.
    eSION SION : 1;
    uint32_t _reserved_1 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000005; }
  static inline volatile SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG &Instance() { return *reinterpret_cast<volatile SW_MUX_CTL_PAD_GPIO_SNVS_09_DIG*>(0x40C94030); }
};

// SW_PAD_CTL_PAD_TEST_MODE_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_TEST_MODE_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 24;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_TEST_MODE_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000006; }
  static inline volatile SW_PAD_CTL_PAD_TEST_MODE_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_TEST_MODE_DIG*>(0x40C94034); }
};

// SW_PAD_CTL_PAD_POR_B_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_POR_B_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 24;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_POR_B_DIG() = delete;
  inline void Reset() volatile { this->value = 0x0000000E; }
  static inline volatile SW_PAD_CTL_PAD_POR_B_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_POR_B_DIG*>(0x40C94038); }
};

// SW_PAD_CTL_PAD_ONOFF_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_ONOFF_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 24;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_ONOFF_DIG() = delete;
  inline void Reset() volatile { this->value = 0x0000000E; }
  static inline volatile SW_PAD_CTL_PAD_ONOFF_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_ONOFF_DIG*>(0x40C9403C); }
};

// SW_PAD_CTL_PAD_WAKEUP_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_WAKEUP_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_WAKEUP_DIG() = delete;
  inline void Reset() volatile { this->value = 0x0000000E; }
  static inline volatile SW_PAD_CTL_PAD_WAKEUP_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_WAKEUP_DIG*>(0x40C94040); }
};

// SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG() = delete;
  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_PMIC_ON_REQ_DIG*>(0x40C94044); }
};

// SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG() = delete;
  inline void Reset() volatile { this->value = 0x0000000A; }
  static inline volatile SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_PMIC_STBY_REQ_DIG*>(0x40C94048); }
};

// SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_SNVS_00_DIG*>(0x40C9404C); }
};

// SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_SNVS_01_DIG*>(0x40C94050); }
};

// SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_SNVS_02_DIG*>(0x40C94054); }
};

// SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_SNVS_03_DIG*>(0x40C94058); }
};

// SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_SNVS_04_DIG*>(0x40C9405C); }
};

// SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_SNVS_05_DIG*>(0x40C94060); }
};

// SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_SNVS_06_DIG*>(0x40C94064); }
};

// SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_SNVS_07_DIG*>(0x40C94068); }
};

// SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_SNVS_08_DIG*>(0x40C9406C); }
};

// SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG SW PAD Control Register
union SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG {
  
  // Pull / Keep Select Field
  enum class ePUE : uint32_t {
    // Pull Disable
    ePUE_0_Disable = 0,
    // Pull Enable
    ePUE_1_Pull = 1,
  };
  
  // Pull Up / Down Config. Field
  enum class ePUS : uint32_t {
    // Weak pull down
    ePUS_0_Weak_pull_down = 0,
    // Weak pull up
    ePUS_1_Weak_pull_up = 1,
  };
  
  // Open Drain SNVS Field
  enum class eODE_SNVS : uint32_t {
    // Disabled
    eODE_SNVS_0_Disabled = 0,
    // Enabled
    eODE_SNVS_1_Enabled = 1,
  };
  
  // Domain write protection
  enum class eDWP : uint32_t {
    // Both cores are allowed
    eforbid_none = 0,
    // CM7 is forbidden
    eforbid_CM7 = 1,
    // CM4 is forbidden
    eforbid_CM4 = 2,
    // Both cores are forbidden
    eforbid_both = 3,
  };
  
  // Domain write protection lock
  enum class eDWP_LOCK : uint32_t {
    // Neither of DWP bits is locked
    elock_none = 0,
    // The lower DWP bit is locked
    elock_low = 1,
    // The higher DWP bit is locked
    elock_high = 2,
    // Both DWP bits are locked
    elock_both = 3,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 2;
    // read-write - Pull / Keep Select Field
    ePUE PUE : 1;
    // read-write - Pull Up / Down Config. Field
    ePUS PUS : 1;
    uint32_t _reserved_1 : 2;
    // read-write - Open Drain SNVS Field
    eODE_SNVS ODE_SNVS : 1;
    uint32_t _reserved_2 : 21;
    // read-write - Domain write protection
    eDWP DWP : 2;
    // read-writeOnce - Domain write protection lock
    eDWP_LOCK DWP_LOCK : 2;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG() = delete;
  inline void Reset() volatile { this->value = 0x00000002; }
  static inline volatile SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG &Instance() { return *reinterpret_cast<volatile SW_PAD_CTL_PAD_GPIO_SNVS_09_DIG*>(0x40C94070); }
};


} // namespace nIOMUXC_SNVS