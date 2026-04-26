#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// SEMA42
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

template<std::uint32_t Instance>
struct RdcSemaphore {
  static_assert(
        Instance == 1u || Instance == 2u,
        "RdcSemaphore: Instance must be one of 1, 2");

  static constexpr std::uintptr_t kBase =
      Instance == 1u ? 0x40C44000u :
      Instance == 2u ? 0x40CCC000u :
      0u;

  // Gate Register
  struct GATE_fields_ {
    enum class eGTFSM : std::uint32_t {
      // The gate is unlocked (free).
      eGTFSM_0 = 0,
      // The gate has been locked by processor with master_index = 0.
      eGTFSM_1 = 1,
      // The gate has been locked by processor with master_index = 1.
      eGTFSM_2 = 2,
      // The gate has been locked by processor with master_index = 2.
      eGTFSM_3 = 3,
      // The gate has been locked by processor with master_index = 3.
      eGTFSM_4 = 4,
      // The gate has been locked by processor with master_index = 4.
      eGTFSM_5 = 5,
      // The gate has been locked by processor with master_index = 5.
      eGTFSM_6 = 6,
      // The gate has been locked by processor with master_index = 6.
      eGTFSM_7 = 7,
      // The gate has been locked by processor with master_index = 7.
      eGTFSM_8 = 8,
      // The gate has been locked by processor with master_index = 8.
      eGTFSM_9 = 9,
      // The gate has been locked by processor with master_index = 9.
      eGTFSM_10 = 10,
      // The gate has been locked by processor with master_index = 10.
      eGTFSM_11 = 11,
      // The gate has been locked by processor with master_index = 11.
      eGTFSM_12 = 12,
      // The gate has been locked by processor with master_index = 12.
      eGTFSM_13 = 13,
      // The gate has been locked by processor with master_index = 13.
      eGTFSM_14 = 14,
      // The gate has been locked by processor with master_index = 14.
      eGTFSM_15 = 15,
    };

    enum class eLDOM : std::uint32_t {
      // The gate is locked by domain 0. (True if the field GTFSM does not equal to 0000.)
      eLDOM_0 = 0,
      // The gate has been locked by domain 1.
      eLDOM_1 = 1,
    };

    // Gate Finite State Machine.
    using GTFSM = ftl::mmio::Field<4, 0, eGTFSM, ftl::mmio::RW, ftl::mmio::Normal>;
    // Read-only bits. They indicate which domain had currently locked the gate.
    using LDOM = ftl::mmio::Field<2, 4, eLDOM, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct GATE_fields_

  template<std::uint32_t Index>
  struct GATE : ftl::mmio::Register<
      kBase + 0x0u + (Index * 0x1u),
      std::uint8_t,
      0x00u,
      ftl::mmio::RW,
      typename GATE_fields_::GTFSM,
      typename GATE_fields_::LDOM,
      ftl::mmio::Reserved<2, 6>> {
    static_assert(Index < 64u, "GATE: Index out of range");
    using eGTFSM = typename GATE_fields_::eGTFSM;
    using eLDOM = typename GATE_fields_::eLDOM;
    using GTFSM = typename GATE_fields_::GTFSM;
    using LDOM = typename GATE_fields_::LDOM;
  };

  // Reset Gate Read
  struct RDC_SEMAPHORE1_RSTGT_R_fields_ {
    enum class eRSTGSM : std::uint32_t {
      // Idle, waiting for the first data pattern write.
      eRSTGSM_0 = 0,
      // Waiting for the second data pattern write.
      eRSTGSM_1 = 1,
      // The 2-write sequence has completed. Generate the specified gate reset(s). After the reset is performed, this machine returns to the idle (waiting for first data pattern write) state. The "01" state persists for only one clock cycle. Software will never be able to observe this state.
      eRSTGSM_2 = 2,
      // This state encoding is never used and therefore reserved.
      eRSTGSM_3 = 3,
    };

    // Reset Gate Bus Master
    using RSTGMS = ftl::mmio::Field<4, 0, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reset Gate Finite State Machine
    using RSTGSM = ftl::mmio::Field<2, 4, eRSTGSM, ftl::mmio::RO, ftl::mmio::Normal>;
    // Reset Gate Number
    using RSTGTN = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RDC_SEMAPHORE1_RSTGT_R_fields_

  struct RDC_SEMAPHORE1_RSTGT_R : ftl::mmio::Register<
      kBase + 0x42u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename RDC_SEMAPHORE1_RSTGT_R_fields_::RSTGMS,
      typename RDC_SEMAPHORE1_RSTGT_R_fields_::RSTGSM,
      ftl::mmio::Reserved<2, 6>,
      typename RDC_SEMAPHORE1_RSTGT_R_fields_::RSTGTN> {
    using eRSTGSM = typename RDC_SEMAPHORE1_RSTGT_R_fields_::eRSTGSM;
    using RSTGMS = typename RDC_SEMAPHORE1_RSTGT_R_fields_::RSTGMS;
    using RSTGSM = typename RDC_SEMAPHORE1_RSTGT_R_fields_::RSTGSM;
    using RSTGTN = typename RDC_SEMAPHORE1_RSTGT_R_fields_::RSTGTN;
  };

  // Reset Gate Write
  struct RDC_SEMAPHORE1_RSTGT_W_fields_ {
    // Reset Gate Data Pattern
    using RSTGDP = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reset Gate Number
    using RSTGTN = ftl::mmio::Field<8, 8, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct RDC_SEMAPHORE1_RSTGT_W_fields_

  struct RDC_SEMAPHORE1_RSTGT_W : ftl::mmio::Register<
      kBase + 0x42u,
      std::uint16_t,
      0x0000u,
      ftl::mmio::RW,
      typename RDC_SEMAPHORE1_RSTGT_W_fields_::RSTGDP,
      typename RDC_SEMAPHORE1_RSTGT_W_fields_::RSTGTN> {
    using RSTGDP = typename RDC_SEMAPHORE1_RSTGT_W_fields_::RSTGDP;
    using RSTGTN = typename RDC_SEMAPHORE1_RSTGT_W_fields_::RSTGTN;
  };

};

}  // namespace regs