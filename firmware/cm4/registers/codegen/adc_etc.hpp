#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// ADC_ETC
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct AdcEtc {
  // ADC_ETC Global Control Register
  struct CtrlFields {
    enum class eTRIG_ENABLE : std::uint32_t {
      // disable all 8 external XBAR triggers.
      eTRIG_ENABLE_0 = 0,
      // enable external XBAR trigger0.
      eTRIG_ENABLE_1 = 1,
      // enable external XBAR trigger1.
      eTRIG_ENABLE_2 = 2,
      // enable external XBAR trigger0 and trigger1.
      eTRIG_ENABLE_3 = 3,
      // enable all 8 external XBAR triggers.
      eTRIG_ENABLE_255 = 255,
    };

    enum class eDMA_MODE_SEL : std::uint32_t {
      // Trig DMA_REQ with latched signal, REQ will be cleared when ACK and source request cleared.
      eDMA_MODE_SEL_0 = 0,
      // Trig DMA_REQ with pulsed signal, REQ will be cleared by ACK only.
      eDMA_MODE_SEL_1 = 1,
    };

    enum class eSOFTRST : std::uint32_t {
      // ADC_ETC works normally.
      eSOFTRST_0 = 0,
      // All registers inside ADC_ETC will be reset to the default value.
      eSOFTRST_1 = 1,
    };

    // TRIG enable register.
    using TRIG_ENABLE = ftl::mmio::Field<8, 0, eTRIG_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Pre-divider for trig delay and interval
    using PRE_DIVIDER = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Select the trigger type of the DMA_REQ.
    using DMA_MODE_SEL = ftl::mmio::Field<1, 29, eDMA_MODE_SEL, ftl::mmio::RW, ftl::mmio::Normal>;
    // Software synchronous reset, active high.
    using SOFTRST = ftl::mmio::Field<1, 31, eSOFTRST, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      0x40048000u,
      std::uint32_t,
      0x80000000u,
      ftl::mmio::RW,
      CtrlFields::TRIG_ENABLE,
      ftl::mmio::Reserved<8, 8>,
      CtrlFields::PRE_DIVIDER,
      ftl::mmio::Reserved<5, 24>,
      CtrlFields::DMA_MODE_SEL,
      ftl::mmio::Reserved<1, 30>,
      CtrlFields::SOFTRST> {
    using eTRIG_ENABLE = CtrlFields::eTRIG_ENABLE;
    using eDMA_MODE_SEL = CtrlFields::eDMA_MODE_SEL;
    using eSOFTRST = CtrlFields::eSOFTRST;
    using TRIG_ENABLE = CtrlFields::TRIG_ENABLE;
    using PRE_DIVIDER = CtrlFields::PRE_DIVIDER;
    using DMA_MODE_SEL = CtrlFields::DMA_MODE_SEL;
    using SOFTRST = CtrlFields::SOFTRST;
  };

  // ETC DONE0 and DONE1 IRQ State Register
  struct Done01IrqFields {
    enum class eTRIG0_DONE0 : std::uint32_t {
      // No TRIG0_DONE0 interrupt detected
      eTRIG0_DONE0_0 = 0,
      // TRIG0_DONE0 interrupt detected
      eTRIG0_DONE0_1 = 1,
    };

    enum class eTRIG1_DONE0 : std::uint32_t {
      // No TRIG1_DONE0 interrupt detected
      eTRIG1_DONE0_0 = 0,
      // TRIG1_DONE0 interrupt detected
      eTRIG1_DONE0_1 = 1,
    };

    enum class eTRIG2_DONE0 : std::uint32_t {
      // No TRIG2_DONE0 interrupt detected
      eTRIG2_DONE0_0 = 0,
      // TRIG2_DONE0 interrupt detected
      eTRIG2_DONE0_1 = 1,
    };

    enum class eTRIG3_DONE0 : std::uint32_t {
      // No TRIG3_DONE0 interrupt detected
      eTRIG3_DONE0_0 = 0,
      // TRIG3_DONE0 interrupt detected
      eTRIG3_DONE0_1 = 1,
    };

    enum class eTRIG4_DONE0 : std::uint32_t {
      // No TRIG4_DONE0 interrupt detected
      eTRIG4_DONE0_0 = 0,
      // TRIG4_DONE0 interrupt detected
      eTRIG4_DONE0_1 = 1,
    };

    enum class eTRIG5_DONE0 : std::uint32_t {
      // No TRIG5_DONE0 interrupt detected
      eTRIG5_DONE0_0 = 0,
      // TRIG5_DONE0 interrupt detected
      eTRIG5_DONE0_1 = 1,
    };

    enum class eTRIG6_DONE0 : std::uint32_t {
      // No TRIG6_DONE0 interrupt detected
      eTRIG6_DONE0_0 = 0,
      // TRIG6_DONE0 interrupt detected
      eTRIG6_DONE0_1 = 1,
    };

    enum class eTRIG7_DONE0 : std::uint32_t {
      // No TRIG7_DONE0 interrupt detected
      eTRIG7_DONE0_0 = 0,
      // TRIG7_DONE0 interrupt detected
      eTRIG7_DONE0_1 = 1,
    };

    enum class eTRIG0_DONE1 : std::uint32_t {
      // No TRIG0_DONE1 interrupt detected
      eTRIG0_DONE1_0 = 0,
      // TRIG0_DONE1 interrupt detected
      eTRIG0_DONE1_1 = 1,
    };

    enum class eTRIG1_DONE1 : std::uint32_t {
      // No TRIG1_DONE1 interrupt detected
      eTRIG1_DONE1_0 = 0,
      // TRIG1_DONE1 interrupt detected
      eTRIG1_DONE1_1 = 1,
    };

    enum class eTRIG2_DONE1 : std::uint32_t {
      // No TRIG2_DONE1 interrupt detected
      eTRIG2_DONE1_0 = 0,
      // TRIG2_DONE1 interrupt detected
      eTRIG2_DONE1_1 = 1,
    };

    enum class eTRIG3_DONE1 : std::uint32_t {
      // No TRIG3_DONE1 interrupt detected
      eTRIG3_DONE1_0 = 0,
      // TRIG3_DONE1 interrupt detected
      eTRIG3_DONE1_1 = 1,
    };

    enum class eTRIG4_DONE1 : std::uint32_t {
      // No TRIG4_DONE1 interrupt detected
      eTRIG4_DONE1_0 = 0,
      // TRIG4_DONE1 interrupt detected
      eTRIG4_DONE1_1 = 1,
    };

    enum class eTRIG5_DONE1 : std::uint32_t {
      // No TRIG5_DONE1 interrupt detected
      eTRIG5_DONE1_0 = 0,
      // TRIG5_DONE1 interrupt detected
      eTRIG5_DONE1_1 = 1,
    };

    enum class eTRIG6_DONE1 : std::uint32_t {
      // No TRIG6_DONE1 interrupt detected
      eTRIG6_DONE1_0 = 0,
      // TRIG6_DONE1 interrupt detected
      eTRIG6_DONE1_1 = 1,
    };

    enum class eTRIG7_DONE1 : std::uint32_t {
      // No TRIG7_DONE1 interrupt detected
      eTRIG7_DONE1_0 = 0,
      // TRIG7_DONE1 interrupt detected
      eTRIG7_DONE1_1 = 1,
    };

    // TRIG0 done0 interrupt detection.
    using TRIG0_DONE0 = ftl::mmio::Field<1, 0, eTRIG0_DONE0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG1 done0 interrupt detection.
    using TRIG1_DONE0 = ftl::mmio::Field<1, 1, eTRIG1_DONE0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG2 done0 interrupt detection.
    using TRIG2_DONE0 = ftl::mmio::Field<1, 2, eTRIG2_DONE0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG3 done0 interrupt detection.
    using TRIG3_DONE0 = ftl::mmio::Field<1, 3, eTRIG3_DONE0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG4 done0 interrupt detection.
    using TRIG4_DONE0 = ftl::mmio::Field<1, 4, eTRIG4_DONE0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG5 done0 interrupt detection.
    using TRIG5_DONE0 = ftl::mmio::Field<1, 5, eTRIG5_DONE0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG6 done0 interrupt detection.
    using TRIG6_DONE0 = ftl::mmio::Field<1, 6, eTRIG6_DONE0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG7 done0 interrupt detection.
    using TRIG7_DONE0 = ftl::mmio::Field<1, 7, eTRIG7_DONE0, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG0 done1 interrupt detection.
    using TRIG0_DONE1 = ftl::mmio::Field<1, 16, eTRIG0_DONE1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG1 done1 interrupt detection.
    using TRIG1_DONE1 = ftl::mmio::Field<1, 17, eTRIG1_DONE1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG2 done1 interrupt detection.
    using TRIG2_DONE1 = ftl::mmio::Field<1, 18, eTRIG2_DONE1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG3 done1 interrupt detection.
    using TRIG3_DONE1 = ftl::mmio::Field<1, 19, eTRIG3_DONE1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG4 done1 interrupt detection.
    using TRIG4_DONE1 = ftl::mmio::Field<1, 20, eTRIG4_DONE1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG5 done1 interrupt detection.
    using TRIG5_DONE1 = ftl::mmio::Field<1, 21, eTRIG5_DONE1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG6 done1 interrupt detection.
    using TRIG6_DONE1 = ftl::mmio::Field<1, 22, eTRIG6_DONE1, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG7 done1 interrupt detection.
    using TRIG7_DONE1 = ftl::mmio::Field<1, 23, eTRIG7_DONE1, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Done01IrqFields

  struct DONE0_1_IRQ : ftl::mmio::Register<
      0x40048004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Done01IrqFields::TRIG0_DONE0,
      Done01IrqFields::TRIG1_DONE0,
      Done01IrqFields::TRIG2_DONE0,
      Done01IrqFields::TRIG3_DONE0,
      Done01IrqFields::TRIG4_DONE0,
      Done01IrqFields::TRIG5_DONE0,
      Done01IrqFields::TRIG6_DONE0,
      Done01IrqFields::TRIG7_DONE0,
      ftl::mmio::Reserved<8, 8>,
      Done01IrqFields::TRIG0_DONE1,
      Done01IrqFields::TRIG1_DONE1,
      Done01IrqFields::TRIG2_DONE1,
      Done01IrqFields::TRIG3_DONE1,
      Done01IrqFields::TRIG4_DONE1,
      Done01IrqFields::TRIG5_DONE1,
      Done01IrqFields::TRIG6_DONE1,
      Done01IrqFields::TRIG7_DONE1,
      ftl::mmio::Reserved<8, 24>> {
    using eTRIG0_DONE0 = Done01IrqFields::eTRIG0_DONE0;
    using eTRIG1_DONE0 = Done01IrqFields::eTRIG1_DONE0;
    using eTRIG2_DONE0 = Done01IrqFields::eTRIG2_DONE0;
    using eTRIG3_DONE0 = Done01IrqFields::eTRIG3_DONE0;
    using eTRIG4_DONE0 = Done01IrqFields::eTRIG4_DONE0;
    using eTRIG5_DONE0 = Done01IrqFields::eTRIG5_DONE0;
    using eTRIG6_DONE0 = Done01IrqFields::eTRIG6_DONE0;
    using eTRIG7_DONE0 = Done01IrqFields::eTRIG7_DONE0;
    using eTRIG0_DONE1 = Done01IrqFields::eTRIG0_DONE1;
    using eTRIG1_DONE1 = Done01IrqFields::eTRIG1_DONE1;
    using eTRIG2_DONE1 = Done01IrqFields::eTRIG2_DONE1;
    using eTRIG3_DONE1 = Done01IrqFields::eTRIG3_DONE1;
    using eTRIG4_DONE1 = Done01IrqFields::eTRIG4_DONE1;
    using eTRIG5_DONE1 = Done01IrqFields::eTRIG5_DONE1;
    using eTRIG6_DONE1 = Done01IrqFields::eTRIG6_DONE1;
    using eTRIG7_DONE1 = Done01IrqFields::eTRIG7_DONE1;
    using TRIG0_DONE0 = Done01IrqFields::TRIG0_DONE0;
    using TRIG1_DONE0 = Done01IrqFields::TRIG1_DONE0;
    using TRIG2_DONE0 = Done01IrqFields::TRIG2_DONE0;
    using TRIG3_DONE0 = Done01IrqFields::TRIG3_DONE0;
    using TRIG4_DONE0 = Done01IrqFields::TRIG4_DONE0;
    using TRIG5_DONE0 = Done01IrqFields::TRIG5_DONE0;
    using TRIG6_DONE0 = Done01IrqFields::TRIG6_DONE0;
    using TRIG7_DONE0 = Done01IrqFields::TRIG7_DONE0;
    using TRIG0_DONE1 = Done01IrqFields::TRIG0_DONE1;
    using TRIG1_DONE1 = Done01IrqFields::TRIG1_DONE1;
    using TRIG2_DONE1 = Done01IrqFields::TRIG2_DONE1;
    using TRIG3_DONE1 = Done01IrqFields::TRIG3_DONE1;
    using TRIG4_DONE1 = Done01IrqFields::TRIG4_DONE1;
    using TRIG5_DONE1 = Done01IrqFields::TRIG5_DONE1;
    using TRIG6_DONE1 = Done01IrqFields::TRIG6_DONE1;
    using TRIG7_DONE1 = Done01IrqFields::TRIG7_DONE1;
  };

  // ETC DONE_2, DONE_3 and DONE_ERR IRQ State Register
  struct Done23ErrIrqFields {
    enum class eTRIG0_DONE2 : std::uint32_t {
      // No TRIG0_DONE2 interrupt detected
      eTRIG0_DONE2_0 = 0,
      // TRIG0_DONE2 interrupt detected
      eTRIG0_DONE2_1 = 1,
    };

    enum class eTRIG1_DONE2 : std::uint32_t {
      // No TRIG1_DONE2 interrupt detected
      eTRIG1_DONE2_0 = 0,
      // TRIG1_DONE2 interrupt detected
      eTRIG1_DONE2_1 = 1,
    };

    enum class eTRIG2_DONE2 : std::uint32_t {
      // No TRIG2_DONE2 interrupt detected
      eTRIG2_DONE2_0 = 0,
      // TRIG2_DONE2 interrupt detected
      eTRIG2_DONE2_1 = 1,
    };

    enum class eTRIG3_DONE2 : std::uint32_t {
      // No TRIG3_DONE2 interrupt detected
      eTRIG3_DONE2_0 = 0,
      // TRIG3_DONE2 interrupt detected
      eTRIG3_DONE2_1 = 1,
    };

    enum class eTRIG4_DONE2 : std::uint32_t {
      // No TRIG4_DONE2 interrupt detected
      eTRIG4_DONE2_0 = 0,
      // TRIG4_DONE2 interrupt detected
      eTRIG4_DONE2_1 = 1,
    };

    enum class eTRIG5_DONE2 : std::uint32_t {
      // No TRIG5_DONE2 interrupt detected
      eTRIG5_DONE2_0 = 0,
      // TRIG5_DONE2 interrupt detected
      eTRIG5_DONE2_1 = 1,
    };

    enum class eTRIG6_DONE2 : std::uint32_t {
      // No TRIG6_DONE2 interrupt detected
      eTRIG6_DONE2_0 = 0,
      // TRIG6_DONE2 interrupt detected
      eTRIG6_DONE2_1 = 1,
    };

    enum class eTRIG7_DONE2 : std::uint32_t {
      // No TRIG7_DONE2 interrupt detected
      eTRIG7_DONE2_0 = 0,
      // TRIG7_DONE2 interrupt detected
      eTRIG7_DONE2_1 = 1,
    };

    enum class eTRIG0_DONE3 : std::uint32_t {
      // No TRIG0_DONE3 interrupt detected
      eTRIG0_DONE3_0 = 0,
      // TRIG0_DONE3 interrupt detected
      eTRIG0_DONE3_1 = 1,
    };

    enum class eTRIG1_DONE3 : std::uint32_t {
      // No TRIG1_DONE3 interrupt detected
      eTRIG1_DONE3_0 = 0,
      // TRIG1_DONE3 interrupt detected
      eTRIG1_DONE3_1 = 1,
    };

    enum class eTRIG2_DONE3 : std::uint32_t {
      // No TRIG2_DONE3 interrupt detected
      eTRIG2_DONE3_0 = 0,
      // TRIG2_DONE3 interrupt detected
      eTRIG2_DONE3_1 = 1,
    };

    enum class eTRIG3_DONE3 : std::uint32_t {
      // No TRIG3_DONE3 interrupt detected
      eTRIG3_DONE3_0 = 0,
      // TRIG3_DONE3 interrupt detected
      eTRIG3_DONE3_1 = 1,
    };

    enum class eTRIG4_DONE3 : std::uint32_t {
      // No TRIG4_DONE3 interrupt detected
      eTRIG4_DONE3_0 = 0,
      // TRIG4_DONE3 interrupt detected
      eTRIG4_DONE3_1 = 1,
    };

    enum class eTRIG5_DONE3 : std::uint32_t {
      // No TRIG5_DONE3 interrupt detected
      eTRIG5_DONE3_0 = 0,
      // TRIG5_DONE3 interrupt detected
      eTRIG5_DONE3_1 = 1,
    };

    enum class eTRIG6_DONE3 : std::uint32_t {
      // No TRIG6_DONE3 interrupt detected
      eTRIG6_DONE3_0 = 0,
      // TRIG6_DONE3 interrupt detected
      eTRIG6_DONE3_1 = 1,
    };

    enum class eTRIG7_DONE3 : std::uint32_t {
      // No TRIG7_DONE3 interrupt detected
      eTRIG7_DONE3_0 = 0,
      // TRIG7_DONE3 interrupt detected
      eTRIG7_DONE3_1 = 1,
    };

    enum class eTRIG0_ERR : std::uint32_t {
      // No TRIG0_ERR interrupt detected
      eTRIG0_ERR_0 = 0,
      // TRIG0_ERR interrupt detected
      eTRIG0_ERR_1 = 1,
    };

    enum class eTRIG1_ERR : std::uint32_t {
      // No TRIG1_ERR interrupt detected
      eTRIG1_ERR_0 = 0,
      // TRIG1_ERR interrupt detected
      eTRIG1_ERR_1 = 1,
    };

    enum class eTRIG2_ERR : std::uint32_t {
      // No TRIG2_ERR interrupt detected
      eTRIG2_ERR_0 = 0,
      // TRIG2_ERR interrupt detected
      eTRIG2_ERR_1 = 1,
    };

    enum class eTRIG3_ERR : std::uint32_t {
      // No TRIG3_ERR interrupt detected
      eTRIG3_ERR_0 = 0,
      // TRIG3_ERR interrupt detected
      eTRIG3_ERR_1 = 1,
    };

    enum class eTRIG4_ERR : std::uint32_t {
      // No TRIG4_ERR interrupt detected
      eTRIG4_ERR_0 = 0,
      // TRIG4_ERR interrupt detected
      eTRIG4_ERR_1 = 1,
    };

    enum class eTRIG5_ERR : std::uint32_t {
      // No TRIG5_ERR interrupt detected
      eTRIG5_ERR_0 = 0,
      // TRIG5_ERR interrupt detected
      eTRIG5_ERR_1 = 1,
    };

    enum class eTRIG6_ERR : std::uint32_t {
      // No TRIG6_ERR interrupt detected
      eTRIG6_ERR_0 = 0,
      // TRIG6_ERR interrupt detected
      eTRIG6_ERR_1 = 1,
    };

    enum class eTRIG7_ERR : std::uint32_t {
      // No TRIG7_ERR interrupt detected
      eTRIG7_ERR_0 = 0,
      // TRIG7_ERR interrupt detected
      eTRIG7_ERR_1 = 1,
    };

    // TRIG0 done2 interrupt detection.
    using TRIG0_DONE2 = ftl::mmio::Field<1, 0, eTRIG0_DONE2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG1 done2 interrupt detection.
    using TRIG1_DONE2 = ftl::mmio::Field<1, 1, eTRIG1_DONE2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG2 done2 interrupt detection.
    using TRIG2_DONE2 = ftl::mmio::Field<1, 2, eTRIG2_DONE2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG3 done2 interrupt detection.
    using TRIG3_DONE2 = ftl::mmio::Field<1, 3, eTRIG3_DONE2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG4 done2 interrupt detection.
    using TRIG4_DONE2 = ftl::mmio::Field<1, 4, eTRIG4_DONE2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG5 done2 interrupt detection.
    using TRIG5_DONE2 = ftl::mmio::Field<1, 5, eTRIG5_DONE2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG6 done2 interrupt detection.
    using TRIG6_DONE2 = ftl::mmio::Field<1, 6, eTRIG6_DONE2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG7 done2 interrupt detection.
    using TRIG7_DONE2 = ftl::mmio::Field<1, 7, eTRIG7_DONE2, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG0 done3 interrupt detection.
    using TRIG0_DONE3 = ftl::mmio::Field<1, 8, eTRIG0_DONE3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG1 done3 interrupt detection.
    using TRIG1_DONE3 = ftl::mmio::Field<1, 9, eTRIG1_DONE3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG2 done3 interrupt detection.
    using TRIG2_DONE3 = ftl::mmio::Field<1, 10, eTRIG2_DONE3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG3 done3 interrupt detection.
    using TRIG3_DONE3 = ftl::mmio::Field<1, 11, eTRIG3_DONE3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG4 done3 interrupt detection.
    using TRIG4_DONE3 = ftl::mmio::Field<1, 12, eTRIG4_DONE3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG5 done3 interrupt detection.
    using TRIG5_DONE3 = ftl::mmio::Field<1, 13, eTRIG5_DONE3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG6 done3 interrupt detection.
    using TRIG6_DONE3 = ftl::mmio::Field<1, 14, eTRIG6_DONE3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG7 done3 interrupt detection.
    using TRIG7_DONE3 = ftl::mmio::Field<1, 15, eTRIG7_DONE3, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // TRIG0 error interrupt detection.
    using TRIG0_ERR = ftl::mmio::Field<1, 16, eTRIG0_ERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIG1 error interrupt detection.
    using TRIG1_ERR = ftl::mmio::Field<1, 17, eTRIG1_ERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIG2 error interrupt detection.
    using TRIG2_ERR = ftl::mmio::Field<1, 18, eTRIG2_ERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIG3 error interrupt detection.
    using TRIG3_ERR = ftl::mmio::Field<1, 19, eTRIG3_ERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIG4 error interrupt detection.
    using TRIG4_ERR = ftl::mmio::Field<1, 20, eTRIG4_ERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIG5 error interrupt detection.
    using TRIG5_ERR = ftl::mmio::Field<1, 21, eTRIG5_ERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIG6 error interrupt detection.
    using TRIG6_ERR = ftl::mmio::Field<1, 22, eTRIG6_ERR, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIG7 error interrupt detection.
    using TRIG7_ERR = ftl::mmio::Field<1, 23, eTRIG7_ERR, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Done23ErrIrqFields

  struct DONE2_3_ERR_IRQ : ftl::mmio::Register<
      0x40048008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Done23ErrIrqFields::TRIG0_DONE2,
      Done23ErrIrqFields::TRIG1_DONE2,
      Done23ErrIrqFields::TRIG2_DONE2,
      Done23ErrIrqFields::TRIG3_DONE2,
      Done23ErrIrqFields::TRIG4_DONE2,
      Done23ErrIrqFields::TRIG5_DONE2,
      Done23ErrIrqFields::TRIG6_DONE2,
      Done23ErrIrqFields::TRIG7_DONE2,
      Done23ErrIrqFields::TRIG0_DONE3,
      Done23ErrIrqFields::TRIG1_DONE3,
      Done23ErrIrqFields::TRIG2_DONE3,
      Done23ErrIrqFields::TRIG3_DONE3,
      Done23ErrIrqFields::TRIG4_DONE3,
      Done23ErrIrqFields::TRIG5_DONE3,
      Done23ErrIrqFields::TRIG6_DONE3,
      Done23ErrIrqFields::TRIG7_DONE3,
      Done23ErrIrqFields::TRIG0_ERR,
      Done23ErrIrqFields::TRIG1_ERR,
      Done23ErrIrqFields::TRIG2_ERR,
      Done23ErrIrqFields::TRIG3_ERR,
      Done23ErrIrqFields::TRIG4_ERR,
      Done23ErrIrqFields::TRIG5_ERR,
      Done23ErrIrqFields::TRIG6_ERR,
      Done23ErrIrqFields::TRIG7_ERR,
      ftl::mmio::Reserved<8, 24>> {
    using eTRIG0_DONE2 = Done23ErrIrqFields::eTRIG0_DONE2;
    using eTRIG1_DONE2 = Done23ErrIrqFields::eTRIG1_DONE2;
    using eTRIG2_DONE2 = Done23ErrIrqFields::eTRIG2_DONE2;
    using eTRIG3_DONE2 = Done23ErrIrqFields::eTRIG3_DONE2;
    using eTRIG4_DONE2 = Done23ErrIrqFields::eTRIG4_DONE2;
    using eTRIG5_DONE2 = Done23ErrIrqFields::eTRIG5_DONE2;
    using eTRIG6_DONE2 = Done23ErrIrqFields::eTRIG6_DONE2;
    using eTRIG7_DONE2 = Done23ErrIrqFields::eTRIG7_DONE2;
    using eTRIG0_DONE3 = Done23ErrIrqFields::eTRIG0_DONE3;
    using eTRIG1_DONE3 = Done23ErrIrqFields::eTRIG1_DONE3;
    using eTRIG2_DONE3 = Done23ErrIrqFields::eTRIG2_DONE3;
    using eTRIG3_DONE3 = Done23ErrIrqFields::eTRIG3_DONE3;
    using eTRIG4_DONE3 = Done23ErrIrqFields::eTRIG4_DONE3;
    using eTRIG5_DONE3 = Done23ErrIrqFields::eTRIG5_DONE3;
    using eTRIG6_DONE3 = Done23ErrIrqFields::eTRIG6_DONE3;
    using eTRIG7_DONE3 = Done23ErrIrqFields::eTRIG7_DONE3;
    using eTRIG0_ERR = Done23ErrIrqFields::eTRIG0_ERR;
    using eTRIG1_ERR = Done23ErrIrqFields::eTRIG1_ERR;
    using eTRIG2_ERR = Done23ErrIrqFields::eTRIG2_ERR;
    using eTRIG3_ERR = Done23ErrIrqFields::eTRIG3_ERR;
    using eTRIG4_ERR = Done23ErrIrqFields::eTRIG4_ERR;
    using eTRIG5_ERR = Done23ErrIrqFields::eTRIG5_ERR;
    using eTRIG6_ERR = Done23ErrIrqFields::eTRIG6_ERR;
    using eTRIG7_ERR = Done23ErrIrqFields::eTRIG7_ERR;
    using TRIG0_DONE2 = Done23ErrIrqFields::TRIG0_DONE2;
    using TRIG1_DONE2 = Done23ErrIrqFields::TRIG1_DONE2;
    using TRIG2_DONE2 = Done23ErrIrqFields::TRIG2_DONE2;
    using TRIG3_DONE2 = Done23ErrIrqFields::TRIG3_DONE2;
    using TRIG4_DONE2 = Done23ErrIrqFields::TRIG4_DONE2;
    using TRIG5_DONE2 = Done23ErrIrqFields::TRIG5_DONE2;
    using TRIG6_DONE2 = Done23ErrIrqFields::TRIG6_DONE2;
    using TRIG7_DONE2 = Done23ErrIrqFields::TRIG7_DONE2;
    using TRIG0_DONE3 = Done23ErrIrqFields::TRIG0_DONE3;
    using TRIG1_DONE3 = Done23ErrIrqFields::TRIG1_DONE3;
    using TRIG2_DONE3 = Done23ErrIrqFields::TRIG2_DONE3;
    using TRIG3_DONE3 = Done23ErrIrqFields::TRIG3_DONE3;
    using TRIG4_DONE3 = Done23ErrIrqFields::TRIG4_DONE3;
    using TRIG5_DONE3 = Done23ErrIrqFields::TRIG5_DONE3;
    using TRIG6_DONE3 = Done23ErrIrqFields::TRIG6_DONE3;
    using TRIG7_DONE3 = Done23ErrIrqFields::TRIG7_DONE3;
    using TRIG0_ERR = Done23ErrIrqFields::TRIG0_ERR;
    using TRIG1_ERR = Done23ErrIrqFields::TRIG1_ERR;
    using TRIG2_ERR = Done23ErrIrqFields::TRIG2_ERR;
    using TRIG3_ERR = Done23ErrIrqFields::TRIG3_ERR;
    using TRIG4_ERR = Done23ErrIrqFields::TRIG4_ERR;
    using TRIG5_ERR = Done23ErrIrqFields::TRIG5_ERR;
    using TRIG6_ERR = Done23ErrIrqFields::TRIG6_ERR;
    using TRIG7_ERR = Done23ErrIrqFields::TRIG7_ERR;
  };

  // ETC DMA control Register
  struct DmaCtrlFields {
    enum class eTRIG0_ENABLE : std::uint32_t {
      // TRIG0 DMA request disabled.
      eTRIG0_ENABLE_0 = 0,
      // TRIG0 DMA request enabled.
      eTRIG0_ENABLE_1 = 1,
    };

    enum class eTRIG1_ENABLE : std::uint32_t {
      // TRIG1 DMA request disabled.
      eTRIG1_ENABLE_0 = 0,
      // TRIG1 DMA request enabled.
      eTRIG1_ENABLE_1 = 1,
    };

    enum class eTRIG2_ENABLE : std::uint32_t {
      // TRIG2 DMA request disabled.
      eTRIG2_ENABLE_0 = 0,
      // TRIG2 DMA request enabled.
      eTRIG2_ENABLE_1 = 1,
    };

    enum class eTRIG3_ENABLE : std::uint32_t {
      // TRIG3 DMA request disabled.
      eTRIG3_ENABLE_0 = 0,
      // TRIG3 DMA request enabled.
      eTRIG3_ENABLE_1 = 1,
    };

    enum class eTRIG4_ENABLE : std::uint32_t {
      // TRIG4 DMA request disabled.
      eTRIG4_ENABLE_0 = 0,
      // TRIG4 DMA request enabled.
      eTRIG4_ENABLE_1 = 1,
    };

    enum class eTRIG5_ENABLE : std::uint32_t {
      // TRIG5 DMA request disabled.
      eTRIG5_ENABLE_0 = 0,
      // TRIG5 DMA request enabled.
      eTRIG5_ENABLE_1 = 1,
    };

    enum class eTRIG6_ENABLE : std::uint32_t {
      // TRIG6 DMA request disabled.
      eTRIG6_ENABLE_0 = 0,
      // TRIG6 DMA request enabled.
      eTRIG6_ENABLE_1 = 1,
    };

    enum class eTRIG7_ENABLE : std::uint32_t {
      // TRIG7 DMA request disabled.
      eTRIG7_ENABLE_0 = 0,
      // TRIG7 DMA request enabled.
      eTRIG7_ENABLE_1 = 1,
    };

    enum class eTRIG0_REQ : std::uint32_t {
      // TRIG0_REQ not detected.
      eTRIG0_REQ_0 = 0,
      // TRIG0_REQ detected.
      eTRIG0_REQ_1 = 1,
    };

    enum class eTRIG1_REQ : std::uint32_t {
      // TRIG1_REQ not detected.
      eTRIG1_REQ_0 = 0,
      // TRIG1_REQ detected.
      eTRIG1_REQ_1 = 1,
    };

    enum class eTRIG2_REQ : std::uint32_t {
      // TRIG2_REQ not detected.
      eTRIG2_REQ_0 = 0,
      // TRIG2_REQ detected.
      eTRIG2_REQ_1 = 1,
    };

    enum class eTRIG3_REQ : std::uint32_t {
      // TRIG3_REQ not detected.
      eTRIG3_REQ_0 = 0,
      // TRIG3_REQ detected.
      eTRIG3_REQ_1 = 1,
    };

    enum class eTRIG4_REQ : std::uint32_t {
      // TRIG4_REQ not detected.
      eTRIG4_REQ_0 = 0,
      // TRIG4_REQ detected.
      eTRIG4_REQ_1 = 1,
    };

    enum class eTRIG5_REQ : std::uint32_t {
      // TRIG5_REQ not detected.
      eTRIG5_REQ_0 = 0,
      // TRIG5_REQ detected.
      eTRIG5_REQ_1 = 1,
    };

    enum class eTRIG6_REQ : std::uint32_t {
      // TRIG6_REQ not detected.
      eTRIG6_REQ_0 = 0,
      // TRIG6_REQ detected.
      eTRIG6_REQ_1 = 1,
    };

    enum class eTRIG7_REQ : std::uint32_t {
      // TRIG7_REQ not detected.
      eTRIG7_REQ_0 = 0,
      // TRIG7_REQ detected.
      eTRIG7_REQ_1 = 1,
    };

    // Enable DMA request when TRIG0 done.
    using TRIG0_ENABLE = ftl::mmio::Field<1, 0, eTRIG0_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA request when TRIG1 done.
    using TRIG1_ENABLE = ftl::mmio::Field<1, 1, eTRIG1_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA request when TRIG2 done.
    using TRIG2_ENABLE = ftl::mmio::Field<1, 2, eTRIG2_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA request when TRIG3 done.
    using TRIG3_ENABLE = ftl::mmio::Field<1, 3, eTRIG3_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA request when TRIG4 done.
    using TRIG4_ENABLE = ftl::mmio::Field<1, 4, eTRIG4_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA request when TRIG5 done.
    using TRIG5_ENABLE = ftl::mmio::Field<1, 5, eTRIG5_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA request when TRIG6 done.
    using TRIG6_ENABLE = ftl::mmio::Field<1, 6, eTRIG6_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable DMA request when TRIG7 done.
    using TRIG7_ENABLE = ftl::mmio::Field<1, 7, eTRIG7_ENABLE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Flag bit for DMA request
    using TRIG0_REQ = ftl::mmio::Field<1, 16, eTRIG0_REQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Flag bit for DMA request
    using TRIG1_REQ = ftl::mmio::Field<1, 17, eTRIG1_REQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Flag bit for DMA request
    using TRIG2_REQ = ftl::mmio::Field<1, 18, eTRIG2_REQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Flag bit for DMA request
    using TRIG3_REQ = ftl::mmio::Field<1, 19, eTRIG3_REQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Flag bit for DMA request
    using TRIG4_REQ = ftl::mmio::Field<1, 20, eTRIG4_REQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Flag bit for DMA request
    using TRIG5_REQ = ftl::mmio::Field<1, 21, eTRIG5_REQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Flag bit for DMA request
    using TRIG6_REQ = ftl::mmio::Field<1, 22, eTRIG6_REQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Flag bit for DMA request
    using TRIG7_REQ = ftl::mmio::Field<1, 23, eTRIG7_REQ, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct DmaCtrlFields

  struct DMA_CTRL : ftl::mmio::Register<
      0x4004800Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DmaCtrlFields::TRIG0_ENABLE,
      DmaCtrlFields::TRIG1_ENABLE,
      DmaCtrlFields::TRIG2_ENABLE,
      DmaCtrlFields::TRIG3_ENABLE,
      DmaCtrlFields::TRIG4_ENABLE,
      DmaCtrlFields::TRIG5_ENABLE,
      DmaCtrlFields::TRIG6_ENABLE,
      DmaCtrlFields::TRIG7_ENABLE,
      ftl::mmio::Reserved<8, 8>,
      DmaCtrlFields::TRIG0_REQ,
      DmaCtrlFields::TRIG1_REQ,
      DmaCtrlFields::TRIG2_REQ,
      DmaCtrlFields::TRIG3_REQ,
      DmaCtrlFields::TRIG4_REQ,
      DmaCtrlFields::TRIG5_REQ,
      DmaCtrlFields::TRIG6_REQ,
      DmaCtrlFields::TRIG7_REQ,
      ftl::mmio::Reserved<8, 24>> {
    using eTRIG0_ENABLE = DmaCtrlFields::eTRIG0_ENABLE;
    using eTRIG1_ENABLE = DmaCtrlFields::eTRIG1_ENABLE;
    using eTRIG2_ENABLE = DmaCtrlFields::eTRIG2_ENABLE;
    using eTRIG3_ENABLE = DmaCtrlFields::eTRIG3_ENABLE;
    using eTRIG4_ENABLE = DmaCtrlFields::eTRIG4_ENABLE;
    using eTRIG5_ENABLE = DmaCtrlFields::eTRIG5_ENABLE;
    using eTRIG6_ENABLE = DmaCtrlFields::eTRIG6_ENABLE;
    using eTRIG7_ENABLE = DmaCtrlFields::eTRIG7_ENABLE;
    using eTRIG0_REQ = DmaCtrlFields::eTRIG0_REQ;
    using eTRIG1_REQ = DmaCtrlFields::eTRIG1_REQ;
    using eTRIG2_REQ = DmaCtrlFields::eTRIG2_REQ;
    using eTRIG3_REQ = DmaCtrlFields::eTRIG3_REQ;
    using eTRIG4_REQ = DmaCtrlFields::eTRIG4_REQ;
    using eTRIG5_REQ = DmaCtrlFields::eTRIG5_REQ;
    using eTRIG6_REQ = DmaCtrlFields::eTRIG6_REQ;
    using eTRIG7_REQ = DmaCtrlFields::eTRIG7_REQ;
    using TRIG0_ENABLE = DmaCtrlFields::TRIG0_ENABLE;
    using TRIG1_ENABLE = DmaCtrlFields::TRIG1_ENABLE;
    using TRIG2_ENABLE = DmaCtrlFields::TRIG2_ENABLE;
    using TRIG3_ENABLE = DmaCtrlFields::TRIG3_ENABLE;
    using TRIG4_ENABLE = DmaCtrlFields::TRIG4_ENABLE;
    using TRIG5_ENABLE = DmaCtrlFields::TRIG5_ENABLE;
    using TRIG6_ENABLE = DmaCtrlFields::TRIG6_ENABLE;
    using TRIG7_ENABLE = DmaCtrlFields::TRIG7_ENABLE;
    using TRIG0_REQ = DmaCtrlFields::TRIG0_REQ;
    using TRIG1_REQ = DmaCtrlFields::TRIG1_REQ;
    using TRIG2_REQ = DmaCtrlFields::TRIG2_REQ;
    using TRIG3_REQ = DmaCtrlFields::TRIG3_REQ;
    using TRIG4_REQ = DmaCtrlFields::TRIG4_REQ;
    using TRIG5_REQ = DmaCtrlFields::TRIG5_REQ;
    using TRIG6_REQ = DmaCtrlFields::TRIG6_REQ;
    using TRIG7_REQ = DmaCtrlFields::TRIG7_REQ;
  };

  // ETC_TRIG Control Register
  struct Trig0CtrlFields {
    enum class eSW_TRIG : std::uint32_t {
      // No software trigger event generated.
      eSW_TRIG_0 = 0,
      // Software trigger event generated.
      eSW_TRIG_1 = 1,
    };

    enum class eTRIG_MODE : std::uint32_t {
      // Hardware trigger. The softerware trigger will be ignored.
      eTRIG_MODE_0 = 0,
      // Software trigger. The hardware trigger will be ignored.
      eTRIG_MODE_1 = 1,
    };

    enum class eTRIG_CHAIN : std::uint32_t {
      // Trigger chain length is 1
      eTRIG_CHAIN_0 = 0,
      // Trigger chain length is 2
      eTRIG_CHAIN_1 = 1,
      // Trigger chain length is 3
      eTRIG_CHAIN_2 = 2,
      // Trigger chain length is 4
      eTRIG_CHAIN_3 = 3,
      // Trigger chain length is 5
      eTRIG_CHAIN_4 = 4,
      // Trigger chain length is 6
      eTRIG_CHAIN_5 = 5,
      // Trigger chain length is 7
      eTRIG_CHAIN_6 = 6,
      // Trigger chain length is 8
      eTRIG_CHAIN_7 = 7,
    };

    enum class eSYNC_MODE : std::uint32_t {
      // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
      eSYNC_MODE_0 = 0,
      // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
      eSYNC_MODE_1 = 1,
    };

    enum class eCHAINx_DONE : std::uint32_t {
      // segment x done not detected.
      eCHAINx_DONE_0 = 0,
      // segment x done detected.
      eCHAINx_DONE_1 = 1,
    };

    // Software trigger. This field is self-clearing.
    using SW_TRIG = ftl::mmio::Field<1, 0, eSW_TRIG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger mode selection.
    using TRIG_MODE = ftl::mmio::Field<1, 4, eTRIG_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // The number of segments inside the trigger chain of TRIGa.
    using TRIG_CHAIN = ftl::mmio::Field<3, 8, eTRIG_CHAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // External trigger priority, 7 is highest priority, while 0 is lowest
    using TRIG_PRIORITY = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger synchronization mode selection
    using SYNC_MODE = ftl::mmio::Field<1, 16, eSYNC_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment x done detection
    using CHAINx_DONE = ftl::mmio::Field<8, 24, eCHAINx_DONE, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Trig0CtrlFields

  struct TRIG0_CTRL : ftl::mmio::Register<
      0x40048010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig0CtrlFields::SW_TRIG,
      ftl::mmio::Reserved<3, 1>,
      Trig0CtrlFields::TRIG_MODE,
      ftl::mmio::Reserved<3, 5>,
      Trig0CtrlFields::TRIG_CHAIN,
      ftl::mmio::Reserved<1, 11>,
      Trig0CtrlFields::TRIG_PRIORITY,
      ftl::mmio::Reserved<1, 15>,
      Trig0CtrlFields::SYNC_MODE,
      ftl::mmio::Reserved<7, 17>,
      Trig0CtrlFields::CHAINx_DONE> {
    using eSW_TRIG = Trig0CtrlFields::eSW_TRIG;
    using eTRIG_MODE = Trig0CtrlFields::eTRIG_MODE;
    using eTRIG_CHAIN = Trig0CtrlFields::eTRIG_CHAIN;
    using eSYNC_MODE = Trig0CtrlFields::eSYNC_MODE;
    using eCHAINx_DONE = Trig0CtrlFields::eCHAINx_DONE;
    using SW_TRIG = Trig0CtrlFields::SW_TRIG;
    using TRIG_MODE = Trig0CtrlFields::TRIG_MODE;
    using TRIG_CHAIN = Trig0CtrlFields::TRIG_CHAIN;
    using TRIG_PRIORITY = Trig0CtrlFields::TRIG_PRIORITY;
    using SYNC_MODE = Trig0CtrlFields::SYNC_MODE;
    using CHAINx_DONE = Trig0CtrlFields::CHAINx_DONE;
  };

  // ETC_TRIG Counter Register
  struct Trig0CounterFields {
    // TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    using INIT_DELAY = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIGGER sampling interval counter
    using SAMPLE_INTERVAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig0CounterFields

  struct TRIG0_COUNTER : ftl::mmio::Register<
      0x40048014u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig0CounterFields::INIT_DELAY,
      Trig0CounterFields::SAMPLE_INTERVAL> {
    using INIT_DELAY = Trig0CounterFields::INIT_DELAY;
    using SAMPLE_INTERVAL = Trig0CounterFields::SAMPLE_INTERVAL;
  };

  // ETC_TRIG Chain 0/1 Register
  struct Trig0Chain10Fields {
    enum class eCSEL0 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL0_0 = 0,
      // ADC CMD1 selected.
      eCSEL0_1 = 1,
      // ADC CMD2 selected.
      eCSEL0_2 = 2,
      // ADC CMD3 selected.
      eCSEL0_3 = 3,
      // ADC CMD4 selected.
      eCSEL0_4 = 4,
      // ADC CMD5 selected.
      eCSEL0_5 = 5,
      // ADC CMD6 selected.
      eCSEL0_6 = 6,
      // ADC CMD7 selected.
      eCSEL0_7 = 7,
      // ADC CMD8 selected.
      eCSEL0_8 = 8,
      // ADC CMD9 selected.
      eCSEL0_9 = 9,
      // ADC CMD10 selected.
      eCSEL0_10 = 10,
      // ADC CMD11 selected.
      eCSEL0_11 = 11,
      // ADC CMD12 selected.
      eCSEL0_12 = 12,
      // ADC CMD13 selected.
      eCSEL0_13 = 13,
      // ADC CMD14 selected.
      eCSEL0_14 = 14,
      // ADC CMD15 selected.
      eCSEL0_15 = 15,
    };

    enum class eHWTS0 : std::uint32_t {
      // no trigger selected
      eHWTS0_0 = 0,
      // ADC TRIG0 selected
      eHWTS0_1 = 1,
      // ADC TRIG1 selected
      eHWTS0_2 = 2,
      // ADC TRIG2 selected
      eHWTS0_4 = 4,
      // ADC TRIG3 selected
      eHWTS0_8 = 8,
      // ADC TRIG4 selected
      eHWTS0_16 = 16,
      // ADC TRIG5 selected
      eHWTS0_32 = 32,
      // ADC TRIG6 selected
      eHWTS0_64 = 64,
      // ADC TRIG7 selected
      eHWTS0_128 = 128,
    };

    enum class eB2B0 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B0_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B0_1 = 1,
    };

    enum class eIE0 : std::uint32_t {
      // Generate interrupt on Done0 when segment 0 finish.
      eIE0_0 = 0,
      // Generate interrupt on Done1 when segment 0 finish.
      eIE0_1 = 1,
      // Generate interrupt on Done2 when segment 0 finish.
      eIE0_2 = 2,
      // Generate interrupt on Done3 when segment 0 finish.
      eIE0_3 = 3,
    };

    enum class eIE0_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE0_EN_0 = 0,
      // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
      eIE0_EN_1 = 1,
    };

    enum class eCSEL1 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL1_0 = 0,
      // ADC CMD1 selected.
      eCSEL1_1 = 1,
      // ADC CMD2 selected.
      eCSEL1_2 = 2,
      // ADC CMD3 selected.
      eCSEL1_3 = 3,
      // ADC CMD4 selected.
      eCSEL1_4 = 4,
      // ADC CMD5 selected.
      eCSEL1_5 = 5,
      // ADC CMD6 selected.
      eCSEL1_6 = 6,
      // ADC CMD7 selected.
      eCSEL1_7 = 7,
      // ADC CMD8 selected.
      eCSEL1_8 = 8,
      // ADC CMD9 selected.
      eCSEL1_9 = 9,
      // ADC CMD10 selected.
      eCSEL1_10 = 10,
      // ADC CMD11 selected.
      eCSEL1_11 = 11,
      // ADC CMD12 selected.
      eCSEL1_12 = 12,
      // ADC CMD13 selected.
      eCSEL1_13 = 13,
      // ADC CMD14 selected.
      eCSEL1_14 = 14,
      // ADC CMD15 selected.
      eCSEL1_15 = 15,
    };

    enum class eHWTS1 : std::uint32_t {
      // no trigger selected
      eHWTS1_0 = 0,
      // ADC TRIG0 selected
      eHWTS1_1 = 1,
      // ADC TRIG1 selected
      eHWTS1_2 = 2,
      // ADC TRIG2 selected
      eHWTS1_4 = 4,
      // ADC TRIG3 selected
      eHWTS1_8 = 8,
      // ADC TRIG4 selected
      eHWTS1_16 = 16,
      // ADC TRIG5 selected
      eHWTS1_32 = 32,
      // ADC TRIG6 selected
      eHWTS1_64 = 64,
      // ADC TRIG7 selected
      eHWTS1_128 = 128,
    };

    enum class eB2B1 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B1_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B1_1 = 1,
    };

    enum class eIE1 : std::uint32_t {
      // Generate interrupt on Done0 when Segment 1 finish.
      eIE1_0 = 0,
      // Generate interrupt on Done1 when Segment 1 finish.
      eIE1_1 = 1,
      // Generate interrupt on Done2 when Segment 1 finish.
      eIE1_2 = 2,
      // Generate interrupt on Done3 when Segment 1 finish.
      eIE1_3 = 3,
    };

    enum class eIE1_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE1_EN_0 = 0,
      // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
      eIE1_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL0 = ftl::mmio::Field<4, 0, eCSEL0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 HWTS ADC hardware trigger selection
    using HWTS0 = ftl::mmio::Field<8, 4, eHWTS0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 B2B
    using B2B0 = ftl::mmio::Field<1, 12, eB2B0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    using IE0 = ftl::mmio::Field<2, 13, eIE0, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 0.
    using IE0_EN = ftl::mmio::Field<1, 15, eIE0_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL1 = ftl::mmio::Field<4, 16, eCSEL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 HWTS ADC hardware trigger selection
    using HWTS1 = ftl::mmio::Field<8, 20, eHWTS1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 B2B
    using B2B1 = ftl::mmio::Field<1, 28, eB2B1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    using IE1 = ftl::mmio::Field<2, 29, eIE1, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 1.
    using IE1_EN = ftl::mmio::Field<1, 31, eIE1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig0Chain10Fields

  struct TRIG0_CHAIN_1_0 : ftl::mmio::Register<
      0x40048018u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig0Chain10Fields::CSEL0,
      Trig0Chain10Fields::HWTS0,
      Trig0Chain10Fields::B2B0,
      Trig0Chain10Fields::IE0,
      Trig0Chain10Fields::IE0_EN,
      Trig0Chain10Fields::CSEL1,
      Trig0Chain10Fields::HWTS1,
      Trig0Chain10Fields::B2B1,
      Trig0Chain10Fields::IE1,
      Trig0Chain10Fields::IE1_EN> {
    using eCSEL0 = Trig0Chain10Fields::eCSEL0;
    using eHWTS0 = Trig0Chain10Fields::eHWTS0;
    using eB2B0 = Trig0Chain10Fields::eB2B0;
    using eIE0 = Trig0Chain10Fields::eIE0;
    using eIE0_EN = Trig0Chain10Fields::eIE0_EN;
    using eCSEL1 = Trig0Chain10Fields::eCSEL1;
    using eHWTS1 = Trig0Chain10Fields::eHWTS1;
    using eB2B1 = Trig0Chain10Fields::eB2B1;
    using eIE1 = Trig0Chain10Fields::eIE1;
    using eIE1_EN = Trig0Chain10Fields::eIE1_EN;
    using CSEL0 = Trig0Chain10Fields::CSEL0;
    using HWTS0 = Trig0Chain10Fields::HWTS0;
    using B2B0 = Trig0Chain10Fields::B2B0;
    using IE0 = Trig0Chain10Fields::IE0;
    using IE0_EN = Trig0Chain10Fields::IE0_EN;
    using CSEL1 = Trig0Chain10Fields::CSEL1;
    using HWTS1 = Trig0Chain10Fields::HWTS1;
    using B2B1 = Trig0Chain10Fields::B2B1;
    using IE1 = Trig0Chain10Fields::IE1;
    using IE1_EN = Trig0Chain10Fields::IE1_EN;
  };

  // ETC_TRIG Chain 2/3 Register
  struct Trig0Chain32Fields {
    enum class eCSEL2 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL2_0 = 0,
      // ADC CMD1 selected.
      eCSEL2_1 = 1,
      // ADC CMD2 selected.
      eCSEL2_2 = 2,
      // ADC CMD3 selected.
      eCSEL2_3 = 3,
      // ADC CMD4 selected.
      eCSEL2_4 = 4,
      // ADC CMD5 selected.
      eCSEL2_5 = 5,
      // ADC CMD6 selected.
      eCSEL2_6 = 6,
      // ADC CMD7 selected.
      eCSEL2_7 = 7,
      // ADC CMD8 selected.
      eCSEL2_8 = 8,
      // ADC CMD9 selected.
      eCSEL2_9 = 9,
      // ADC CMD10 selected.
      eCSEL2_10 = 10,
      // ADC CMD11 selected.
      eCSEL2_11 = 11,
      // ADC CMD12 selected.
      eCSEL2_12 = 12,
      // ADC CMD13 selected.
      eCSEL2_13 = 13,
      // ADC CMD14 selected.
      eCSEL2_14 = 14,
      // ADC CMD15 selected.
      eCSEL2_15 = 15,
    };

    enum class eHWTS2 : std::uint32_t {
      // no trigger selected
      eHWTS2_0 = 0,
      // ADC TRIG0 selected
      eHWTS2_1 = 1,
      // ADC TRIG1 selected
      eHWTS2_2 = 2,
      // ADC TRIG2 selected
      eHWTS2_4 = 4,
      // ADC TRIG3 selected
      eHWTS2_8 = 8,
      // ADC TRIG4 selected
      eHWTS2_16 = 16,
      // ADC TRIG5 selected
      eHWTS2_32 = 32,
      // ADC TRIG6 selected
      eHWTS2_64 = 64,
      // ADC TRIG7 selected
      eHWTS2_128 = 128,
    };

    enum class eB2B2 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B2_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B2_1 = 1,
    };

    enum class eIE2 : std::uint32_t {
      // Generate interrupt on Done0 when segment 2 finish.
      eIE2_0 = 0,
      // Generate interrupt on Done1 when segment 2 finish.
      eIE2_1 = 1,
      // Generate interrupt on Done2 when segment 2 finish.
      eIE2_2 = 2,
      // Generate interrupt on Done3 when segment 2 finish.
      eIE2_3 = 3,
    };

    enum class eIE2_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE2_EN_0 = 0,
      // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
      eIE2_EN_1 = 1,
    };

    enum class eCSEL3 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL3_0 = 0,
      // ADC CMD1 selected.
      eCSEL3_1 = 1,
      // ADC CMD2 selected.
      eCSEL3_2 = 2,
      // ADC CMD3 selected.
      eCSEL3_3 = 3,
      // ADC CMD4 selected.
      eCSEL3_4 = 4,
      // ADC CMD5 selected.
      eCSEL3_5 = 5,
      // ADC CMD6 selected.
      eCSEL3_6 = 6,
      // ADC CMD7 selected.
      eCSEL3_7 = 7,
      // ADC CMD8 selected.
      eCSEL3_8 = 8,
      // ADC CMD9 selected.
      eCSEL3_9 = 9,
      // ADC CMD10 selected.
      eCSEL3_10 = 10,
      // ADC CMD11 selected.
      eCSEL3_11 = 11,
      // ADC CMD12 selected.
      eCSEL3_12 = 12,
      // ADC CMD13 selected.
      eCSEL3_13 = 13,
      // ADC CMD14 selected.
      eCSEL3_14 = 14,
      // ADC CMD15 selected.
      eCSEL3_15 = 15,
    };

    enum class eHWTS3 : std::uint32_t {
      // no trigger selected
      eHWTS3_0 = 0,
      // ADC TRIG0 selected
      eHWTS3_1 = 1,
      // ADC TRIG1 selected
      eHWTS3_2 = 2,
      // ADC TRIG2 selected
      eHWTS3_4 = 4,
      // ADC TRIG3 selected
      eHWTS3_8 = 8,
      // ADC TRIG4 selected
      eHWTS3_16 = 16,
      // ADC TRIG5 selected
      eHWTS3_32 = 32,
      // ADC TRIG6 selected
      eHWTS3_64 = 64,
      // ADC TRIG7 selected
      eHWTS3_128 = 128,
    };

    enum class eB2B3 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B3_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B3_1 = 1,
    };

    enum class eIE3 : std::uint32_t {
      // Generate interrupt on Done0 when segment 3 finish.
      eIE3_0 = 0,
      // Generate interrupt on Done1 when segment 3 finish.
      eIE3_1 = 1,
      // Generate interrupt on Done2 when segment 3 finish.
      eIE3_2 = 2,
      // Generate interrupt on Done3 when segment 3 finish.
      eIE3_3 = 3,
    };

    enum class eIE3_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE3_EN_0 = 0,
      // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
      eIE3_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL2 = ftl::mmio::Field<4, 0, eCSEL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 HWTS ADC hardware trigger selection
    using HWTS2 = ftl::mmio::Field<8, 4, eHWTS2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 B2B
    using B2B2 = ftl::mmio::Field<1, 12, eB2B2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    using IE2 = ftl::mmio::Field<2, 13, eIE2, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 2.
    using IE2_EN = ftl::mmio::Field<1, 15, eIE2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL3 = ftl::mmio::Field<4, 16, eCSEL3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 HWTS ADC hardware trigger selection
    using HWTS3 = ftl::mmio::Field<8, 20, eHWTS3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 B2B
    using B2B3 = ftl::mmio::Field<1, 28, eB2B3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    using IE3 = ftl::mmio::Field<2, 29, eIE3, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 3.
    using IE3_EN = ftl::mmio::Field<1, 31, eIE3_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig0Chain32Fields

  struct TRIG0_CHAIN_3_2 : ftl::mmio::Register<
      0x4004801Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig0Chain32Fields::CSEL2,
      Trig0Chain32Fields::HWTS2,
      Trig0Chain32Fields::B2B2,
      Trig0Chain32Fields::IE2,
      Trig0Chain32Fields::IE2_EN,
      Trig0Chain32Fields::CSEL3,
      Trig0Chain32Fields::HWTS3,
      Trig0Chain32Fields::B2B3,
      Trig0Chain32Fields::IE3,
      Trig0Chain32Fields::IE3_EN> {
    using eCSEL2 = Trig0Chain32Fields::eCSEL2;
    using eHWTS2 = Trig0Chain32Fields::eHWTS2;
    using eB2B2 = Trig0Chain32Fields::eB2B2;
    using eIE2 = Trig0Chain32Fields::eIE2;
    using eIE2_EN = Trig0Chain32Fields::eIE2_EN;
    using eCSEL3 = Trig0Chain32Fields::eCSEL3;
    using eHWTS3 = Trig0Chain32Fields::eHWTS3;
    using eB2B3 = Trig0Chain32Fields::eB2B3;
    using eIE3 = Trig0Chain32Fields::eIE3;
    using eIE3_EN = Trig0Chain32Fields::eIE3_EN;
    using CSEL2 = Trig0Chain32Fields::CSEL2;
    using HWTS2 = Trig0Chain32Fields::HWTS2;
    using B2B2 = Trig0Chain32Fields::B2B2;
    using IE2 = Trig0Chain32Fields::IE2;
    using IE2_EN = Trig0Chain32Fields::IE2_EN;
    using CSEL3 = Trig0Chain32Fields::CSEL3;
    using HWTS3 = Trig0Chain32Fields::HWTS3;
    using B2B3 = Trig0Chain32Fields::B2B3;
    using IE3 = Trig0Chain32Fields::IE3;
    using IE3_EN = Trig0Chain32Fields::IE3_EN;
  };

  // ETC_TRIG Chain 4/5 Register
  struct Trig0Chain54Fields {
    enum class eCSEL4 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL4_0 = 0,
      // ADC CMD1 selected.
      eCSEL4_1 = 1,
      // ADC CMD2 selected.
      eCSEL4_2 = 2,
      // ADC CMD3 selected.
      eCSEL4_3 = 3,
      // ADC CMD4 selected.
      eCSEL4_4 = 4,
      // ADC CMD5 selected.
      eCSEL4_5 = 5,
      // ADC CMD6 selected.
      eCSEL4_6 = 6,
      // ADC CMD7 selected.
      eCSEL4_7 = 7,
      // ADC CMD8 selected.
      eCSEL4_8 = 8,
      // ADC CMD9 selected.
      eCSEL4_9 = 9,
      // ADC CMD10 selected.
      eCSEL4_10 = 10,
      // ADC CMD11 selected.
      eCSEL4_11 = 11,
      // ADC CMD12 selected.
      eCSEL4_12 = 12,
      // ADC CMD13 selected.
      eCSEL4_13 = 13,
      // ADC CMD14 selected.
      eCSEL4_14 = 14,
      // ADC CMD15 selected.
      eCSEL4_15 = 15,
    };

    enum class eHWTS4 : std::uint32_t {
      // no trigger selected
      eHWTS4_0 = 0,
      // ADC TRIG0 selected
      eHWTS4_1 = 1,
      // ADC TRIG1 selected
      eHWTS4_2 = 2,
      // ADC TRIG2 selected
      eHWTS4_4 = 4,
      // ADC TRIG3 selected
      eHWTS4_8 = 8,
      // ADC TRIG4 selected
      eHWTS4_16 = 16,
      // ADC TRIG5 selected
      eHWTS4_32 = 32,
      // ADC TRIG6 selected
      eHWTS4_64 = 64,
      // ADC TRIG7 selected
      eHWTS4_128 = 128,
    };

    enum class eB2B4 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B4_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B4_1 = 1,
    };

    enum class eIE4 : std::uint32_t {
      // Generate interrupt on Done0 when segment 4 finish.
      eIE4_0 = 0,
      // Generate interrupt on Done1 when segment 4 finish.
      eIE4_1 = 1,
      // Generate interrupt on Done2 when segment 4 finish.
      eIE4_2 = 2,
      // Generate interrupt on Done3 when segment 4 finish.
      eIE4_3 = 3,
    };

    enum class eIE4_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE4_EN_0 = 0,
      // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
      eIE4_EN_1 = 1,
    };

    enum class eCSEL5 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL5_0 = 0,
      // ADC CMD1 selected.
      eCSEL5_1 = 1,
      // ADC CMD2 selected.
      eCSEL5_2 = 2,
      // ADC CMD3 selected.
      eCSEL5_3 = 3,
      // ADC CMD4 selected.
      eCSEL5_4 = 4,
      // ADC CMD5 selected.
      eCSEL5_5 = 5,
      // ADC CMD6 selected.
      eCSEL5_6 = 6,
      // ADC CMD7 selected.
      eCSEL5_7 = 7,
      // ADC CMD8 selected.
      eCSEL5_8 = 8,
      // ADC CMD9 selected.
      eCSEL5_9 = 9,
      // ADC CMD10 selected.
      eCSEL5_10 = 10,
      // ADC CMD11 selected.
      eCSEL5_11 = 11,
      // ADC CMD12 selected.
      eCSEL5_12 = 12,
      // ADC CMD13 selected.
      eCSEL5_13 = 13,
      // ADC CMD14 selected.
      eCSEL5_14 = 14,
      // ADC CMD15 selected.
      eCSEL5_15 = 15,
    };

    enum class eHWTS5 : std::uint32_t {
      // no trigger selected
      eHWTS5_0 = 0,
      // ADC TRIG0 selected
      eHWTS5_1 = 1,
      // ADC TRIG1 selected
      eHWTS5_2 = 2,
      // ADC TRIG2 selected
      eHWTS5_4 = 4,
      // ADC TRIG3 selected
      eHWTS5_8 = 8,
      // ADC TRIG4 selected
      eHWTS5_16 = 16,
      // ADC TRIG5 selected
      eHWTS5_32 = 32,
      // ADC TRIG6 selected
      eHWTS5_64 = 64,
      // ADC TRIG7 selected
      eHWTS5_128 = 128,
    };

    enum class eB2B5 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B5_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B5_1 = 1,
    };

    enum class eIE5 : std::uint32_t {
      // Generate interrupt on Done0 when segment 5 finish.
      eIE5_0 = 0,
      // Generate interrupt on Done1 when segment 5 finish.
      eIE5_1 = 1,
      // Generate interrupt on Done2 when segment 5 finish.
      eIE5_2 = 2,
      // Generate interrupt on Done3 when segment 5 finish.
      eIE5_3 = 3,
    };

    enum class eIE5_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE5_EN_0 = 0,
      // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
      eIE5_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL4 = ftl::mmio::Field<4, 0, eCSEL4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 HWTS ADC hardware trigger selection
    using HWTS4 = ftl::mmio::Field<8, 4, eHWTS4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 B2B
    using B2B4 = ftl::mmio::Field<1, 12, eB2B4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    using IE4 = ftl::mmio::Field<2, 13, eIE4, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 4.
    using IE4_EN = ftl::mmio::Field<1, 15, eIE4_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL5 = ftl::mmio::Field<4, 16, eCSEL5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 HWTS ADC hardware trigger selection
    using HWTS5 = ftl::mmio::Field<8, 20, eHWTS5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 B2B
    using B2B5 = ftl::mmio::Field<1, 28, eB2B5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    using IE5 = ftl::mmio::Field<2, 29, eIE5, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 5.
    using IE5_EN = ftl::mmio::Field<1, 31, eIE5_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig0Chain54Fields

  struct TRIG0_CHAIN_5_4 : ftl::mmio::Register<
      0x40048020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig0Chain54Fields::CSEL4,
      Trig0Chain54Fields::HWTS4,
      Trig0Chain54Fields::B2B4,
      Trig0Chain54Fields::IE4,
      Trig0Chain54Fields::IE4_EN,
      Trig0Chain54Fields::CSEL5,
      Trig0Chain54Fields::HWTS5,
      Trig0Chain54Fields::B2B5,
      Trig0Chain54Fields::IE5,
      Trig0Chain54Fields::IE5_EN> {
    using eCSEL4 = Trig0Chain54Fields::eCSEL4;
    using eHWTS4 = Trig0Chain54Fields::eHWTS4;
    using eB2B4 = Trig0Chain54Fields::eB2B4;
    using eIE4 = Trig0Chain54Fields::eIE4;
    using eIE4_EN = Trig0Chain54Fields::eIE4_EN;
    using eCSEL5 = Trig0Chain54Fields::eCSEL5;
    using eHWTS5 = Trig0Chain54Fields::eHWTS5;
    using eB2B5 = Trig0Chain54Fields::eB2B5;
    using eIE5 = Trig0Chain54Fields::eIE5;
    using eIE5_EN = Trig0Chain54Fields::eIE5_EN;
    using CSEL4 = Trig0Chain54Fields::CSEL4;
    using HWTS4 = Trig0Chain54Fields::HWTS4;
    using B2B4 = Trig0Chain54Fields::B2B4;
    using IE4 = Trig0Chain54Fields::IE4;
    using IE4_EN = Trig0Chain54Fields::IE4_EN;
    using CSEL5 = Trig0Chain54Fields::CSEL5;
    using HWTS5 = Trig0Chain54Fields::HWTS5;
    using B2B5 = Trig0Chain54Fields::B2B5;
    using IE5 = Trig0Chain54Fields::IE5;
    using IE5_EN = Trig0Chain54Fields::IE5_EN;
  };

  // ETC_TRIG Chain 6/7 Register
  struct Trig0Chain76Fields {
    enum class eCSEL6 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL6_0 = 0,
      // ADC CMD1 selected.
      eCSEL6_1 = 1,
      // ADC CMD2 selected.
      eCSEL6_2 = 2,
      // ADC CMD3 selected.
      eCSEL6_3 = 3,
      // ADC CMD4 selected.
      eCSEL6_4 = 4,
      // ADC CMD5 selected.
      eCSEL6_5 = 5,
      // ADC CMD6 selected.
      eCSEL6_6 = 6,
      // ADC CMD7 selected.
      eCSEL6_7 = 7,
      // ADC CMD8 selected.
      eCSEL6_8 = 8,
      // ADC CMD9 selected.
      eCSEL6_9 = 9,
      // ADC CMD10 selected.
      eCSEL6_10 = 10,
      // ADC CMD11 selected.
      eCSEL6_11 = 11,
      // ADC CMD12 selected.
      eCSEL6_12 = 12,
      // ADC CMD13 selected.
      eCSEL6_13 = 13,
      // ADC CMD14 selected.
      eCSEL6_14 = 14,
      // ADC CMD15 selected.
      eCSEL6_15 = 15,
    };

    enum class eHWTS6 : std::uint32_t {
      // no trigger selected
      eHWTS6_0 = 0,
      // ADC TRIG0 selected
      eHWTS6_1 = 1,
      // ADC TRIG1 selected
      eHWTS6_2 = 2,
      // ADC TRIG2 selected
      eHWTS6_4 = 4,
      // ADC TRIG3 selected
      eHWTS6_8 = 8,
      // ADC TRIG4 selected
      eHWTS6_16 = 16,
      // ADC TRIG5 selected
      eHWTS6_32 = 32,
      // ADC TRIG6 selected
      eHWTS6_64 = 64,
      // ADC TRIG7 selected
      eHWTS6_128 = 128,
    };

    enum class eB2B6 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B6_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B6_1 = 1,
    };

    enum class eIE6 : std::uint32_t {
      // Generate interrupt on Done0 when segment 6 finish.
      eIE6_0 = 0,
      // Generate interrupt on Done1 when segment 6 finish.
      eIE6_1 = 1,
      // Generate interrupt on Done2 when segment 6 finish.
      eIE6_2 = 2,
      // Generate interrupt on Done3 when segment 6 finish.
      eIE6_3 = 3,
    };

    enum class eIE6_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE6_EN_0 = 0,
      // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
      eIE6_EN_1 = 1,
    };

    enum class eCSEL7 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL7_0 = 0,
      // ADC CMD1 selected.
      eCSEL7_1 = 1,
      // ADC CMD2 selected.
      eCSEL7_2 = 2,
      // ADC CMD3 selected.
      eCSEL7_3 = 3,
      // ADC CMD4 selected.
      eCSEL7_4 = 4,
      // ADC CMD5 selected.
      eCSEL7_5 = 5,
      // ADC CMD6 selected.
      eCSEL7_6 = 6,
      // ADC CMD7 selected.
      eCSEL7_7 = 7,
      // ADC CMD8 selected.
      eCSEL7_8 = 8,
      // ADC CMD9 selected.
      eCSEL7_9 = 9,
      // ADC CMD10 selected.
      eCSEL7_10 = 10,
      // ADC CMD11 selected.
      eCSEL7_11 = 11,
      // ADC CMD12 selected.
      eCSEL7_12 = 12,
      // ADC CMD13 selected.
      eCSEL7_13 = 13,
      // ADC CMD14 selected.
      eCSEL7_14 = 14,
      // ADC CMD15 selected.
      eCSEL7_15 = 15,
    };

    enum class eHWTS7 : std::uint32_t {
      // no trigger selected
      eHWTS7_0 = 0,
      // ADC TRIG0 selected
      eHWTS7_1 = 1,
      // ADC TRIG1 selected
      eHWTS7_2 = 2,
      // ADC TRIG2 selected
      eHWTS7_4 = 4,
      // ADC TRIG3 selected
      eHWTS7_8 = 8,
      // ADC TRIG4 selected
      eHWTS7_16 = 16,
      // ADC TRIG5 selected
      eHWTS7_32 = 32,
      // ADC TRIG6 selected
      eHWTS7_64 = 64,
      // ADC TRIG7 selected
      eHWTS7_128 = 128,
    };

    enum class eB2B7 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B7_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B7_1 = 1,
    };

    enum class eIE7 : std::uint32_t {
      // Generate interrupt on Done0 when segment 7 finish.
      eIE7_0 = 0,
      // Generate interrupt on Done1 when segment 7 finish.
      eIE7_1 = 1,
      // Generate interrupt on Done2 when segment 7 finish.
      eIE7_2 = 2,
      // Generate interrupt on Done3 when segment 7 finish.
      eIE7_3 = 3,
    };

    enum class eIE7_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE7_EN_0 = 0,
      // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
      eIE7_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL6 = ftl::mmio::Field<4, 0, eCSEL6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 HWTS ADC hardware trigger selection
    using HWTS6 = ftl::mmio::Field<8, 4, eHWTS6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 B2B
    using B2B6 = ftl::mmio::Field<1, 12, eB2B6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    using IE6 = ftl::mmio::Field<2, 13, eIE6, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 6.
    using IE6_EN = ftl::mmio::Field<1, 15, eIE6_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL7 = ftl::mmio::Field<4, 16, eCSEL7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 HWTS ADC hardware trigger selection
    using HWTS7 = ftl::mmio::Field<8, 20, eHWTS7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 B2B
    using B2B7 = ftl::mmio::Field<1, 28, eB2B7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    using IE7 = ftl::mmio::Field<2, 29, eIE7, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 7.
    using IE7_EN = ftl::mmio::Field<1, 31, eIE7_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig0Chain76Fields

  struct TRIG0_CHAIN_7_6 : ftl::mmio::Register<
      0x40048024u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig0Chain76Fields::CSEL6,
      Trig0Chain76Fields::HWTS6,
      Trig0Chain76Fields::B2B6,
      Trig0Chain76Fields::IE6,
      Trig0Chain76Fields::IE6_EN,
      Trig0Chain76Fields::CSEL7,
      Trig0Chain76Fields::HWTS7,
      Trig0Chain76Fields::B2B7,
      Trig0Chain76Fields::IE7,
      Trig0Chain76Fields::IE7_EN> {
    using eCSEL6 = Trig0Chain76Fields::eCSEL6;
    using eHWTS6 = Trig0Chain76Fields::eHWTS6;
    using eB2B6 = Trig0Chain76Fields::eB2B6;
    using eIE6 = Trig0Chain76Fields::eIE6;
    using eIE6_EN = Trig0Chain76Fields::eIE6_EN;
    using eCSEL7 = Trig0Chain76Fields::eCSEL7;
    using eHWTS7 = Trig0Chain76Fields::eHWTS7;
    using eB2B7 = Trig0Chain76Fields::eB2B7;
    using eIE7 = Trig0Chain76Fields::eIE7;
    using eIE7_EN = Trig0Chain76Fields::eIE7_EN;
    using CSEL6 = Trig0Chain76Fields::CSEL6;
    using HWTS6 = Trig0Chain76Fields::HWTS6;
    using B2B6 = Trig0Chain76Fields::B2B6;
    using IE6 = Trig0Chain76Fields::IE6;
    using IE6_EN = Trig0Chain76Fields::IE6_EN;
    using CSEL7 = Trig0Chain76Fields::CSEL7;
    using HWTS7 = Trig0Chain76Fields::HWTS7;
    using B2B7 = Trig0Chain76Fields::B2B7;
    using IE7 = Trig0Chain76Fields::IE7;
    using IE7_EN = Trig0Chain76Fields::IE7_EN;
  };

  // ETC_TRIG Result Data 1/0 Register
  struct Trig0Result10Fields {
    // Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA0 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA1 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig0Result10Fields

  struct TRIG0_RESULT_1_0 : ftl::mmio::Register<
      0x40048028u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig0Result10Fields::DATA0,
      ftl::mmio::Reserved<4, 12>,
      Trig0Result10Fields::DATA1,
      ftl::mmio::Reserved<4, 28>> {
    using DATA0 = Trig0Result10Fields::DATA0;
    using DATA1 = Trig0Result10Fields::DATA1;
  };

  // ETC_TRIG Result Data 3/2 Register
  struct Trig0Result32Fields {
    // Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA2 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA3 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig0Result32Fields

  struct TRIG0_RESULT_3_2 : ftl::mmio::Register<
      0x4004802Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig0Result32Fields::DATA2,
      ftl::mmio::Reserved<4, 12>,
      Trig0Result32Fields::DATA3,
      ftl::mmio::Reserved<4, 28>> {
    using DATA2 = Trig0Result32Fields::DATA2;
    using DATA3 = Trig0Result32Fields::DATA3;
  };

  // ETC_TRIG Result Data 5/4 Register
  struct Trig0Result54Fields {
    // Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA4 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA5 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig0Result54Fields

  struct TRIG0_RESULT_5_4 : ftl::mmio::Register<
      0x40048030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig0Result54Fields::DATA4,
      ftl::mmio::Reserved<4, 12>,
      Trig0Result54Fields::DATA5,
      ftl::mmio::Reserved<4, 28>> {
    using DATA4 = Trig0Result54Fields::DATA4;
    using DATA5 = Trig0Result54Fields::DATA5;
  };

  // ETC_TRIG Result Data 7/6 Register
  struct Trig0Result76Fields {
    // Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA6 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA7 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig0Result76Fields

  struct TRIG0_RESULT_7_6 : ftl::mmio::Register<
      0x40048034u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig0Result76Fields::DATA6,
      ftl::mmio::Reserved<4, 12>,
      Trig0Result76Fields::DATA7,
      ftl::mmio::Reserved<4, 28>> {
    using DATA6 = Trig0Result76Fields::DATA6;
    using DATA7 = Trig0Result76Fields::DATA7;
  };

  // ETC_TRIG Control Register
  struct Trig1CtrlFields {
    enum class eSW_TRIG : std::uint32_t {
      // No software trigger event generated.
      eSW_TRIG_0 = 0,
      // Software trigger event generated.
      eSW_TRIG_1 = 1,
    };

    enum class eTRIG_MODE : std::uint32_t {
      // Hardware trigger. The softerware trigger will be ignored.
      eTRIG_MODE_0 = 0,
      // Software trigger. The hardware trigger will be ignored.
      eTRIG_MODE_1 = 1,
    };

    enum class eTRIG_CHAIN : std::uint32_t {
      // Trigger chain length is 1
      eTRIG_CHAIN_0 = 0,
      // Trigger chain length is 2
      eTRIG_CHAIN_1 = 1,
      // Trigger chain length is 3
      eTRIG_CHAIN_2 = 2,
      // Trigger chain length is 4
      eTRIG_CHAIN_3 = 3,
      // Trigger chain length is 5
      eTRIG_CHAIN_4 = 4,
      // Trigger chain length is 6
      eTRIG_CHAIN_5 = 5,
      // Trigger chain length is 7
      eTRIG_CHAIN_6 = 6,
      // Trigger chain length is 8
      eTRIG_CHAIN_7 = 7,
    };

    enum class eSYNC_MODE : std::uint32_t {
      // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
      eSYNC_MODE_0 = 0,
      // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
      eSYNC_MODE_1 = 1,
    };

    enum class eCHAINx_DONE : std::uint32_t {
      // segment x done not detected.
      eCHAINx_DONE_0 = 0,
      // segment x done detected.
      eCHAINx_DONE_1 = 1,
    };

    // Software trigger. This field is self-clearing.
    using SW_TRIG = ftl::mmio::Field<1, 0, eSW_TRIG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger mode selection.
    using TRIG_MODE = ftl::mmio::Field<1, 4, eTRIG_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // The number of segments inside the trigger chain of TRIGa.
    using TRIG_CHAIN = ftl::mmio::Field<3, 8, eTRIG_CHAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // External trigger priority, 7 is highest priority, while 0 is lowest
    using TRIG_PRIORITY = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger synchronization mode selection
    using SYNC_MODE = ftl::mmio::Field<1, 16, eSYNC_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment x done detection
    using CHAINx_DONE = ftl::mmio::Field<8, 24, eCHAINx_DONE, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Trig1CtrlFields

  struct TRIG1_CTRL : ftl::mmio::Register<
      0x40048038u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig1CtrlFields::SW_TRIG,
      ftl::mmio::Reserved<3, 1>,
      Trig1CtrlFields::TRIG_MODE,
      ftl::mmio::Reserved<3, 5>,
      Trig1CtrlFields::TRIG_CHAIN,
      ftl::mmio::Reserved<1, 11>,
      Trig1CtrlFields::TRIG_PRIORITY,
      ftl::mmio::Reserved<1, 15>,
      Trig1CtrlFields::SYNC_MODE,
      ftl::mmio::Reserved<7, 17>,
      Trig1CtrlFields::CHAINx_DONE> {
    using eSW_TRIG = Trig1CtrlFields::eSW_TRIG;
    using eTRIG_MODE = Trig1CtrlFields::eTRIG_MODE;
    using eTRIG_CHAIN = Trig1CtrlFields::eTRIG_CHAIN;
    using eSYNC_MODE = Trig1CtrlFields::eSYNC_MODE;
    using eCHAINx_DONE = Trig1CtrlFields::eCHAINx_DONE;
    using SW_TRIG = Trig1CtrlFields::SW_TRIG;
    using TRIG_MODE = Trig1CtrlFields::TRIG_MODE;
    using TRIG_CHAIN = Trig1CtrlFields::TRIG_CHAIN;
    using TRIG_PRIORITY = Trig1CtrlFields::TRIG_PRIORITY;
    using SYNC_MODE = Trig1CtrlFields::SYNC_MODE;
    using CHAINx_DONE = Trig1CtrlFields::CHAINx_DONE;
  };

  // ETC_TRIG Counter Register
  struct Trig1CounterFields {
    // TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    using INIT_DELAY = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIGGER sampling interval counter
    using SAMPLE_INTERVAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig1CounterFields

  struct TRIG1_COUNTER : ftl::mmio::Register<
      0x4004803Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig1CounterFields::INIT_DELAY,
      Trig1CounterFields::SAMPLE_INTERVAL> {
    using INIT_DELAY = Trig1CounterFields::INIT_DELAY;
    using SAMPLE_INTERVAL = Trig1CounterFields::SAMPLE_INTERVAL;
  };

  // ETC_TRIG Chain 0/1 Register
  struct Trig1Chain10Fields {
    enum class eCSEL0 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL0_0 = 0,
      // ADC CMD1 selected.
      eCSEL0_1 = 1,
      // ADC CMD2 selected.
      eCSEL0_2 = 2,
      // ADC CMD3 selected.
      eCSEL0_3 = 3,
      // ADC CMD4 selected.
      eCSEL0_4 = 4,
      // ADC CMD5 selected.
      eCSEL0_5 = 5,
      // ADC CMD6 selected.
      eCSEL0_6 = 6,
      // ADC CMD7 selected.
      eCSEL0_7 = 7,
      // ADC CMD8 selected.
      eCSEL0_8 = 8,
      // ADC CMD9 selected.
      eCSEL0_9 = 9,
      // ADC CMD10 selected.
      eCSEL0_10 = 10,
      // ADC CMD11 selected.
      eCSEL0_11 = 11,
      // ADC CMD12 selected.
      eCSEL0_12 = 12,
      // ADC CMD13 selected.
      eCSEL0_13 = 13,
      // ADC CMD14 selected.
      eCSEL0_14 = 14,
      // ADC CMD15 selected.
      eCSEL0_15 = 15,
    };

    enum class eHWTS0 : std::uint32_t {
      // no trigger selected
      eHWTS0_0 = 0,
      // ADC TRIG0 selected
      eHWTS0_1 = 1,
      // ADC TRIG1 selected
      eHWTS0_2 = 2,
      // ADC TRIG2 selected
      eHWTS0_4 = 4,
      // ADC TRIG3 selected
      eHWTS0_8 = 8,
      // ADC TRIG4 selected
      eHWTS0_16 = 16,
      // ADC TRIG5 selected
      eHWTS0_32 = 32,
      // ADC TRIG6 selected
      eHWTS0_64 = 64,
      // ADC TRIG7 selected
      eHWTS0_128 = 128,
    };

    enum class eB2B0 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B0_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B0_1 = 1,
    };

    enum class eIE0 : std::uint32_t {
      // Generate interrupt on Done0 when segment 0 finish.
      eIE0_0 = 0,
      // Generate interrupt on Done1 when segment 0 finish.
      eIE0_1 = 1,
      // Generate interrupt on Done2 when segment 0 finish.
      eIE0_2 = 2,
      // Generate interrupt on Done3 when segment 0 finish.
      eIE0_3 = 3,
    };

    enum class eIE0_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE0_EN_0 = 0,
      // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
      eIE0_EN_1 = 1,
    };

    enum class eCSEL1 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL1_0 = 0,
      // ADC CMD1 selected.
      eCSEL1_1 = 1,
      // ADC CMD2 selected.
      eCSEL1_2 = 2,
      // ADC CMD3 selected.
      eCSEL1_3 = 3,
      // ADC CMD4 selected.
      eCSEL1_4 = 4,
      // ADC CMD5 selected.
      eCSEL1_5 = 5,
      // ADC CMD6 selected.
      eCSEL1_6 = 6,
      // ADC CMD7 selected.
      eCSEL1_7 = 7,
      // ADC CMD8 selected.
      eCSEL1_8 = 8,
      // ADC CMD9 selected.
      eCSEL1_9 = 9,
      // ADC CMD10 selected.
      eCSEL1_10 = 10,
      // ADC CMD11 selected.
      eCSEL1_11 = 11,
      // ADC CMD12 selected.
      eCSEL1_12 = 12,
      // ADC CMD13 selected.
      eCSEL1_13 = 13,
      // ADC CMD14 selected.
      eCSEL1_14 = 14,
      // ADC CMD15 selected.
      eCSEL1_15 = 15,
    };

    enum class eHWTS1 : std::uint32_t {
      // no trigger selected
      eHWTS1_0 = 0,
      // ADC TRIG0 selected
      eHWTS1_1 = 1,
      // ADC TRIG1 selected
      eHWTS1_2 = 2,
      // ADC TRIG2 selected
      eHWTS1_4 = 4,
      // ADC TRIG3 selected
      eHWTS1_8 = 8,
      // ADC TRIG4 selected
      eHWTS1_16 = 16,
      // ADC TRIG5 selected
      eHWTS1_32 = 32,
      // ADC TRIG6 selected
      eHWTS1_64 = 64,
      // ADC TRIG7 selected
      eHWTS1_128 = 128,
    };

    enum class eB2B1 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B1_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B1_1 = 1,
    };

    enum class eIE1 : std::uint32_t {
      // Generate interrupt on Done0 when Segment 1 finish.
      eIE1_0 = 0,
      // Generate interrupt on Done1 when Segment 1 finish.
      eIE1_1 = 1,
      // Generate interrupt on Done2 when Segment 1 finish.
      eIE1_2 = 2,
      // Generate interrupt on Done3 when Segment 1 finish.
      eIE1_3 = 3,
    };

    enum class eIE1_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE1_EN_0 = 0,
      // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
      eIE1_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL0 = ftl::mmio::Field<4, 0, eCSEL0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 HWTS ADC hardware trigger selection
    using HWTS0 = ftl::mmio::Field<8, 4, eHWTS0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 B2B
    using B2B0 = ftl::mmio::Field<1, 12, eB2B0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    using IE0 = ftl::mmio::Field<2, 13, eIE0, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 0.
    using IE0_EN = ftl::mmio::Field<1, 15, eIE0_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL1 = ftl::mmio::Field<4, 16, eCSEL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 HWTS ADC hardware trigger selection
    using HWTS1 = ftl::mmio::Field<8, 20, eHWTS1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 B2B
    using B2B1 = ftl::mmio::Field<1, 28, eB2B1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    using IE1 = ftl::mmio::Field<2, 29, eIE1, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 1.
    using IE1_EN = ftl::mmio::Field<1, 31, eIE1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig1Chain10Fields

  struct TRIG1_CHAIN_1_0 : ftl::mmio::Register<
      0x40048040u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig1Chain10Fields::CSEL0,
      Trig1Chain10Fields::HWTS0,
      Trig1Chain10Fields::B2B0,
      Trig1Chain10Fields::IE0,
      Trig1Chain10Fields::IE0_EN,
      Trig1Chain10Fields::CSEL1,
      Trig1Chain10Fields::HWTS1,
      Trig1Chain10Fields::B2B1,
      Trig1Chain10Fields::IE1,
      Trig1Chain10Fields::IE1_EN> {
    using eCSEL0 = Trig1Chain10Fields::eCSEL0;
    using eHWTS0 = Trig1Chain10Fields::eHWTS0;
    using eB2B0 = Trig1Chain10Fields::eB2B0;
    using eIE0 = Trig1Chain10Fields::eIE0;
    using eIE0_EN = Trig1Chain10Fields::eIE0_EN;
    using eCSEL1 = Trig1Chain10Fields::eCSEL1;
    using eHWTS1 = Trig1Chain10Fields::eHWTS1;
    using eB2B1 = Trig1Chain10Fields::eB2B1;
    using eIE1 = Trig1Chain10Fields::eIE1;
    using eIE1_EN = Trig1Chain10Fields::eIE1_EN;
    using CSEL0 = Trig1Chain10Fields::CSEL0;
    using HWTS0 = Trig1Chain10Fields::HWTS0;
    using B2B0 = Trig1Chain10Fields::B2B0;
    using IE0 = Trig1Chain10Fields::IE0;
    using IE0_EN = Trig1Chain10Fields::IE0_EN;
    using CSEL1 = Trig1Chain10Fields::CSEL1;
    using HWTS1 = Trig1Chain10Fields::HWTS1;
    using B2B1 = Trig1Chain10Fields::B2B1;
    using IE1 = Trig1Chain10Fields::IE1;
    using IE1_EN = Trig1Chain10Fields::IE1_EN;
  };

  // ETC_TRIG Chain 2/3 Register
  struct Trig1Chain32Fields {
    enum class eCSEL2 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL2_0 = 0,
      // ADC CMD1 selected.
      eCSEL2_1 = 1,
      // ADC CMD2 selected.
      eCSEL2_2 = 2,
      // ADC CMD3 selected.
      eCSEL2_3 = 3,
      // ADC CMD4 selected.
      eCSEL2_4 = 4,
      // ADC CMD5 selected.
      eCSEL2_5 = 5,
      // ADC CMD6 selected.
      eCSEL2_6 = 6,
      // ADC CMD7 selected.
      eCSEL2_7 = 7,
      // ADC CMD8 selected.
      eCSEL2_8 = 8,
      // ADC CMD9 selected.
      eCSEL2_9 = 9,
      // ADC CMD10 selected.
      eCSEL2_10 = 10,
      // ADC CMD11 selected.
      eCSEL2_11 = 11,
      // ADC CMD12 selected.
      eCSEL2_12 = 12,
      // ADC CMD13 selected.
      eCSEL2_13 = 13,
      // ADC CMD14 selected.
      eCSEL2_14 = 14,
      // ADC CMD15 selected.
      eCSEL2_15 = 15,
    };

    enum class eHWTS2 : std::uint32_t {
      // no trigger selected
      eHWTS2_0 = 0,
      // ADC TRIG0 selected
      eHWTS2_1 = 1,
      // ADC TRIG1 selected
      eHWTS2_2 = 2,
      // ADC TRIG2 selected
      eHWTS2_4 = 4,
      // ADC TRIG3 selected
      eHWTS2_8 = 8,
      // ADC TRIG4 selected
      eHWTS2_16 = 16,
      // ADC TRIG5 selected
      eHWTS2_32 = 32,
      // ADC TRIG6 selected
      eHWTS2_64 = 64,
      // ADC TRIG7 selected
      eHWTS2_128 = 128,
    };

    enum class eB2B2 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B2_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B2_1 = 1,
    };

    enum class eIE2 : std::uint32_t {
      // Generate interrupt on Done0 when segment 2 finish.
      eIE2_0 = 0,
      // Generate interrupt on Done1 when segment 2 finish.
      eIE2_1 = 1,
      // Generate interrupt on Done2 when segment 2 finish.
      eIE2_2 = 2,
      // Generate interrupt on Done3 when segment 2 finish.
      eIE2_3 = 3,
    };

    enum class eIE2_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE2_EN_0 = 0,
      // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
      eIE2_EN_1 = 1,
    };

    enum class eCSEL3 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL3_0 = 0,
      // ADC CMD1 selected.
      eCSEL3_1 = 1,
      // ADC CMD2 selected.
      eCSEL3_2 = 2,
      // ADC CMD3 selected.
      eCSEL3_3 = 3,
      // ADC CMD4 selected.
      eCSEL3_4 = 4,
      // ADC CMD5 selected.
      eCSEL3_5 = 5,
      // ADC CMD6 selected.
      eCSEL3_6 = 6,
      // ADC CMD7 selected.
      eCSEL3_7 = 7,
      // ADC CMD8 selected.
      eCSEL3_8 = 8,
      // ADC CMD9 selected.
      eCSEL3_9 = 9,
      // ADC CMD10 selected.
      eCSEL3_10 = 10,
      // ADC CMD11 selected.
      eCSEL3_11 = 11,
      // ADC CMD12 selected.
      eCSEL3_12 = 12,
      // ADC CMD13 selected.
      eCSEL3_13 = 13,
      // ADC CMD14 selected.
      eCSEL3_14 = 14,
      // ADC CMD15 selected.
      eCSEL3_15 = 15,
    };

    enum class eHWTS3 : std::uint32_t {
      // no trigger selected
      eHWTS3_0 = 0,
      // ADC TRIG0 selected
      eHWTS3_1 = 1,
      // ADC TRIG1 selected
      eHWTS3_2 = 2,
      // ADC TRIG2 selected
      eHWTS3_4 = 4,
      // ADC TRIG3 selected
      eHWTS3_8 = 8,
      // ADC TRIG4 selected
      eHWTS3_16 = 16,
      // ADC TRIG5 selected
      eHWTS3_32 = 32,
      // ADC TRIG6 selected
      eHWTS3_64 = 64,
      // ADC TRIG7 selected
      eHWTS3_128 = 128,
    };

    enum class eB2B3 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B3_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B3_1 = 1,
    };

    enum class eIE3 : std::uint32_t {
      // Generate interrupt on Done0 when segment 3 finish.
      eIE3_0 = 0,
      // Generate interrupt on Done1 when segment 3 finish.
      eIE3_1 = 1,
      // Generate interrupt on Done2 when segment 3 finish.
      eIE3_2 = 2,
      // Generate interrupt on Done3 when segment 3 finish.
      eIE3_3 = 3,
    };

    enum class eIE3_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE3_EN_0 = 0,
      // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
      eIE3_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL2 = ftl::mmio::Field<4, 0, eCSEL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 HWTS ADC hardware trigger selection
    using HWTS2 = ftl::mmio::Field<8, 4, eHWTS2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 B2B
    using B2B2 = ftl::mmio::Field<1, 12, eB2B2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    using IE2 = ftl::mmio::Field<2, 13, eIE2, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 2.
    using IE2_EN = ftl::mmio::Field<1, 15, eIE2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL3 = ftl::mmio::Field<4, 16, eCSEL3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 HWTS ADC hardware trigger selection
    using HWTS3 = ftl::mmio::Field<8, 20, eHWTS3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 B2B
    using B2B3 = ftl::mmio::Field<1, 28, eB2B3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    using IE3 = ftl::mmio::Field<2, 29, eIE3, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 3.
    using IE3_EN = ftl::mmio::Field<1, 31, eIE3_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig1Chain32Fields

  struct TRIG1_CHAIN_3_2 : ftl::mmio::Register<
      0x40048044u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig1Chain32Fields::CSEL2,
      Trig1Chain32Fields::HWTS2,
      Trig1Chain32Fields::B2B2,
      Trig1Chain32Fields::IE2,
      Trig1Chain32Fields::IE2_EN,
      Trig1Chain32Fields::CSEL3,
      Trig1Chain32Fields::HWTS3,
      Trig1Chain32Fields::B2B3,
      Trig1Chain32Fields::IE3,
      Trig1Chain32Fields::IE3_EN> {
    using eCSEL2 = Trig1Chain32Fields::eCSEL2;
    using eHWTS2 = Trig1Chain32Fields::eHWTS2;
    using eB2B2 = Trig1Chain32Fields::eB2B2;
    using eIE2 = Trig1Chain32Fields::eIE2;
    using eIE2_EN = Trig1Chain32Fields::eIE2_EN;
    using eCSEL3 = Trig1Chain32Fields::eCSEL3;
    using eHWTS3 = Trig1Chain32Fields::eHWTS3;
    using eB2B3 = Trig1Chain32Fields::eB2B3;
    using eIE3 = Trig1Chain32Fields::eIE3;
    using eIE3_EN = Trig1Chain32Fields::eIE3_EN;
    using CSEL2 = Trig1Chain32Fields::CSEL2;
    using HWTS2 = Trig1Chain32Fields::HWTS2;
    using B2B2 = Trig1Chain32Fields::B2B2;
    using IE2 = Trig1Chain32Fields::IE2;
    using IE2_EN = Trig1Chain32Fields::IE2_EN;
    using CSEL3 = Trig1Chain32Fields::CSEL3;
    using HWTS3 = Trig1Chain32Fields::HWTS3;
    using B2B3 = Trig1Chain32Fields::B2B3;
    using IE3 = Trig1Chain32Fields::IE3;
    using IE3_EN = Trig1Chain32Fields::IE3_EN;
  };

  // ETC_TRIG Chain 4/5 Register
  struct Trig1Chain54Fields {
    enum class eCSEL4 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL4_0 = 0,
      // ADC CMD1 selected.
      eCSEL4_1 = 1,
      // ADC CMD2 selected.
      eCSEL4_2 = 2,
      // ADC CMD3 selected.
      eCSEL4_3 = 3,
      // ADC CMD4 selected.
      eCSEL4_4 = 4,
      // ADC CMD5 selected.
      eCSEL4_5 = 5,
      // ADC CMD6 selected.
      eCSEL4_6 = 6,
      // ADC CMD7 selected.
      eCSEL4_7 = 7,
      // ADC CMD8 selected.
      eCSEL4_8 = 8,
      // ADC CMD9 selected.
      eCSEL4_9 = 9,
      // ADC CMD10 selected.
      eCSEL4_10 = 10,
      // ADC CMD11 selected.
      eCSEL4_11 = 11,
      // ADC CMD12 selected.
      eCSEL4_12 = 12,
      // ADC CMD13 selected.
      eCSEL4_13 = 13,
      // ADC CMD14 selected.
      eCSEL4_14 = 14,
      // ADC CMD15 selected.
      eCSEL4_15 = 15,
    };

    enum class eHWTS4 : std::uint32_t {
      // no trigger selected
      eHWTS4_0 = 0,
      // ADC TRIG0 selected
      eHWTS4_1 = 1,
      // ADC TRIG1 selected
      eHWTS4_2 = 2,
      // ADC TRIG2 selected
      eHWTS4_4 = 4,
      // ADC TRIG3 selected
      eHWTS4_8 = 8,
      // ADC TRIG4 selected
      eHWTS4_16 = 16,
      // ADC TRIG5 selected
      eHWTS4_32 = 32,
      // ADC TRIG6 selected
      eHWTS4_64 = 64,
      // ADC TRIG7 selected
      eHWTS4_128 = 128,
    };

    enum class eB2B4 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B4_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B4_1 = 1,
    };

    enum class eIE4 : std::uint32_t {
      // Generate interrupt on Done0 when segment 4 finish.
      eIE4_0 = 0,
      // Generate interrupt on Done1 when segment 4 finish.
      eIE4_1 = 1,
      // Generate interrupt on Done2 when segment 4 finish.
      eIE4_2 = 2,
      // Generate interrupt on Done3 when segment 4 finish.
      eIE4_3 = 3,
    };

    enum class eIE4_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE4_EN_0 = 0,
      // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
      eIE4_EN_1 = 1,
    };

    enum class eCSEL5 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL5_0 = 0,
      // ADC CMD1 selected.
      eCSEL5_1 = 1,
      // ADC CMD2 selected.
      eCSEL5_2 = 2,
      // ADC CMD3 selected.
      eCSEL5_3 = 3,
      // ADC CMD4 selected.
      eCSEL5_4 = 4,
      // ADC CMD5 selected.
      eCSEL5_5 = 5,
      // ADC CMD6 selected.
      eCSEL5_6 = 6,
      // ADC CMD7 selected.
      eCSEL5_7 = 7,
      // ADC CMD8 selected.
      eCSEL5_8 = 8,
      // ADC CMD9 selected.
      eCSEL5_9 = 9,
      // ADC CMD10 selected.
      eCSEL5_10 = 10,
      // ADC CMD11 selected.
      eCSEL5_11 = 11,
      // ADC CMD12 selected.
      eCSEL5_12 = 12,
      // ADC CMD13 selected.
      eCSEL5_13 = 13,
      // ADC CMD14 selected.
      eCSEL5_14 = 14,
      // ADC CMD15 selected.
      eCSEL5_15 = 15,
    };

    enum class eHWTS5 : std::uint32_t {
      // no trigger selected
      eHWTS5_0 = 0,
      // ADC TRIG0 selected
      eHWTS5_1 = 1,
      // ADC TRIG1 selected
      eHWTS5_2 = 2,
      // ADC TRIG2 selected
      eHWTS5_4 = 4,
      // ADC TRIG3 selected
      eHWTS5_8 = 8,
      // ADC TRIG4 selected
      eHWTS5_16 = 16,
      // ADC TRIG5 selected
      eHWTS5_32 = 32,
      // ADC TRIG6 selected
      eHWTS5_64 = 64,
      // ADC TRIG7 selected
      eHWTS5_128 = 128,
    };

    enum class eB2B5 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B5_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B5_1 = 1,
    };

    enum class eIE5 : std::uint32_t {
      // Generate interrupt on Done0 when segment 5 finish.
      eIE5_0 = 0,
      // Generate interrupt on Done1 when segment 5 finish.
      eIE5_1 = 1,
      // Generate interrupt on Done2 when segment 5 finish.
      eIE5_2 = 2,
      // Generate interrupt on Done3 when segment 5 finish.
      eIE5_3 = 3,
    };

    enum class eIE5_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE5_EN_0 = 0,
      // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
      eIE5_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL4 = ftl::mmio::Field<4, 0, eCSEL4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 HWTS ADC hardware trigger selection
    using HWTS4 = ftl::mmio::Field<8, 4, eHWTS4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 B2B
    using B2B4 = ftl::mmio::Field<1, 12, eB2B4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    using IE4 = ftl::mmio::Field<2, 13, eIE4, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 4.
    using IE4_EN = ftl::mmio::Field<1, 15, eIE4_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL5 = ftl::mmio::Field<4, 16, eCSEL5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 HWTS ADC hardware trigger selection
    using HWTS5 = ftl::mmio::Field<8, 20, eHWTS5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 B2B
    using B2B5 = ftl::mmio::Field<1, 28, eB2B5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    using IE5 = ftl::mmio::Field<2, 29, eIE5, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 5.
    using IE5_EN = ftl::mmio::Field<1, 31, eIE5_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig1Chain54Fields

  struct TRIG1_CHAIN_5_4 : ftl::mmio::Register<
      0x40048048u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig1Chain54Fields::CSEL4,
      Trig1Chain54Fields::HWTS4,
      Trig1Chain54Fields::B2B4,
      Trig1Chain54Fields::IE4,
      Trig1Chain54Fields::IE4_EN,
      Trig1Chain54Fields::CSEL5,
      Trig1Chain54Fields::HWTS5,
      Trig1Chain54Fields::B2B5,
      Trig1Chain54Fields::IE5,
      Trig1Chain54Fields::IE5_EN> {
    using eCSEL4 = Trig1Chain54Fields::eCSEL4;
    using eHWTS4 = Trig1Chain54Fields::eHWTS4;
    using eB2B4 = Trig1Chain54Fields::eB2B4;
    using eIE4 = Trig1Chain54Fields::eIE4;
    using eIE4_EN = Trig1Chain54Fields::eIE4_EN;
    using eCSEL5 = Trig1Chain54Fields::eCSEL5;
    using eHWTS5 = Trig1Chain54Fields::eHWTS5;
    using eB2B5 = Trig1Chain54Fields::eB2B5;
    using eIE5 = Trig1Chain54Fields::eIE5;
    using eIE5_EN = Trig1Chain54Fields::eIE5_EN;
    using CSEL4 = Trig1Chain54Fields::CSEL4;
    using HWTS4 = Trig1Chain54Fields::HWTS4;
    using B2B4 = Trig1Chain54Fields::B2B4;
    using IE4 = Trig1Chain54Fields::IE4;
    using IE4_EN = Trig1Chain54Fields::IE4_EN;
    using CSEL5 = Trig1Chain54Fields::CSEL5;
    using HWTS5 = Trig1Chain54Fields::HWTS5;
    using B2B5 = Trig1Chain54Fields::B2B5;
    using IE5 = Trig1Chain54Fields::IE5;
    using IE5_EN = Trig1Chain54Fields::IE5_EN;
  };

  // ETC_TRIG Chain 6/7 Register
  struct Trig1Chain76Fields {
    enum class eCSEL6 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL6_0 = 0,
      // ADC CMD1 selected.
      eCSEL6_1 = 1,
      // ADC CMD2 selected.
      eCSEL6_2 = 2,
      // ADC CMD3 selected.
      eCSEL6_3 = 3,
      // ADC CMD4 selected.
      eCSEL6_4 = 4,
      // ADC CMD5 selected.
      eCSEL6_5 = 5,
      // ADC CMD6 selected.
      eCSEL6_6 = 6,
      // ADC CMD7 selected.
      eCSEL6_7 = 7,
      // ADC CMD8 selected.
      eCSEL6_8 = 8,
      // ADC CMD9 selected.
      eCSEL6_9 = 9,
      // ADC CMD10 selected.
      eCSEL6_10 = 10,
      // ADC CMD11 selected.
      eCSEL6_11 = 11,
      // ADC CMD12 selected.
      eCSEL6_12 = 12,
      // ADC CMD13 selected.
      eCSEL6_13 = 13,
      // ADC CMD14 selected.
      eCSEL6_14 = 14,
      // ADC CMD15 selected.
      eCSEL6_15 = 15,
    };

    enum class eHWTS6 : std::uint32_t {
      // no trigger selected
      eHWTS6_0 = 0,
      // ADC TRIG0 selected
      eHWTS6_1 = 1,
      // ADC TRIG1 selected
      eHWTS6_2 = 2,
      // ADC TRIG2 selected
      eHWTS6_4 = 4,
      // ADC TRIG3 selected
      eHWTS6_8 = 8,
      // ADC TRIG4 selected
      eHWTS6_16 = 16,
      // ADC TRIG5 selected
      eHWTS6_32 = 32,
      // ADC TRIG6 selected
      eHWTS6_64 = 64,
      // ADC TRIG7 selected
      eHWTS6_128 = 128,
    };

    enum class eB2B6 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B6_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B6_1 = 1,
    };

    enum class eIE6 : std::uint32_t {
      // Generate interrupt on Done0 when segment 6 finish.
      eIE6_0 = 0,
      // Generate interrupt on Done1 when segment 6 finish.
      eIE6_1 = 1,
      // Generate interrupt on Done2 when segment 6 finish.
      eIE6_2 = 2,
      // Generate interrupt on Done3 when segment 6 finish.
      eIE6_3 = 3,
    };

    enum class eIE6_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE6_EN_0 = 0,
      // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
      eIE6_EN_1 = 1,
    };

    enum class eCSEL7 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL7_0 = 0,
      // ADC CMD1 selected.
      eCSEL7_1 = 1,
      // ADC CMD2 selected.
      eCSEL7_2 = 2,
      // ADC CMD3 selected.
      eCSEL7_3 = 3,
      // ADC CMD4 selected.
      eCSEL7_4 = 4,
      // ADC CMD5 selected.
      eCSEL7_5 = 5,
      // ADC CMD6 selected.
      eCSEL7_6 = 6,
      // ADC CMD7 selected.
      eCSEL7_7 = 7,
      // ADC CMD8 selected.
      eCSEL7_8 = 8,
      // ADC CMD9 selected.
      eCSEL7_9 = 9,
      // ADC CMD10 selected.
      eCSEL7_10 = 10,
      // ADC CMD11 selected.
      eCSEL7_11 = 11,
      // ADC CMD12 selected.
      eCSEL7_12 = 12,
      // ADC CMD13 selected.
      eCSEL7_13 = 13,
      // ADC CMD14 selected.
      eCSEL7_14 = 14,
      // ADC CMD15 selected.
      eCSEL7_15 = 15,
    };

    enum class eHWTS7 : std::uint32_t {
      // no trigger selected
      eHWTS7_0 = 0,
      // ADC TRIG0 selected
      eHWTS7_1 = 1,
      // ADC TRIG1 selected
      eHWTS7_2 = 2,
      // ADC TRIG2 selected
      eHWTS7_4 = 4,
      // ADC TRIG3 selected
      eHWTS7_8 = 8,
      // ADC TRIG4 selected
      eHWTS7_16 = 16,
      // ADC TRIG5 selected
      eHWTS7_32 = 32,
      // ADC TRIG6 selected
      eHWTS7_64 = 64,
      // ADC TRIG7 selected
      eHWTS7_128 = 128,
    };

    enum class eB2B7 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B7_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B7_1 = 1,
    };

    enum class eIE7 : std::uint32_t {
      // Generate interrupt on Done0 when segment 7 finish.
      eIE7_0 = 0,
      // Generate interrupt on Done1 when segment 7 finish.
      eIE7_1 = 1,
      // Generate interrupt on Done2 when segment 7 finish.
      eIE7_2 = 2,
      // Generate interrupt on Done3 when segment 7 finish.
      eIE7_3 = 3,
    };

    enum class eIE7_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE7_EN_0 = 0,
      // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
      eIE7_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL6 = ftl::mmio::Field<4, 0, eCSEL6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 HWTS ADC hardware trigger selection
    using HWTS6 = ftl::mmio::Field<8, 4, eHWTS6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 B2B
    using B2B6 = ftl::mmio::Field<1, 12, eB2B6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    using IE6 = ftl::mmio::Field<2, 13, eIE6, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 6.
    using IE6_EN = ftl::mmio::Field<1, 15, eIE6_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL7 = ftl::mmio::Field<4, 16, eCSEL7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 HWTS ADC hardware trigger selection
    using HWTS7 = ftl::mmio::Field<8, 20, eHWTS7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 B2B
    using B2B7 = ftl::mmio::Field<1, 28, eB2B7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    using IE7 = ftl::mmio::Field<2, 29, eIE7, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 7.
    using IE7_EN = ftl::mmio::Field<1, 31, eIE7_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig1Chain76Fields

  struct TRIG1_CHAIN_7_6 : ftl::mmio::Register<
      0x4004804Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig1Chain76Fields::CSEL6,
      Trig1Chain76Fields::HWTS6,
      Trig1Chain76Fields::B2B6,
      Trig1Chain76Fields::IE6,
      Trig1Chain76Fields::IE6_EN,
      Trig1Chain76Fields::CSEL7,
      Trig1Chain76Fields::HWTS7,
      Trig1Chain76Fields::B2B7,
      Trig1Chain76Fields::IE7,
      Trig1Chain76Fields::IE7_EN> {
    using eCSEL6 = Trig1Chain76Fields::eCSEL6;
    using eHWTS6 = Trig1Chain76Fields::eHWTS6;
    using eB2B6 = Trig1Chain76Fields::eB2B6;
    using eIE6 = Trig1Chain76Fields::eIE6;
    using eIE6_EN = Trig1Chain76Fields::eIE6_EN;
    using eCSEL7 = Trig1Chain76Fields::eCSEL7;
    using eHWTS7 = Trig1Chain76Fields::eHWTS7;
    using eB2B7 = Trig1Chain76Fields::eB2B7;
    using eIE7 = Trig1Chain76Fields::eIE7;
    using eIE7_EN = Trig1Chain76Fields::eIE7_EN;
    using CSEL6 = Trig1Chain76Fields::CSEL6;
    using HWTS6 = Trig1Chain76Fields::HWTS6;
    using B2B6 = Trig1Chain76Fields::B2B6;
    using IE6 = Trig1Chain76Fields::IE6;
    using IE6_EN = Trig1Chain76Fields::IE6_EN;
    using CSEL7 = Trig1Chain76Fields::CSEL7;
    using HWTS7 = Trig1Chain76Fields::HWTS7;
    using B2B7 = Trig1Chain76Fields::B2B7;
    using IE7 = Trig1Chain76Fields::IE7;
    using IE7_EN = Trig1Chain76Fields::IE7_EN;
  };

  // ETC_TRIG Result Data 1/0 Register
  struct Trig1Result10Fields {
    // Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA0 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA1 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig1Result10Fields

  struct TRIG1_RESULT_1_0 : ftl::mmio::Register<
      0x40048050u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig1Result10Fields::DATA0,
      ftl::mmio::Reserved<4, 12>,
      Trig1Result10Fields::DATA1,
      ftl::mmio::Reserved<4, 28>> {
    using DATA0 = Trig1Result10Fields::DATA0;
    using DATA1 = Trig1Result10Fields::DATA1;
  };

  // ETC_TRIG Result Data 3/2 Register
  struct Trig1Result32Fields {
    // Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA2 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA3 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig1Result32Fields

  struct TRIG1_RESULT_3_2 : ftl::mmio::Register<
      0x40048054u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig1Result32Fields::DATA2,
      ftl::mmio::Reserved<4, 12>,
      Trig1Result32Fields::DATA3,
      ftl::mmio::Reserved<4, 28>> {
    using DATA2 = Trig1Result32Fields::DATA2;
    using DATA3 = Trig1Result32Fields::DATA3;
  };

  // ETC_TRIG Result Data 5/4 Register
  struct Trig1Result54Fields {
    // Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA4 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA5 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig1Result54Fields

  struct TRIG1_RESULT_5_4 : ftl::mmio::Register<
      0x40048058u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig1Result54Fields::DATA4,
      ftl::mmio::Reserved<4, 12>,
      Trig1Result54Fields::DATA5,
      ftl::mmio::Reserved<4, 28>> {
    using DATA4 = Trig1Result54Fields::DATA4;
    using DATA5 = Trig1Result54Fields::DATA5;
  };

  // ETC_TRIG Result Data 7/6 Register
  struct Trig1Result76Fields {
    // Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA6 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA7 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig1Result76Fields

  struct TRIG1_RESULT_7_6 : ftl::mmio::Register<
      0x4004805Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig1Result76Fields::DATA6,
      ftl::mmio::Reserved<4, 12>,
      Trig1Result76Fields::DATA7,
      ftl::mmio::Reserved<4, 28>> {
    using DATA6 = Trig1Result76Fields::DATA6;
    using DATA7 = Trig1Result76Fields::DATA7;
  };

  // ETC_TRIG Control Register
  struct Trig2CtrlFields {
    enum class eSW_TRIG : std::uint32_t {
      // No software trigger event generated.
      eSW_TRIG_0 = 0,
      // Software trigger event generated.
      eSW_TRIG_1 = 1,
    };

    enum class eTRIG_MODE : std::uint32_t {
      // Hardware trigger. The softerware trigger will be ignored.
      eTRIG_MODE_0 = 0,
      // Software trigger. The hardware trigger will be ignored.
      eTRIG_MODE_1 = 1,
    };

    enum class eTRIG_CHAIN : std::uint32_t {
      // Trigger chain length is 1
      eTRIG_CHAIN_0 = 0,
      // Trigger chain length is 2
      eTRIG_CHAIN_1 = 1,
      // Trigger chain length is 3
      eTRIG_CHAIN_2 = 2,
      // Trigger chain length is 4
      eTRIG_CHAIN_3 = 3,
      // Trigger chain length is 5
      eTRIG_CHAIN_4 = 4,
      // Trigger chain length is 6
      eTRIG_CHAIN_5 = 5,
      // Trigger chain length is 7
      eTRIG_CHAIN_6 = 6,
      // Trigger chain length is 8
      eTRIG_CHAIN_7 = 7,
    };

    enum class eSYNC_MODE : std::uint32_t {
      // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
      eSYNC_MODE_0 = 0,
      // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
      eSYNC_MODE_1 = 1,
    };

    enum class eCHAINx_DONE : std::uint32_t {
      // segment x done not detected.
      eCHAINx_DONE_0 = 0,
      // segment x done detected.
      eCHAINx_DONE_1 = 1,
    };

    // Software trigger. This field is self-clearing.
    using SW_TRIG = ftl::mmio::Field<1, 0, eSW_TRIG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger mode selection.
    using TRIG_MODE = ftl::mmio::Field<1, 4, eTRIG_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // The number of segments inside the trigger chain of TRIGa.
    using TRIG_CHAIN = ftl::mmio::Field<3, 8, eTRIG_CHAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // External trigger priority, 7 is highest priority, while 0 is lowest
    using TRIG_PRIORITY = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger synchronization mode selection
    using SYNC_MODE = ftl::mmio::Field<1, 16, eSYNC_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment x done detection
    using CHAINx_DONE = ftl::mmio::Field<8, 24, eCHAINx_DONE, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Trig2CtrlFields

  struct TRIG2_CTRL : ftl::mmio::Register<
      0x40048060u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig2CtrlFields::SW_TRIG,
      ftl::mmio::Reserved<3, 1>,
      Trig2CtrlFields::TRIG_MODE,
      ftl::mmio::Reserved<3, 5>,
      Trig2CtrlFields::TRIG_CHAIN,
      ftl::mmio::Reserved<1, 11>,
      Trig2CtrlFields::TRIG_PRIORITY,
      ftl::mmio::Reserved<1, 15>,
      Trig2CtrlFields::SYNC_MODE,
      ftl::mmio::Reserved<7, 17>,
      Trig2CtrlFields::CHAINx_DONE> {
    using eSW_TRIG = Trig2CtrlFields::eSW_TRIG;
    using eTRIG_MODE = Trig2CtrlFields::eTRIG_MODE;
    using eTRIG_CHAIN = Trig2CtrlFields::eTRIG_CHAIN;
    using eSYNC_MODE = Trig2CtrlFields::eSYNC_MODE;
    using eCHAINx_DONE = Trig2CtrlFields::eCHAINx_DONE;
    using SW_TRIG = Trig2CtrlFields::SW_TRIG;
    using TRIG_MODE = Trig2CtrlFields::TRIG_MODE;
    using TRIG_CHAIN = Trig2CtrlFields::TRIG_CHAIN;
    using TRIG_PRIORITY = Trig2CtrlFields::TRIG_PRIORITY;
    using SYNC_MODE = Trig2CtrlFields::SYNC_MODE;
    using CHAINx_DONE = Trig2CtrlFields::CHAINx_DONE;
  };

  // ETC_TRIG Counter Register
  struct Trig2CounterFields {
    // TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    using INIT_DELAY = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIGGER sampling interval counter
    using SAMPLE_INTERVAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig2CounterFields

  struct TRIG2_COUNTER : ftl::mmio::Register<
      0x40048064u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig2CounterFields::INIT_DELAY,
      Trig2CounterFields::SAMPLE_INTERVAL> {
    using INIT_DELAY = Trig2CounterFields::INIT_DELAY;
    using SAMPLE_INTERVAL = Trig2CounterFields::SAMPLE_INTERVAL;
  };

  // ETC_TRIG Chain 0/1 Register
  struct Trig2Chain10Fields {
    enum class eCSEL0 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL0_0 = 0,
      // ADC CMD1 selected.
      eCSEL0_1 = 1,
      // ADC CMD2 selected.
      eCSEL0_2 = 2,
      // ADC CMD3 selected.
      eCSEL0_3 = 3,
      // ADC CMD4 selected.
      eCSEL0_4 = 4,
      // ADC CMD5 selected.
      eCSEL0_5 = 5,
      // ADC CMD6 selected.
      eCSEL0_6 = 6,
      // ADC CMD7 selected.
      eCSEL0_7 = 7,
      // ADC CMD8 selected.
      eCSEL0_8 = 8,
      // ADC CMD9 selected.
      eCSEL0_9 = 9,
      // ADC CMD10 selected.
      eCSEL0_10 = 10,
      // ADC CMD11 selected.
      eCSEL0_11 = 11,
      // ADC CMD12 selected.
      eCSEL0_12 = 12,
      // ADC CMD13 selected.
      eCSEL0_13 = 13,
      // ADC CMD14 selected.
      eCSEL0_14 = 14,
      // ADC CMD15 selected.
      eCSEL0_15 = 15,
    };

    enum class eHWTS0 : std::uint32_t {
      // no trigger selected
      eHWTS0_0 = 0,
      // ADC TRIG0 selected
      eHWTS0_1 = 1,
      // ADC TRIG1 selected
      eHWTS0_2 = 2,
      // ADC TRIG2 selected
      eHWTS0_4 = 4,
      // ADC TRIG3 selected
      eHWTS0_8 = 8,
      // ADC TRIG4 selected
      eHWTS0_16 = 16,
      // ADC TRIG5 selected
      eHWTS0_32 = 32,
      // ADC TRIG6 selected
      eHWTS0_64 = 64,
      // ADC TRIG7 selected
      eHWTS0_128 = 128,
    };

    enum class eB2B0 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B0_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B0_1 = 1,
    };

    enum class eIE0 : std::uint32_t {
      // Generate interrupt on Done0 when segment 0 finish.
      eIE0_0 = 0,
      // Generate interrupt on Done1 when segment 0 finish.
      eIE0_1 = 1,
      // Generate interrupt on Done2 when segment 0 finish.
      eIE0_2 = 2,
      // Generate interrupt on Done3 when segment 0 finish.
      eIE0_3 = 3,
    };

    enum class eIE0_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE0_EN_0 = 0,
      // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
      eIE0_EN_1 = 1,
    };

    enum class eCSEL1 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL1_0 = 0,
      // ADC CMD1 selected.
      eCSEL1_1 = 1,
      // ADC CMD2 selected.
      eCSEL1_2 = 2,
      // ADC CMD3 selected.
      eCSEL1_3 = 3,
      // ADC CMD4 selected.
      eCSEL1_4 = 4,
      // ADC CMD5 selected.
      eCSEL1_5 = 5,
      // ADC CMD6 selected.
      eCSEL1_6 = 6,
      // ADC CMD7 selected.
      eCSEL1_7 = 7,
      // ADC CMD8 selected.
      eCSEL1_8 = 8,
      // ADC CMD9 selected.
      eCSEL1_9 = 9,
      // ADC CMD10 selected.
      eCSEL1_10 = 10,
      // ADC CMD11 selected.
      eCSEL1_11 = 11,
      // ADC CMD12 selected.
      eCSEL1_12 = 12,
      // ADC CMD13 selected.
      eCSEL1_13 = 13,
      // ADC CMD14 selected.
      eCSEL1_14 = 14,
      // ADC CMD15 selected.
      eCSEL1_15 = 15,
    };

    enum class eHWTS1 : std::uint32_t {
      // no trigger selected
      eHWTS1_0 = 0,
      // ADC TRIG0 selected
      eHWTS1_1 = 1,
      // ADC TRIG1 selected
      eHWTS1_2 = 2,
      // ADC TRIG2 selected
      eHWTS1_4 = 4,
      // ADC TRIG3 selected
      eHWTS1_8 = 8,
      // ADC TRIG4 selected
      eHWTS1_16 = 16,
      // ADC TRIG5 selected
      eHWTS1_32 = 32,
      // ADC TRIG6 selected
      eHWTS1_64 = 64,
      // ADC TRIG7 selected
      eHWTS1_128 = 128,
    };

    enum class eB2B1 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B1_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B1_1 = 1,
    };

    enum class eIE1 : std::uint32_t {
      // Generate interrupt on Done0 when Segment 1 finish.
      eIE1_0 = 0,
      // Generate interrupt on Done1 when Segment 1 finish.
      eIE1_1 = 1,
      // Generate interrupt on Done2 when Segment 1 finish.
      eIE1_2 = 2,
      // Generate interrupt on Done3 when Segment 1 finish.
      eIE1_3 = 3,
    };

    enum class eIE1_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE1_EN_0 = 0,
      // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
      eIE1_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL0 = ftl::mmio::Field<4, 0, eCSEL0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 HWTS ADC hardware trigger selection
    using HWTS0 = ftl::mmio::Field<8, 4, eHWTS0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 B2B
    using B2B0 = ftl::mmio::Field<1, 12, eB2B0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    using IE0 = ftl::mmio::Field<2, 13, eIE0, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 0.
    using IE0_EN = ftl::mmio::Field<1, 15, eIE0_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL1 = ftl::mmio::Field<4, 16, eCSEL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 HWTS ADC hardware trigger selection
    using HWTS1 = ftl::mmio::Field<8, 20, eHWTS1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 B2B
    using B2B1 = ftl::mmio::Field<1, 28, eB2B1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    using IE1 = ftl::mmio::Field<2, 29, eIE1, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 1.
    using IE1_EN = ftl::mmio::Field<1, 31, eIE1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig2Chain10Fields

  struct TRIG2_CHAIN_1_0 : ftl::mmio::Register<
      0x40048068u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig2Chain10Fields::CSEL0,
      Trig2Chain10Fields::HWTS0,
      Trig2Chain10Fields::B2B0,
      Trig2Chain10Fields::IE0,
      Trig2Chain10Fields::IE0_EN,
      Trig2Chain10Fields::CSEL1,
      Trig2Chain10Fields::HWTS1,
      Trig2Chain10Fields::B2B1,
      Trig2Chain10Fields::IE1,
      Trig2Chain10Fields::IE1_EN> {
    using eCSEL0 = Trig2Chain10Fields::eCSEL0;
    using eHWTS0 = Trig2Chain10Fields::eHWTS0;
    using eB2B0 = Trig2Chain10Fields::eB2B0;
    using eIE0 = Trig2Chain10Fields::eIE0;
    using eIE0_EN = Trig2Chain10Fields::eIE0_EN;
    using eCSEL1 = Trig2Chain10Fields::eCSEL1;
    using eHWTS1 = Trig2Chain10Fields::eHWTS1;
    using eB2B1 = Trig2Chain10Fields::eB2B1;
    using eIE1 = Trig2Chain10Fields::eIE1;
    using eIE1_EN = Trig2Chain10Fields::eIE1_EN;
    using CSEL0 = Trig2Chain10Fields::CSEL0;
    using HWTS0 = Trig2Chain10Fields::HWTS0;
    using B2B0 = Trig2Chain10Fields::B2B0;
    using IE0 = Trig2Chain10Fields::IE0;
    using IE0_EN = Trig2Chain10Fields::IE0_EN;
    using CSEL1 = Trig2Chain10Fields::CSEL1;
    using HWTS1 = Trig2Chain10Fields::HWTS1;
    using B2B1 = Trig2Chain10Fields::B2B1;
    using IE1 = Trig2Chain10Fields::IE1;
    using IE1_EN = Trig2Chain10Fields::IE1_EN;
  };

  // ETC_TRIG Chain 2/3 Register
  struct Trig2Chain32Fields {
    enum class eCSEL2 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL2_0 = 0,
      // ADC CMD1 selected.
      eCSEL2_1 = 1,
      // ADC CMD2 selected.
      eCSEL2_2 = 2,
      // ADC CMD3 selected.
      eCSEL2_3 = 3,
      // ADC CMD4 selected.
      eCSEL2_4 = 4,
      // ADC CMD5 selected.
      eCSEL2_5 = 5,
      // ADC CMD6 selected.
      eCSEL2_6 = 6,
      // ADC CMD7 selected.
      eCSEL2_7 = 7,
      // ADC CMD8 selected.
      eCSEL2_8 = 8,
      // ADC CMD9 selected.
      eCSEL2_9 = 9,
      // ADC CMD10 selected.
      eCSEL2_10 = 10,
      // ADC CMD11 selected.
      eCSEL2_11 = 11,
      // ADC CMD12 selected.
      eCSEL2_12 = 12,
      // ADC CMD13 selected.
      eCSEL2_13 = 13,
      // ADC CMD14 selected.
      eCSEL2_14 = 14,
      // ADC CMD15 selected.
      eCSEL2_15 = 15,
    };

    enum class eHWTS2 : std::uint32_t {
      // no trigger selected
      eHWTS2_0 = 0,
      // ADC TRIG0 selected
      eHWTS2_1 = 1,
      // ADC TRIG1 selected
      eHWTS2_2 = 2,
      // ADC TRIG2 selected
      eHWTS2_4 = 4,
      // ADC TRIG3 selected
      eHWTS2_8 = 8,
      // ADC TRIG4 selected
      eHWTS2_16 = 16,
      // ADC TRIG5 selected
      eHWTS2_32 = 32,
      // ADC TRIG6 selected
      eHWTS2_64 = 64,
      // ADC TRIG7 selected
      eHWTS2_128 = 128,
    };

    enum class eB2B2 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B2_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B2_1 = 1,
    };

    enum class eIE2 : std::uint32_t {
      // Generate interrupt on Done0 when segment 2 finish.
      eIE2_0 = 0,
      // Generate interrupt on Done1 when segment 2 finish.
      eIE2_1 = 1,
      // Generate interrupt on Done2 when segment 2 finish.
      eIE2_2 = 2,
      // Generate interrupt on Done3 when segment 2 finish.
      eIE2_3 = 3,
    };

    enum class eIE2_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE2_EN_0 = 0,
      // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
      eIE2_EN_1 = 1,
    };

    enum class eCSEL3 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL3_0 = 0,
      // ADC CMD1 selected.
      eCSEL3_1 = 1,
      // ADC CMD2 selected.
      eCSEL3_2 = 2,
      // ADC CMD3 selected.
      eCSEL3_3 = 3,
      // ADC CMD4 selected.
      eCSEL3_4 = 4,
      // ADC CMD5 selected.
      eCSEL3_5 = 5,
      // ADC CMD6 selected.
      eCSEL3_6 = 6,
      // ADC CMD7 selected.
      eCSEL3_7 = 7,
      // ADC CMD8 selected.
      eCSEL3_8 = 8,
      // ADC CMD9 selected.
      eCSEL3_9 = 9,
      // ADC CMD10 selected.
      eCSEL3_10 = 10,
      // ADC CMD11 selected.
      eCSEL3_11 = 11,
      // ADC CMD12 selected.
      eCSEL3_12 = 12,
      // ADC CMD13 selected.
      eCSEL3_13 = 13,
      // ADC CMD14 selected.
      eCSEL3_14 = 14,
      // ADC CMD15 selected.
      eCSEL3_15 = 15,
    };

    enum class eHWTS3 : std::uint32_t {
      // no trigger selected
      eHWTS3_0 = 0,
      // ADC TRIG0 selected
      eHWTS3_1 = 1,
      // ADC TRIG1 selected
      eHWTS3_2 = 2,
      // ADC TRIG2 selected
      eHWTS3_4 = 4,
      // ADC TRIG3 selected
      eHWTS3_8 = 8,
      // ADC TRIG4 selected
      eHWTS3_16 = 16,
      // ADC TRIG5 selected
      eHWTS3_32 = 32,
      // ADC TRIG6 selected
      eHWTS3_64 = 64,
      // ADC TRIG7 selected
      eHWTS3_128 = 128,
    };

    enum class eB2B3 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B3_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B3_1 = 1,
    };

    enum class eIE3 : std::uint32_t {
      // Generate interrupt on Done0 when segment 3 finish.
      eIE3_0 = 0,
      // Generate interrupt on Done1 when segment 3 finish.
      eIE3_1 = 1,
      // Generate interrupt on Done2 when segment 3 finish.
      eIE3_2 = 2,
      // Generate interrupt on Done3 when segment 3 finish.
      eIE3_3 = 3,
    };

    enum class eIE3_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE3_EN_0 = 0,
      // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
      eIE3_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL2 = ftl::mmio::Field<4, 0, eCSEL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 HWTS ADC hardware trigger selection
    using HWTS2 = ftl::mmio::Field<8, 4, eHWTS2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 B2B
    using B2B2 = ftl::mmio::Field<1, 12, eB2B2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    using IE2 = ftl::mmio::Field<2, 13, eIE2, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 2.
    using IE2_EN = ftl::mmio::Field<1, 15, eIE2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL3 = ftl::mmio::Field<4, 16, eCSEL3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 HWTS ADC hardware trigger selection
    using HWTS3 = ftl::mmio::Field<8, 20, eHWTS3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 B2B
    using B2B3 = ftl::mmio::Field<1, 28, eB2B3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    using IE3 = ftl::mmio::Field<2, 29, eIE3, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 3.
    using IE3_EN = ftl::mmio::Field<1, 31, eIE3_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig2Chain32Fields

  struct TRIG2_CHAIN_3_2 : ftl::mmio::Register<
      0x4004806Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig2Chain32Fields::CSEL2,
      Trig2Chain32Fields::HWTS2,
      Trig2Chain32Fields::B2B2,
      Trig2Chain32Fields::IE2,
      Trig2Chain32Fields::IE2_EN,
      Trig2Chain32Fields::CSEL3,
      Trig2Chain32Fields::HWTS3,
      Trig2Chain32Fields::B2B3,
      Trig2Chain32Fields::IE3,
      Trig2Chain32Fields::IE3_EN> {
    using eCSEL2 = Trig2Chain32Fields::eCSEL2;
    using eHWTS2 = Trig2Chain32Fields::eHWTS2;
    using eB2B2 = Trig2Chain32Fields::eB2B2;
    using eIE2 = Trig2Chain32Fields::eIE2;
    using eIE2_EN = Trig2Chain32Fields::eIE2_EN;
    using eCSEL3 = Trig2Chain32Fields::eCSEL3;
    using eHWTS3 = Trig2Chain32Fields::eHWTS3;
    using eB2B3 = Trig2Chain32Fields::eB2B3;
    using eIE3 = Trig2Chain32Fields::eIE3;
    using eIE3_EN = Trig2Chain32Fields::eIE3_EN;
    using CSEL2 = Trig2Chain32Fields::CSEL2;
    using HWTS2 = Trig2Chain32Fields::HWTS2;
    using B2B2 = Trig2Chain32Fields::B2B2;
    using IE2 = Trig2Chain32Fields::IE2;
    using IE2_EN = Trig2Chain32Fields::IE2_EN;
    using CSEL3 = Trig2Chain32Fields::CSEL3;
    using HWTS3 = Trig2Chain32Fields::HWTS3;
    using B2B3 = Trig2Chain32Fields::B2B3;
    using IE3 = Trig2Chain32Fields::IE3;
    using IE3_EN = Trig2Chain32Fields::IE3_EN;
  };

  // ETC_TRIG Chain 4/5 Register
  struct Trig2Chain54Fields {
    enum class eCSEL4 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL4_0 = 0,
      // ADC CMD1 selected.
      eCSEL4_1 = 1,
      // ADC CMD2 selected.
      eCSEL4_2 = 2,
      // ADC CMD3 selected.
      eCSEL4_3 = 3,
      // ADC CMD4 selected.
      eCSEL4_4 = 4,
      // ADC CMD5 selected.
      eCSEL4_5 = 5,
      // ADC CMD6 selected.
      eCSEL4_6 = 6,
      // ADC CMD7 selected.
      eCSEL4_7 = 7,
      // ADC CMD8 selected.
      eCSEL4_8 = 8,
      // ADC CMD9 selected.
      eCSEL4_9 = 9,
      // ADC CMD10 selected.
      eCSEL4_10 = 10,
      // ADC CMD11 selected.
      eCSEL4_11 = 11,
      // ADC CMD12 selected.
      eCSEL4_12 = 12,
      // ADC CMD13 selected.
      eCSEL4_13 = 13,
      // ADC CMD14 selected.
      eCSEL4_14 = 14,
      // ADC CMD15 selected.
      eCSEL4_15 = 15,
    };

    enum class eHWTS4 : std::uint32_t {
      // no trigger selected
      eHWTS4_0 = 0,
      // ADC TRIG0 selected
      eHWTS4_1 = 1,
      // ADC TRIG1 selected
      eHWTS4_2 = 2,
      // ADC TRIG2 selected
      eHWTS4_4 = 4,
      // ADC TRIG3 selected
      eHWTS4_8 = 8,
      // ADC TRIG4 selected
      eHWTS4_16 = 16,
      // ADC TRIG5 selected
      eHWTS4_32 = 32,
      // ADC TRIG6 selected
      eHWTS4_64 = 64,
      // ADC TRIG7 selected
      eHWTS4_128 = 128,
    };

    enum class eB2B4 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B4_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B4_1 = 1,
    };

    enum class eIE4 : std::uint32_t {
      // Generate interrupt on Done0 when segment 4 finish.
      eIE4_0 = 0,
      // Generate interrupt on Done1 when segment 4 finish.
      eIE4_1 = 1,
      // Generate interrupt on Done2 when segment 4 finish.
      eIE4_2 = 2,
      // Generate interrupt on Done3 when segment 4 finish.
      eIE4_3 = 3,
    };

    enum class eIE4_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE4_EN_0 = 0,
      // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
      eIE4_EN_1 = 1,
    };

    enum class eCSEL5 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL5_0 = 0,
      // ADC CMD1 selected.
      eCSEL5_1 = 1,
      // ADC CMD2 selected.
      eCSEL5_2 = 2,
      // ADC CMD3 selected.
      eCSEL5_3 = 3,
      // ADC CMD4 selected.
      eCSEL5_4 = 4,
      // ADC CMD5 selected.
      eCSEL5_5 = 5,
      // ADC CMD6 selected.
      eCSEL5_6 = 6,
      // ADC CMD7 selected.
      eCSEL5_7 = 7,
      // ADC CMD8 selected.
      eCSEL5_8 = 8,
      // ADC CMD9 selected.
      eCSEL5_9 = 9,
      // ADC CMD10 selected.
      eCSEL5_10 = 10,
      // ADC CMD11 selected.
      eCSEL5_11 = 11,
      // ADC CMD12 selected.
      eCSEL5_12 = 12,
      // ADC CMD13 selected.
      eCSEL5_13 = 13,
      // ADC CMD14 selected.
      eCSEL5_14 = 14,
      // ADC CMD15 selected.
      eCSEL5_15 = 15,
    };

    enum class eHWTS5 : std::uint32_t {
      // no trigger selected
      eHWTS5_0 = 0,
      // ADC TRIG0 selected
      eHWTS5_1 = 1,
      // ADC TRIG1 selected
      eHWTS5_2 = 2,
      // ADC TRIG2 selected
      eHWTS5_4 = 4,
      // ADC TRIG3 selected
      eHWTS5_8 = 8,
      // ADC TRIG4 selected
      eHWTS5_16 = 16,
      // ADC TRIG5 selected
      eHWTS5_32 = 32,
      // ADC TRIG6 selected
      eHWTS5_64 = 64,
      // ADC TRIG7 selected
      eHWTS5_128 = 128,
    };

    enum class eB2B5 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B5_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B5_1 = 1,
    };

    enum class eIE5 : std::uint32_t {
      // Generate interrupt on Done0 when segment 5 finish.
      eIE5_0 = 0,
      // Generate interrupt on Done1 when segment 5 finish.
      eIE5_1 = 1,
      // Generate interrupt on Done2 when segment 5 finish.
      eIE5_2 = 2,
      // Generate interrupt on Done3 when segment 5 finish.
      eIE5_3 = 3,
    };

    enum class eIE5_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE5_EN_0 = 0,
      // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
      eIE5_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL4 = ftl::mmio::Field<4, 0, eCSEL4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 HWTS ADC hardware trigger selection
    using HWTS4 = ftl::mmio::Field<8, 4, eHWTS4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 B2B
    using B2B4 = ftl::mmio::Field<1, 12, eB2B4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    using IE4 = ftl::mmio::Field<2, 13, eIE4, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 4.
    using IE4_EN = ftl::mmio::Field<1, 15, eIE4_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL5 = ftl::mmio::Field<4, 16, eCSEL5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 HWTS ADC hardware trigger selection
    using HWTS5 = ftl::mmio::Field<8, 20, eHWTS5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 B2B
    using B2B5 = ftl::mmio::Field<1, 28, eB2B5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    using IE5 = ftl::mmio::Field<2, 29, eIE5, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 5.
    using IE5_EN = ftl::mmio::Field<1, 31, eIE5_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig2Chain54Fields

  struct TRIG2_CHAIN_5_4 : ftl::mmio::Register<
      0x40048070u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig2Chain54Fields::CSEL4,
      Trig2Chain54Fields::HWTS4,
      Trig2Chain54Fields::B2B4,
      Trig2Chain54Fields::IE4,
      Trig2Chain54Fields::IE4_EN,
      Trig2Chain54Fields::CSEL5,
      Trig2Chain54Fields::HWTS5,
      Trig2Chain54Fields::B2B5,
      Trig2Chain54Fields::IE5,
      Trig2Chain54Fields::IE5_EN> {
    using eCSEL4 = Trig2Chain54Fields::eCSEL4;
    using eHWTS4 = Trig2Chain54Fields::eHWTS4;
    using eB2B4 = Trig2Chain54Fields::eB2B4;
    using eIE4 = Trig2Chain54Fields::eIE4;
    using eIE4_EN = Trig2Chain54Fields::eIE4_EN;
    using eCSEL5 = Trig2Chain54Fields::eCSEL5;
    using eHWTS5 = Trig2Chain54Fields::eHWTS5;
    using eB2B5 = Trig2Chain54Fields::eB2B5;
    using eIE5 = Trig2Chain54Fields::eIE5;
    using eIE5_EN = Trig2Chain54Fields::eIE5_EN;
    using CSEL4 = Trig2Chain54Fields::CSEL4;
    using HWTS4 = Trig2Chain54Fields::HWTS4;
    using B2B4 = Trig2Chain54Fields::B2B4;
    using IE4 = Trig2Chain54Fields::IE4;
    using IE4_EN = Trig2Chain54Fields::IE4_EN;
    using CSEL5 = Trig2Chain54Fields::CSEL5;
    using HWTS5 = Trig2Chain54Fields::HWTS5;
    using B2B5 = Trig2Chain54Fields::B2B5;
    using IE5 = Trig2Chain54Fields::IE5;
    using IE5_EN = Trig2Chain54Fields::IE5_EN;
  };

  // ETC_TRIG Chain 6/7 Register
  struct Trig2Chain76Fields {
    enum class eCSEL6 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL6_0 = 0,
      // ADC CMD1 selected.
      eCSEL6_1 = 1,
      // ADC CMD2 selected.
      eCSEL6_2 = 2,
      // ADC CMD3 selected.
      eCSEL6_3 = 3,
      // ADC CMD4 selected.
      eCSEL6_4 = 4,
      // ADC CMD5 selected.
      eCSEL6_5 = 5,
      // ADC CMD6 selected.
      eCSEL6_6 = 6,
      // ADC CMD7 selected.
      eCSEL6_7 = 7,
      // ADC CMD8 selected.
      eCSEL6_8 = 8,
      // ADC CMD9 selected.
      eCSEL6_9 = 9,
      // ADC CMD10 selected.
      eCSEL6_10 = 10,
      // ADC CMD11 selected.
      eCSEL6_11 = 11,
      // ADC CMD12 selected.
      eCSEL6_12 = 12,
      // ADC CMD13 selected.
      eCSEL6_13 = 13,
      // ADC CMD14 selected.
      eCSEL6_14 = 14,
      // ADC CMD15 selected.
      eCSEL6_15 = 15,
    };

    enum class eHWTS6 : std::uint32_t {
      // no trigger selected
      eHWTS6_0 = 0,
      // ADC TRIG0 selected
      eHWTS6_1 = 1,
      // ADC TRIG1 selected
      eHWTS6_2 = 2,
      // ADC TRIG2 selected
      eHWTS6_4 = 4,
      // ADC TRIG3 selected
      eHWTS6_8 = 8,
      // ADC TRIG4 selected
      eHWTS6_16 = 16,
      // ADC TRIG5 selected
      eHWTS6_32 = 32,
      // ADC TRIG6 selected
      eHWTS6_64 = 64,
      // ADC TRIG7 selected
      eHWTS6_128 = 128,
    };

    enum class eB2B6 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B6_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B6_1 = 1,
    };

    enum class eIE6 : std::uint32_t {
      // Generate interrupt on Done0 when segment 6 finish.
      eIE6_0 = 0,
      // Generate interrupt on Done1 when segment 6 finish.
      eIE6_1 = 1,
      // Generate interrupt on Done2 when segment 6 finish.
      eIE6_2 = 2,
      // Generate interrupt on Done3 when segment 6 finish.
      eIE6_3 = 3,
    };

    enum class eIE6_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE6_EN_0 = 0,
      // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
      eIE6_EN_1 = 1,
    };

    enum class eCSEL7 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL7_0 = 0,
      // ADC CMD1 selected.
      eCSEL7_1 = 1,
      // ADC CMD2 selected.
      eCSEL7_2 = 2,
      // ADC CMD3 selected.
      eCSEL7_3 = 3,
      // ADC CMD4 selected.
      eCSEL7_4 = 4,
      // ADC CMD5 selected.
      eCSEL7_5 = 5,
      // ADC CMD6 selected.
      eCSEL7_6 = 6,
      // ADC CMD7 selected.
      eCSEL7_7 = 7,
      // ADC CMD8 selected.
      eCSEL7_8 = 8,
      // ADC CMD9 selected.
      eCSEL7_9 = 9,
      // ADC CMD10 selected.
      eCSEL7_10 = 10,
      // ADC CMD11 selected.
      eCSEL7_11 = 11,
      // ADC CMD12 selected.
      eCSEL7_12 = 12,
      // ADC CMD13 selected.
      eCSEL7_13 = 13,
      // ADC CMD14 selected.
      eCSEL7_14 = 14,
      // ADC CMD15 selected.
      eCSEL7_15 = 15,
    };

    enum class eHWTS7 : std::uint32_t {
      // no trigger selected
      eHWTS7_0 = 0,
      // ADC TRIG0 selected
      eHWTS7_1 = 1,
      // ADC TRIG1 selected
      eHWTS7_2 = 2,
      // ADC TRIG2 selected
      eHWTS7_4 = 4,
      // ADC TRIG3 selected
      eHWTS7_8 = 8,
      // ADC TRIG4 selected
      eHWTS7_16 = 16,
      // ADC TRIG5 selected
      eHWTS7_32 = 32,
      // ADC TRIG6 selected
      eHWTS7_64 = 64,
      // ADC TRIG7 selected
      eHWTS7_128 = 128,
    };

    enum class eB2B7 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B7_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B7_1 = 1,
    };

    enum class eIE7 : std::uint32_t {
      // Generate interrupt on Done0 when segment 7 finish.
      eIE7_0 = 0,
      // Generate interrupt on Done1 when segment 7 finish.
      eIE7_1 = 1,
      // Generate interrupt on Done2 when segment 7 finish.
      eIE7_2 = 2,
      // Generate interrupt on Done3 when segment 7 finish.
      eIE7_3 = 3,
    };

    enum class eIE7_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE7_EN_0 = 0,
      // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
      eIE7_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL6 = ftl::mmio::Field<4, 0, eCSEL6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 HWTS ADC hardware trigger selection
    using HWTS6 = ftl::mmio::Field<8, 4, eHWTS6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 B2B
    using B2B6 = ftl::mmio::Field<1, 12, eB2B6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    using IE6 = ftl::mmio::Field<2, 13, eIE6, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 6.
    using IE6_EN = ftl::mmio::Field<1, 15, eIE6_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL7 = ftl::mmio::Field<4, 16, eCSEL7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 HWTS ADC hardware trigger selection
    using HWTS7 = ftl::mmio::Field<8, 20, eHWTS7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 B2B
    using B2B7 = ftl::mmio::Field<1, 28, eB2B7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    using IE7 = ftl::mmio::Field<2, 29, eIE7, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 7.
    using IE7_EN = ftl::mmio::Field<1, 31, eIE7_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig2Chain76Fields

  struct TRIG2_CHAIN_7_6 : ftl::mmio::Register<
      0x40048074u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig2Chain76Fields::CSEL6,
      Trig2Chain76Fields::HWTS6,
      Trig2Chain76Fields::B2B6,
      Trig2Chain76Fields::IE6,
      Trig2Chain76Fields::IE6_EN,
      Trig2Chain76Fields::CSEL7,
      Trig2Chain76Fields::HWTS7,
      Trig2Chain76Fields::B2B7,
      Trig2Chain76Fields::IE7,
      Trig2Chain76Fields::IE7_EN> {
    using eCSEL6 = Trig2Chain76Fields::eCSEL6;
    using eHWTS6 = Trig2Chain76Fields::eHWTS6;
    using eB2B6 = Trig2Chain76Fields::eB2B6;
    using eIE6 = Trig2Chain76Fields::eIE6;
    using eIE6_EN = Trig2Chain76Fields::eIE6_EN;
    using eCSEL7 = Trig2Chain76Fields::eCSEL7;
    using eHWTS7 = Trig2Chain76Fields::eHWTS7;
    using eB2B7 = Trig2Chain76Fields::eB2B7;
    using eIE7 = Trig2Chain76Fields::eIE7;
    using eIE7_EN = Trig2Chain76Fields::eIE7_EN;
    using CSEL6 = Trig2Chain76Fields::CSEL6;
    using HWTS6 = Trig2Chain76Fields::HWTS6;
    using B2B6 = Trig2Chain76Fields::B2B6;
    using IE6 = Trig2Chain76Fields::IE6;
    using IE6_EN = Trig2Chain76Fields::IE6_EN;
    using CSEL7 = Trig2Chain76Fields::CSEL7;
    using HWTS7 = Trig2Chain76Fields::HWTS7;
    using B2B7 = Trig2Chain76Fields::B2B7;
    using IE7 = Trig2Chain76Fields::IE7;
    using IE7_EN = Trig2Chain76Fields::IE7_EN;
  };

  // ETC_TRIG Result Data 1/0 Register
  struct Trig2Result10Fields {
    // Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA0 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA1 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig2Result10Fields

  struct TRIG2_RESULT_1_0 : ftl::mmio::Register<
      0x40048078u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig2Result10Fields::DATA0,
      ftl::mmio::Reserved<4, 12>,
      Trig2Result10Fields::DATA1,
      ftl::mmio::Reserved<4, 28>> {
    using DATA0 = Trig2Result10Fields::DATA0;
    using DATA1 = Trig2Result10Fields::DATA1;
  };

  // ETC_TRIG Result Data 3/2 Register
  struct Trig2Result32Fields {
    // Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA2 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA3 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig2Result32Fields

  struct TRIG2_RESULT_3_2 : ftl::mmio::Register<
      0x4004807Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig2Result32Fields::DATA2,
      ftl::mmio::Reserved<4, 12>,
      Trig2Result32Fields::DATA3,
      ftl::mmio::Reserved<4, 28>> {
    using DATA2 = Trig2Result32Fields::DATA2;
    using DATA3 = Trig2Result32Fields::DATA3;
  };

  // ETC_TRIG Result Data 5/4 Register
  struct Trig2Result54Fields {
    // Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA4 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA5 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig2Result54Fields

  struct TRIG2_RESULT_5_4 : ftl::mmio::Register<
      0x40048080u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig2Result54Fields::DATA4,
      ftl::mmio::Reserved<4, 12>,
      Trig2Result54Fields::DATA5,
      ftl::mmio::Reserved<4, 28>> {
    using DATA4 = Trig2Result54Fields::DATA4;
    using DATA5 = Trig2Result54Fields::DATA5;
  };

  // ETC_TRIG Result Data 7/6 Register
  struct Trig2Result76Fields {
    // Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA6 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA7 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig2Result76Fields

  struct TRIG2_RESULT_7_6 : ftl::mmio::Register<
      0x40048084u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig2Result76Fields::DATA6,
      ftl::mmio::Reserved<4, 12>,
      Trig2Result76Fields::DATA7,
      ftl::mmio::Reserved<4, 28>> {
    using DATA6 = Trig2Result76Fields::DATA6;
    using DATA7 = Trig2Result76Fields::DATA7;
  };

  // ETC_TRIG Control Register
  struct Trig3CtrlFields {
    enum class eSW_TRIG : std::uint32_t {
      // No software trigger event generated.
      eSW_TRIG_0 = 0,
      // Software trigger event generated.
      eSW_TRIG_1 = 1,
    };

    enum class eTRIG_MODE : std::uint32_t {
      // Hardware trigger. The softerware trigger will be ignored.
      eTRIG_MODE_0 = 0,
      // Software trigger. The hardware trigger will be ignored.
      eTRIG_MODE_1 = 1,
    };

    enum class eTRIG_CHAIN : std::uint32_t {
      // Trigger chain length is 1
      eTRIG_CHAIN_0 = 0,
      // Trigger chain length is 2
      eTRIG_CHAIN_1 = 1,
      // Trigger chain length is 3
      eTRIG_CHAIN_2 = 2,
      // Trigger chain length is 4
      eTRIG_CHAIN_3 = 3,
      // Trigger chain length is 5
      eTRIG_CHAIN_4 = 4,
      // Trigger chain length is 6
      eTRIG_CHAIN_5 = 5,
      // Trigger chain length is 7
      eTRIG_CHAIN_6 = 6,
      // Trigger chain length is 8
      eTRIG_CHAIN_7 = 7,
    };

    enum class eSYNC_MODE : std::uint32_t {
      // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
      eSYNC_MODE_0 = 0,
      // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
      eSYNC_MODE_1 = 1,
    };

    enum class eCHAINx_DONE : std::uint32_t {
      // segment x done not detected.
      eCHAINx_DONE_0 = 0,
      // segment x done detected.
      eCHAINx_DONE_1 = 1,
    };

    // Software trigger. This field is self-clearing.
    using SW_TRIG = ftl::mmio::Field<1, 0, eSW_TRIG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger mode selection.
    using TRIG_MODE = ftl::mmio::Field<1, 4, eTRIG_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // The number of segments inside the trigger chain of TRIGa.
    using TRIG_CHAIN = ftl::mmio::Field<3, 8, eTRIG_CHAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // External trigger priority, 7 is highest priority, while 0 is lowest
    using TRIG_PRIORITY = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger synchronization mode selection
    using SYNC_MODE = ftl::mmio::Field<1, 16, eSYNC_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment x done detection
    using CHAINx_DONE = ftl::mmio::Field<8, 24, eCHAINx_DONE, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Trig3CtrlFields

  struct TRIG3_CTRL : ftl::mmio::Register<
      0x40048088u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig3CtrlFields::SW_TRIG,
      ftl::mmio::Reserved<3, 1>,
      Trig3CtrlFields::TRIG_MODE,
      ftl::mmio::Reserved<3, 5>,
      Trig3CtrlFields::TRIG_CHAIN,
      ftl::mmio::Reserved<1, 11>,
      Trig3CtrlFields::TRIG_PRIORITY,
      ftl::mmio::Reserved<1, 15>,
      Trig3CtrlFields::SYNC_MODE,
      ftl::mmio::Reserved<7, 17>,
      Trig3CtrlFields::CHAINx_DONE> {
    using eSW_TRIG = Trig3CtrlFields::eSW_TRIG;
    using eTRIG_MODE = Trig3CtrlFields::eTRIG_MODE;
    using eTRIG_CHAIN = Trig3CtrlFields::eTRIG_CHAIN;
    using eSYNC_MODE = Trig3CtrlFields::eSYNC_MODE;
    using eCHAINx_DONE = Trig3CtrlFields::eCHAINx_DONE;
    using SW_TRIG = Trig3CtrlFields::SW_TRIG;
    using TRIG_MODE = Trig3CtrlFields::TRIG_MODE;
    using TRIG_CHAIN = Trig3CtrlFields::TRIG_CHAIN;
    using TRIG_PRIORITY = Trig3CtrlFields::TRIG_PRIORITY;
    using SYNC_MODE = Trig3CtrlFields::SYNC_MODE;
    using CHAINx_DONE = Trig3CtrlFields::CHAINx_DONE;
  };

  // ETC_TRIG Counter Register
  struct Trig3CounterFields {
    // TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    using INIT_DELAY = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIGGER sampling interval counter
    using SAMPLE_INTERVAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig3CounterFields

  struct TRIG3_COUNTER : ftl::mmio::Register<
      0x4004808Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig3CounterFields::INIT_DELAY,
      Trig3CounterFields::SAMPLE_INTERVAL> {
    using INIT_DELAY = Trig3CounterFields::INIT_DELAY;
    using SAMPLE_INTERVAL = Trig3CounterFields::SAMPLE_INTERVAL;
  };

  // ETC_TRIG Chain 0/1 Register
  struct Trig3Chain10Fields {
    enum class eCSEL0 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL0_0 = 0,
      // ADC CMD1 selected.
      eCSEL0_1 = 1,
      // ADC CMD2 selected.
      eCSEL0_2 = 2,
      // ADC CMD3 selected.
      eCSEL0_3 = 3,
      // ADC CMD4 selected.
      eCSEL0_4 = 4,
      // ADC CMD5 selected.
      eCSEL0_5 = 5,
      // ADC CMD6 selected.
      eCSEL0_6 = 6,
      // ADC CMD7 selected.
      eCSEL0_7 = 7,
      // ADC CMD8 selected.
      eCSEL0_8 = 8,
      // ADC CMD9 selected.
      eCSEL0_9 = 9,
      // ADC CMD10 selected.
      eCSEL0_10 = 10,
      // ADC CMD11 selected.
      eCSEL0_11 = 11,
      // ADC CMD12 selected.
      eCSEL0_12 = 12,
      // ADC CMD13 selected.
      eCSEL0_13 = 13,
      // ADC CMD14 selected.
      eCSEL0_14 = 14,
      // ADC CMD15 selected.
      eCSEL0_15 = 15,
    };

    enum class eHWTS0 : std::uint32_t {
      // no trigger selected
      eHWTS0_0 = 0,
      // ADC TRIG0 selected
      eHWTS0_1 = 1,
      // ADC TRIG1 selected
      eHWTS0_2 = 2,
      // ADC TRIG2 selected
      eHWTS0_4 = 4,
      // ADC TRIG3 selected
      eHWTS0_8 = 8,
      // ADC TRIG4 selected
      eHWTS0_16 = 16,
      // ADC TRIG5 selected
      eHWTS0_32 = 32,
      // ADC TRIG6 selected
      eHWTS0_64 = 64,
      // ADC TRIG7 selected
      eHWTS0_128 = 128,
    };

    enum class eB2B0 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B0_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B0_1 = 1,
    };

    enum class eIE0 : std::uint32_t {
      // Generate interrupt on Done0 when segment 0 finish.
      eIE0_0 = 0,
      // Generate interrupt on Done1 when segment 0 finish.
      eIE0_1 = 1,
      // Generate interrupt on Done2 when segment 0 finish.
      eIE0_2 = 2,
      // Generate interrupt on Done3 when segment 0 finish.
      eIE0_3 = 3,
    };

    enum class eIE0_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE0_EN_0 = 0,
      // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
      eIE0_EN_1 = 1,
    };

    enum class eCSEL1 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL1_0 = 0,
      // ADC CMD1 selected.
      eCSEL1_1 = 1,
      // ADC CMD2 selected.
      eCSEL1_2 = 2,
      // ADC CMD3 selected.
      eCSEL1_3 = 3,
      // ADC CMD4 selected.
      eCSEL1_4 = 4,
      // ADC CMD5 selected.
      eCSEL1_5 = 5,
      // ADC CMD6 selected.
      eCSEL1_6 = 6,
      // ADC CMD7 selected.
      eCSEL1_7 = 7,
      // ADC CMD8 selected.
      eCSEL1_8 = 8,
      // ADC CMD9 selected.
      eCSEL1_9 = 9,
      // ADC CMD10 selected.
      eCSEL1_10 = 10,
      // ADC CMD11 selected.
      eCSEL1_11 = 11,
      // ADC CMD12 selected.
      eCSEL1_12 = 12,
      // ADC CMD13 selected.
      eCSEL1_13 = 13,
      // ADC CMD14 selected.
      eCSEL1_14 = 14,
      // ADC CMD15 selected.
      eCSEL1_15 = 15,
    };

    enum class eHWTS1 : std::uint32_t {
      // no trigger selected
      eHWTS1_0 = 0,
      // ADC TRIG0 selected
      eHWTS1_1 = 1,
      // ADC TRIG1 selected
      eHWTS1_2 = 2,
      // ADC TRIG2 selected
      eHWTS1_4 = 4,
      // ADC TRIG3 selected
      eHWTS1_8 = 8,
      // ADC TRIG4 selected
      eHWTS1_16 = 16,
      // ADC TRIG5 selected
      eHWTS1_32 = 32,
      // ADC TRIG6 selected
      eHWTS1_64 = 64,
      // ADC TRIG7 selected
      eHWTS1_128 = 128,
    };

    enum class eB2B1 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B1_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B1_1 = 1,
    };

    enum class eIE1 : std::uint32_t {
      // Generate interrupt on Done0 when Segment 1 finish.
      eIE1_0 = 0,
      // Generate interrupt on Done1 when Segment 1 finish.
      eIE1_1 = 1,
      // Generate interrupt on Done2 when Segment 1 finish.
      eIE1_2 = 2,
      // Generate interrupt on Done3 when Segment 1 finish.
      eIE1_3 = 3,
    };

    enum class eIE1_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE1_EN_0 = 0,
      // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
      eIE1_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL0 = ftl::mmio::Field<4, 0, eCSEL0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 HWTS ADC hardware trigger selection
    using HWTS0 = ftl::mmio::Field<8, 4, eHWTS0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 B2B
    using B2B0 = ftl::mmio::Field<1, 12, eB2B0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    using IE0 = ftl::mmio::Field<2, 13, eIE0, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 0.
    using IE0_EN = ftl::mmio::Field<1, 15, eIE0_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL1 = ftl::mmio::Field<4, 16, eCSEL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 HWTS ADC hardware trigger selection
    using HWTS1 = ftl::mmio::Field<8, 20, eHWTS1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 B2B
    using B2B1 = ftl::mmio::Field<1, 28, eB2B1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    using IE1 = ftl::mmio::Field<2, 29, eIE1, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 1.
    using IE1_EN = ftl::mmio::Field<1, 31, eIE1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig3Chain10Fields

  struct TRIG3_CHAIN_1_0 : ftl::mmio::Register<
      0x40048090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig3Chain10Fields::CSEL0,
      Trig3Chain10Fields::HWTS0,
      Trig3Chain10Fields::B2B0,
      Trig3Chain10Fields::IE0,
      Trig3Chain10Fields::IE0_EN,
      Trig3Chain10Fields::CSEL1,
      Trig3Chain10Fields::HWTS1,
      Trig3Chain10Fields::B2B1,
      Trig3Chain10Fields::IE1,
      Trig3Chain10Fields::IE1_EN> {
    using eCSEL0 = Trig3Chain10Fields::eCSEL0;
    using eHWTS0 = Trig3Chain10Fields::eHWTS0;
    using eB2B0 = Trig3Chain10Fields::eB2B0;
    using eIE0 = Trig3Chain10Fields::eIE0;
    using eIE0_EN = Trig3Chain10Fields::eIE0_EN;
    using eCSEL1 = Trig3Chain10Fields::eCSEL1;
    using eHWTS1 = Trig3Chain10Fields::eHWTS1;
    using eB2B1 = Trig3Chain10Fields::eB2B1;
    using eIE1 = Trig3Chain10Fields::eIE1;
    using eIE1_EN = Trig3Chain10Fields::eIE1_EN;
    using CSEL0 = Trig3Chain10Fields::CSEL0;
    using HWTS0 = Trig3Chain10Fields::HWTS0;
    using B2B0 = Trig3Chain10Fields::B2B0;
    using IE0 = Trig3Chain10Fields::IE0;
    using IE0_EN = Trig3Chain10Fields::IE0_EN;
    using CSEL1 = Trig3Chain10Fields::CSEL1;
    using HWTS1 = Trig3Chain10Fields::HWTS1;
    using B2B1 = Trig3Chain10Fields::B2B1;
    using IE1 = Trig3Chain10Fields::IE1;
    using IE1_EN = Trig3Chain10Fields::IE1_EN;
  };

  // ETC_TRIG Chain 2/3 Register
  struct Trig3Chain32Fields {
    enum class eCSEL2 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL2_0 = 0,
      // ADC CMD1 selected.
      eCSEL2_1 = 1,
      // ADC CMD2 selected.
      eCSEL2_2 = 2,
      // ADC CMD3 selected.
      eCSEL2_3 = 3,
      // ADC CMD4 selected.
      eCSEL2_4 = 4,
      // ADC CMD5 selected.
      eCSEL2_5 = 5,
      // ADC CMD6 selected.
      eCSEL2_6 = 6,
      // ADC CMD7 selected.
      eCSEL2_7 = 7,
      // ADC CMD8 selected.
      eCSEL2_8 = 8,
      // ADC CMD9 selected.
      eCSEL2_9 = 9,
      // ADC CMD10 selected.
      eCSEL2_10 = 10,
      // ADC CMD11 selected.
      eCSEL2_11 = 11,
      // ADC CMD12 selected.
      eCSEL2_12 = 12,
      // ADC CMD13 selected.
      eCSEL2_13 = 13,
      // ADC CMD14 selected.
      eCSEL2_14 = 14,
      // ADC CMD15 selected.
      eCSEL2_15 = 15,
    };

    enum class eHWTS2 : std::uint32_t {
      // no trigger selected
      eHWTS2_0 = 0,
      // ADC TRIG0 selected
      eHWTS2_1 = 1,
      // ADC TRIG1 selected
      eHWTS2_2 = 2,
      // ADC TRIG2 selected
      eHWTS2_4 = 4,
      // ADC TRIG3 selected
      eHWTS2_8 = 8,
      // ADC TRIG4 selected
      eHWTS2_16 = 16,
      // ADC TRIG5 selected
      eHWTS2_32 = 32,
      // ADC TRIG6 selected
      eHWTS2_64 = 64,
      // ADC TRIG7 selected
      eHWTS2_128 = 128,
    };

    enum class eB2B2 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B2_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B2_1 = 1,
    };

    enum class eIE2 : std::uint32_t {
      // Generate interrupt on Done0 when segment 2 finish.
      eIE2_0 = 0,
      // Generate interrupt on Done1 when segment 2 finish.
      eIE2_1 = 1,
      // Generate interrupt on Done2 when segment 2 finish.
      eIE2_2 = 2,
      // Generate interrupt on Done3 when segment 2 finish.
      eIE2_3 = 3,
    };

    enum class eIE2_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE2_EN_0 = 0,
      // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
      eIE2_EN_1 = 1,
    };

    enum class eCSEL3 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL3_0 = 0,
      // ADC CMD1 selected.
      eCSEL3_1 = 1,
      // ADC CMD2 selected.
      eCSEL3_2 = 2,
      // ADC CMD3 selected.
      eCSEL3_3 = 3,
      // ADC CMD4 selected.
      eCSEL3_4 = 4,
      // ADC CMD5 selected.
      eCSEL3_5 = 5,
      // ADC CMD6 selected.
      eCSEL3_6 = 6,
      // ADC CMD7 selected.
      eCSEL3_7 = 7,
      // ADC CMD8 selected.
      eCSEL3_8 = 8,
      // ADC CMD9 selected.
      eCSEL3_9 = 9,
      // ADC CMD10 selected.
      eCSEL3_10 = 10,
      // ADC CMD11 selected.
      eCSEL3_11 = 11,
      // ADC CMD12 selected.
      eCSEL3_12 = 12,
      // ADC CMD13 selected.
      eCSEL3_13 = 13,
      // ADC CMD14 selected.
      eCSEL3_14 = 14,
      // ADC CMD15 selected.
      eCSEL3_15 = 15,
    };

    enum class eHWTS3 : std::uint32_t {
      // no trigger selected
      eHWTS3_0 = 0,
      // ADC TRIG0 selected
      eHWTS3_1 = 1,
      // ADC TRIG1 selected
      eHWTS3_2 = 2,
      // ADC TRIG2 selected
      eHWTS3_4 = 4,
      // ADC TRIG3 selected
      eHWTS3_8 = 8,
      // ADC TRIG4 selected
      eHWTS3_16 = 16,
      // ADC TRIG5 selected
      eHWTS3_32 = 32,
      // ADC TRIG6 selected
      eHWTS3_64 = 64,
      // ADC TRIG7 selected
      eHWTS3_128 = 128,
    };

    enum class eB2B3 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B3_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B3_1 = 1,
    };

    enum class eIE3 : std::uint32_t {
      // Generate interrupt on Done0 when segment 3 finish.
      eIE3_0 = 0,
      // Generate interrupt on Done1 when segment 3 finish.
      eIE3_1 = 1,
      // Generate interrupt on Done2 when segment 3 finish.
      eIE3_2 = 2,
      // Generate interrupt on Done3 when segment 3 finish.
      eIE3_3 = 3,
    };

    enum class eIE3_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE3_EN_0 = 0,
      // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
      eIE3_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL2 = ftl::mmio::Field<4, 0, eCSEL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 HWTS ADC hardware trigger selection
    using HWTS2 = ftl::mmio::Field<8, 4, eHWTS2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 B2B
    using B2B2 = ftl::mmio::Field<1, 12, eB2B2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    using IE2 = ftl::mmio::Field<2, 13, eIE2, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 2.
    using IE2_EN = ftl::mmio::Field<1, 15, eIE2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL3 = ftl::mmio::Field<4, 16, eCSEL3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 HWTS ADC hardware trigger selection
    using HWTS3 = ftl::mmio::Field<8, 20, eHWTS3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 B2B
    using B2B3 = ftl::mmio::Field<1, 28, eB2B3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    using IE3 = ftl::mmio::Field<2, 29, eIE3, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 3.
    using IE3_EN = ftl::mmio::Field<1, 31, eIE3_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig3Chain32Fields

  struct TRIG3_CHAIN_3_2 : ftl::mmio::Register<
      0x40048094u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig3Chain32Fields::CSEL2,
      Trig3Chain32Fields::HWTS2,
      Trig3Chain32Fields::B2B2,
      Trig3Chain32Fields::IE2,
      Trig3Chain32Fields::IE2_EN,
      Trig3Chain32Fields::CSEL3,
      Trig3Chain32Fields::HWTS3,
      Trig3Chain32Fields::B2B3,
      Trig3Chain32Fields::IE3,
      Trig3Chain32Fields::IE3_EN> {
    using eCSEL2 = Trig3Chain32Fields::eCSEL2;
    using eHWTS2 = Trig3Chain32Fields::eHWTS2;
    using eB2B2 = Trig3Chain32Fields::eB2B2;
    using eIE2 = Trig3Chain32Fields::eIE2;
    using eIE2_EN = Trig3Chain32Fields::eIE2_EN;
    using eCSEL3 = Trig3Chain32Fields::eCSEL3;
    using eHWTS3 = Trig3Chain32Fields::eHWTS3;
    using eB2B3 = Trig3Chain32Fields::eB2B3;
    using eIE3 = Trig3Chain32Fields::eIE3;
    using eIE3_EN = Trig3Chain32Fields::eIE3_EN;
    using CSEL2 = Trig3Chain32Fields::CSEL2;
    using HWTS2 = Trig3Chain32Fields::HWTS2;
    using B2B2 = Trig3Chain32Fields::B2B2;
    using IE2 = Trig3Chain32Fields::IE2;
    using IE2_EN = Trig3Chain32Fields::IE2_EN;
    using CSEL3 = Trig3Chain32Fields::CSEL3;
    using HWTS3 = Trig3Chain32Fields::HWTS3;
    using B2B3 = Trig3Chain32Fields::B2B3;
    using IE3 = Trig3Chain32Fields::IE3;
    using IE3_EN = Trig3Chain32Fields::IE3_EN;
  };

  // ETC_TRIG Chain 4/5 Register
  struct Trig3Chain54Fields {
    enum class eCSEL4 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL4_0 = 0,
      // ADC CMD1 selected.
      eCSEL4_1 = 1,
      // ADC CMD2 selected.
      eCSEL4_2 = 2,
      // ADC CMD3 selected.
      eCSEL4_3 = 3,
      // ADC CMD4 selected.
      eCSEL4_4 = 4,
      // ADC CMD5 selected.
      eCSEL4_5 = 5,
      // ADC CMD6 selected.
      eCSEL4_6 = 6,
      // ADC CMD7 selected.
      eCSEL4_7 = 7,
      // ADC CMD8 selected.
      eCSEL4_8 = 8,
      // ADC CMD9 selected.
      eCSEL4_9 = 9,
      // ADC CMD10 selected.
      eCSEL4_10 = 10,
      // ADC CMD11 selected.
      eCSEL4_11 = 11,
      // ADC CMD12 selected.
      eCSEL4_12 = 12,
      // ADC CMD13 selected.
      eCSEL4_13 = 13,
      // ADC CMD14 selected.
      eCSEL4_14 = 14,
      // ADC CMD15 selected.
      eCSEL4_15 = 15,
    };

    enum class eHWTS4 : std::uint32_t {
      // no trigger selected
      eHWTS4_0 = 0,
      // ADC TRIG0 selected
      eHWTS4_1 = 1,
      // ADC TRIG1 selected
      eHWTS4_2 = 2,
      // ADC TRIG2 selected
      eHWTS4_4 = 4,
      // ADC TRIG3 selected
      eHWTS4_8 = 8,
      // ADC TRIG4 selected
      eHWTS4_16 = 16,
      // ADC TRIG5 selected
      eHWTS4_32 = 32,
      // ADC TRIG6 selected
      eHWTS4_64 = 64,
      // ADC TRIG7 selected
      eHWTS4_128 = 128,
    };

    enum class eB2B4 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B4_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B4_1 = 1,
    };

    enum class eIE4 : std::uint32_t {
      // Generate interrupt on Done0 when segment 4 finish.
      eIE4_0 = 0,
      // Generate interrupt on Done1 when segment 4 finish.
      eIE4_1 = 1,
      // Generate interrupt on Done2 when segment 4 finish.
      eIE4_2 = 2,
      // Generate interrupt on Done3 when segment 4 finish.
      eIE4_3 = 3,
    };

    enum class eIE4_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE4_EN_0 = 0,
      // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
      eIE4_EN_1 = 1,
    };

    enum class eCSEL5 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL5_0 = 0,
      // ADC CMD1 selected.
      eCSEL5_1 = 1,
      // ADC CMD2 selected.
      eCSEL5_2 = 2,
      // ADC CMD3 selected.
      eCSEL5_3 = 3,
      // ADC CMD4 selected.
      eCSEL5_4 = 4,
      // ADC CMD5 selected.
      eCSEL5_5 = 5,
      // ADC CMD6 selected.
      eCSEL5_6 = 6,
      // ADC CMD7 selected.
      eCSEL5_7 = 7,
      // ADC CMD8 selected.
      eCSEL5_8 = 8,
      // ADC CMD9 selected.
      eCSEL5_9 = 9,
      // ADC CMD10 selected.
      eCSEL5_10 = 10,
      // ADC CMD11 selected.
      eCSEL5_11 = 11,
      // ADC CMD12 selected.
      eCSEL5_12 = 12,
      // ADC CMD13 selected.
      eCSEL5_13 = 13,
      // ADC CMD14 selected.
      eCSEL5_14 = 14,
      // ADC CMD15 selected.
      eCSEL5_15 = 15,
    };

    enum class eHWTS5 : std::uint32_t {
      // no trigger selected
      eHWTS5_0 = 0,
      // ADC TRIG0 selected
      eHWTS5_1 = 1,
      // ADC TRIG1 selected
      eHWTS5_2 = 2,
      // ADC TRIG2 selected
      eHWTS5_4 = 4,
      // ADC TRIG3 selected
      eHWTS5_8 = 8,
      // ADC TRIG4 selected
      eHWTS5_16 = 16,
      // ADC TRIG5 selected
      eHWTS5_32 = 32,
      // ADC TRIG6 selected
      eHWTS5_64 = 64,
      // ADC TRIG7 selected
      eHWTS5_128 = 128,
    };

    enum class eB2B5 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B5_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B5_1 = 1,
    };

    enum class eIE5 : std::uint32_t {
      // Generate interrupt on Done0 when segment 5 finish.
      eIE5_0 = 0,
      // Generate interrupt on Done1 when segment 5 finish.
      eIE5_1 = 1,
      // Generate interrupt on Done2 when segment 5 finish.
      eIE5_2 = 2,
      // Generate interrupt on Done3 when segment 5 finish.
      eIE5_3 = 3,
    };

    enum class eIE5_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE5_EN_0 = 0,
      // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
      eIE5_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL4 = ftl::mmio::Field<4, 0, eCSEL4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 HWTS ADC hardware trigger selection
    using HWTS4 = ftl::mmio::Field<8, 4, eHWTS4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 B2B
    using B2B4 = ftl::mmio::Field<1, 12, eB2B4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    using IE4 = ftl::mmio::Field<2, 13, eIE4, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 4.
    using IE4_EN = ftl::mmio::Field<1, 15, eIE4_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL5 = ftl::mmio::Field<4, 16, eCSEL5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 HWTS ADC hardware trigger selection
    using HWTS5 = ftl::mmio::Field<8, 20, eHWTS5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 B2B
    using B2B5 = ftl::mmio::Field<1, 28, eB2B5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    using IE5 = ftl::mmio::Field<2, 29, eIE5, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 5.
    using IE5_EN = ftl::mmio::Field<1, 31, eIE5_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig3Chain54Fields

  struct TRIG3_CHAIN_5_4 : ftl::mmio::Register<
      0x40048098u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig3Chain54Fields::CSEL4,
      Trig3Chain54Fields::HWTS4,
      Trig3Chain54Fields::B2B4,
      Trig3Chain54Fields::IE4,
      Trig3Chain54Fields::IE4_EN,
      Trig3Chain54Fields::CSEL5,
      Trig3Chain54Fields::HWTS5,
      Trig3Chain54Fields::B2B5,
      Trig3Chain54Fields::IE5,
      Trig3Chain54Fields::IE5_EN> {
    using eCSEL4 = Trig3Chain54Fields::eCSEL4;
    using eHWTS4 = Trig3Chain54Fields::eHWTS4;
    using eB2B4 = Trig3Chain54Fields::eB2B4;
    using eIE4 = Trig3Chain54Fields::eIE4;
    using eIE4_EN = Trig3Chain54Fields::eIE4_EN;
    using eCSEL5 = Trig3Chain54Fields::eCSEL5;
    using eHWTS5 = Trig3Chain54Fields::eHWTS5;
    using eB2B5 = Trig3Chain54Fields::eB2B5;
    using eIE5 = Trig3Chain54Fields::eIE5;
    using eIE5_EN = Trig3Chain54Fields::eIE5_EN;
    using CSEL4 = Trig3Chain54Fields::CSEL4;
    using HWTS4 = Trig3Chain54Fields::HWTS4;
    using B2B4 = Trig3Chain54Fields::B2B4;
    using IE4 = Trig3Chain54Fields::IE4;
    using IE4_EN = Trig3Chain54Fields::IE4_EN;
    using CSEL5 = Trig3Chain54Fields::CSEL5;
    using HWTS5 = Trig3Chain54Fields::HWTS5;
    using B2B5 = Trig3Chain54Fields::B2B5;
    using IE5 = Trig3Chain54Fields::IE5;
    using IE5_EN = Trig3Chain54Fields::IE5_EN;
  };

  // ETC_TRIG Chain 6/7 Register
  struct Trig3Chain76Fields {
    enum class eCSEL6 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL6_0 = 0,
      // ADC CMD1 selected.
      eCSEL6_1 = 1,
      // ADC CMD2 selected.
      eCSEL6_2 = 2,
      // ADC CMD3 selected.
      eCSEL6_3 = 3,
      // ADC CMD4 selected.
      eCSEL6_4 = 4,
      // ADC CMD5 selected.
      eCSEL6_5 = 5,
      // ADC CMD6 selected.
      eCSEL6_6 = 6,
      // ADC CMD7 selected.
      eCSEL6_7 = 7,
      // ADC CMD8 selected.
      eCSEL6_8 = 8,
      // ADC CMD9 selected.
      eCSEL6_9 = 9,
      // ADC CMD10 selected.
      eCSEL6_10 = 10,
      // ADC CMD11 selected.
      eCSEL6_11 = 11,
      // ADC CMD12 selected.
      eCSEL6_12 = 12,
      // ADC CMD13 selected.
      eCSEL6_13 = 13,
      // ADC CMD14 selected.
      eCSEL6_14 = 14,
      // ADC CMD15 selected.
      eCSEL6_15 = 15,
    };

    enum class eHWTS6 : std::uint32_t {
      // no trigger selected
      eHWTS6_0 = 0,
      // ADC TRIG0 selected
      eHWTS6_1 = 1,
      // ADC TRIG1 selected
      eHWTS6_2 = 2,
      // ADC TRIG2 selected
      eHWTS6_4 = 4,
      // ADC TRIG3 selected
      eHWTS6_8 = 8,
      // ADC TRIG4 selected
      eHWTS6_16 = 16,
      // ADC TRIG5 selected
      eHWTS6_32 = 32,
      // ADC TRIG6 selected
      eHWTS6_64 = 64,
      // ADC TRIG7 selected
      eHWTS6_128 = 128,
    };

    enum class eB2B6 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B6_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B6_1 = 1,
    };

    enum class eIE6 : std::uint32_t {
      // Generate interrupt on Done0 when segment 6 finish.
      eIE6_0 = 0,
      // Generate interrupt on Done1 when segment 6 finish.
      eIE6_1 = 1,
      // Generate interrupt on Done2 when segment 6 finish.
      eIE6_2 = 2,
      // Generate interrupt on Done3 when segment 6 finish.
      eIE6_3 = 3,
    };

    enum class eIE6_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE6_EN_0 = 0,
      // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
      eIE6_EN_1 = 1,
    };

    enum class eCSEL7 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL7_0 = 0,
      // ADC CMD1 selected.
      eCSEL7_1 = 1,
      // ADC CMD2 selected.
      eCSEL7_2 = 2,
      // ADC CMD3 selected.
      eCSEL7_3 = 3,
      // ADC CMD4 selected.
      eCSEL7_4 = 4,
      // ADC CMD5 selected.
      eCSEL7_5 = 5,
      // ADC CMD6 selected.
      eCSEL7_6 = 6,
      // ADC CMD7 selected.
      eCSEL7_7 = 7,
      // ADC CMD8 selected.
      eCSEL7_8 = 8,
      // ADC CMD9 selected.
      eCSEL7_9 = 9,
      // ADC CMD10 selected.
      eCSEL7_10 = 10,
      // ADC CMD11 selected.
      eCSEL7_11 = 11,
      // ADC CMD12 selected.
      eCSEL7_12 = 12,
      // ADC CMD13 selected.
      eCSEL7_13 = 13,
      // ADC CMD14 selected.
      eCSEL7_14 = 14,
      // ADC CMD15 selected.
      eCSEL7_15 = 15,
    };

    enum class eHWTS7 : std::uint32_t {
      // no trigger selected
      eHWTS7_0 = 0,
      // ADC TRIG0 selected
      eHWTS7_1 = 1,
      // ADC TRIG1 selected
      eHWTS7_2 = 2,
      // ADC TRIG2 selected
      eHWTS7_4 = 4,
      // ADC TRIG3 selected
      eHWTS7_8 = 8,
      // ADC TRIG4 selected
      eHWTS7_16 = 16,
      // ADC TRIG5 selected
      eHWTS7_32 = 32,
      // ADC TRIG6 selected
      eHWTS7_64 = 64,
      // ADC TRIG7 selected
      eHWTS7_128 = 128,
    };

    enum class eB2B7 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B7_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B7_1 = 1,
    };

    enum class eIE7 : std::uint32_t {
      // Generate interrupt on Done0 when segment 7 finish.
      eIE7_0 = 0,
      // Generate interrupt on Done1 when segment 7 finish.
      eIE7_1 = 1,
      // Generate interrupt on Done2 when segment 7 finish.
      eIE7_2 = 2,
      // Generate interrupt on Done3 when segment 7 finish.
      eIE7_3 = 3,
    };

    enum class eIE7_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE7_EN_0 = 0,
      // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
      eIE7_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL6 = ftl::mmio::Field<4, 0, eCSEL6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 HWTS ADC hardware trigger selection
    using HWTS6 = ftl::mmio::Field<8, 4, eHWTS6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 B2B
    using B2B6 = ftl::mmio::Field<1, 12, eB2B6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    using IE6 = ftl::mmio::Field<2, 13, eIE6, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 6.
    using IE6_EN = ftl::mmio::Field<1, 15, eIE6_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL7 = ftl::mmio::Field<4, 16, eCSEL7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 HWTS ADC hardware trigger selection
    using HWTS7 = ftl::mmio::Field<8, 20, eHWTS7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 B2B
    using B2B7 = ftl::mmio::Field<1, 28, eB2B7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    using IE7 = ftl::mmio::Field<2, 29, eIE7, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 7.
    using IE7_EN = ftl::mmio::Field<1, 31, eIE7_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig3Chain76Fields

  struct TRIG3_CHAIN_7_6 : ftl::mmio::Register<
      0x4004809Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig3Chain76Fields::CSEL6,
      Trig3Chain76Fields::HWTS6,
      Trig3Chain76Fields::B2B6,
      Trig3Chain76Fields::IE6,
      Trig3Chain76Fields::IE6_EN,
      Trig3Chain76Fields::CSEL7,
      Trig3Chain76Fields::HWTS7,
      Trig3Chain76Fields::B2B7,
      Trig3Chain76Fields::IE7,
      Trig3Chain76Fields::IE7_EN> {
    using eCSEL6 = Trig3Chain76Fields::eCSEL6;
    using eHWTS6 = Trig3Chain76Fields::eHWTS6;
    using eB2B6 = Trig3Chain76Fields::eB2B6;
    using eIE6 = Trig3Chain76Fields::eIE6;
    using eIE6_EN = Trig3Chain76Fields::eIE6_EN;
    using eCSEL7 = Trig3Chain76Fields::eCSEL7;
    using eHWTS7 = Trig3Chain76Fields::eHWTS7;
    using eB2B7 = Trig3Chain76Fields::eB2B7;
    using eIE7 = Trig3Chain76Fields::eIE7;
    using eIE7_EN = Trig3Chain76Fields::eIE7_EN;
    using CSEL6 = Trig3Chain76Fields::CSEL6;
    using HWTS6 = Trig3Chain76Fields::HWTS6;
    using B2B6 = Trig3Chain76Fields::B2B6;
    using IE6 = Trig3Chain76Fields::IE6;
    using IE6_EN = Trig3Chain76Fields::IE6_EN;
    using CSEL7 = Trig3Chain76Fields::CSEL7;
    using HWTS7 = Trig3Chain76Fields::HWTS7;
    using B2B7 = Trig3Chain76Fields::B2B7;
    using IE7 = Trig3Chain76Fields::IE7;
    using IE7_EN = Trig3Chain76Fields::IE7_EN;
  };

  // ETC_TRIG Result Data 1/0 Register
  struct Trig3Result10Fields {
    // Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA0 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA1 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig3Result10Fields

  struct TRIG3_RESULT_1_0 : ftl::mmio::Register<
      0x400480A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig3Result10Fields::DATA0,
      ftl::mmio::Reserved<4, 12>,
      Trig3Result10Fields::DATA1,
      ftl::mmio::Reserved<4, 28>> {
    using DATA0 = Trig3Result10Fields::DATA0;
    using DATA1 = Trig3Result10Fields::DATA1;
  };

  // ETC_TRIG Result Data 3/2 Register
  struct Trig3Result32Fields {
    // Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA2 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA3 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig3Result32Fields

  struct TRIG3_RESULT_3_2 : ftl::mmio::Register<
      0x400480A4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig3Result32Fields::DATA2,
      ftl::mmio::Reserved<4, 12>,
      Trig3Result32Fields::DATA3,
      ftl::mmio::Reserved<4, 28>> {
    using DATA2 = Trig3Result32Fields::DATA2;
    using DATA3 = Trig3Result32Fields::DATA3;
  };

  // ETC_TRIG Result Data 5/4 Register
  struct Trig3Result54Fields {
    // Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA4 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA5 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig3Result54Fields

  struct TRIG3_RESULT_5_4 : ftl::mmio::Register<
      0x400480A8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig3Result54Fields::DATA4,
      ftl::mmio::Reserved<4, 12>,
      Trig3Result54Fields::DATA5,
      ftl::mmio::Reserved<4, 28>> {
    using DATA4 = Trig3Result54Fields::DATA4;
    using DATA5 = Trig3Result54Fields::DATA5;
  };

  // ETC_TRIG Result Data 7/6 Register
  struct Trig3Result76Fields {
    // Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA6 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA7 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig3Result76Fields

  struct TRIG3_RESULT_7_6 : ftl::mmio::Register<
      0x400480ACu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig3Result76Fields::DATA6,
      ftl::mmio::Reserved<4, 12>,
      Trig3Result76Fields::DATA7,
      ftl::mmio::Reserved<4, 28>> {
    using DATA6 = Trig3Result76Fields::DATA6;
    using DATA7 = Trig3Result76Fields::DATA7;
  };

  // ETC_TRIG Control Register
  struct Trig4CtrlFields {
    enum class eSW_TRIG : std::uint32_t {
      // No software trigger event generated.
      eSW_TRIG_0 = 0,
      // Software trigger event generated.
      eSW_TRIG_1 = 1,
    };

    enum class eTRIG_MODE : std::uint32_t {
      // Hardware trigger. The softerware trigger will be ignored.
      eTRIG_MODE_0 = 0,
      // Software trigger. The hardware trigger will be ignored.
      eTRIG_MODE_1 = 1,
    };

    enum class eTRIG_CHAIN : std::uint32_t {
      // Trigger chain length is 1
      eTRIG_CHAIN_0 = 0,
      // Trigger chain length is 2
      eTRIG_CHAIN_1 = 1,
      // Trigger chain length is 3
      eTRIG_CHAIN_2 = 2,
      // Trigger chain length is 4
      eTRIG_CHAIN_3 = 3,
      // Trigger chain length is 5
      eTRIG_CHAIN_4 = 4,
      // Trigger chain length is 6
      eTRIG_CHAIN_5 = 5,
      // Trigger chain length is 7
      eTRIG_CHAIN_6 = 6,
      // Trigger chain length is 8
      eTRIG_CHAIN_7 = 7,
    };

    enum class eSYNC_MODE : std::uint32_t {
      // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
      eSYNC_MODE_0 = 0,
      // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
      eSYNC_MODE_1 = 1,
    };

    enum class eCHAINx_DONE : std::uint32_t {
      // segment x done not detected.
      eCHAINx_DONE_0 = 0,
      // segment x done detected.
      eCHAINx_DONE_1 = 1,
    };

    // Software trigger. This field is self-clearing.
    using SW_TRIG = ftl::mmio::Field<1, 0, eSW_TRIG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger mode selection.
    using TRIG_MODE = ftl::mmio::Field<1, 4, eTRIG_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // The number of segments inside the trigger chain of TRIGa.
    using TRIG_CHAIN = ftl::mmio::Field<3, 8, eTRIG_CHAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // External trigger priority, 7 is highest priority, while 0 is lowest
    using TRIG_PRIORITY = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger synchronization mode selection
    using SYNC_MODE = ftl::mmio::Field<1, 16, eSYNC_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment x done detection
    using CHAINx_DONE = ftl::mmio::Field<8, 24, eCHAINx_DONE, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Trig4CtrlFields

  struct TRIG4_CTRL : ftl::mmio::Register<
      0x400480B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig4CtrlFields::SW_TRIG,
      ftl::mmio::Reserved<3, 1>,
      Trig4CtrlFields::TRIG_MODE,
      ftl::mmio::Reserved<3, 5>,
      Trig4CtrlFields::TRIG_CHAIN,
      ftl::mmio::Reserved<1, 11>,
      Trig4CtrlFields::TRIG_PRIORITY,
      ftl::mmio::Reserved<1, 15>,
      Trig4CtrlFields::SYNC_MODE,
      ftl::mmio::Reserved<7, 17>,
      Trig4CtrlFields::CHAINx_DONE> {
    using eSW_TRIG = Trig4CtrlFields::eSW_TRIG;
    using eTRIG_MODE = Trig4CtrlFields::eTRIG_MODE;
    using eTRIG_CHAIN = Trig4CtrlFields::eTRIG_CHAIN;
    using eSYNC_MODE = Trig4CtrlFields::eSYNC_MODE;
    using eCHAINx_DONE = Trig4CtrlFields::eCHAINx_DONE;
    using SW_TRIG = Trig4CtrlFields::SW_TRIG;
    using TRIG_MODE = Trig4CtrlFields::TRIG_MODE;
    using TRIG_CHAIN = Trig4CtrlFields::TRIG_CHAIN;
    using TRIG_PRIORITY = Trig4CtrlFields::TRIG_PRIORITY;
    using SYNC_MODE = Trig4CtrlFields::SYNC_MODE;
    using CHAINx_DONE = Trig4CtrlFields::CHAINx_DONE;
  };

  // ETC_TRIG Counter Register
  struct Trig4CounterFields {
    // TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    using INIT_DELAY = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIGGER sampling interval counter
    using SAMPLE_INTERVAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig4CounterFields

  struct TRIG4_COUNTER : ftl::mmio::Register<
      0x400480B4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig4CounterFields::INIT_DELAY,
      Trig4CounterFields::SAMPLE_INTERVAL> {
    using INIT_DELAY = Trig4CounterFields::INIT_DELAY;
    using SAMPLE_INTERVAL = Trig4CounterFields::SAMPLE_INTERVAL;
  };

  // ETC_TRIG Chain 0/1 Register
  struct Trig4Chain10Fields {
    enum class eCSEL0 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL0_0 = 0,
      // ADC CMD1 selected.
      eCSEL0_1 = 1,
      // ADC CMD2 selected.
      eCSEL0_2 = 2,
      // ADC CMD3 selected.
      eCSEL0_3 = 3,
      // ADC CMD4 selected.
      eCSEL0_4 = 4,
      // ADC CMD5 selected.
      eCSEL0_5 = 5,
      // ADC CMD6 selected.
      eCSEL0_6 = 6,
      // ADC CMD7 selected.
      eCSEL0_7 = 7,
      // ADC CMD8 selected.
      eCSEL0_8 = 8,
      // ADC CMD9 selected.
      eCSEL0_9 = 9,
      // ADC CMD10 selected.
      eCSEL0_10 = 10,
      // ADC CMD11 selected.
      eCSEL0_11 = 11,
      // ADC CMD12 selected.
      eCSEL0_12 = 12,
      // ADC CMD13 selected.
      eCSEL0_13 = 13,
      // ADC CMD14 selected.
      eCSEL0_14 = 14,
      // ADC CMD15 selected.
      eCSEL0_15 = 15,
    };

    enum class eHWTS0 : std::uint32_t {
      // no trigger selected
      eHWTS0_0 = 0,
      // ADC TRIG0 selected
      eHWTS0_1 = 1,
      // ADC TRIG1 selected
      eHWTS0_2 = 2,
      // ADC TRIG2 selected
      eHWTS0_4 = 4,
      // ADC TRIG3 selected
      eHWTS0_8 = 8,
      // ADC TRIG4 selected
      eHWTS0_16 = 16,
      // ADC TRIG5 selected
      eHWTS0_32 = 32,
      // ADC TRIG6 selected
      eHWTS0_64 = 64,
      // ADC TRIG7 selected
      eHWTS0_128 = 128,
    };

    enum class eB2B0 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B0_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B0_1 = 1,
    };

    enum class eIE0 : std::uint32_t {
      // Generate interrupt on Done0 when segment 0 finish.
      eIE0_0 = 0,
      // Generate interrupt on Done1 when segment 0 finish.
      eIE0_1 = 1,
      // Generate interrupt on Done2 when segment 0 finish.
      eIE0_2 = 2,
      // Generate interrupt on Done3 when segment 0 finish.
      eIE0_3 = 3,
    };

    enum class eIE0_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE0_EN_0 = 0,
      // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
      eIE0_EN_1 = 1,
    };

    enum class eCSEL1 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL1_0 = 0,
      // ADC CMD1 selected.
      eCSEL1_1 = 1,
      // ADC CMD2 selected.
      eCSEL1_2 = 2,
      // ADC CMD3 selected.
      eCSEL1_3 = 3,
      // ADC CMD4 selected.
      eCSEL1_4 = 4,
      // ADC CMD5 selected.
      eCSEL1_5 = 5,
      // ADC CMD6 selected.
      eCSEL1_6 = 6,
      // ADC CMD7 selected.
      eCSEL1_7 = 7,
      // ADC CMD8 selected.
      eCSEL1_8 = 8,
      // ADC CMD9 selected.
      eCSEL1_9 = 9,
      // ADC CMD10 selected.
      eCSEL1_10 = 10,
      // ADC CMD11 selected.
      eCSEL1_11 = 11,
      // ADC CMD12 selected.
      eCSEL1_12 = 12,
      // ADC CMD13 selected.
      eCSEL1_13 = 13,
      // ADC CMD14 selected.
      eCSEL1_14 = 14,
      // ADC CMD15 selected.
      eCSEL1_15 = 15,
    };

    enum class eHWTS1 : std::uint32_t {
      // no trigger selected
      eHWTS1_0 = 0,
      // ADC TRIG0 selected
      eHWTS1_1 = 1,
      // ADC TRIG1 selected
      eHWTS1_2 = 2,
      // ADC TRIG2 selected
      eHWTS1_4 = 4,
      // ADC TRIG3 selected
      eHWTS1_8 = 8,
      // ADC TRIG4 selected
      eHWTS1_16 = 16,
      // ADC TRIG5 selected
      eHWTS1_32 = 32,
      // ADC TRIG6 selected
      eHWTS1_64 = 64,
      // ADC TRIG7 selected
      eHWTS1_128 = 128,
    };

    enum class eB2B1 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B1_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B1_1 = 1,
    };

    enum class eIE1 : std::uint32_t {
      // Generate interrupt on Done0 when Segment 1 finish.
      eIE1_0 = 0,
      // Generate interrupt on Done1 when Segment 1 finish.
      eIE1_1 = 1,
      // Generate interrupt on Done2 when Segment 1 finish.
      eIE1_2 = 2,
      // Generate interrupt on Done3 when Segment 1 finish.
      eIE1_3 = 3,
    };

    enum class eIE1_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE1_EN_0 = 0,
      // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
      eIE1_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL0 = ftl::mmio::Field<4, 0, eCSEL0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 HWTS ADC hardware trigger selection
    using HWTS0 = ftl::mmio::Field<8, 4, eHWTS0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 B2B
    using B2B0 = ftl::mmio::Field<1, 12, eB2B0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    using IE0 = ftl::mmio::Field<2, 13, eIE0, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 0.
    using IE0_EN = ftl::mmio::Field<1, 15, eIE0_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL1 = ftl::mmio::Field<4, 16, eCSEL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 HWTS ADC hardware trigger selection
    using HWTS1 = ftl::mmio::Field<8, 20, eHWTS1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 B2B
    using B2B1 = ftl::mmio::Field<1, 28, eB2B1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    using IE1 = ftl::mmio::Field<2, 29, eIE1, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 1.
    using IE1_EN = ftl::mmio::Field<1, 31, eIE1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig4Chain10Fields

  struct TRIG4_CHAIN_1_0 : ftl::mmio::Register<
      0x400480B8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig4Chain10Fields::CSEL0,
      Trig4Chain10Fields::HWTS0,
      Trig4Chain10Fields::B2B0,
      Trig4Chain10Fields::IE0,
      Trig4Chain10Fields::IE0_EN,
      Trig4Chain10Fields::CSEL1,
      Trig4Chain10Fields::HWTS1,
      Trig4Chain10Fields::B2B1,
      Trig4Chain10Fields::IE1,
      Trig4Chain10Fields::IE1_EN> {
    using eCSEL0 = Trig4Chain10Fields::eCSEL0;
    using eHWTS0 = Trig4Chain10Fields::eHWTS0;
    using eB2B0 = Trig4Chain10Fields::eB2B0;
    using eIE0 = Trig4Chain10Fields::eIE0;
    using eIE0_EN = Trig4Chain10Fields::eIE0_EN;
    using eCSEL1 = Trig4Chain10Fields::eCSEL1;
    using eHWTS1 = Trig4Chain10Fields::eHWTS1;
    using eB2B1 = Trig4Chain10Fields::eB2B1;
    using eIE1 = Trig4Chain10Fields::eIE1;
    using eIE1_EN = Trig4Chain10Fields::eIE1_EN;
    using CSEL0 = Trig4Chain10Fields::CSEL0;
    using HWTS0 = Trig4Chain10Fields::HWTS0;
    using B2B0 = Trig4Chain10Fields::B2B0;
    using IE0 = Trig4Chain10Fields::IE0;
    using IE0_EN = Trig4Chain10Fields::IE0_EN;
    using CSEL1 = Trig4Chain10Fields::CSEL1;
    using HWTS1 = Trig4Chain10Fields::HWTS1;
    using B2B1 = Trig4Chain10Fields::B2B1;
    using IE1 = Trig4Chain10Fields::IE1;
    using IE1_EN = Trig4Chain10Fields::IE1_EN;
  };

  // ETC_TRIG Chain 2/3 Register
  struct Trig4Chain32Fields {
    enum class eCSEL2 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL2_0 = 0,
      // ADC CMD1 selected.
      eCSEL2_1 = 1,
      // ADC CMD2 selected.
      eCSEL2_2 = 2,
      // ADC CMD3 selected.
      eCSEL2_3 = 3,
      // ADC CMD4 selected.
      eCSEL2_4 = 4,
      // ADC CMD5 selected.
      eCSEL2_5 = 5,
      // ADC CMD6 selected.
      eCSEL2_6 = 6,
      // ADC CMD7 selected.
      eCSEL2_7 = 7,
      // ADC CMD8 selected.
      eCSEL2_8 = 8,
      // ADC CMD9 selected.
      eCSEL2_9 = 9,
      // ADC CMD10 selected.
      eCSEL2_10 = 10,
      // ADC CMD11 selected.
      eCSEL2_11 = 11,
      // ADC CMD12 selected.
      eCSEL2_12 = 12,
      // ADC CMD13 selected.
      eCSEL2_13 = 13,
      // ADC CMD14 selected.
      eCSEL2_14 = 14,
      // ADC CMD15 selected.
      eCSEL2_15 = 15,
    };

    enum class eHWTS2 : std::uint32_t {
      // no trigger selected
      eHWTS2_0 = 0,
      // ADC TRIG0 selected
      eHWTS2_1 = 1,
      // ADC TRIG1 selected
      eHWTS2_2 = 2,
      // ADC TRIG2 selected
      eHWTS2_4 = 4,
      // ADC TRIG3 selected
      eHWTS2_8 = 8,
      // ADC TRIG4 selected
      eHWTS2_16 = 16,
      // ADC TRIG5 selected
      eHWTS2_32 = 32,
      // ADC TRIG6 selected
      eHWTS2_64 = 64,
      // ADC TRIG7 selected
      eHWTS2_128 = 128,
    };

    enum class eB2B2 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B2_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B2_1 = 1,
    };

    enum class eIE2 : std::uint32_t {
      // Generate interrupt on Done0 when segment 2 finish.
      eIE2_0 = 0,
      // Generate interrupt on Done1 when segment 2 finish.
      eIE2_1 = 1,
      // Generate interrupt on Done2 when segment 2 finish.
      eIE2_2 = 2,
      // Generate interrupt on Done3 when segment 2 finish.
      eIE2_3 = 3,
    };

    enum class eIE2_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE2_EN_0 = 0,
      // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
      eIE2_EN_1 = 1,
    };

    enum class eCSEL3 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL3_0 = 0,
      // ADC CMD1 selected.
      eCSEL3_1 = 1,
      // ADC CMD2 selected.
      eCSEL3_2 = 2,
      // ADC CMD3 selected.
      eCSEL3_3 = 3,
      // ADC CMD4 selected.
      eCSEL3_4 = 4,
      // ADC CMD5 selected.
      eCSEL3_5 = 5,
      // ADC CMD6 selected.
      eCSEL3_6 = 6,
      // ADC CMD7 selected.
      eCSEL3_7 = 7,
      // ADC CMD8 selected.
      eCSEL3_8 = 8,
      // ADC CMD9 selected.
      eCSEL3_9 = 9,
      // ADC CMD10 selected.
      eCSEL3_10 = 10,
      // ADC CMD11 selected.
      eCSEL3_11 = 11,
      // ADC CMD12 selected.
      eCSEL3_12 = 12,
      // ADC CMD13 selected.
      eCSEL3_13 = 13,
      // ADC CMD14 selected.
      eCSEL3_14 = 14,
      // ADC CMD15 selected.
      eCSEL3_15 = 15,
    };

    enum class eHWTS3 : std::uint32_t {
      // no trigger selected
      eHWTS3_0 = 0,
      // ADC TRIG0 selected
      eHWTS3_1 = 1,
      // ADC TRIG1 selected
      eHWTS3_2 = 2,
      // ADC TRIG2 selected
      eHWTS3_4 = 4,
      // ADC TRIG3 selected
      eHWTS3_8 = 8,
      // ADC TRIG4 selected
      eHWTS3_16 = 16,
      // ADC TRIG5 selected
      eHWTS3_32 = 32,
      // ADC TRIG6 selected
      eHWTS3_64 = 64,
      // ADC TRIG7 selected
      eHWTS3_128 = 128,
    };

    enum class eB2B3 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B3_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B3_1 = 1,
    };

    enum class eIE3 : std::uint32_t {
      // Generate interrupt on Done0 when segment 3 finish.
      eIE3_0 = 0,
      // Generate interrupt on Done1 when segment 3 finish.
      eIE3_1 = 1,
      // Generate interrupt on Done2 when segment 3 finish.
      eIE3_2 = 2,
      // Generate interrupt on Done3 when segment 3 finish.
      eIE3_3 = 3,
    };

    enum class eIE3_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE3_EN_0 = 0,
      // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
      eIE3_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL2 = ftl::mmio::Field<4, 0, eCSEL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 HWTS ADC hardware trigger selection
    using HWTS2 = ftl::mmio::Field<8, 4, eHWTS2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 B2B
    using B2B2 = ftl::mmio::Field<1, 12, eB2B2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    using IE2 = ftl::mmio::Field<2, 13, eIE2, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 2.
    using IE2_EN = ftl::mmio::Field<1, 15, eIE2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL3 = ftl::mmio::Field<4, 16, eCSEL3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 HWTS ADC hardware trigger selection
    using HWTS3 = ftl::mmio::Field<8, 20, eHWTS3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 B2B
    using B2B3 = ftl::mmio::Field<1, 28, eB2B3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    using IE3 = ftl::mmio::Field<2, 29, eIE3, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 3.
    using IE3_EN = ftl::mmio::Field<1, 31, eIE3_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig4Chain32Fields

  struct TRIG4_CHAIN_3_2 : ftl::mmio::Register<
      0x400480BCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig4Chain32Fields::CSEL2,
      Trig4Chain32Fields::HWTS2,
      Trig4Chain32Fields::B2B2,
      Trig4Chain32Fields::IE2,
      Trig4Chain32Fields::IE2_EN,
      Trig4Chain32Fields::CSEL3,
      Trig4Chain32Fields::HWTS3,
      Trig4Chain32Fields::B2B3,
      Trig4Chain32Fields::IE3,
      Trig4Chain32Fields::IE3_EN> {
    using eCSEL2 = Trig4Chain32Fields::eCSEL2;
    using eHWTS2 = Trig4Chain32Fields::eHWTS2;
    using eB2B2 = Trig4Chain32Fields::eB2B2;
    using eIE2 = Trig4Chain32Fields::eIE2;
    using eIE2_EN = Trig4Chain32Fields::eIE2_EN;
    using eCSEL3 = Trig4Chain32Fields::eCSEL3;
    using eHWTS3 = Trig4Chain32Fields::eHWTS3;
    using eB2B3 = Trig4Chain32Fields::eB2B3;
    using eIE3 = Trig4Chain32Fields::eIE3;
    using eIE3_EN = Trig4Chain32Fields::eIE3_EN;
    using CSEL2 = Trig4Chain32Fields::CSEL2;
    using HWTS2 = Trig4Chain32Fields::HWTS2;
    using B2B2 = Trig4Chain32Fields::B2B2;
    using IE2 = Trig4Chain32Fields::IE2;
    using IE2_EN = Trig4Chain32Fields::IE2_EN;
    using CSEL3 = Trig4Chain32Fields::CSEL3;
    using HWTS3 = Trig4Chain32Fields::HWTS3;
    using B2B3 = Trig4Chain32Fields::B2B3;
    using IE3 = Trig4Chain32Fields::IE3;
    using IE3_EN = Trig4Chain32Fields::IE3_EN;
  };

  // ETC_TRIG Chain 4/5 Register
  struct Trig4Chain54Fields {
    enum class eCSEL4 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL4_0 = 0,
      // ADC CMD1 selected.
      eCSEL4_1 = 1,
      // ADC CMD2 selected.
      eCSEL4_2 = 2,
      // ADC CMD3 selected.
      eCSEL4_3 = 3,
      // ADC CMD4 selected.
      eCSEL4_4 = 4,
      // ADC CMD5 selected.
      eCSEL4_5 = 5,
      // ADC CMD6 selected.
      eCSEL4_6 = 6,
      // ADC CMD7 selected.
      eCSEL4_7 = 7,
      // ADC CMD8 selected.
      eCSEL4_8 = 8,
      // ADC CMD9 selected.
      eCSEL4_9 = 9,
      // ADC CMD10 selected.
      eCSEL4_10 = 10,
      // ADC CMD11 selected.
      eCSEL4_11 = 11,
      // ADC CMD12 selected.
      eCSEL4_12 = 12,
      // ADC CMD13 selected.
      eCSEL4_13 = 13,
      // ADC CMD14 selected.
      eCSEL4_14 = 14,
      // ADC CMD15 selected.
      eCSEL4_15 = 15,
    };

    enum class eHWTS4 : std::uint32_t {
      // no trigger selected
      eHWTS4_0 = 0,
      // ADC TRIG0 selected
      eHWTS4_1 = 1,
      // ADC TRIG1 selected
      eHWTS4_2 = 2,
      // ADC TRIG2 selected
      eHWTS4_4 = 4,
      // ADC TRIG3 selected
      eHWTS4_8 = 8,
      // ADC TRIG4 selected
      eHWTS4_16 = 16,
      // ADC TRIG5 selected
      eHWTS4_32 = 32,
      // ADC TRIG6 selected
      eHWTS4_64 = 64,
      // ADC TRIG7 selected
      eHWTS4_128 = 128,
    };

    enum class eB2B4 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B4_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B4_1 = 1,
    };

    enum class eIE4 : std::uint32_t {
      // Generate interrupt on Done0 when segment 4 finish.
      eIE4_0 = 0,
      // Generate interrupt on Done1 when segment 4 finish.
      eIE4_1 = 1,
      // Generate interrupt on Done2 when segment 4 finish.
      eIE4_2 = 2,
      // Generate interrupt on Done3 when segment 4 finish.
      eIE4_3 = 3,
    };

    enum class eIE4_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE4_EN_0 = 0,
      // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
      eIE4_EN_1 = 1,
    };

    enum class eCSEL5 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL5_0 = 0,
      // ADC CMD1 selected.
      eCSEL5_1 = 1,
      // ADC CMD2 selected.
      eCSEL5_2 = 2,
      // ADC CMD3 selected.
      eCSEL5_3 = 3,
      // ADC CMD4 selected.
      eCSEL5_4 = 4,
      // ADC CMD5 selected.
      eCSEL5_5 = 5,
      // ADC CMD6 selected.
      eCSEL5_6 = 6,
      // ADC CMD7 selected.
      eCSEL5_7 = 7,
      // ADC CMD8 selected.
      eCSEL5_8 = 8,
      // ADC CMD9 selected.
      eCSEL5_9 = 9,
      // ADC CMD10 selected.
      eCSEL5_10 = 10,
      // ADC CMD11 selected.
      eCSEL5_11 = 11,
      // ADC CMD12 selected.
      eCSEL5_12 = 12,
      // ADC CMD13 selected.
      eCSEL5_13 = 13,
      // ADC CMD14 selected.
      eCSEL5_14 = 14,
      // ADC CMD15 selected.
      eCSEL5_15 = 15,
    };

    enum class eHWTS5 : std::uint32_t {
      // no trigger selected
      eHWTS5_0 = 0,
      // ADC TRIG0 selected
      eHWTS5_1 = 1,
      // ADC TRIG1 selected
      eHWTS5_2 = 2,
      // ADC TRIG2 selected
      eHWTS5_4 = 4,
      // ADC TRIG3 selected
      eHWTS5_8 = 8,
      // ADC TRIG4 selected
      eHWTS5_16 = 16,
      // ADC TRIG5 selected
      eHWTS5_32 = 32,
      // ADC TRIG6 selected
      eHWTS5_64 = 64,
      // ADC TRIG7 selected
      eHWTS5_128 = 128,
    };

    enum class eB2B5 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B5_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B5_1 = 1,
    };

    enum class eIE5 : std::uint32_t {
      // Generate interrupt on Done0 when segment 5 finish.
      eIE5_0 = 0,
      // Generate interrupt on Done1 when segment 5 finish.
      eIE5_1 = 1,
      // Generate interrupt on Done2 when segment 5 finish.
      eIE5_2 = 2,
      // Generate interrupt on Done3 when segment 5 finish.
      eIE5_3 = 3,
    };

    enum class eIE5_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE5_EN_0 = 0,
      // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
      eIE5_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL4 = ftl::mmio::Field<4, 0, eCSEL4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 HWTS ADC hardware trigger selection
    using HWTS4 = ftl::mmio::Field<8, 4, eHWTS4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 B2B
    using B2B4 = ftl::mmio::Field<1, 12, eB2B4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    using IE4 = ftl::mmio::Field<2, 13, eIE4, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 4.
    using IE4_EN = ftl::mmio::Field<1, 15, eIE4_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL5 = ftl::mmio::Field<4, 16, eCSEL5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 HWTS ADC hardware trigger selection
    using HWTS5 = ftl::mmio::Field<8, 20, eHWTS5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 B2B
    using B2B5 = ftl::mmio::Field<1, 28, eB2B5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    using IE5 = ftl::mmio::Field<2, 29, eIE5, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 5.
    using IE5_EN = ftl::mmio::Field<1, 31, eIE5_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig4Chain54Fields

  struct TRIG4_CHAIN_5_4 : ftl::mmio::Register<
      0x400480C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig4Chain54Fields::CSEL4,
      Trig4Chain54Fields::HWTS4,
      Trig4Chain54Fields::B2B4,
      Trig4Chain54Fields::IE4,
      Trig4Chain54Fields::IE4_EN,
      Trig4Chain54Fields::CSEL5,
      Trig4Chain54Fields::HWTS5,
      Trig4Chain54Fields::B2B5,
      Trig4Chain54Fields::IE5,
      Trig4Chain54Fields::IE5_EN> {
    using eCSEL4 = Trig4Chain54Fields::eCSEL4;
    using eHWTS4 = Trig4Chain54Fields::eHWTS4;
    using eB2B4 = Trig4Chain54Fields::eB2B4;
    using eIE4 = Trig4Chain54Fields::eIE4;
    using eIE4_EN = Trig4Chain54Fields::eIE4_EN;
    using eCSEL5 = Trig4Chain54Fields::eCSEL5;
    using eHWTS5 = Trig4Chain54Fields::eHWTS5;
    using eB2B5 = Trig4Chain54Fields::eB2B5;
    using eIE5 = Trig4Chain54Fields::eIE5;
    using eIE5_EN = Trig4Chain54Fields::eIE5_EN;
    using CSEL4 = Trig4Chain54Fields::CSEL4;
    using HWTS4 = Trig4Chain54Fields::HWTS4;
    using B2B4 = Trig4Chain54Fields::B2B4;
    using IE4 = Trig4Chain54Fields::IE4;
    using IE4_EN = Trig4Chain54Fields::IE4_EN;
    using CSEL5 = Trig4Chain54Fields::CSEL5;
    using HWTS5 = Trig4Chain54Fields::HWTS5;
    using B2B5 = Trig4Chain54Fields::B2B5;
    using IE5 = Trig4Chain54Fields::IE5;
    using IE5_EN = Trig4Chain54Fields::IE5_EN;
  };

  // ETC_TRIG Chain 6/7 Register
  struct Trig4Chain76Fields {
    enum class eCSEL6 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL6_0 = 0,
      // ADC CMD1 selected.
      eCSEL6_1 = 1,
      // ADC CMD2 selected.
      eCSEL6_2 = 2,
      // ADC CMD3 selected.
      eCSEL6_3 = 3,
      // ADC CMD4 selected.
      eCSEL6_4 = 4,
      // ADC CMD5 selected.
      eCSEL6_5 = 5,
      // ADC CMD6 selected.
      eCSEL6_6 = 6,
      // ADC CMD7 selected.
      eCSEL6_7 = 7,
      // ADC CMD8 selected.
      eCSEL6_8 = 8,
      // ADC CMD9 selected.
      eCSEL6_9 = 9,
      // ADC CMD10 selected.
      eCSEL6_10 = 10,
      // ADC CMD11 selected.
      eCSEL6_11 = 11,
      // ADC CMD12 selected.
      eCSEL6_12 = 12,
      // ADC CMD13 selected.
      eCSEL6_13 = 13,
      // ADC CMD14 selected.
      eCSEL6_14 = 14,
      // ADC CMD15 selected.
      eCSEL6_15 = 15,
    };

    enum class eHWTS6 : std::uint32_t {
      // no trigger selected
      eHWTS6_0 = 0,
      // ADC TRIG0 selected
      eHWTS6_1 = 1,
      // ADC TRIG1 selected
      eHWTS6_2 = 2,
      // ADC TRIG2 selected
      eHWTS6_4 = 4,
      // ADC TRIG3 selected
      eHWTS6_8 = 8,
      // ADC TRIG4 selected
      eHWTS6_16 = 16,
      // ADC TRIG5 selected
      eHWTS6_32 = 32,
      // ADC TRIG6 selected
      eHWTS6_64 = 64,
      // ADC TRIG7 selected
      eHWTS6_128 = 128,
    };

    enum class eB2B6 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B6_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B6_1 = 1,
    };

    enum class eIE6 : std::uint32_t {
      // Generate interrupt on Done0 when segment 6 finish.
      eIE6_0 = 0,
      // Generate interrupt on Done1 when segment 6 finish.
      eIE6_1 = 1,
      // Generate interrupt on Done2 when segment 6 finish.
      eIE6_2 = 2,
      // Generate interrupt on Done3 when segment 6 finish.
      eIE6_3 = 3,
    };

    enum class eIE6_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE6_EN_0 = 0,
      // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
      eIE6_EN_1 = 1,
    };

    enum class eCSEL7 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL7_0 = 0,
      // ADC CMD1 selected.
      eCSEL7_1 = 1,
      // ADC CMD2 selected.
      eCSEL7_2 = 2,
      // ADC CMD3 selected.
      eCSEL7_3 = 3,
      // ADC CMD4 selected.
      eCSEL7_4 = 4,
      // ADC CMD5 selected.
      eCSEL7_5 = 5,
      // ADC CMD6 selected.
      eCSEL7_6 = 6,
      // ADC CMD7 selected.
      eCSEL7_7 = 7,
      // ADC CMD8 selected.
      eCSEL7_8 = 8,
      // ADC CMD9 selected.
      eCSEL7_9 = 9,
      // ADC CMD10 selected.
      eCSEL7_10 = 10,
      // ADC CMD11 selected.
      eCSEL7_11 = 11,
      // ADC CMD12 selected.
      eCSEL7_12 = 12,
      // ADC CMD13 selected.
      eCSEL7_13 = 13,
      // ADC CMD14 selected.
      eCSEL7_14 = 14,
      // ADC CMD15 selected.
      eCSEL7_15 = 15,
    };

    enum class eHWTS7 : std::uint32_t {
      // no trigger selected
      eHWTS7_0 = 0,
      // ADC TRIG0 selected
      eHWTS7_1 = 1,
      // ADC TRIG1 selected
      eHWTS7_2 = 2,
      // ADC TRIG2 selected
      eHWTS7_4 = 4,
      // ADC TRIG3 selected
      eHWTS7_8 = 8,
      // ADC TRIG4 selected
      eHWTS7_16 = 16,
      // ADC TRIG5 selected
      eHWTS7_32 = 32,
      // ADC TRIG6 selected
      eHWTS7_64 = 64,
      // ADC TRIG7 selected
      eHWTS7_128 = 128,
    };

    enum class eB2B7 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B7_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B7_1 = 1,
    };

    enum class eIE7 : std::uint32_t {
      // Generate interrupt on Done0 when segment 7 finish.
      eIE7_0 = 0,
      // Generate interrupt on Done1 when segment 7 finish.
      eIE7_1 = 1,
      // Generate interrupt on Done2 when segment 7 finish.
      eIE7_2 = 2,
      // Generate interrupt on Done3 when segment 7 finish.
      eIE7_3 = 3,
    };

    enum class eIE7_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE7_EN_0 = 0,
      // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
      eIE7_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL6 = ftl::mmio::Field<4, 0, eCSEL6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 HWTS ADC hardware trigger selection
    using HWTS6 = ftl::mmio::Field<8, 4, eHWTS6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 B2B
    using B2B6 = ftl::mmio::Field<1, 12, eB2B6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    using IE6 = ftl::mmio::Field<2, 13, eIE6, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 6.
    using IE6_EN = ftl::mmio::Field<1, 15, eIE6_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL7 = ftl::mmio::Field<4, 16, eCSEL7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 HWTS ADC hardware trigger selection
    using HWTS7 = ftl::mmio::Field<8, 20, eHWTS7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 B2B
    using B2B7 = ftl::mmio::Field<1, 28, eB2B7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    using IE7 = ftl::mmio::Field<2, 29, eIE7, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 7.
    using IE7_EN = ftl::mmio::Field<1, 31, eIE7_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig4Chain76Fields

  struct TRIG4_CHAIN_7_6 : ftl::mmio::Register<
      0x400480C4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig4Chain76Fields::CSEL6,
      Trig4Chain76Fields::HWTS6,
      Trig4Chain76Fields::B2B6,
      Trig4Chain76Fields::IE6,
      Trig4Chain76Fields::IE6_EN,
      Trig4Chain76Fields::CSEL7,
      Trig4Chain76Fields::HWTS7,
      Trig4Chain76Fields::B2B7,
      Trig4Chain76Fields::IE7,
      Trig4Chain76Fields::IE7_EN> {
    using eCSEL6 = Trig4Chain76Fields::eCSEL6;
    using eHWTS6 = Trig4Chain76Fields::eHWTS6;
    using eB2B6 = Trig4Chain76Fields::eB2B6;
    using eIE6 = Trig4Chain76Fields::eIE6;
    using eIE6_EN = Trig4Chain76Fields::eIE6_EN;
    using eCSEL7 = Trig4Chain76Fields::eCSEL7;
    using eHWTS7 = Trig4Chain76Fields::eHWTS7;
    using eB2B7 = Trig4Chain76Fields::eB2B7;
    using eIE7 = Trig4Chain76Fields::eIE7;
    using eIE7_EN = Trig4Chain76Fields::eIE7_EN;
    using CSEL6 = Trig4Chain76Fields::CSEL6;
    using HWTS6 = Trig4Chain76Fields::HWTS6;
    using B2B6 = Trig4Chain76Fields::B2B6;
    using IE6 = Trig4Chain76Fields::IE6;
    using IE6_EN = Trig4Chain76Fields::IE6_EN;
    using CSEL7 = Trig4Chain76Fields::CSEL7;
    using HWTS7 = Trig4Chain76Fields::HWTS7;
    using B2B7 = Trig4Chain76Fields::B2B7;
    using IE7 = Trig4Chain76Fields::IE7;
    using IE7_EN = Trig4Chain76Fields::IE7_EN;
  };

  // ETC_TRIG Result Data 1/0 Register
  struct Trig4Result10Fields {
    // Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA0 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA1 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig4Result10Fields

  struct TRIG4_RESULT_1_0 : ftl::mmio::Register<
      0x400480C8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig4Result10Fields::DATA0,
      ftl::mmio::Reserved<4, 12>,
      Trig4Result10Fields::DATA1,
      ftl::mmio::Reserved<4, 28>> {
    using DATA0 = Trig4Result10Fields::DATA0;
    using DATA1 = Trig4Result10Fields::DATA1;
  };

  // ETC_TRIG Result Data 3/2 Register
  struct Trig4Result32Fields {
    // Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA2 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA3 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig4Result32Fields

  struct TRIG4_RESULT_3_2 : ftl::mmio::Register<
      0x400480CCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig4Result32Fields::DATA2,
      ftl::mmio::Reserved<4, 12>,
      Trig4Result32Fields::DATA3,
      ftl::mmio::Reserved<4, 28>> {
    using DATA2 = Trig4Result32Fields::DATA2;
    using DATA3 = Trig4Result32Fields::DATA3;
  };

  // ETC_TRIG Result Data 5/4 Register
  struct Trig4Result54Fields {
    // Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA4 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA5 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig4Result54Fields

  struct TRIG4_RESULT_5_4 : ftl::mmio::Register<
      0x400480D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig4Result54Fields::DATA4,
      ftl::mmio::Reserved<4, 12>,
      Trig4Result54Fields::DATA5,
      ftl::mmio::Reserved<4, 28>> {
    using DATA4 = Trig4Result54Fields::DATA4;
    using DATA5 = Trig4Result54Fields::DATA5;
  };

  // ETC_TRIG Result Data 7/6 Register
  struct Trig4Result76Fields {
    // Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA6 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA7 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig4Result76Fields

  struct TRIG4_RESULT_7_6 : ftl::mmio::Register<
      0x400480D4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig4Result76Fields::DATA6,
      ftl::mmio::Reserved<4, 12>,
      Trig4Result76Fields::DATA7,
      ftl::mmio::Reserved<4, 28>> {
    using DATA6 = Trig4Result76Fields::DATA6;
    using DATA7 = Trig4Result76Fields::DATA7;
  };

  // ETC_TRIG Control Register
  struct Trig5CtrlFields {
    enum class eSW_TRIG : std::uint32_t {
      // No software trigger event generated.
      eSW_TRIG_0 = 0,
      // Software trigger event generated.
      eSW_TRIG_1 = 1,
    };

    enum class eTRIG_MODE : std::uint32_t {
      // Hardware trigger. The softerware trigger will be ignored.
      eTRIG_MODE_0 = 0,
      // Software trigger. The hardware trigger will be ignored.
      eTRIG_MODE_1 = 1,
    };

    enum class eTRIG_CHAIN : std::uint32_t {
      // Trigger chain length is 1
      eTRIG_CHAIN_0 = 0,
      // Trigger chain length is 2
      eTRIG_CHAIN_1 = 1,
      // Trigger chain length is 3
      eTRIG_CHAIN_2 = 2,
      // Trigger chain length is 4
      eTRIG_CHAIN_3 = 3,
      // Trigger chain length is 5
      eTRIG_CHAIN_4 = 4,
      // Trigger chain length is 6
      eTRIG_CHAIN_5 = 5,
      // Trigger chain length is 7
      eTRIG_CHAIN_6 = 6,
      // Trigger chain length is 8
      eTRIG_CHAIN_7 = 7,
    };

    enum class eSYNC_MODE : std::uint32_t {
      // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
      eSYNC_MODE_0 = 0,
      // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
      eSYNC_MODE_1 = 1,
    };

    enum class eCHAINx_DONE : std::uint32_t {
      // segment x done not detected.
      eCHAINx_DONE_0 = 0,
      // segment x done detected.
      eCHAINx_DONE_1 = 1,
    };

    // Software trigger. This field is self-clearing.
    using SW_TRIG = ftl::mmio::Field<1, 0, eSW_TRIG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger mode selection.
    using TRIG_MODE = ftl::mmio::Field<1, 4, eTRIG_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // The number of segments inside the trigger chain of TRIGa.
    using TRIG_CHAIN = ftl::mmio::Field<3, 8, eTRIG_CHAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // External trigger priority, 7 is highest priority, while 0 is lowest
    using TRIG_PRIORITY = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger synchronization mode selection
    using SYNC_MODE = ftl::mmio::Field<1, 16, eSYNC_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment x done detection
    using CHAINx_DONE = ftl::mmio::Field<8, 24, eCHAINx_DONE, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Trig5CtrlFields

  struct TRIG5_CTRL : ftl::mmio::Register<
      0x400480D8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig5CtrlFields::SW_TRIG,
      ftl::mmio::Reserved<3, 1>,
      Trig5CtrlFields::TRIG_MODE,
      ftl::mmio::Reserved<3, 5>,
      Trig5CtrlFields::TRIG_CHAIN,
      ftl::mmio::Reserved<1, 11>,
      Trig5CtrlFields::TRIG_PRIORITY,
      ftl::mmio::Reserved<1, 15>,
      Trig5CtrlFields::SYNC_MODE,
      ftl::mmio::Reserved<7, 17>,
      Trig5CtrlFields::CHAINx_DONE> {
    using eSW_TRIG = Trig5CtrlFields::eSW_TRIG;
    using eTRIG_MODE = Trig5CtrlFields::eTRIG_MODE;
    using eTRIG_CHAIN = Trig5CtrlFields::eTRIG_CHAIN;
    using eSYNC_MODE = Trig5CtrlFields::eSYNC_MODE;
    using eCHAINx_DONE = Trig5CtrlFields::eCHAINx_DONE;
    using SW_TRIG = Trig5CtrlFields::SW_TRIG;
    using TRIG_MODE = Trig5CtrlFields::TRIG_MODE;
    using TRIG_CHAIN = Trig5CtrlFields::TRIG_CHAIN;
    using TRIG_PRIORITY = Trig5CtrlFields::TRIG_PRIORITY;
    using SYNC_MODE = Trig5CtrlFields::SYNC_MODE;
    using CHAINx_DONE = Trig5CtrlFields::CHAINx_DONE;
  };

  // ETC_TRIG Counter Register
  struct Trig5CounterFields {
    // TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    using INIT_DELAY = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIGGER sampling interval counter
    using SAMPLE_INTERVAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig5CounterFields

  struct TRIG5_COUNTER : ftl::mmio::Register<
      0x400480DCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig5CounterFields::INIT_DELAY,
      Trig5CounterFields::SAMPLE_INTERVAL> {
    using INIT_DELAY = Trig5CounterFields::INIT_DELAY;
    using SAMPLE_INTERVAL = Trig5CounterFields::SAMPLE_INTERVAL;
  };

  // ETC_TRIG Chain 0/1 Register
  struct Trig5Chain10Fields {
    enum class eCSEL0 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL0_0 = 0,
      // ADC CMD1 selected.
      eCSEL0_1 = 1,
      // ADC CMD2 selected.
      eCSEL0_2 = 2,
      // ADC CMD3 selected.
      eCSEL0_3 = 3,
      // ADC CMD4 selected.
      eCSEL0_4 = 4,
      // ADC CMD5 selected.
      eCSEL0_5 = 5,
      // ADC CMD6 selected.
      eCSEL0_6 = 6,
      // ADC CMD7 selected.
      eCSEL0_7 = 7,
      // ADC CMD8 selected.
      eCSEL0_8 = 8,
      // ADC CMD9 selected.
      eCSEL0_9 = 9,
      // ADC CMD10 selected.
      eCSEL0_10 = 10,
      // ADC CMD11 selected.
      eCSEL0_11 = 11,
      // ADC CMD12 selected.
      eCSEL0_12 = 12,
      // ADC CMD13 selected.
      eCSEL0_13 = 13,
      // ADC CMD14 selected.
      eCSEL0_14 = 14,
      // ADC CMD15 selected.
      eCSEL0_15 = 15,
    };

    enum class eHWTS0 : std::uint32_t {
      // no trigger selected
      eHWTS0_0 = 0,
      // ADC TRIG0 selected
      eHWTS0_1 = 1,
      // ADC TRIG1 selected
      eHWTS0_2 = 2,
      // ADC TRIG2 selected
      eHWTS0_4 = 4,
      // ADC TRIG3 selected
      eHWTS0_8 = 8,
      // ADC TRIG4 selected
      eHWTS0_16 = 16,
      // ADC TRIG5 selected
      eHWTS0_32 = 32,
      // ADC TRIG6 selected
      eHWTS0_64 = 64,
      // ADC TRIG7 selected
      eHWTS0_128 = 128,
    };

    enum class eB2B0 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B0_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B0_1 = 1,
    };

    enum class eIE0 : std::uint32_t {
      // Generate interrupt on Done0 when segment 0 finish.
      eIE0_0 = 0,
      // Generate interrupt on Done1 when segment 0 finish.
      eIE0_1 = 1,
      // Generate interrupt on Done2 when segment 0 finish.
      eIE0_2 = 2,
      // Generate interrupt on Done3 when segment 0 finish.
      eIE0_3 = 3,
    };

    enum class eIE0_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE0_EN_0 = 0,
      // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
      eIE0_EN_1 = 1,
    };

    enum class eCSEL1 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL1_0 = 0,
      // ADC CMD1 selected.
      eCSEL1_1 = 1,
      // ADC CMD2 selected.
      eCSEL1_2 = 2,
      // ADC CMD3 selected.
      eCSEL1_3 = 3,
      // ADC CMD4 selected.
      eCSEL1_4 = 4,
      // ADC CMD5 selected.
      eCSEL1_5 = 5,
      // ADC CMD6 selected.
      eCSEL1_6 = 6,
      // ADC CMD7 selected.
      eCSEL1_7 = 7,
      // ADC CMD8 selected.
      eCSEL1_8 = 8,
      // ADC CMD9 selected.
      eCSEL1_9 = 9,
      // ADC CMD10 selected.
      eCSEL1_10 = 10,
      // ADC CMD11 selected.
      eCSEL1_11 = 11,
      // ADC CMD12 selected.
      eCSEL1_12 = 12,
      // ADC CMD13 selected.
      eCSEL1_13 = 13,
      // ADC CMD14 selected.
      eCSEL1_14 = 14,
      // ADC CMD15 selected.
      eCSEL1_15 = 15,
    };

    enum class eHWTS1 : std::uint32_t {
      // no trigger selected
      eHWTS1_0 = 0,
      // ADC TRIG0 selected
      eHWTS1_1 = 1,
      // ADC TRIG1 selected
      eHWTS1_2 = 2,
      // ADC TRIG2 selected
      eHWTS1_4 = 4,
      // ADC TRIG3 selected
      eHWTS1_8 = 8,
      // ADC TRIG4 selected
      eHWTS1_16 = 16,
      // ADC TRIG5 selected
      eHWTS1_32 = 32,
      // ADC TRIG6 selected
      eHWTS1_64 = 64,
      // ADC TRIG7 selected
      eHWTS1_128 = 128,
    };

    enum class eB2B1 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B1_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B1_1 = 1,
    };

    enum class eIE1 : std::uint32_t {
      // Generate interrupt on Done0 when Segment 1 finish.
      eIE1_0 = 0,
      // Generate interrupt on Done1 when Segment 1 finish.
      eIE1_1 = 1,
      // Generate interrupt on Done2 when Segment 1 finish.
      eIE1_2 = 2,
      // Generate interrupt on Done3 when Segment 1 finish.
      eIE1_3 = 3,
    };

    enum class eIE1_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE1_EN_0 = 0,
      // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
      eIE1_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL0 = ftl::mmio::Field<4, 0, eCSEL0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 HWTS ADC hardware trigger selection
    using HWTS0 = ftl::mmio::Field<8, 4, eHWTS0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 B2B
    using B2B0 = ftl::mmio::Field<1, 12, eB2B0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    using IE0 = ftl::mmio::Field<2, 13, eIE0, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 0.
    using IE0_EN = ftl::mmio::Field<1, 15, eIE0_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL1 = ftl::mmio::Field<4, 16, eCSEL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 HWTS ADC hardware trigger selection
    using HWTS1 = ftl::mmio::Field<8, 20, eHWTS1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 B2B
    using B2B1 = ftl::mmio::Field<1, 28, eB2B1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    using IE1 = ftl::mmio::Field<2, 29, eIE1, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 1.
    using IE1_EN = ftl::mmio::Field<1, 31, eIE1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig5Chain10Fields

  struct TRIG5_CHAIN_1_0 : ftl::mmio::Register<
      0x400480E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig5Chain10Fields::CSEL0,
      Trig5Chain10Fields::HWTS0,
      Trig5Chain10Fields::B2B0,
      Trig5Chain10Fields::IE0,
      Trig5Chain10Fields::IE0_EN,
      Trig5Chain10Fields::CSEL1,
      Trig5Chain10Fields::HWTS1,
      Trig5Chain10Fields::B2B1,
      Trig5Chain10Fields::IE1,
      Trig5Chain10Fields::IE1_EN> {
    using eCSEL0 = Trig5Chain10Fields::eCSEL0;
    using eHWTS0 = Trig5Chain10Fields::eHWTS0;
    using eB2B0 = Trig5Chain10Fields::eB2B0;
    using eIE0 = Trig5Chain10Fields::eIE0;
    using eIE0_EN = Trig5Chain10Fields::eIE0_EN;
    using eCSEL1 = Trig5Chain10Fields::eCSEL1;
    using eHWTS1 = Trig5Chain10Fields::eHWTS1;
    using eB2B1 = Trig5Chain10Fields::eB2B1;
    using eIE1 = Trig5Chain10Fields::eIE1;
    using eIE1_EN = Trig5Chain10Fields::eIE1_EN;
    using CSEL0 = Trig5Chain10Fields::CSEL0;
    using HWTS0 = Trig5Chain10Fields::HWTS0;
    using B2B0 = Trig5Chain10Fields::B2B0;
    using IE0 = Trig5Chain10Fields::IE0;
    using IE0_EN = Trig5Chain10Fields::IE0_EN;
    using CSEL1 = Trig5Chain10Fields::CSEL1;
    using HWTS1 = Trig5Chain10Fields::HWTS1;
    using B2B1 = Trig5Chain10Fields::B2B1;
    using IE1 = Trig5Chain10Fields::IE1;
    using IE1_EN = Trig5Chain10Fields::IE1_EN;
  };

  // ETC_TRIG Chain 2/3 Register
  struct Trig5Chain32Fields {
    enum class eCSEL2 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL2_0 = 0,
      // ADC CMD1 selected.
      eCSEL2_1 = 1,
      // ADC CMD2 selected.
      eCSEL2_2 = 2,
      // ADC CMD3 selected.
      eCSEL2_3 = 3,
      // ADC CMD4 selected.
      eCSEL2_4 = 4,
      // ADC CMD5 selected.
      eCSEL2_5 = 5,
      // ADC CMD6 selected.
      eCSEL2_6 = 6,
      // ADC CMD7 selected.
      eCSEL2_7 = 7,
      // ADC CMD8 selected.
      eCSEL2_8 = 8,
      // ADC CMD9 selected.
      eCSEL2_9 = 9,
      // ADC CMD10 selected.
      eCSEL2_10 = 10,
      // ADC CMD11 selected.
      eCSEL2_11 = 11,
      // ADC CMD12 selected.
      eCSEL2_12 = 12,
      // ADC CMD13 selected.
      eCSEL2_13 = 13,
      // ADC CMD14 selected.
      eCSEL2_14 = 14,
      // ADC CMD15 selected.
      eCSEL2_15 = 15,
    };

    enum class eHWTS2 : std::uint32_t {
      // no trigger selected
      eHWTS2_0 = 0,
      // ADC TRIG0 selected
      eHWTS2_1 = 1,
      // ADC TRIG1 selected
      eHWTS2_2 = 2,
      // ADC TRIG2 selected
      eHWTS2_4 = 4,
      // ADC TRIG3 selected
      eHWTS2_8 = 8,
      // ADC TRIG4 selected
      eHWTS2_16 = 16,
      // ADC TRIG5 selected
      eHWTS2_32 = 32,
      // ADC TRIG6 selected
      eHWTS2_64 = 64,
      // ADC TRIG7 selected
      eHWTS2_128 = 128,
    };

    enum class eB2B2 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B2_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B2_1 = 1,
    };

    enum class eIE2 : std::uint32_t {
      // Generate interrupt on Done0 when segment 2 finish.
      eIE2_0 = 0,
      // Generate interrupt on Done1 when segment 2 finish.
      eIE2_1 = 1,
      // Generate interrupt on Done2 when segment 2 finish.
      eIE2_2 = 2,
      // Generate interrupt on Done3 when segment 2 finish.
      eIE2_3 = 3,
    };

    enum class eIE2_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE2_EN_0 = 0,
      // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
      eIE2_EN_1 = 1,
    };

    enum class eCSEL3 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL3_0 = 0,
      // ADC CMD1 selected.
      eCSEL3_1 = 1,
      // ADC CMD2 selected.
      eCSEL3_2 = 2,
      // ADC CMD3 selected.
      eCSEL3_3 = 3,
      // ADC CMD4 selected.
      eCSEL3_4 = 4,
      // ADC CMD5 selected.
      eCSEL3_5 = 5,
      // ADC CMD6 selected.
      eCSEL3_6 = 6,
      // ADC CMD7 selected.
      eCSEL3_7 = 7,
      // ADC CMD8 selected.
      eCSEL3_8 = 8,
      // ADC CMD9 selected.
      eCSEL3_9 = 9,
      // ADC CMD10 selected.
      eCSEL3_10 = 10,
      // ADC CMD11 selected.
      eCSEL3_11 = 11,
      // ADC CMD12 selected.
      eCSEL3_12 = 12,
      // ADC CMD13 selected.
      eCSEL3_13 = 13,
      // ADC CMD14 selected.
      eCSEL3_14 = 14,
      // ADC CMD15 selected.
      eCSEL3_15 = 15,
    };

    enum class eHWTS3 : std::uint32_t {
      // no trigger selected
      eHWTS3_0 = 0,
      // ADC TRIG0 selected
      eHWTS3_1 = 1,
      // ADC TRIG1 selected
      eHWTS3_2 = 2,
      // ADC TRIG2 selected
      eHWTS3_4 = 4,
      // ADC TRIG3 selected
      eHWTS3_8 = 8,
      // ADC TRIG4 selected
      eHWTS3_16 = 16,
      // ADC TRIG5 selected
      eHWTS3_32 = 32,
      // ADC TRIG6 selected
      eHWTS3_64 = 64,
      // ADC TRIG7 selected
      eHWTS3_128 = 128,
    };

    enum class eB2B3 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B3_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B3_1 = 1,
    };

    enum class eIE3 : std::uint32_t {
      // Generate interrupt on Done0 when segment 3 finish.
      eIE3_0 = 0,
      // Generate interrupt on Done1 when segment 3 finish.
      eIE3_1 = 1,
      // Generate interrupt on Done2 when segment 3 finish.
      eIE3_2 = 2,
      // Generate interrupt on Done3 when segment 3 finish.
      eIE3_3 = 3,
    };

    enum class eIE3_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE3_EN_0 = 0,
      // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
      eIE3_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL2 = ftl::mmio::Field<4, 0, eCSEL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 HWTS ADC hardware trigger selection
    using HWTS2 = ftl::mmio::Field<8, 4, eHWTS2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 B2B
    using B2B2 = ftl::mmio::Field<1, 12, eB2B2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    using IE2 = ftl::mmio::Field<2, 13, eIE2, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 2.
    using IE2_EN = ftl::mmio::Field<1, 15, eIE2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL3 = ftl::mmio::Field<4, 16, eCSEL3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 HWTS ADC hardware trigger selection
    using HWTS3 = ftl::mmio::Field<8, 20, eHWTS3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 B2B
    using B2B3 = ftl::mmio::Field<1, 28, eB2B3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    using IE3 = ftl::mmio::Field<2, 29, eIE3, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 3.
    using IE3_EN = ftl::mmio::Field<1, 31, eIE3_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig5Chain32Fields

  struct TRIG5_CHAIN_3_2 : ftl::mmio::Register<
      0x400480E4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig5Chain32Fields::CSEL2,
      Trig5Chain32Fields::HWTS2,
      Trig5Chain32Fields::B2B2,
      Trig5Chain32Fields::IE2,
      Trig5Chain32Fields::IE2_EN,
      Trig5Chain32Fields::CSEL3,
      Trig5Chain32Fields::HWTS3,
      Trig5Chain32Fields::B2B3,
      Trig5Chain32Fields::IE3,
      Trig5Chain32Fields::IE3_EN> {
    using eCSEL2 = Trig5Chain32Fields::eCSEL2;
    using eHWTS2 = Trig5Chain32Fields::eHWTS2;
    using eB2B2 = Trig5Chain32Fields::eB2B2;
    using eIE2 = Trig5Chain32Fields::eIE2;
    using eIE2_EN = Trig5Chain32Fields::eIE2_EN;
    using eCSEL3 = Trig5Chain32Fields::eCSEL3;
    using eHWTS3 = Trig5Chain32Fields::eHWTS3;
    using eB2B3 = Trig5Chain32Fields::eB2B3;
    using eIE3 = Trig5Chain32Fields::eIE3;
    using eIE3_EN = Trig5Chain32Fields::eIE3_EN;
    using CSEL2 = Trig5Chain32Fields::CSEL2;
    using HWTS2 = Trig5Chain32Fields::HWTS2;
    using B2B2 = Trig5Chain32Fields::B2B2;
    using IE2 = Trig5Chain32Fields::IE2;
    using IE2_EN = Trig5Chain32Fields::IE2_EN;
    using CSEL3 = Trig5Chain32Fields::CSEL3;
    using HWTS3 = Trig5Chain32Fields::HWTS3;
    using B2B3 = Trig5Chain32Fields::B2B3;
    using IE3 = Trig5Chain32Fields::IE3;
    using IE3_EN = Trig5Chain32Fields::IE3_EN;
  };

  // ETC_TRIG Chain 4/5 Register
  struct Trig5Chain54Fields {
    enum class eCSEL4 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL4_0 = 0,
      // ADC CMD1 selected.
      eCSEL4_1 = 1,
      // ADC CMD2 selected.
      eCSEL4_2 = 2,
      // ADC CMD3 selected.
      eCSEL4_3 = 3,
      // ADC CMD4 selected.
      eCSEL4_4 = 4,
      // ADC CMD5 selected.
      eCSEL4_5 = 5,
      // ADC CMD6 selected.
      eCSEL4_6 = 6,
      // ADC CMD7 selected.
      eCSEL4_7 = 7,
      // ADC CMD8 selected.
      eCSEL4_8 = 8,
      // ADC CMD9 selected.
      eCSEL4_9 = 9,
      // ADC CMD10 selected.
      eCSEL4_10 = 10,
      // ADC CMD11 selected.
      eCSEL4_11 = 11,
      // ADC CMD12 selected.
      eCSEL4_12 = 12,
      // ADC CMD13 selected.
      eCSEL4_13 = 13,
      // ADC CMD14 selected.
      eCSEL4_14 = 14,
      // ADC CMD15 selected.
      eCSEL4_15 = 15,
    };

    enum class eHWTS4 : std::uint32_t {
      // no trigger selected
      eHWTS4_0 = 0,
      // ADC TRIG0 selected
      eHWTS4_1 = 1,
      // ADC TRIG1 selected
      eHWTS4_2 = 2,
      // ADC TRIG2 selected
      eHWTS4_4 = 4,
      // ADC TRIG3 selected
      eHWTS4_8 = 8,
      // ADC TRIG4 selected
      eHWTS4_16 = 16,
      // ADC TRIG5 selected
      eHWTS4_32 = 32,
      // ADC TRIG6 selected
      eHWTS4_64 = 64,
      // ADC TRIG7 selected
      eHWTS4_128 = 128,
    };

    enum class eB2B4 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B4_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B4_1 = 1,
    };

    enum class eIE4 : std::uint32_t {
      // Generate interrupt on Done0 when segment 4 finish.
      eIE4_0 = 0,
      // Generate interrupt on Done1 when segment 4 finish.
      eIE4_1 = 1,
      // Generate interrupt on Done2 when segment 4 finish.
      eIE4_2 = 2,
      // Generate interrupt on Done3 when segment 4 finish.
      eIE4_3 = 3,
    };

    enum class eIE4_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE4_EN_0 = 0,
      // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
      eIE4_EN_1 = 1,
    };

    enum class eCSEL5 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL5_0 = 0,
      // ADC CMD1 selected.
      eCSEL5_1 = 1,
      // ADC CMD2 selected.
      eCSEL5_2 = 2,
      // ADC CMD3 selected.
      eCSEL5_3 = 3,
      // ADC CMD4 selected.
      eCSEL5_4 = 4,
      // ADC CMD5 selected.
      eCSEL5_5 = 5,
      // ADC CMD6 selected.
      eCSEL5_6 = 6,
      // ADC CMD7 selected.
      eCSEL5_7 = 7,
      // ADC CMD8 selected.
      eCSEL5_8 = 8,
      // ADC CMD9 selected.
      eCSEL5_9 = 9,
      // ADC CMD10 selected.
      eCSEL5_10 = 10,
      // ADC CMD11 selected.
      eCSEL5_11 = 11,
      // ADC CMD12 selected.
      eCSEL5_12 = 12,
      // ADC CMD13 selected.
      eCSEL5_13 = 13,
      // ADC CMD14 selected.
      eCSEL5_14 = 14,
      // ADC CMD15 selected.
      eCSEL5_15 = 15,
    };

    enum class eHWTS5 : std::uint32_t {
      // no trigger selected
      eHWTS5_0 = 0,
      // ADC TRIG0 selected
      eHWTS5_1 = 1,
      // ADC TRIG1 selected
      eHWTS5_2 = 2,
      // ADC TRIG2 selected
      eHWTS5_4 = 4,
      // ADC TRIG3 selected
      eHWTS5_8 = 8,
      // ADC TRIG4 selected
      eHWTS5_16 = 16,
      // ADC TRIG5 selected
      eHWTS5_32 = 32,
      // ADC TRIG6 selected
      eHWTS5_64 = 64,
      // ADC TRIG7 selected
      eHWTS5_128 = 128,
    };

    enum class eB2B5 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B5_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B5_1 = 1,
    };

    enum class eIE5 : std::uint32_t {
      // Generate interrupt on Done0 when segment 5 finish.
      eIE5_0 = 0,
      // Generate interrupt on Done1 when segment 5 finish.
      eIE5_1 = 1,
      // Generate interrupt on Done2 when segment 5 finish.
      eIE5_2 = 2,
      // Generate interrupt on Done3 when segment 5 finish.
      eIE5_3 = 3,
    };

    enum class eIE5_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE5_EN_0 = 0,
      // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
      eIE5_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL4 = ftl::mmio::Field<4, 0, eCSEL4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 HWTS ADC hardware trigger selection
    using HWTS4 = ftl::mmio::Field<8, 4, eHWTS4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 B2B
    using B2B4 = ftl::mmio::Field<1, 12, eB2B4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    using IE4 = ftl::mmio::Field<2, 13, eIE4, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 4.
    using IE4_EN = ftl::mmio::Field<1, 15, eIE4_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL5 = ftl::mmio::Field<4, 16, eCSEL5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 HWTS ADC hardware trigger selection
    using HWTS5 = ftl::mmio::Field<8, 20, eHWTS5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 B2B
    using B2B5 = ftl::mmio::Field<1, 28, eB2B5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    using IE5 = ftl::mmio::Field<2, 29, eIE5, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 5.
    using IE5_EN = ftl::mmio::Field<1, 31, eIE5_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig5Chain54Fields

  struct TRIG5_CHAIN_5_4 : ftl::mmio::Register<
      0x400480E8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig5Chain54Fields::CSEL4,
      Trig5Chain54Fields::HWTS4,
      Trig5Chain54Fields::B2B4,
      Trig5Chain54Fields::IE4,
      Trig5Chain54Fields::IE4_EN,
      Trig5Chain54Fields::CSEL5,
      Trig5Chain54Fields::HWTS5,
      Trig5Chain54Fields::B2B5,
      Trig5Chain54Fields::IE5,
      Trig5Chain54Fields::IE5_EN> {
    using eCSEL4 = Trig5Chain54Fields::eCSEL4;
    using eHWTS4 = Trig5Chain54Fields::eHWTS4;
    using eB2B4 = Trig5Chain54Fields::eB2B4;
    using eIE4 = Trig5Chain54Fields::eIE4;
    using eIE4_EN = Trig5Chain54Fields::eIE4_EN;
    using eCSEL5 = Trig5Chain54Fields::eCSEL5;
    using eHWTS5 = Trig5Chain54Fields::eHWTS5;
    using eB2B5 = Trig5Chain54Fields::eB2B5;
    using eIE5 = Trig5Chain54Fields::eIE5;
    using eIE5_EN = Trig5Chain54Fields::eIE5_EN;
    using CSEL4 = Trig5Chain54Fields::CSEL4;
    using HWTS4 = Trig5Chain54Fields::HWTS4;
    using B2B4 = Trig5Chain54Fields::B2B4;
    using IE4 = Trig5Chain54Fields::IE4;
    using IE4_EN = Trig5Chain54Fields::IE4_EN;
    using CSEL5 = Trig5Chain54Fields::CSEL5;
    using HWTS5 = Trig5Chain54Fields::HWTS5;
    using B2B5 = Trig5Chain54Fields::B2B5;
    using IE5 = Trig5Chain54Fields::IE5;
    using IE5_EN = Trig5Chain54Fields::IE5_EN;
  };

  // ETC_TRIG Chain 6/7 Register
  struct Trig5Chain76Fields {
    enum class eCSEL6 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL6_0 = 0,
      // ADC CMD1 selected.
      eCSEL6_1 = 1,
      // ADC CMD2 selected.
      eCSEL6_2 = 2,
      // ADC CMD3 selected.
      eCSEL6_3 = 3,
      // ADC CMD4 selected.
      eCSEL6_4 = 4,
      // ADC CMD5 selected.
      eCSEL6_5 = 5,
      // ADC CMD6 selected.
      eCSEL6_6 = 6,
      // ADC CMD7 selected.
      eCSEL6_7 = 7,
      // ADC CMD8 selected.
      eCSEL6_8 = 8,
      // ADC CMD9 selected.
      eCSEL6_9 = 9,
      // ADC CMD10 selected.
      eCSEL6_10 = 10,
      // ADC CMD11 selected.
      eCSEL6_11 = 11,
      // ADC CMD12 selected.
      eCSEL6_12 = 12,
      // ADC CMD13 selected.
      eCSEL6_13 = 13,
      // ADC CMD14 selected.
      eCSEL6_14 = 14,
      // ADC CMD15 selected.
      eCSEL6_15 = 15,
    };

    enum class eHWTS6 : std::uint32_t {
      // no trigger selected
      eHWTS6_0 = 0,
      // ADC TRIG0 selected
      eHWTS6_1 = 1,
      // ADC TRIG1 selected
      eHWTS6_2 = 2,
      // ADC TRIG2 selected
      eHWTS6_4 = 4,
      // ADC TRIG3 selected
      eHWTS6_8 = 8,
      // ADC TRIG4 selected
      eHWTS6_16 = 16,
      // ADC TRIG5 selected
      eHWTS6_32 = 32,
      // ADC TRIG6 selected
      eHWTS6_64 = 64,
      // ADC TRIG7 selected
      eHWTS6_128 = 128,
    };

    enum class eB2B6 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B6_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B6_1 = 1,
    };

    enum class eIE6 : std::uint32_t {
      // Generate interrupt on Done0 when segment 6 finish.
      eIE6_0 = 0,
      // Generate interrupt on Done1 when segment 6 finish.
      eIE6_1 = 1,
      // Generate interrupt on Done2 when segment 6 finish.
      eIE6_2 = 2,
      // Generate interrupt on Done3 when segment 6 finish.
      eIE6_3 = 3,
    };

    enum class eIE6_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE6_EN_0 = 0,
      // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
      eIE6_EN_1 = 1,
    };

    enum class eCSEL7 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL7_0 = 0,
      // ADC CMD1 selected.
      eCSEL7_1 = 1,
      // ADC CMD2 selected.
      eCSEL7_2 = 2,
      // ADC CMD3 selected.
      eCSEL7_3 = 3,
      // ADC CMD4 selected.
      eCSEL7_4 = 4,
      // ADC CMD5 selected.
      eCSEL7_5 = 5,
      // ADC CMD6 selected.
      eCSEL7_6 = 6,
      // ADC CMD7 selected.
      eCSEL7_7 = 7,
      // ADC CMD8 selected.
      eCSEL7_8 = 8,
      // ADC CMD9 selected.
      eCSEL7_9 = 9,
      // ADC CMD10 selected.
      eCSEL7_10 = 10,
      // ADC CMD11 selected.
      eCSEL7_11 = 11,
      // ADC CMD12 selected.
      eCSEL7_12 = 12,
      // ADC CMD13 selected.
      eCSEL7_13 = 13,
      // ADC CMD14 selected.
      eCSEL7_14 = 14,
      // ADC CMD15 selected.
      eCSEL7_15 = 15,
    };

    enum class eHWTS7 : std::uint32_t {
      // no trigger selected
      eHWTS7_0 = 0,
      // ADC TRIG0 selected
      eHWTS7_1 = 1,
      // ADC TRIG1 selected
      eHWTS7_2 = 2,
      // ADC TRIG2 selected
      eHWTS7_4 = 4,
      // ADC TRIG3 selected
      eHWTS7_8 = 8,
      // ADC TRIG4 selected
      eHWTS7_16 = 16,
      // ADC TRIG5 selected
      eHWTS7_32 = 32,
      // ADC TRIG6 selected
      eHWTS7_64 = 64,
      // ADC TRIG7 selected
      eHWTS7_128 = 128,
    };

    enum class eB2B7 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B7_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B7_1 = 1,
    };

    enum class eIE7 : std::uint32_t {
      // Generate interrupt on Done0 when segment 7 finish.
      eIE7_0 = 0,
      // Generate interrupt on Done1 when segment 7 finish.
      eIE7_1 = 1,
      // Generate interrupt on Done2 when segment 7 finish.
      eIE7_2 = 2,
      // Generate interrupt on Done3 when segment 7 finish.
      eIE7_3 = 3,
    };

    enum class eIE7_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE7_EN_0 = 0,
      // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
      eIE7_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL6 = ftl::mmio::Field<4, 0, eCSEL6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 HWTS ADC hardware trigger selection
    using HWTS6 = ftl::mmio::Field<8, 4, eHWTS6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 B2B
    using B2B6 = ftl::mmio::Field<1, 12, eB2B6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    using IE6 = ftl::mmio::Field<2, 13, eIE6, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 6.
    using IE6_EN = ftl::mmio::Field<1, 15, eIE6_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL7 = ftl::mmio::Field<4, 16, eCSEL7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 HWTS ADC hardware trigger selection
    using HWTS7 = ftl::mmio::Field<8, 20, eHWTS7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 B2B
    using B2B7 = ftl::mmio::Field<1, 28, eB2B7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    using IE7 = ftl::mmio::Field<2, 29, eIE7, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 7.
    using IE7_EN = ftl::mmio::Field<1, 31, eIE7_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig5Chain76Fields

  struct TRIG5_CHAIN_7_6 : ftl::mmio::Register<
      0x400480ECu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig5Chain76Fields::CSEL6,
      Trig5Chain76Fields::HWTS6,
      Trig5Chain76Fields::B2B6,
      Trig5Chain76Fields::IE6,
      Trig5Chain76Fields::IE6_EN,
      Trig5Chain76Fields::CSEL7,
      Trig5Chain76Fields::HWTS7,
      Trig5Chain76Fields::B2B7,
      Trig5Chain76Fields::IE7,
      Trig5Chain76Fields::IE7_EN> {
    using eCSEL6 = Trig5Chain76Fields::eCSEL6;
    using eHWTS6 = Trig5Chain76Fields::eHWTS6;
    using eB2B6 = Trig5Chain76Fields::eB2B6;
    using eIE6 = Trig5Chain76Fields::eIE6;
    using eIE6_EN = Trig5Chain76Fields::eIE6_EN;
    using eCSEL7 = Trig5Chain76Fields::eCSEL7;
    using eHWTS7 = Trig5Chain76Fields::eHWTS7;
    using eB2B7 = Trig5Chain76Fields::eB2B7;
    using eIE7 = Trig5Chain76Fields::eIE7;
    using eIE7_EN = Trig5Chain76Fields::eIE7_EN;
    using CSEL6 = Trig5Chain76Fields::CSEL6;
    using HWTS6 = Trig5Chain76Fields::HWTS6;
    using B2B6 = Trig5Chain76Fields::B2B6;
    using IE6 = Trig5Chain76Fields::IE6;
    using IE6_EN = Trig5Chain76Fields::IE6_EN;
    using CSEL7 = Trig5Chain76Fields::CSEL7;
    using HWTS7 = Trig5Chain76Fields::HWTS7;
    using B2B7 = Trig5Chain76Fields::B2B7;
    using IE7 = Trig5Chain76Fields::IE7;
    using IE7_EN = Trig5Chain76Fields::IE7_EN;
  };

  // ETC_TRIG Result Data 1/0 Register
  struct Trig5Result10Fields {
    // Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA0 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA1 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig5Result10Fields

  struct TRIG5_RESULT_1_0 : ftl::mmio::Register<
      0x400480F0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig5Result10Fields::DATA0,
      ftl::mmio::Reserved<4, 12>,
      Trig5Result10Fields::DATA1,
      ftl::mmio::Reserved<4, 28>> {
    using DATA0 = Trig5Result10Fields::DATA0;
    using DATA1 = Trig5Result10Fields::DATA1;
  };

  // ETC_TRIG Result Data 3/2 Register
  struct Trig5Result32Fields {
    // Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA2 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA3 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig5Result32Fields

  struct TRIG5_RESULT_3_2 : ftl::mmio::Register<
      0x400480F4u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig5Result32Fields::DATA2,
      ftl::mmio::Reserved<4, 12>,
      Trig5Result32Fields::DATA3,
      ftl::mmio::Reserved<4, 28>> {
    using DATA2 = Trig5Result32Fields::DATA2;
    using DATA3 = Trig5Result32Fields::DATA3;
  };

  // ETC_TRIG Result Data 5/4 Register
  struct Trig5Result54Fields {
    // Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA4 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA5 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig5Result54Fields

  struct TRIG5_RESULT_5_4 : ftl::mmio::Register<
      0x400480F8u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig5Result54Fields::DATA4,
      ftl::mmio::Reserved<4, 12>,
      Trig5Result54Fields::DATA5,
      ftl::mmio::Reserved<4, 28>> {
    using DATA4 = Trig5Result54Fields::DATA4;
    using DATA5 = Trig5Result54Fields::DATA5;
  };

  // ETC_TRIG Result Data 7/6 Register
  struct Trig5Result76Fields {
    // Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA6 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA7 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig5Result76Fields

  struct TRIG5_RESULT_7_6 : ftl::mmio::Register<
      0x400480FCu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig5Result76Fields::DATA6,
      ftl::mmio::Reserved<4, 12>,
      Trig5Result76Fields::DATA7,
      ftl::mmio::Reserved<4, 28>> {
    using DATA6 = Trig5Result76Fields::DATA6;
    using DATA7 = Trig5Result76Fields::DATA7;
  };

  // ETC_TRIG Control Register
  struct Trig6CtrlFields {
    enum class eSW_TRIG : std::uint32_t {
      // No software trigger event generated.
      eSW_TRIG_0 = 0,
      // Software trigger event generated.
      eSW_TRIG_1 = 1,
    };

    enum class eTRIG_MODE : std::uint32_t {
      // Hardware trigger. The softerware trigger will be ignored.
      eTRIG_MODE_0 = 0,
      // Software trigger. The hardware trigger will be ignored.
      eTRIG_MODE_1 = 1,
    };

    enum class eTRIG_CHAIN : std::uint32_t {
      // Trigger chain length is 1
      eTRIG_CHAIN_0 = 0,
      // Trigger chain length is 2
      eTRIG_CHAIN_1 = 1,
      // Trigger chain length is 3
      eTRIG_CHAIN_2 = 2,
      // Trigger chain length is 4
      eTRIG_CHAIN_3 = 3,
      // Trigger chain length is 5
      eTRIG_CHAIN_4 = 4,
      // Trigger chain length is 6
      eTRIG_CHAIN_5 = 5,
      // Trigger chain length is 7
      eTRIG_CHAIN_6 = 6,
      // Trigger chain length is 8
      eTRIG_CHAIN_7 = 7,
    };

    enum class eSYNC_MODE : std::uint32_t {
      // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
      eSYNC_MODE_0 = 0,
      // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
      eSYNC_MODE_1 = 1,
    };

    enum class eCHAINx_DONE : std::uint32_t {
      // segment x done not detected.
      eCHAINx_DONE_0 = 0,
      // segment x done detected.
      eCHAINx_DONE_1 = 1,
    };

    // Software trigger. This field is self-clearing.
    using SW_TRIG = ftl::mmio::Field<1, 0, eSW_TRIG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger mode selection.
    using TRIG_MODE = ftl::mmio::Field<1, 4, eTRIG_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // The number of segments inside the trigger chain of TRIGa.
    using TRIG_CHAIN = ftl::mmio::Field<3, 8, eTRIG_CHAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // External trigger priority, 7 is highest priority, while 0 is lowest
    using TRIG_PRIORITY = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger synchronization mode selection
    using SYNC_MODE = ftl::mmio::Field<1, 16, eSYNC_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment x done detection
    using CHAINx_DONE = ftl::mmio::Field<8, 24, eCHAINx_DONE, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Trig6CtrlFields

  struct TRIG6_CTRL : ftl::mmio::Register<
      0x40048100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig6CtrlFields::SW_TRIG,
      ftl::mmio::Reserved<3, 1>,
      Trig6CtrlFields::TRIG_MODE,
      ftl::mmio::Reserved<3, 5>,
      Trig6CtrlFields::TRIG_CHAIN,
      ftl::mmio::Reserved<1, 11>,
      Trig6CtrlFields::TRIG_PRIORITY,
      ftl::mmio::Reserved<1, 15>,
      Trig6CtrlFields::SYNC_MODE,
      ftl::mmio::Reserved<7, 17>,
      Trig6CtrlFields::CHAINx_DONE> {
    using eSW_TRIG = Trig6CtrlFields::eSW_TRIG;
    using eTRIG_MODE = Trig6CtrlFields::eTRIG_MODE;
    using eTRIG_CHAIN = Trig6CtrlFields::eTRIG_CHAIN;
    using eSYNC_MODE = Trig6CtrlFields::eSYNC_MODE;
    using eCHAINx_DONE = Trig6CtrlFields::eCHAINx_DONE;
    using SW_TRIG = Trig6CtrlFields::SW_TRIG;
    using TRIG_MODE = Trig6CtrlFields::TRIG_MODE;
    using TRIG_CHAIN = Trig6CtrlFields::TRIG_CHAIN;
    using TRIG_PRIORITY = Trig6CtrlFields::TRIG_PRIORITY;
    using SYNC_MODE = Trig6CtrlFields::SYNC_MODE;
    using CHAINx_DONE = Trig6CtrlFields::CHAINx_DONE;
  };

  // ETC_TRIG Counter Register
  struct Trig6CounterFields {
    // TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    using INIT_DELAY = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIGGER sampling interval counter
    using SAMPLE_INTERVAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig6CounterFields

  struct TRIG6_COUNTER : ftl::mmio::Register<
      0x40048104u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig6CounterFields::INIT_DELAY,
      Trig6CounterFields::SAMPLE_INTERVAL> {
    using INIT_DELAY = Trig6CounterFields::INIT_DELAY;
    using SAMPLE_INTERVAL = Trig6CounterFields::SAMPLE_INTERVAL;
  };

  // ETC_TRIG Chain 0/1 Register
  struct Trig6Chain10Fields {
    enum class eCSEL0 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL0_0 = 0,
      // ADC CMD1 selected.
      eCSEL0_1 = 1,
      // ADC CMD2 selected.
      eCSEL0_2 = 2,
      // ADC CMD3 selected.
      eCSEL0_3 = 3,
      // ADC CMD4 selected.
      eCSEL0_4 = 4,
      // ADC CMD5 selected.
      eCSEL0_5 = 5,
      // ADC CMD6 selected.
      eCSEL0_6 = 6,
      // ADC CMD7 selected.
      eCSEL0_7 = 7,
      // ADC CMD8 selected.
      eCSEL0_8 = 8,
      // ADC CMD9 selected.
      eCSEL0_9 = 9,
      // ADC CMD10 selected.
      eCSEL0_10 = 10,
      // ADC CMD11 selected.
      eCSEL0_11 = 11,
      // ADC CMD12 selected.
      eCSEL0_12 = 12,
      // ADC CMD13 selected.
      eCSEL0_13 = 13,
      // ADC CMD14 selected.
      eCSEL0_14 = 14,
      // ADC CMD15 selected.
      eCSEL0_15 = 15,
    };

    enum class eHWTS0 : std::uint32_t {
      // no trigger selected
      eHWTS0_0 = 0,
      // ADC TRIG0 selected
      eHWTS0_1 = 1,
      // ADC TRIG1 selected
      eHWTS0_2 = 2,
      // ADC TRIG2 selected
      eHWTS0_4 = 4,
      // ADC TRIG3 selected
      eHWTS0_8 = 8,
      // ADC TRIG4 selected
      eHWTS0_16 = 16,
      // ADC TRIG5 selected
      eHWTS0_32 = 32,
      // ADC TRIG6 selected
      eHWTS0_64 = 64,
      // ADC TRIG7 selected
      eHWTS0_128 = 128,
    };

    enum class eB2B0 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B0_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B0_1 = 1,
    };

    enum class eIE0 : std::uint32_t {
      // Generate interrupt on Done0 when segment 0 finish.
      eIE0_0 = 0,
      // Generate interrupt on Done1 when segment 0 finish.
      eIE0_1 = 1,
      // Generate interrupt on Done2 when segment 0 finish.
      eIE0_2 = 2,
      // Generate interrupt on Done3 when segment 0 finish.
      eIE0_3 = 3,
    };

    enum class eIE0_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE0_EN_0 = 0,
      // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
      eIE0_EN_1 = 1,
    };

    enum class eCSEL1 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL1_0 = 0,
      // ADC CMD1 selected.
      eCSEL1_1 = 1,
      // ADC CMD2 selected.
      eCSEL1_2 = 2,
      // ADC CMD3 selected.
      eCSEL1_3 = 3,
      // ADC CMD4 selected.
      eCSEL1_4 = 4,
      // ADC CMD5 selected.
      eCSEL1_5 = 5,
      // ADC CMD6 selected.
      eCSEL1_6 = 6,
      // ADC CMD7 selected.
      eCSEL1_7 = 7,
      // ADC CMD8 selected.
      eCSEL1_8 = 8,
      // ADC CMD9 selected.
      eCSEL1_9 = 9,
      // ADC CMD10 selected.
      eCSEL1_10 = 10,
      // ADC CMD11 selected.
      eCSEL1_11 = 11,
      // ADC CMD12 selected.
      eCSEL1_12 = 12,
      // ADC CMD13 selected.
      eCSEL1_13 = 13,
      // ADC CMD14 selected.
      eCSEL1_14 = 14,
      // ADC CMD15 selected.
      eCSEL1_15 = 15,
    };

    enum class eHWTS1 : std::uint32_t {
      // no trigger selected
      eHWTS1_0 = 0,
      // ADC TRIG0 selected
      eHWTS1_1 = 1,
      // ADC TRIG1 selected
      eHWTS1_2 = 2,
      // ADC TRIG2 selected
      eHWTS1_4 = 4,
      // ADC TRIG3 selected
      eHWTS1_8 = 8,
      // ADC TRIG4 selected
      eHWTS1_16 = 16,
      // ADC TRIG5 selected
      eHWTS1_32 = 32,
      // ADC TRIG6 selected
      eHWTS1_64 = 64,
      // ADC TRIG7 selected
      eHWTS1_128 = 128,
    };

    enum class eB2B1 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B1_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B1_1 = 1,
    };

    enum class eIE1 : std::uint32_t {
      // Generate interrupt on Done0 when Segment 1 finish.
      eIE1_0 = 0,
      // Generate interrupt on Done1 when Segment 1 finish.
      eIE1_1 = 1,
      // Generate interrupt on Done2 when Segment 1 finish.
      eIE1_2 = 2,
      // Generate interrupt on Done3 when Segment 1 finish.
      eIE1_3 = 3,
    };

    enum class eIE1_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE1_EN_0 = 0,
      // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
      eIE1_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL0 = ftl::mmio::Field<4, 0, eCSEL0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 HWTS ADC hardware trigger selection
    using HWTS0 = ftl::mmio::Field<8, 4, eHWTS0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 B2B
    using B2B0 = ftl::mmio::Field<1, 12, eB2B0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    using IE0 = ftl::mmio::Field<2, 13, eIE0, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 0.
    using IE0_EN = ftl::mmio::Field<1, 15, eIE0_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL1 = ftl::mmio::Field<4, 16, eCSEL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 HWTS ADC hardware trigger selection
    using HWTS1 = ftl::mmio::Field<8, 20, eHWTS1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 B2B
    using B2B1 = ftl::mmio::Field<1, 28, eB2B1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    using IE1 = ftl::mmio::Field<2, 29, eIE1, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 1.
    using IE1_EN = ftl::mmio::Field<1, 31, eIE1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig6Chain10Fields

  struct TRIG6_CHAIN_1_0 : ftl::mmio::Register<
      0x40048108u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig6Chain10Fields::CSEL0,
      Trig6Chain10Fields::HWTS0,
      Trig6Chain10Fields::B2B0,
      Trig6Chain10Fields::IE0,
      Trig6Chain10Fields::IE0_EN,
      Trig6Chain10Fields::CSEL1,
      Trig6Chain10Fields::HWTS1,
      Trig6Chain10Fields::B2B1,
      Trig6Chain10Fields::IE1,
      Trig6Chain10Fields::IE1_EN> {
    using eCSEL0 = Trig6Chain10Fields::eCSEL0;
    using eHWTS0 = Trig6Chain10Fields::eHWTS0;
    using eB2B0 = Trig6Chain10Fields::eB2B0;
    using eIE0 = Trig6Chain10Fields::eIE0;
    using eIE0_EN = Trig6Chain10Fields::eIE0_EN;
    using eCSEL1 = Trig6Chain10Fields::eCSEL1;
    using eHWTS1 = Trig6Chain10Fields::eHWTS1;
    using eB2B1 = Trig6Chain10Fields::eB2B1;
    using eIE1 = Trig6Chain10Fields::eIE1;
    using eIE1_EN = Trig6Chain10Fields::eIE1_EN;
    using CSEL0 = Trig6Chain10Fields::CSEL0;
    using HWTS0 = Trig6Chain10Fields::HWTS0;
    using B2B0 = Trig6Chain10Fields::B2B0;
    using IE0 = Trig6Chain10Fields::IE0;
    using IE0_EN = Trig6Chain10Fields::IE0_EN;
    using CSEL1 = Trig6Chain10Fields::CSEL1;
    using HWTS1 = Trig6Chain10Fields::HWTS1;
    using B2B1 = Trig6Chain10Fields::B2B1;
    using IE1 = Trig6Chain10Fields::IE1;
    using IE1_EN = Trig6Chain10Fields::IE1_EN;
  };

  // ETC_TRIG Chain 2/3 Register
  struct Trig6Chain32Fields {
    enum class eCSEL2 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL2_0 = 0,
      // ADC CMD1 selected.
      eCSEL2_1 = 1,
      // ADC CMD2 selected.
      eCSEL2_2 = 2,
      // ADC CMD3 selected.
      eCSEL2_3 = 3,
      // ADC CMD4 selected.
      eCSEL2_4 = 4,
      // ADC CMD5 selected.
      eCSEL2_5 = 5,
      // ADC CMD6 selected.
      eCSEL2_6 = 6,
      // ADC CMD7 selected.
      eCSEL2_7 = 7,
      // ADC CMD8 selected.
      eCSEL2_8 = 8,
      // ADC CMD9 selected.
      eCSEL2_9 = 9,
      // ADC CMD10 selected.
      eCSEL2_10 = 10,
      // ADC CMD11 selected.
      eCSEL2_11 = 11,
      // ADC CMD12 selected.
      eCSEL2_12 = 12,
      // ADC CMD13 selected.
      eCSEL2_13 = 13,
      // ADC CMD14 selected.
      eCSEL2_14 = 14,
      // ADC CMD15 selected.
      eCSEL2_15 = 15,
    };

    enum class eHWTS2 : std::uint32_t {
      // no trigger selected
      eHWTS2_0 = 0,
      // ADC TRIG0 selected
      eHWTS2_1 = 1,
      // ADC TRIG1 selected
      eHWTS2_2 = 2,
      // ADC TRIG2 selected
      eHWTS2_4 = 4,
      // ADC TRIG3 selected
      eHWTS2_8 = 8,
      // ADC TRIG4 selected
      eHWTS2_16 = 16,
      // ADC TRIG5 selected
      eHWTS2_32 = 32,
      // ADC TRIG6 selected
      eHWTS2_64 = 64,
      // ADC TRIG7 selected
      eHWTS2_128 = 128,
    };

    enum class eB2B2 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B2_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B2_1 = 1,
    };

    enum class eIE2 : std::uint32_t {
      // Generate interrupt on Done0 when segment 2 finish.
      eIE2_0 = 0,
      // Generate interrupt on Done1 when segment 2 finish.
      eIE2_1 = 1,
      // Generate interrupt on Done2 when segment 2 finish.
      eIE2_2 = 2,
      // Generate interrupt on Done3 when segment 2 finish.
      eIE2_3 = 3,
    };

    enum class eIE2_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE2_EN_0 = 0,
      // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
      eIE2_EN_1 = 1,
    };

    enum class eCSEL3 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL3_0 = 0,
      // ADC CMD1 selected.
      eCSEL3_1 = 1,
      // ADC CMD2 selected.
      eCSEL3_2 = 2,
      // ADC CMD3 selected.
      eCSEL3_3 = 3,
      // ADC CMD4 selected.
      eCSEL3_4 = 4,
      // ADC CMD5 selected.
      eCSEL3_5 = 5,
      // ADC CMD6 selected.
      eCSEL3_6 = 6,
      // ADC CMD7 selected.
      eCSEL3_7 = 7,
      // ADC CMD8 selected.
      eCSEL3_8 = 8,
      // ADC CMD9 selected.
      eCSEL3_9 = 9,
      // ADC CMD10 selected.
      eCSEL3_10 = 10,
      // ADC CMD11 selected.
      eCSEL3_11 = 11,
      // ADC CMD12 selected.
      eCSEL3_12 = 12,
      // ADC CMD13 selected.
      eCSEL3_13 = 13,
      // ADC CMD14 selected.
      eCSEL3_14 = 14,
      // ADC CMD15 selected.
      eCSEL3_15 = 15,
    };

    enum class eHWTS3 : std::uint32_t {
      // no trigger selected
      eHWTS3_0 = 0,
      // ADC TRIG0 selected
      eHWTS3_1 = 1,
      // ADC TRIG1 selected
      eHWTS3_2 = 2,
      // ADC TRIG2 selected
      eHWTS3_4 = 4,
      // ADC TRIG3 selected
      eHWTS3_8 = 8,
      // ADC TRIG4 selected
      eHWTS3_16 = 16,
      // ADC TRIG5 selected
      eHWTS3_32 = 32,
      // ADC TRIG6 selected
      eHWTS3_64 = 64,
      // ADC TRIG7 selected
      eHWTS3_128 = 128,
    };

    enum class eB2B3 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B3_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B3_1 = 1,
    };

    enum class eIE3 : std::uint32_t {
      // Generate interrupt on Done0 when segment 3 finish.
      eIE3_0 = 0,
      // Generate interrupt on Done1 when segment 3 finish.
      eIE3_1 = 1,
      // Generate interrupt on Done2 when segment 3 finish.
      eIE3_2 = 2,
      // Generate interrupt on Done3 when segment 3 finish.
      eIE3_3 = 3,
    };

    enum class eIE3_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE3_EN_0 = 0,
      // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
      eIE3_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL2 = ftl::mmio::Field<4, 0, eCSEL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 HWTS ADC hardware trigger selection
    using HWTS2 = ftl::mmio::Field<8, 4, eHWTS2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 B2B
    using B2B2 = ftl::mmio::Field<1, 12, eB2B2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    using IE2 = ftl::mmio::Field<2, 13, eIE2, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 2.
    using IE2_EN = ftl::mmio::Field<1, 15, eIE2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL3 = ftl::mmio::Field<4, 16, eCSEL3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 HWTS ADC hardware trigger selection
    using HWTS3 = ftl::mmio::Field<8, 20, eHWTS3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 B2B
    using B2B3 = ftl::mmio::Field<1, 28, eB2B3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    using IE3 = ftl::mmio::Field<2, 29, eIE3, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 3.
    using IE3_EN = ftl::mmio::Field<1, 31, eIE3_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig6Chain32Fields

  struct TRIG6_CHAIN_3_2 : ftl::mmio::Register<
      0x4004810Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig6Chain32Fields::CSEL2,
      Trig6Chain32Fields::HWTS2,
      Trig6Chain32Fields::B2B2,
      Trig6Chain32Fields::IE2,
      Trig6Chain32Fields::IE2_EN,
      Trig6Chain32Fields::CSEL3,
      Trig6Chain32Fields::HWTS3,
      Trig6Chain32Fields::B2B3,
      Trig6Chain32Fields::IE3,
      Trig6Chain32Fields::IE3_EN> {
    using eCSEL2 = Trig6Chain32Fields::eCSEL2;
    using eHWTS2 = Trig6Chain32Fields::eHWTS2;
    using eB2B2 = Trig6Chain32Fields::eB2B2;
    using eIE2 = Trig6Chain32Fields::eIE2;
    using eIE2_EN = Trig6Chain32Fields::eIE2_EN;
    using eCSEL3 = Trig6Chain32Fields::eCSEL3;
    using eHWTS3 = Trig6Chain32Fields::eHWTS3;
    using eB2B3 = Trig6Chain32Fields::eB2B3;
    using eIE3 = Trig6Chain32Fields::eIE3;
    using eIE3_EN = Trig6Chain32Fields::eIE3_EN;
    using CSEL2 = Trig6Chain32Fields::CSEL2;
    using HWTS2 = Trig6Chain32Fields::HWTS2;
    using B2B2 = Trig6Chain32Fields::B2B2;
    using IE2 = Trig6Chain32Fields::IE2;
    using IE2_EN = Trig6Chain32Fields::IE2_EN;
    using CSEL3 = Trig6Chain32Fields::CSEL3;
    using HWTS3 = Trig6Chain32Fields::HWTS3;
    using B2B3 = Trig6Chain32Fields::B2B3;
    using IE3 = Trig6Chain32Fields::IE3;
    using IE3_EN = Trig6Chain32Fields::IE3_EN;
  };

  // ETC_TRIG Chain 4/5 Register
  struct Trig6Chain54Fields {
    enum class eCSEL4 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL4_0 = 0,
      // ADC CMD1 selected.
      eCSEL4_1 = 1,
      // ADC CMD2 selected.
      eCSEL4_2 = 2,
      // ADC CMD3 selected.
      eCSEL4_3 = 3,
      // ADC CMD4 selected.
      eCSEL4_4 = 4,
      // ADC CMD5 selected.
      eCSEL4_5 = 5,
      // ADC CMD6 selected.
      eCSEL4_6 = 6,
      // ADC CMD7 selected.
      eCSEL4_7 = 7,
      // ADC CMD8 selected.
      eCSEL4_8 = 8,
      // ADC CMD9 selected.
      eCSEL4_9 = 9,
      // ADC CMD10 selected.
      eCSEL4_10 = 10,
      // ADC CMD11 selected.
      eCSEL4_11 = 11,
      // ADC CMD12 selected.
      eCSEL4_12 = 12,
      // ADC CMD13 selected.
      eCSEL4_13 = 13,
      // ADC CMD14 selected.
      eCSEL4_14 = 14,
      // ADC CMD15 selected.
      eCSEL4_15 = 15,
    };

    enum class eHWTS4 : std::uint32_t {
      // no trigger selected
      eHWTS4_0 = 0,
      // ADC TRIG0 selected
      eHWTS4_1 = 1,
      // ADC TRIG1 selected
      eHWTS4_2 = 2,
      // ADC TRIG2 selected
      eHWTS4_4 = 4,
      // ADC TRIG3 selected
      eHWTS4_8 = 8,
      // ADC TRIG4 selected
      eHWTS4_16 = 16,
      // ADC TRIG5 selected
      eHWTS4_32 = 32,
      // ADC TRIG6 selected
      eHWTS4_64 = 64,
      // ADC TRIG7 selected
      eHWTS4_128 = 128,
    };

    enum class eB2B4 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B4_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B4_1 = 1,
    };

    enum class eIE4 : std::uint32_t {
      // Generate interrupt on Done0 when segment 4 finish.
      eIE4_0 = 0,
      // Generate interrupt on Done1 when segment 4 finish.
      eIE4_1 = 1,
      // Generate interrupt on Done2 when segment 4 finish.
      eIE4_2 = 2,
      // Generate interrupt on Done3 when segment 4 finish.
      eIE4_3 = 3,
    };

    enum class eIE4_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE4_EN_0 = 0,
      // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
      eIE4_EN_1 = 1,
    };

    enum class eCSEL5 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL5_0 = 0,
      // ADC CMD1 selected.
      eCSEL5_1 = 1,
      // ADC CMD2 selected.
      eCSEL5_2 = 2,
      // ADC CMD3 selected.
      eCSEL5_3 = 3,
      // ADC CMD4 selected.
      eCSEL5_4 = 4,
      // ADC CMD5 selected.
      eCSEL5_5 = 5,
      // ADC CMD6 selected.
      eCSEL5_6 = 6,
      // ADC CMD7 selected.
      eCSEL5_7 = 7,
      // ADC CMD8 selected.
      eCSEL5_8 = 8,
      // ADC CMD9 selected.
      eCSEL5_9 = 9,
      // ADC CMD10 selected.
      eCSEL5_10 = 10,
      // ADC CMD11 selected.
      eCSEL5_11 = 11,
      // ADC CMD12 selected.
      eCSEL5_12 = 12,
      // ADC CMD13 selected.
      eCSEL5_13 = 13,
      // ADC CMD14 selected.
      eCSEL5_14 = 14,
      // ADC CMD15 selected.
      eCSEL5_15 = 15,
    };

    enum class eHWTS5 : std::uint32_t {
      // no trigger selected
      eHWTS5_0 = 0,
      // ADC TRIG0 selected
      eHWTS5_1 = 1,
      // ADC TRIG1 selected
      eHWTS5_2 = 2,
      // ADC TRIG2 selected
      eHWTS5_4 = 4,
      // ADC TRIG3 selected
      eHWTS5_8 = 8,
      // ADC TRIG4 selected
      eHWTS5_16 = 16,
      // ADC TRIG5 selected
      eHWTS5_32 = 32,
      // ADC TRIG6 selected
      eHWTS5_64 = 64,
      // ADC TRIG7 selected
      eHWTS5_128 = 128,
    };

    enum class eB2B5 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B5_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B5_1 = 1,
    };

    enum class eIE5 : std::uint32_t {
      // Generate interrupt on Done0 when segment 5 finish.
      eIE5_0 = 0,
      // Generate interrupt on Done1 when segment 5 finish.
      eIE5_1 = 1,
      // Generate interrupt on Done2 when segment 5 finish.
      eIE5_2 = 2,
      // Generate interrupt on Done3 when segment 5 finish.
      eIE5_3 = 3,
    };

    enum class eIE5_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE5_EN_0 = 0,
      // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
      eIE5_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL4 = ftl::mmio::Field<4, 0, eCSEL4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 HWTS ADC hardware trigger selection
    using HWTS4 = ftl::mmio::Field<8, 4, eHWTS4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 B2B
    using B2B4 = ftl::mmio::Field<1, 12, eB2B4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    using IE4 = ftl::mmio::Field<2, 13, eIE4, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 4.
    using IE4_EN = ftl::mmio::Field<1, 15, eIE4_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL5 = ftl::mmio::Field<4, 16, eCSEL5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 HWTS ADC hardware trigger selection
    using HWTS5 = ftl::mmio::Field<8, 20, eHWTS5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 B2B
    using B2B5 = ftl::mmio::Field<1, 28, eB2B5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    using IE5 = ftl::mmio::Field<2, 29, eIE5, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 5.
    using IE5_EN = ftl::mmio::Field<1, 31, eIE5_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig6Chain54Fields

  struct TRIG6_CHAIN_5_4 : ftl::mmio::Register<
      0x40048110u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig6Chain54Fields::CSEL4,
      Trig6Chain54Fields::HWTS4,
      Trig6Chain54Fields::B2B4,
      Trig6Chain54Fields::IE4,
      Trig6Chain54Fields::IE4_EN,
      Trig6Chain54Fields::CSEL5,
      Trig6Chain54Fields::HWTS5,
      Trig6Chain54Fields::B2B5,
      Trig6Chain54Fields::IE5,
      Trig6Chain54Fields::IE5_EN> {
    using eCSEL4 = Trig6Chain54Fields::eCSEL4;
    using eHWTS4 = Trig6Chain54Fields::eHWTS4;
    using eB2B4 = Trig6Chain54Fields::eB2B4;
    using eIE4 = Trig6Chain54Fields::eIE4;
    using eIE4_EN = Trig6Chain54Fields::eIE4_EN;
    using eCSEL5 = Trig6Chain54Fields::eCSEL5;
    using eHWTS5 = Trig6Chain54Fields::eHWTS5;
    using eB2B5 = Trig6Chain54Fields::eB2B5;
    using eIE5 = Trig6Chain54Fields::eIE5;
    using eIE5_EN = Trig6Chain54Fields::eIE5_EN;
    using CSEL4 = Trig6Chain54Fields::CSEL4;
    using HWTS4 = Trig6Chain54Fields::HWTS4;
    using B2B4 = Trig6Chain54Fields::B2B4;
    using IE4 = Trig6Chain54Fields::IE4;
    using IE4_EN = Trig6Chain54Fields::IE4_EN;
    using CSEL5 = Trig6Chain54Fields::CSEL5;
    using HWTS5 = Trig6Chain54Fields::HWTS5;
    using B2B5 = Trig6Chain54Fields::B2B5;
    using IE5 = Trig6Chain54Fields::IE5;
    using IE5_EN = Trig6Chain54Fields::IE5_EN;
  };

  // ETC_TRIG Chain 6/7 Register
  struct Trig6Chain76Fields {
    enum class eCSEL6 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL6_0 = 0,
      // ADC CMD1 selected.
      eCSEL6_1 = 1,
      // ADC CMD2 selected.
      eCSEL6_2 = 2,
      // ADC CMD3 selected.
      eCSEL6_3 = 3,
      // ADC CMD4 selected.
      eCSEL6_4 = 4,
      // ADC CMD5 selected.
      eCSEL6_5 = 5,
      // ADC CMD6 selected.
      eCSEL6_6 = 6,
      // ADC CMD7 selected.
      eCSEL6_7 = 7,
      // ADC CMD8 selected.
      eCSEL6_8 = 8,
      // ADC CMD9 selected.
      eCSEL6_9 = 9,
      // ADC CMD10 selected.
      eCSEL6_10 = 10,
      // ADC CMD11 selected.
      eCSEL6_11 = 11,
      // ADC CMD12 selected.
      eCSEL6_12 = 12,
      // ADC CMD13 selected.
      eCSEL6_13 = 13,
      // ADC CMD14 selected.
      eCSEL6_14 = 14,
      // ADC CMD15 selected.
      eCSEL6_15 = 15,
    };

    enum class eHWTS6 : std::uint32_t {
      // no trigger selected
      eHWTS6_0 = 0,
      // ADC TRIG0 selected
      eHWTS6_1 = 1,
      // ADC TRIG1 selected
      eHWTS6_2 = 2,
      // ADC TRIG2 selected
      eHWTS6_4 = 4,
      // ADC TRIG3 selected
      eHWTS6_8 = 8,
      // ADC TRIG4 selected
      eHWTS6_16 = 16,
      // ADC TRIG5 selected
      eHWTS6_32 = 32,
      // ADC TRIG6 selected
      eHWTS6_64 = 64,
      // ADC TRIG7 selected
      eHWTS6_128 = 128,
    };

    enum class eB2B6 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B6_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B6_1 = 1,
    };

    enum class eIE6 : std::uint32_t {
      // Generate interrupt on Done0 when segment 6 finish.
      eIE6_0 = 0,
      // Generate interrupt on Done1 when segment 6 finish.
      eIE6_1 = 1,
      // Generate interrupt on Done2 when segment 6 finish.
      eIE6_2 = 2,
      // Generate interrupt on Done3 when segment 6 finish.
      eIE6_3 = 3,
    };

    enum class eIE6_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE6_EN_0 = 0,
      // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
      eIE6_EN_1 = 1,
    };

    enum class eCSEL7 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL7_0 = 0,
      // ADC CMD1 selected.
      eCSEL7_1 = 1,
      // ADC CMD2 selected.
      eCSEL7_2 = 2,
      // ADC CMD3 selected.
      eCSEL7_3 = 3,
      // ADC CMD4 selected.
      eCSEL7_4 = 4,
      // ADC CMD5 selected.
      eCSEL7_5 = 5,
      // ADC CMD6 selected.
      eCSEL7_6 = 6,
      // ADC CMD7 selected.
      eCSEL7_7 = 7,
      // ADC CMD8 selected.
      eCSEL7_8 = 8,
      // ADC CMD9 selected.
      eCSEL7_9 = 9,
      // ADC CMD10 selected.
      eCSEL7_10 = 10,
      // ADC CMD11 selected.
      eCSEL7_11 = 11,
      // ADC CMD12 selected.
      eCSEL7_12 = 12,
      // ADC CMD13 selected.
      eCSEL7_13 = 13,
      // ADC CMD14 selected.
      eCSEL7_14 = 14,
      // ADC CMD15 selected.
      eCSEL7_15 = 15,
    };

    enum class eHWTS7 : std::uint32_t {
      // no trigger selected
      eHWTS7_0 = 0,
      // ADC TRIG0 selected
      eHWTS7_1 = 1,
      // ADC TRIG1 selected
      eHWTS7_2 = 2,
      // ADC TRIG2 selected
      eHWTS7_4 = 4,
      // ADC TRIG3 selected
      eHWTS7_8 = 8,
      // ADC TRIG4 selected
      eHWTS7_16 = 16,
      // ADC TRIG5 selected
      eHWTS7_32 = 32,
      // ADC TRIG6 selected
      eHWTS7_64 = 64,
      // ADC TRIG7 selected
      eHWTS7_128 = 128,
    };

    enum class eB2B7 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B7_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B7_1 = 1,
    };

    enum class eIE7 : std::uint32_t {
      // Generate interrupt on Done0 when segment 7 finish.
      eIE7_0 = 0,
      // Generate interrupt on Done1 when segment 7 finish.
      eIE7_1 = 1,
      // Generate interrupt on Done2 when segment 7 finish.
      eIE7_2 = 2,
      // Generate interrupt on Done3 when segment 7 finish.
      eIE7_3 = 3,
    };

    enum class eIE7_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE7_EN_0 = 0,
      // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
      eIE7_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL6 = ftl::mmio::Field<4, 0, eCSEL6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 HWTS ADC hardware trigger selection
    using HWTS6 = ftl::mmio::Field<8, 4, eHWTS6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 B2B
    using B2B6 = ftl::mmio::Field<1, 12, eB2B6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    using IE6 = ftl::mmio::Field<2, 13, eIE6, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 6.
    using IE6_EN = ftl::mmio::Field<1, 15, eIE6_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL7 = ftl::mmio::Field<4, 16, eCSEL7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 HWTS ADC hardware trigger selection
    using HWTS7 = ftl::mmio::Field<8, 20, eHWTS7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 B2B
    using B2B7 = ftl::mmio::Field<1, 28, eB2B7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    using IE7 = ftl::mmio::Field<2, 29, eIE7, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 7.
    using IE7_EN = ftl::mmio::Field<1, 31, eIE7_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig6Chain76Fields

  struct TRIG6_CHAIN_7_6 : ftl::mmio::Register<
      0x40048114u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig6Chain76Fields::CSEL6,
      Trig6Chain76Fields::HWTS6,
      Trig6Chain76Fields::B2B6,
      Trig6Chain76Fields::IE6,
      Trig6Chain76Fields::IE6_EN,
      Trig6Chain76Fields::CSEL7,
      Trig6Chain76Fields::HWTS7,
      Trig6Chain76Fields::B2B7,
      Trig6Chain76Fields::IE7,
      Trig6Chain76Fields::IE7_EN> {
    using eCSEL6 = Trig6Chain76Fields::eCSEL6;
    using eHWTS6 = Trig6Chain76Fields::eHWTS6;
    using eB2B6 = Trig6Chain76Fields::eB2B6;
    using eIE6 = Trig6Chain76Fields::eIE6;
    using eIE6_EN = Trig6Chain76Fields::eIE6_EN;
    using eCSEL7 = Trig6Chain76Fields::eCSEL7;
    using eHWTS7 = Trig6Chain76Fields::eHWTS7;
    using eB2B7 = Trig6Chain76Fields::eB2B7;
    using eIE7 = Trig6Chain76Fields::eIE7;
    using eIE7_EN = Trig6Chain76Fields::eIE7_EN;
    using CSEL6 = Trig6Chain76Fields::CSEL6;
    using HWTS6 = Trig6Chain76Fields::HWTS6;
    using B2B6 = Trig6Chain76Fields::B2B6;
    using IE6 = Trig6Chain76Fields::IE6;
    using IE6_EN = Trig6Chain76Fields::IE6_EN;
    using CSEL7 = Trig6Chain76Fields::CSEL7;
    using HWTS7 = Trig6Chain76Fields::HWTS7;
    using B2B7 = Trig6Chain76Fields::B2B7;
    using IE7 = Trig6Chain76Fields::IE7;
    using IE7_EN = Trig6Chain76Fields::IE7_EN;
  };

  // ETC_TRIG Result Data 1/0 Register
  struct Trig6Result10Fields {
    // Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA0 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA1 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig6Result10Fields

  struct TRIG6_RESULT_1_0 : ftl::mmio::Register<
      0x40048118u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig6Result10Fields::DATA0,
      ftl::mmio::Reserved<4, 12>,
      Trig6Result10Fields::DATA1,
      ftl::mmio::Reserved<4, 28>> {
    using DATA0 = Trig6Result10Fields::DATA0;
    using DATA1 = Trig6Result10Fields::DATA1;
  };

  // ETC_TRIG Result Data 3/2 Register
  struct Trig6Result32Fields {
    // Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA2 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA3 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig6Result32Fields

  struct TRIG6_RESULT_3_2 : ftl::mmio::Register<
      0x4004811Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig6Result32Fields::DATA2,
      ftl::mmio::Reserved<4, 12>,
      Trig6Result32Fields::DATA3,
      ftl::mmio::Reserved<4, 28>> {
    using DATA2 = Trig6Result32Fields::DATA2;
    using DATA3 = Trig6Result32Fields::DATA3;
  };

  // ETC_TRIG Result Data 5/4 Register
  struct Trig6Result54Fields {
    // Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA4 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA5 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig6Result54Fields

  struct TRIG6_RESULT_5_4 : ftl::mmio::Register<
      0x40048120u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig6Result54Fields::DATA4,
      ftl::mmio::Reserved<4, 12>,
      Trig6Result54Fields::DATA5,
      ftl::mmio::Reserved<4, 28>> {
    using DATA4 = Trig6Result54Fields::DATA4;
    using DATA5 = Trig6Result54Fields::DATA5;
  };

  // ETC_TRIG Result Data 7/6 Register
  struct Trig6Result76Fields {
    // Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA6 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA7 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig6Result76Fields

  struct TRIG6_RESULT_7_6 : ftl::mmio::Register<
      0x40048124u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig6Result76Fields::DATA6,
      ftl::mmio::Reserved<4, 12>,
      Trig6Result76Fields::DATA7,
      ftl::mmio::Reserved<4, 28>> {
    using DATA6 = Trig6Result76Fields::DATA6;
    using DATA7 = Trig6Result76Fields::DATA7;
  };

  // ETC_TRIG Control Register
  struct Trig7CtrlFields {
    enum class eSW_TRIG : std::uint32_t {
      // No software trigger event generated.
      eSW_TRIG_0 = 0,
      // Software trigger event generated.
      eSW_TRIG_1 = 1,
    };

    enum class eTRIG_MODE : std::uint32_t {
      // Hardware trigger. The softerware trigger will be ignored.
      eTRIG_MODE_0 = 0,
      // Software trigger. The hardware trigger will be ignored.
      eTRIG_MODE_1 = 1,
    };

    enum class eTRIG_CHAIN : std::uint32_t {
      // Trigger chain length is 1
      eTRIG_CHAIN_0 = 0,
      // Trigger chain length is 2
      eTRIG_CHAIN_1 = 1,
      // Trigger chain length is 3
      eTRIG_CHAIN_2 = 2,
      // Trigger chain length is 4
      eTRIG_CHAIN_3 = 3,
      // Trigger chain length is 5
      eTRIG_CHAIN_4 = 4,
      // Trigger chain length is 6
      eTRIG_CHAIN_5 = 5,
      // Trigger chain length is 7
      eTRIG_CHAIN_6 = 6,
      // Trigger chain length is 8
      eTRIG_CHAIN_7 = 7,
    };

    enum class eSYNC_MODE : std::uint32_t {
      // Synchronization mode disabled, TRIGa and TRIG(a+4) are triggered independently.
      eSYNC_MODE_0 = 0,
      // Synchronization mode enabled, TRIGa and TRIG(a+4) are triggered by TRIGa source synchronously.
      eSYNC_MODE_1 = 1,
    };

    enum class eCHAINx_DONE : std::uint32_t {
      // segment x done not detected.
      eCHAINx_DONE_0 = 0,
      // segment x done detected.
      eCHAINx_DONE_1 = 1,
    };

    // Software trigger. This field is self-clearing.
    using SW_TRIG = ftl::mmio::Field<1, 0, eSW_TRIG, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger mode selection.
    using TRIG_MODE = ftl::mmio::Field<1, 4, eTRIG_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // The number of segments inside the trigger chain of TRIGa.
    using TRIG_CHAIN = ftl::mmio::Field<3, 8, eTRIG_CHAIN, ftl::mmio::RW, ftl::mmio::Normal>;
    // External trigger priority, 7 is highest priority, while 0 is lowest
    using TRIG_PRIORITY = ftl::mmio::Field<3, 12, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Trigger synchronization mode selection
    using SYNC_MODE = ftl::mmio::Field<1, 16, eSYNC_MODE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment x done detection
    using CHAINx_DONE = ftl::mmio::Field<8, 24, eCHAINx_DONE, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct Trig7CtrlFields

  struct TRIG7_CTRL : ftl::mmio::Register<
      0x40048128u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig7CtrlFields::SW_TRIG,
      ftl::mmio::Reserved<3, 1>,
      Trig7CtrlFields::TRIG_MODE,
      ftl::mmio::Reserved<3, 5>,
      Trig7CtrlFields::TRIG_CHAIN,
      ftl::mmio::Reserved<1, 11>,
      Trig7CtrlFields::TRIG_PRIORITY,
      ftl::mmio::Reserved<1, 15>,
      Trig7CtrlFields::SYNC_MODE,
      ftl::mmio::Reserved<7, 17>,
      Trig7CtrlFields::CHAINx_DONE> {
    using eSW_TRIG = Trig7CtrlFields::eSW_TRIG;
    using eTRIG_MODE = Trig7CtrlFields::eTRIG_MODE;
    using eTRIG_CHAIN = Trig7CtrlFields::eTRIG_CHAIN;
    using eSYNC_MODE = Trig7CtrlFields::eSYNC_MODE;
    using eCHAINx_DONE = Trig7CtrlFields::eCHAINx_DONE;
    using SW_TRIG = Trig7CtrlFields::SW_TRIG;
    using TRIG_MODE = Trig7CtrlFields::TRIG_MODE;
    using TRIG_CHAIN = Trig7CtrlFields::TRIG_CHAIN;
    using TRIG_PRIORITY = Trig7CtrlFields::TRIG_PRIORITY;
    using SYNC_MODE = Trig7CtrlFields::SYNC_MODE;
    using CHAINx_DONE = Trig7CtrlFields::CHAINx_DONE;
  };

  // ETC_TRIG Counter Register
  struct Trig7CounterFields {
    // TRIGGER initial delay counter. Initial_delay = (INIT_DELAY+1)*(PRE_DIVIDER+1)*ipg_clk
    using INIT_DELAY = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // TRIGGER sampling interval counter
    using SAMPLE_INTERVAL = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig7CounterFields

  struct TRIG7_COUNTER : ftl::mmio::Register<
      0x4004812Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig7CounterFields::INIT_DELAY,
      Trig7CounterFields::SAMPLE_INTERVAL> {
    using INIT_DELAY = Trig7CounterFields::INIT_DELAY;
    using SAMPLE_INTERVAL = Trig7CounterFields::SAMPLE_INTERVAL;
  };

  // ETC_TRIG Chain 0/1 Register
  struct Trig7Chain10Fields {
    enum class eCSEL0 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL0_0 = 0,
      // ADC CMD1 selected.
      eCSEL0_1 = 1,
      // ADC CMD2 selected.
      eCSEL0_2 = 2,
      // ADC CMD3 selected.
      eCSEL0_3 = 3,
      // ADC CMD4 selected.
      eCSEL0_4 = 4,
      // ADC CMD5 selected.
      eCSEL0_5 = 5,
      // ADC CMD6 selected.
      eCSEL0_6 = 6,
      // ADC CMD7 selected.
      eCSEL0_7 = 7,
      // ADC CMD8 selected.
      eCSEL0_8 = 8,
      // ADC CMD9 selected.
      eCSEL0_9 = 9,
      // ADC CMD10 selected.
      eCSEL0_10 = 10,
      // ADC CMD11 selected.
      eCSEL0_11 = 11,
      // ADC CMD12 selected.
      eCSEL0_12 = 12,
      // ADC CMD13 selected.
      eCSEL0_13 = 13,
      // ADC CMD14 selected.
      eCSEL0_14 = 14,
      // ADC CMD15 selected.
      eCSEL0_15 = 15,
    };

    enum class eHWTS0 : std::uint32_t {
      // no trigger selected
      eHWTS0_0 = 0,
      // ADC TRIG0 selected
      eHWTS0_1 = 1,
      // ADC TRIG1 selected
      eHWTS0_2 = 2,
      // ADC TRIG2 selected
      eHWTS0_4 = 4,
      // ADC TRIG3 selected
      eHWTS0_8 = 8,
      // ADC TRIG4 selected
      eHWTS0_16 = 16,
      // ADC TRIG5 selected
      eHWTS0_32 = 32,
      // ADC TRIG6 selected
      eHWTS0_64 = 64,
      // ADC TRIG7 selected
      eHWTS0_128 = 128,
    };

    enum class eB2B0 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG0_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B0_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B0_1 = 1,
    };

    enum class eIE0 : std::uint32_t {
      // Generate interrupt on Done0 when segment 0 finish.
      eIE0_0 = 0,
      // Generate interrupt on Done1 when segment 0 finish.
      eIE0_1 = 1,
      // Generate interrupt on Done2 when segment 0 finish.
      eIE0_2 = 2,
      // Generate interrupt on Done3 when segment 0 finish.
      eIE0_3 = 3,
    };

    enum class eIE0_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE0_EN_0 = 0,
      // Interrupt DONE enabled. When segment 0 finish, an interrupt will be generated on the specific port configured by the IE0.
      eIE0_EN_1 = 1,
    };

    enum class eCSEL1 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL1_0 = 0,
      // ADC CMD1 selected.
      eCSEL1_1 = 1,
      // ADC CMD2 selected.
      eCSEL1_2 = 2,
      // ADC CMD3 selected.
      eCSEL1_3 = 3,
      // ADC CMD4 selected.
      eCSEL1_4 = 4,
      // ADC CMD5 selected.
      eCSEL1_5 = 5,
      // ADC CMD6 selected.
      eCSEL1_6 = 6,
      // ADC CMD7 selected.
      eCSEL1_7 = 7,
      // ADC CMD8 selected.
      eCSEL1_8 = 8,
      // ADC CMD9 selected.
      eCSEL1_9 = 9,
      // ADC CMD10 selected.
      eCSEL1_10 = 10,
      // ADC CMD11 selected.
      eCSEL1_11 = 11,
      // ADC CMD12 selected.
      eCSEL1_12 = 12,
      // ADC CMD13 selected.
      eCSEL1_13 = 13,
      // ADC CMD14 selected.
      eCSEL1_14 = 14,
      // ADC CMD15 selected.
      eCSEL1_15 = 15,
    };

    enum class eHWTS1 : std::uint32_t {
      // no trigger selected
      eHWTS1_0 = 0,
      // ADC TRIG0 selected
      eHWTS1_1 = 1,
      // ADC TRIG1 selected
      eHWTS1_2 = 2,
      // ADC TRIG2 selected
      eHWTS1_4 = 4,
      // ADC TRIG3 selected
      eHWTS1_8 = 8,
      // ADC TRIG4 selected
      eHWTS1_16 = 16,
      // ADC TRIG5 selected
      eHWTS1_32 = 32,
      // ADC TRIG6 selected
      eHWTS1_64 = 64,
      // ADC TRIG7 selected
      eHWTS1_128 = 128,
    };

    enum class eB2B1 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG1_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B1_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B1_1 = 1,
    };

    enum class eIE1 : std::uint32_t {
      // Generate interrupt on Done0 when Segment 1 finish.
      eIE1_0 = 0,
      // Generate interrupt on Done1 when Segment 1 finish.
      eIE1_1 = 1,
      // Generate interrupt on Done2 when Segment 1 finish.
      eIE1_2 = 2,
      // Generate interrupt on Done3 when Segment 1 finish.
      eIE1_3 = 3,
    };

    enum class eIE1_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE1_EN_0 = 0,
      // Interrupt DONE enabled. When segment 1 finish, an interrupt will be generated on the specific port configured by the IE1.
      eIE1_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL0 = ftl::mmio::Field<4, 0, eCSEL0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 HWTS ADC hardware trigger selection
    using HWTS0 = ftl::mmio::Field<8, 4, eHWTS0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 B2B
    using B2B0 = ftl::mmio::Field<1, 12, eB2B0, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 0 interrupt enable. (This bit field is meaningful only when IE0_EN is set)
    using IE0 = ftl::mmio::Field<2, 13, eIE0, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 0.
    using IE0_EN = ftl::mmio::Field<1, 15, eIE0_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL1 = ftl::mmio::Field<4, 16, eCSEL1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 HWTS ADC hardware trigger selection
    using HWTS1 = ftl::mmio::Field<8, 20, eHWTS1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 B2B
    using B2B1 = ftl::mmio::Field<1, 28, eB2B1, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 1 interrupt enable. (This bit field is meaningful only when IE1_EN is set)
    using IE1 = ftl::mmio::Field<2, 29, eIE1, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 1.
    using IE1_EN = ftl::mmio::Field<1, 31, eIE1_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig7Chain10Fields

  struct TRIG7_CHAIN_1_0 : ftl::mmio::Register<
      0x40048130u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig7Chain10Fields::CSEL0,
      Trig7Chain10Fields::HWTS0,
      Trig7Chain10Fields::B2B0,
      Trig7Chain10Fields::IE0,
      Trig7Chain10Fields::IE0_EN,
      Trig7Chain10Fields::CSEL1,
      Trig7Chain10Fields::HWTS1,
      Trig7Chain10Fields::B2B1,
      Trig7Chain10Fields::IE1,
      Trig7Chain10Fields::IE1_EN> {
    using eCSEL0 = Trig7Chain10Fields::eCSEL0;
    using eHWTS0 = Trig7Chain10Fields::eHWTS0;
    using eB2B0 = Trig7Chain10Fields::eB2B0;
    using eIE0 = Trig7Chain10Fields::eIE0;
    using eIE0_EN = Trig7Chain10Fields::eIE0_EN;
    using eCSEL1 = Trig7Chain10Fields::eCSEL1;
    using eHWTS1 = Trig7Chain10Fields::eHWTS1;
    using eB2B1 = Trig7Chain10Fields::eB2B1;
    using eIE1 = Trig7Chain10Fields::eIE1;
    using eIE1_EN = Trig7Chain10Fields::eIE1_EN;
    using CSEL0 = Trig7Chain10Fields::CSEL0;
    using HWTS0 = Trig7Chain10Fields::HWTS0;
    using B2B0 = Trig7Chain10Fields::B2B0;
    using IE0 = Trig7Chain10Fields::IE0;
    using IE0_EN = Trig7Chain10Fields::IE0_EN;
    using CSEL1 = Trig7Chain10Fields::CSEL1;
    using HWTS1 = Trig7Chain10Fields::HWTS1;
    using B2B1 = Trig7Chain10Fields::B2B1;
    using IE1 = Trig7Chain10Fields::IE1;
    using IE1_EN = Trig7Chain10Fields::IE1_EN;
  };

  // ETC_TRIG Chain 2/3 Register
  struct Trig7Chain32Fields {
    enum class eCSEL2 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL2_0 = 0,
      // ADC CMD1 selected.
      eCSEL2_1 = 1,
      // ADC CMD2 selected.
      eCSEL2_2 = 2,
      // ADC CMD3 selected.
      eCSEL2_3 = 3,
      // ADC CMD4 selected.
      eCSEL2_4 = 4,
      // ADC CMD5 selected.
      eCSEL2_5 = 5,
      // ADC CMD6 selected.
      eCSEL2_6 = 6,
      // ADC CMD7 selected.
      eCSEL2_7 = 7,
      // ADC CMD8 selected.
      eCSEL2_8 = 8,
      // ADC CMD9 selected.
      eCSEL2_9 = 9,
      // ADC CMD10 selected.
      eCSEL2_10 = 10,
      // ADC CMD11 selected.
      eCSEL2_11 = 11,
      // ADC CMD12 selected.
      eCSEL2_12 = 12,
      // ADC CMD13 selected.
      eCSEL2_13 = 13,
      // ADC CMD14 selected.
      eCSEL2_14 = 14,
      // ADC CMD15 selected.
      eCSEL2_15 = 15,
    };

    enum class eHWTS2 : std::uint32_t {
      // no trigger selected
      eHWTS2_0 = 0,
      // ADC TRIG0 selected
      eHWTS2_1 = 1,
      // ADC TRIG1 selected
      eHWTS2_2 = 2,
      // ADC TRIG2 selected
      eHWTS2_4 = 4,
      // ADC TRIG3 selected
      eHWTS2_8 = 8,
      // ADC TRIG4 selected
      eHWTS2_16 = 16,
      // ADC TRIG5 selected
      eHWTS2_32 = 32,
      // ADC TRIG6 selected
      eHWTS2_64 = 64,
      // ADC TRIG7 selected
      eHWTS2_128 = 128,
    };

    enum class eB2B2 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG2_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B2_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B2_1 = 1,
    };

    enum class eIE2 : std::uint32_t {
      // Generate interrupt on Done0 when segment 2 finish.
      eIE2_0 = 0,
      // Generate interrupt on Done1 when segment 2 finish.
      eIE2_1 = 1,
      // Generate interrupt on Done2 when segment 2 finish.
      eIE2_2 = 2,
      // Generate interrupt on Done3 when segment 2 finish.
      eIE2_3 = 3,
    };

    enum class eIE2_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE2_EN_0 = 0,
      // Interrupt DONE enabled. When segment 2 finish, an interrupt will be generated on the specific port configured by the IE2.
      eIE2_EN_1 = 1,
    };

    enum class eCSEL3 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL3_0 = 0,
      // ADC CMD1 selected.
      eCSEL3_1 = 1,
      // ADC CMD2 selected.
      eCSEL3_2 = 2,
      // ADC CMD3 selected.
      eCSEL3_3 = 3,
      // ADC CMD4 selected.
      eCSEL3_4 = 4,
      // ADC CMD5 selected.
      eCSEL3_5 = 5,
      // ADC CMD6 selected.
      eCSEL3_6 = 6,
      // ADC CMD7 selected.
      eCSEL3_7 = 7,
      // ADC CMD8 selected.
      eCSEL3_8 = 8,
      // ADC CMD9 selected.
      eCSEL3_9 = 9,
      // ADC CMD10 selected.
      eCSEL3_10 = 10,
      // ADC CMD11 selected.
      eCSEL3_11 = 11,
      // ADC CMD12 selected.
      eCSEL3_12 = 12,
      // ADC CMD13 selected.
      eCSEL3_13 = 13,
      // ADC CMD14 selected.
      eCSEL3_14 = 14,
      // ADC CMD15 selected.
      eCSEL3_15 = 15,
    };

    enum class eHWTS3 : std::uint32_t {
      // no trigger selected
      eHWTS3_0 = 0,
      // ADC TRIG0 selected
      eHWTS3_1 = 1,
      // ADC TRIG1 selected
      eHWTS3_2 = 2,
      // ADC TRIG2 selected
      eHWTS3_4 = 4,
      // ADC TRIG3 selected
      eHWTS3_8 = 8,
      // ADC TRIG4 selected
      eHWTS3_16 = 16,
      // ADC TRIG5 selected
      eHWTS3_32 = 32,
      // ADC TRIG6 selected
      eHWTS3_64 = 64,
      // ADC TRIG7 selected
      eHWTS3_128 = 128,
    };

    enum class eB2B3 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG3_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B3_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B3_1 = 1,
    };

    enum class eIE3 : std::uint32_t {
      // Generate interrupt on Done0 when segment 3 finish.
      eIE3_0 = 0,
      // Generate interrupt on Done1 when segment 3 finish.
      eIE3_1 = 1,
      // Generate interrupt on Done2 when segment 3 finish.
      eIE3_2 = 2,
      // Generate interrupt on Done3 when segment 3 finish.
      eIE3_3 = 3,
    };

    enum class eIE3_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE3_EN_0 = 0,
      // Interrupt DONE enabled. When segment 3 finish, an interrupt will be generated on the specific port configured by the IE3.
      eIE3_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL2 = ftl::mmio::Field<4, 0, eCSEL2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 HWTS ADC hardware trigger selection
    using HWTS2 = ftl::mmio::Field<8, 4, eHWTS2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 B2B
    using B2B2 = ftl::mmio::Field<1, 12, eB2B2, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 2 interrupt enable. (This bit field is meaningful only when IE2_EN is set)
    using IE2 = ftl::mmio::Field<2, 13, eIE2, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 2.
    using IE2_EN = ftl::mmio::Field<1, 15, eIE2_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL3 = ftl::mmio::Field<4, 16, eCSEL3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 HWTS ADC hardware trigger selection
    using HWTS3 = ftl::mmio::Field<8, 20, eHWTS3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 B2B
    using B2B3 = ftl::mmio::Field<1, 28, eB2B3, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 3 interrupt enable. (This bit field is meaningful only when IE3_EN is set)
    using IE3 = ftl::mmio::Field<2, 29, eIE3, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 3.
    using IE3_EN = ftl::mmio::Field<1, 31, eIE3_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig7Chain32Fields

  struct TRIG7_CHAIN_3_2 : ftl::mmio::Register<
      0x40048134u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig7Chain32Fields::CSEL2,
      Trig7Chain32Fields::HWTS2,
      Trig7Chain32Fields::B2B2,
      Trig7Chain32Fields::IE2,
      Trig7Chain32Fields::IE2_EN,
      Trig7Chain32Fields::CSEL3,
      Trig7Chain32Fields::HWTS3,
      Trig7Chain32Fields::B2B3,
      Trig7Chain32Fields::IE3,
      Trig7Chain32Fields::IE3_EN> {
    using eCSEL2 = Trig7Chain32Fields::eCSEL2;
    using eHWTS2 = Trig7Chain32Fields::eHWTS2;
    using eB2B2 = Trig7Chain32Fields::eB2B2;
    using eIE2 = Trig7Chain32Fields::eIE2;
    using eIE2_EN = Trig7Chain32Fields::eIE2_EN;
    using eCSEL3 = Trig7Chain32Fields::eCSEL3;
    using eHWTS3 = Trig7Chain32Fields::eHWTS3;
    using eB2B3 = Trig7Chain32Fields::eB2B3;
    using eIE3 = Trig7Chain32Fields::eIE3;
    using eIE3_EN = Trig7Chain32Fields::eIE3_EN;
    using CSEL2 = Trig7Chain32Fields::CSEL2;
    using HWTS2 = Trig7Chain32Fields::HWTS2;
    using B2B2 = Trig7Chain32Fields::B2B2;
    using IE2 = Trig7Chain32Fields::IE2;
    using IE2_EN = Trig7Chain32Fields::IE2_EN;
    using CSEL3 = Trig7Chain32Fields::CSEL3;
    using HWTS3 = Trig7Chain32Fields::HWTS3;
    using B2B3 = Trig7Chain32Fields::B2B3;
    using IE3 = Trig7Chain32Fields::IE3;
    using IE3_EN = Trig7Chain32Fields::IE3_EN;
  };

  // ETC_TRIG Chain 4/5 Register
  struct Trig7Chain54Fields {
    enum class eCSEL4 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL4_0 = 0,
      // ADC CMD1 selected.
      eCSEL4_1 = 1,
      // ADC CMD2 selected.
      eCSEL4_2 = 2,
      // ADC CMD3 selected.
      eCSEL4_3 = 3,
      // ADC CMD4 selected.
      eCSEL4_4 = 4,
      // ADC CMD5 selected.
      eCSEL4_5 = 5,
      // ADC CMD6 selected.
      eCSEL4_6 = 6,
      // ADC CMD7 selected.
      eCSEL4_7 = 7,
      // ADC CMD8 selected.
      eCSEL4_8 = 8,
      // ADC CMD9 selected.
      eCSEL4_9 = 9,
      // ADC CMD10 selected.
      eCSEL4_10 = 10,
      // ADC CMD11 selected.
      eCSEL4_11 = 11,
      // ADC CMD12 selected.
      eCSEL4_12 = 12,
      // ADC CMD13 selected.
      eCSEL4_13 = 13,
      // ADC CMD14 selected.
      eCSEL4_14 = 14,
      // ADC CMD15 selected.
      eCSEL4_15 = 15,
    };

    enum class eHWTS4 : std::uint32_t {
      // no trigger selected
      eHWTS4_0 = 0,
      // ADC TRIG0 selected
      eHWTS4_1 = 1,
      // ADC TRIG1 selected
      eHWTS4_2 = 2,
      // ADC TRIG2 selected
      eHWTS4_4 = 4,
      // ADC TRIG3 selected
      eHWTS4_8 = 8,
      // ADC TRIG4 selected
      eHWTS4_16 = 16,
      // ADC TRIG5 selected
      eHWTS4_32 = 32,
      // ADC TRIG6 selected
      eHWTS4_64 = 64,
      // ADC TRIG7 selected
      eHWTS4_128 = 128,
    };

    enum class eB2B4 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG4_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B4_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B4_1 = 1,
    };

    enum class eIE4 : std::uint32_t {
      // Generate interrupt on Done0 when segment 4 finish.
      eIE4_0 = 0,
      // Generate interrupt on Done1 when segment 4 finish.
      eIE4_1 = 1,
      // Generate interrupt on Done2 when segment 4 finish.
      eIE4_2 = 2,
      // Generate interrupt on Done3 when segment 4 finish.
      eIE4_3 = 3,
    };

    enum class eIE4_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE4_EN_0 = 0,
      // Interrupt DONE enabled. When segment 4 finish, an interrupt will be generated on the specific port configured by the IE4.
      eIE4_EN_1 = 1,
    };

    enum class eCSEL5 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL5_0 = 0,
      // ADC CMD1 selected.
      eCSEL5_1 = 1,
      // ADC CMD2 selected.
      eCSEL5_2 = 2,
      // ADC CMD3 selected.
      eCSEL5_3 = 3,
      // ADC CMD4 selected.
      eCSEL5_4 = 4,
      // ADC CMD5 selected.
      eCSEL5_5 = 5,
      // ADC CMD6 selected.
      eCSEL5_6 = 6,
      // ADC CMD7 selected.
      eCSEL5_7 = 7,
      // ADC CMD8 selected.
      eCSEL5_8 = 8,
      // ADC CMD9 selected.
      eCSEL5_9 = 9,
      // ADC CMD10 selected.
      eCSEL5_10 = 10,
      // ADC CMD11 selected.
      eCSEL5_11 = 11,
      // ADC CMD12 selected.
      eCSEL5_12 = 12,
      // ADC CMD13 selected.
      eCSEL5_13 = 13,
      // ADC CMD14 selected.
      eCSEL5_14 = 14,
      // ADC CMD15 selected.
      eCSEL5_15 = 15,
    };

    enum class eHWTS5 : std::uint32_t {
      // no trigger selected
      eHWTS5_0 = 0,
      // ADC TRIG0 selected
      eHWTS5_1 = 1,
      // ADC TRIG1 selected
      eHWTS5_2 = 2,
      // ADC TRIG2 selected
      eHWTS5_4 = 4,
      // ADC TRIG3 selected
      eHWTS5_8 = 8,
      // ADC TRIG4 selected
      eHWTS5_16 = 16,
      // ADC TRIG5 selected
      eHWTS5_32 = 32,
      // ADC TRIG6 selected
      eHWTS5_64 = 64,
      // ADC TRIG7 selected
      eHWTS5_128 = 128,
    };

    enum class eB2B5 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG5_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B5_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B5_1 = 1,
    };

    enum class eIE5 : std::uint32_t {
      // Generate interrupt on Done0 when segment 5 finish.
      eIE5_0 = 0,
      // Generate interrupt on Done1 when segment 5 finish.
      eIE5_1 = 1,
      // Generate interrupt on Done2 when segment 5 finish.
      eIE5_2 = 2,
      // Generate interrupt on Done3 when segment 5 finish.
      eIE5_3 = 3,
    };

    enum class eIE5_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE5_EN_0 = 0,
      // Interrupt DONE enabled. When segment 5 finish, an interrupt will be generated on the specific port configured by the IE5.
      eIE5_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL4 = ftl::mmio::Field<4, 0, eCSEL4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 HWTS ADC hardware trigger selection
    using HWTS4 = ftl::mmio::Field<8, 4, eHWTS4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 B2B
    using B2B4 = ftl::mmio::Field<1, 12, eB2B4, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 4 interrupt enable. (This bit field is meaningful only when IE4_EN is set)
    using IE4 = ftl::mmio::Field<2, 13, eIE4, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 4.
    using IE4_EN = ftl::mmio::Field<1, 15, eIE4_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL5 = ftl::mmio::Field<4, 16, eCSEL5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 HWTS ADC hardware trigger selection
    using HWTS5 = ftl::mmio::Field<8, 20, eHWTS5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 B2B
    using B2B5 = ftl::mmio::Field<1, 28, eB2B5, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 5 interrupt enable. (This bit field is meaningful only when IE5_EN is set)
    using IE5 = ftl::mmio::Field<2, 29, eIE5, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 5.
    using IE5_EN = ftl::mmio::Field<1, 31, eIE5_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig7Chain54Fields

  struct TRIG7_CHAIN_5_4 : ftl::mmio::Register<
      0x40048138u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig7Chain54Fields::CSEL4,
      Trig7Chain54Fields::HWTS4,
      Trig7Chain54Fields::B2B4,
      Trig7Chain54Fields::IE4,
      Trig7Chain54Fields::IE4_EN,
      Trig7Chain54Fields::CSEL5,
      Trig7Chain54Fields::HWTS5,
      Trig7Chain54Fields::B2B5,
      Trig7Chain54Fields::IE5,
      Trig7Chain54Fields::IE5_EN> {
    using eCSEL4 = Trig7Chain54Fields::eCSEL4;
    using eHWTS4 = Trig7Chain54Fields::eHWTS4;
    using eB2B4 = Trig7Chain54Fields::eB2B4;
    using eIE4 = Trig7Chain54Fields::eIE4;
    using eIE4_EN = Trig7Chain54Fields::eIE4_EN;
    using eCSEL5 = Trig7Chain54Fields::eCSEL5;
    using eHWTS5 = Trig7Chain54Fields::eHWTS5;
    using eB2B5 = Trig7Chain54Fields::eB2B5;
    using eIE5 = Trig7Chain54Fields::eIE5;
    using eIE5_EN = Trig7Chain54Fields::eIE5_EN;
    using CSEL4 = Trig7Chain54Fields::CSEL4;
    using HWTS4 = Trig7Chain54Fields::HWTS4;
    using B2B4 = Trig7Chain54Fields::B2B4;
    using IE4 = Trig7Chain54Fields::IE4;
    using IE4_EN = Trig7Chain54Fields::IE4_EN;
    using CSEL5 = Trig7Chain54Fields::CSEL5;
    using HWTS5 = Trig7Chain54Fields::HWTS5;
    using B2B5 = Trig7Chain54Fields::B2B5;
    using IE5 = Trig7Chain54Fields::IE5;
    using IE5_EN = Trig7Chain54Fields::IE5_EN;
  };

  // ETC_TRIG Chain 6/7 Register
  struct Trig7Chain76Fields {
    enum class eCSEL6 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL6_0 = 0,
      // ADC CMD1 selected.
      eCSEL6_1 = 1,
      // ADC CMD2 selected.
      eCSEL6_2 = 2,
      // ADC CMD3 selected.
      eCSEL6_3 = 3,
      // ADC CMD4 selected.
      eCSEL6_4 = 4,
      // ADC CMD5 selected.
      eCSEL6_5 = 5,
      // ADC CMD6 selected.
      eCSEL6_6 = 6,
      // ADC CMD7 selected.
      eCSEL6_7 = 7,
      // ADC CMD8 selected.
      eCSEL6_8 = 8,
      // ADC CMD9 selected.
      eCSEL6_9 = 9,
      // ADC CMD10 selected.
      eCSEL6_10 = 10,
      // ADC CMD11 selected.
      eCSEL6_11 = 11,
      // ADC CMD12 selected.
      eCSEL6_12 = 12,
      // ADC CMD13 selected.
      eCSEL6_13 = 13,
      // ADC CMD14 selected.
      eCSEL6_14 = 14,
      // ADC CMD15 selected.
      eCSEL6_15 = 15,
    };

    enum class eHWTS6 : std::uint32_t {
      // no trigger selected
      eHWTS6_0 = 0,
      // ADC TRIG0 selected
      eHWTS6_1 = 1,
      // ADC TRIG1 selected
      eHWTS6_2 = 2,
      // ADC TRIG2 selected
      eHWTS6_4 = 4,
      // ADC TRIG3 selected
      eHWTS6_8 = 8,
      // ADC TRIG4 selected
      eHWTS6_16 = 16,
      // ADC TRIG5 selected
      eHWTS6_32 = 32,
      // ADC TRIG6 selected
      eHWTS6_64 = 64,
      // ADC TRIG7 selected
      eHWTS6_128 = 128,
    };

    enum class eB2B6 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG6_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B6_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B6_1 = 1,
    };

    enum class eIE6 : std::uint32_t {
      // Generate interrupt on Done0 when segment 6 finish.
      eIE6_0 = 0,
      // Generate interrupt on Done1 when segment 6 finish.
      eIE6_1 = 1,
      // Generate interrupt on Done2 when segment 6 finish.
      eIE6_2 = 2,
      // Generate interrupt on Done3 when segment 6 finish.
      eIE6_3 = 3,
    };

    enum class eIE6_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE6_EN_0 = 0,
      // Interrupt DONE enabled. When segment 6 finish, an interrupt will be generated on the specific port configured by the IE6.
      eIE6_EN_1 = 1,
    };

    enum class eCSEL7 : std::uint32_t {
      // Not a valid selection from the command buffer. Trigger event is ignored.
      eCSEL7_0 = 0,
      // ADC CMD1 selected.
      eCSEL7_1 = 1,
      // ADC CMD2 selected.
      eCSEL7_2 = 2,
      // ADC CMD3 selected.
      eCSEL7_3 = 3,
      // ADC CMD4 selected.
      eCSEL7_4 = 4,
      // ADC CMD5 selected.
      eCSEL7_5 = 5,
      // ADC CMD6 selected.
      eCSEL7_6 = 6,
      // ADC CMD7 selected.
      eCSEL7_7 = 7,
      // ADC CMD8 selected.
      eCSEL7_8 = 8,
      // ADC CMD9 selected.
      eCSEL7_9 = 9,
      // ADC CMD10 selected.
      eCSEL7_10 = 10,
      // ADC CMD11 selected.
      eCSEL7_11 = 11,
      // ADC CMD12 selected.
      eCSEL7_12 = 12,
      // ADC CMD13 selected.
      eCSEL7_13 = 13,
      // ADC CMD14 selected.
      eCSEL7_14 = 14,
      // ADC CMD15 selected.
      eCSEL7_15 = 15,
    };

    enum class eHWTS7 : std::uint32_t {
      // no trigger selected
      eHWTS7_0 = 0,
      // ADC TRIG0 selected
      eHWTS7_1 = 1,
      // ADC TRIG1 selected
      eHWTS7_2 = 2,
      // ADC TRIG2 selected
      eHWTS7_4 = 4,
      // ADC TRIG3 selected
      eHWTS7_8 = 8,
      // ADC TRIG4 selected
      eHWTS7_16 = 16,
      // ADC TRIG5 selected
      eHWTS7_32 = 32,
      // ADC TRIG6 selected
      eHWTS7_64 = 64,
      // ADC TRIG7 selected
      eHWTS7_128 = 128,
    };

    enum class eB2B7 : std::uint32_t {
      // Disable B2B. Wait until delay value defined by TRIG7_COUNTER[SAMPLE_INTERVAL] is reached
      eB2B7_0 = 0,
      // Enable B2B. When Segment 0 finished (ADC COCO) then automatically trigger next ADC conversion, no need to wait until interval delay reached.
      eB2B7_1 = 1,
    };

    enum class eIE7 : std::uint32_t {
      // Generate interrupt on Done0 when segment 7 finish.
      eIE7_0 = 0,
      // Generate interrupt on Done1 when segment 7 finish.
      eIE7_1 = 1,
      // Generate interrupt on Done2 when segment 7 finish.
      eIE7_2 = 2,
      // Generate interrupt on Done3 when segment 7 finish.
      eIE7_3 = 3,
    };

    enum class eIE7_EN : std::uint32_t {
      // Interrupt DONE disabled.
      eIE7_EN_0 = 0,
      // Interrupt DONE enabled. When segment 7 finish, an interrupt will be generated on the specific port configured by the IE7.
      eIE7_EN_1 = 1,
    };

    // ADC hardware trigger command selection
    using CSEL6 = ftl::mmio::Field<4, 0, eCSEL6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 HWTS ADC hardware trigger selection
    using HWTS6 = ftl::mmio::Field<8, 4, eHWTS6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 B2B
    using B2B6 = ftl::mmio::Field<1, 12, eB2B6, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 6 interrupt enable. (This bit field is meaningful only when IE6_EN is set)
    using IE6 = ftl::mmio::Field<2, 13, eIE6, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 6.
    using IE6_EN = ftl::mmio::Field<1, 15, eIE6_EN, ftl::mmio::RW, ftl::mmio::Normal>;
    // ADC hardware trigger command selection
    using CSEL7 = ftl::mmio::Field<4, 16, eCSEL7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 HWTS ADC hardware trigger selection
    using HWTS7 = ftl::mmio::Field<8, 20, eHWTS7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 B2B
    using B2B7 = ftl::mmio::Field<1, 28, eB2B7, ftl::mmio::RW, ftl::mmio::Normal>;
    // Segment 7 interrupt enable. (This bit field is meaningful only when IE7_EN is set)
    using IE7 = ftl::mmio::Field<2, 29, eIE7, ftl::mmio::RW, ftl::mmio::Normal>;
    // IRQ enable of segment 7.
    using IE7_EN = ftl::mmio::Field<1, 31, eIE7_EN, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct Trig7Chain76Fields

  struct TRIG7_CHAIN_7_6 : ftl::mmio::Register<
      0x4004813Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      Trig7Chain76Fields::CSEL6,
      Trig7Chain76Fields::HWTS6,
      Trig7Chain76Fields::B2B6,
      Trig7Chain76Fields::IE6,
      Trig7Chain76Fields::IE6_EN,
      Trig7Chain76Fields::CSEL7,
      Trig7Chain76Fields::HWTS7,
      Trig7Chain76Fields::B2B7,
      Trig7Chain76Fields::IE7,
      Trig7Chain76Fields::IE7_EN> {
    using eCSEL6 = Trig7Chain76Fields::eCSEL6;
    using eHWTS6 = Trig7Chain76Fields::eHWTS6;
    using eB2B6 = Trig7Chain76Fields::eB2B6;
    using eIE6 = Trig7Chain76Fields::eIE6;
    using eIE6_EN = Trig7Chain76Fields::eIE6_EN;
    using eCSEL7 = Trig7Chain76Fields::eCSEL7;
    using eHWTS7 = Trig7Chain76Fields::eHWTS7;
    using eB2B7 = Trig7Chain76Fields::eB2B7;
    using eIE7 = Trig7Chain76Fields::eIE7;
    using eIE7_EN = Trig7Chain76Fields::eIE7_EN;
    using CSEL6 = Trig7Chain76Fields::CSEL6;
    using HWTS6 = Trig7Chain76Fields::HWTS6;
    using B2B6 = Trig7Chain76Fields::B2B6;
    using IE6 = Trig7Chain76Fields::IE6;
    using IE6_EN = Trig7Chain76Fields::IE6_EN;
    using CSEL7 = Trig7Chain76Fields::CSEL7;
    using HWTS7 = Trig7Chain76Fields::HWTS7;
    using B2B7 = Trig7Chain76Fields::B2B7;
    using IE7 = Trig7Chain76Fields::IE7;
    using IE7_EN = Trig7Chain76Fields::IE7_EN;
  };

  // ETC_TRIG Result Data 1/0 Register
  struct Trig7Result10Fields {
    // Result DATA0The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA0 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA1The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA1 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig7Result10Fields

  struct TRIG7_RESULT_1_0 : ftl::mmio::Register<
      0x40048140u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig7Result10Fields::DATA0,
      ftl::mmio::Reserved<4, 12>,
      Trig7Result10Fields::DATA1,
      ftl::mmio::Reserved<4, 28>> {
    using DATA0 = Trig7Result10Fields::DATA0;
    using DATA1 = Trig7Result10Fields::DATA1;
  };

  // ETC_TRIG Result Data 3/2 Register
  struct Trig7Result32Fields {
    // Result DATA2The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA2 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA3The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA3 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig7Result32Fields

  struct TRIG7_RESULT_3_2 : ftl::mmio::Register<
      0x40048144u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig7Result32Fields::DATA2,
      ftl::mmio::Reserved<4, 12>,
      Trig7Result32Fields::DATA3,
      ftl::mmio::Reserved<4, 28>> {
    using DATA2 = Trig7Result32Fields::DATA2;
    using DATA3 = Trig7Result32Fields::DATA3;
  };

  // ETC_TRIG Result Data 5/4 Register
  struct Trig7Result54Fields {
    // Result DATA4The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA4 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA5The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA5 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig7Result54Fields

  struct TRIG7_RESULT_5_4 : ftl::mmio::Register<
      0x40048148u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig7Result54Fields::DATA4,
      ftl::mmio::Reserved<4, 12>,
      Trig7Result54Fields::DATA5,
      ftl::mmio::Reserved<4, 28>> {
    using DATA4 = Trig7Result54Fields::DATA4;
    using DATA5 = Trig7Result54Fields::DATA5;
  };

  // ETC_TRIG Result Data 7/6 Register
  struct Trig7Result76Fields {
    // Result DATA6The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA6 = ftl::mmio::Field<12, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Result DATA7The sign bit from ADC result FIFO is ignored by ETC_TRIG result, so only 12-bit unsigned results is supported by ADC_ETC module
    using DATA7 = ftl::mmio::Field<12, 16, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Trig7Result76Fields

  struct TRIG7_RESULT_7_6 : ftl::mmio::Register<
      0x4004814Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Trig7Result76Fields::DATA6,
      ftl::mmio::Reserved<4, 12>,
      Trig7Result76Fields::DATA7,
      ftl::mmio::Reserved<4, 28>> {
    using DATA6 = Trig7Result76Fields::DATA6;
    using DATA7 = Trig7Result76Fields::DATA7;
  };

};

}  // namespace regs