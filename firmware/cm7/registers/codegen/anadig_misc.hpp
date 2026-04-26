#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// MX6RT_ANADIG_REGISTER
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct AnadigMisc {
  // Chip Silicon Version Register
  struct MISC_DIFPROG_fields_ {
    // Chip ID
    using CHIPID = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct MISC_DIFPROG_fields_

  struct MISC_DIFPROG : ftl::mmio::Register<
      0x40C84800u,
      std::uint32_t,
      0x001170B0u,
      ftl::mmio::RO,
      MISC_DIFPROG_fields_::CHIPID> {
    using CHIPID = MISC_DIFPROG_fields_::CHIPID;
  };

  // VDDSOC_AI_CTRL_REGISTER
  struct VDDSOC_AI_CTRL_fields_ {
    // VDDSOC_AI_ADDR
    using VDDSOC_AI_ADDR = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VDDSOC_AIRWB
    using VDDSOC_AIRWB = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDSOC_AI_CTRL_fields_

  struct VDDSOC_AI_CTRL : ftl::mmio::Register<
      0x40C84820u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDSOC_AI_CTRL_fields_::VDDSOC_AI_ADDR,
      ftl::mmio::Reserved<8, 8>,
      VDDSOC_AI_CTRL_fields_::VDDSOC_AIRWB,
      ftl::mmio::Reserved<15, 17>> {
    using VDDSOC_AI_ADDR = VDDSOC_AI_CTRL_fields_::VDDSOC_AI_ADDR;
    using VDDSOC_AIRWB = VDDSOC_AI_CTRL_fields_::VDDSOC_AIRWB;
  };

  // VDDSOC_AI_WDATA_REGISTER
  struct VDDSOC_AI_WDATA_fields_ {
    // VDDSOC_AI_WDATA
    using VDDSOC_AI_WDATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDSOC_AI_WDATA_fields_

  struct VDDSOC_AI_WDATA : ftl::mmio::Register<
      0x40C84830u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDSOC_AI_WDATA_fields_::VDDSOC_AI_WDATA> {
    using VALUE = VDDSOC_AI_WDATA_fields_::VDDSOC_AI_WDATA;
  };

  // VDDSOC_AI_RDATA_REGISTER
  struct VDDSOC_AI_RDATA_fields_ {
    // VDDSOC_AI_RDATA
    using VDDSOC_AI_RDATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VDDSOC_AI_RDATA_fields_

  struct VDDSOC_AI_RDATA : ftl::mmio::Register<
      0x40C84840u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      VDDSOC_AI_RDATA_fields_::VDDSOC_AI_RDATA> {
    using VALUE = VDDSOC_AI_RDATA_fields_::VDDSOC_AI_RDATA;
  };

  // VDDSOC2PLL_AI_CTRL_1G_REGISTER
  struct VDDSOC2PLL_AI_CTRL_1G_fields_ {
    // VDDSOC2PLL_AIADDR_1G
    using VDDSOC2PLL_AIADDR_1G = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VDDSOC2PLL_AITOGGLE_1G
    using VDDSOC2PLL_AITOGGLE_1G = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // VDDSOC2PLL_AITOGGLE_DONE_1G
    using VDDSOC2PLL_AITOGGLE_DONE_1G = ftl::mmio::Field<1, 9, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // VDDSOC2PLL_AIRWB_1G
    using VDDSOC2PLL_AIRWB_1G = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDSOC2PLL_AI_CTRL_1G_fields_

  struct VDDSOC2PLL_AI_CTRL_1G : ftl::mmio::Register<
      0x40C84850u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDSOC2PLL_AI_CTRL_1G_fields_::VDDSOC2PLL_AIADDR_1G,
      VDDSOC2PLL_AI_CTRL_1G_fields_::VDDSOC2PLL_AITOGGLE_1G,
      VDDSOC2PLL_AI_CTRL_1G_fields_::VDDSOC2PLL_AITOGGLE_DONE_1G,
      ftl::mmio::Reserved<6, 10>,
      VDDSOC2PLL_AI_CTRL_1G_fields_::VDDSOC2PLL_AIRWB_1G,
      ftl::mmio::Reserved<15, 17>> {
    using VDDSOC2PLL_AIADDR_1G = VDDSOC2PLL_AI_CTRL_1G_fields_::VDDSOC2PLL_AIADDR_1G;
    using VDDSOC2PLL_AITOGGLE_1G = VDDSOC2PLL_AI_CTRL_1G_fields_::VDDSOC2PLL_AITOGGLE_1G;
    using VDDSOC2PLL_AITOGGLE_DONE_1G = VDDSOC2PLL_AI_CTRL_1G_fields_::VDDSOC2PLL_AITOGGLE_DONE_1G;
    using VDDSOC2PLL_AIRWB_1G = VDDSOC2PLL_AI_CTRL_1G_fields_::VDDSOC2PLL_AIRWB_1G;
  };

  // VDDSOC2PLL_AI_WDATA_1G_REGISTER
  struct VDDSOC2PLL_AI_WDATA_1G_fields_ {
    // VDDSOC2PLL_AI_WDATA_1G
    using VDDSOC2PLL_AI_WDATA_1G = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDSOC2PLL_AI_WDATA_1G_fields_

  struct VDDSOC2PLL_AI_WDATA_1G : ftl::mmio::Register<
      0x40C84860u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDSOC2PLL_AI_WDATA_1G_fields_::VDDSOC2PLL_AI_WDATA_1G> {
    using VALUE = VDDSOC2PLL_AI_WDATA_1G_fields_::VDDSOC2PLL_AI_WDATA_1G;
  };

  // VDDSOC2PLL_AI_RDATA_1G_REGISTER
  struct VDDSOC2PLL_AI_RDATA_1G_fields_ {
    // VDDSOC2PLL_AI_RDATA_1G
    using VDDSOC2PLL_AI_RDATA_1G = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VDDSOC2PLL_AI_RDATA_1G_fields_

  struct VDDSOC2PLL_AI_RDATA_1G : ftl::mmio::Register<
      0x40C84870u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      VDDSOC2PLL_AI_RDATA_1G_fields_::VDDSOC2PLL_AI_RDATA_1G> {
    using VALUE = VDDSOC2PLL_AI_RDATA_1G_fields_::VDDSOC2PLL_AI_RDATA_1G;
  };

  // VDDSOC_AI_CTRL_AUDIO_REGISTER
  struct VDDSOC2PLL_AI_CTRL_AUDIO_fields_ {
    // VDDSOC2PLL_AI_ADDR_AUDIO
    using VDDSOC2PLL_AI_ADDR_AUDIO = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VDDSOC2PLL_AITOGGLE_AUDIO
    using VDDSOC2PLL_AITOGGLE_AUDIO = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // VDDSOC2PLL_AITOGGLE_DONE_AUDIO
    using VDDSOC2PLL_AITOGGLE_DONE_AUDIO = ftl::mmio::Field<1, 9, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // VDDSOC_AIRWB
    using VDDSOC2PLL_AIRWB_AUDIO = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDSOC2PLL_AI_CTRL_AUDIO_fields_

  struct VDDSOC2PLL_AI_CTRL_AUDIO : ftl::mmio::Register<
      0x40C84880u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDSOC2PLL_AI_CTRL_AUDIO_fields_::VDDSOC2PLL_AI_ADDR_AUDIO,
      VDDSOC2PLL_AI_CTRL_AUDIO_fields_::VDDSOC2PLL_AITOGGLE_AUDIO,
      VDDSOC2PLL_AI_CTRL_AUDIO_fields_::VDDSOC2PLL_AITOGGLE_DONE_AUDIO,
      ftl::mmio::Reserved<6, 10>,
      VDDSOC2PLL_AI_CTRL_AUDIO_fields_::VDDSOC2PLL_AIRWB_AUDIO,
      ftl::mmio::Reserved<15, 17>> {
    using VDDSOC2PLL_AI_ADDR_AUDIO = VDDSOC2PLL_AI_CTRL_AUDIO_fields_::VDDSOC2PLL_AI_ADDR_AUDIO;
    using VDDSOC2PLL_AITOGGLE_AUDIO = VDDSOC2PLL_AI_CTRL_AUDIO_fields_::VDDSOC2PLL_AITOGGLE_AUDIO;
    using VDDSOC2PLL_AITOGGLE_DONE_AUDIO = VDDSOC2PLL_AI_CTRL_AUDIO_fields_::VDDSOC2PLL_AITOGGLE_DONE_AUDIO;
    using VDDSOC2PLL_AIRWB_AUDIO = VDDSOC2PLL_AI_CTRL_AUDIO_fields_::VDDSOC2PLL_AIRWB_AUDIO;
  };

  // VDDSOC_AI_WDATA_AUDIO_REGISTER
  struct VDDSOC2PLL_AI_WDATA_AUDIO_fields_ {
    // VDDSOC2PLL_AI_WDATA_AUDIO
    using VDDSOC2PLL_AI_WDATA_AUDIO = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDSOC2PLL_AI_WDATA_AUDIO_fields_

  struct VDDSOC2PLL_AI_WDATA_AUDIO : ftl::mmio::Register<
      0x40C84890u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDSOC2PLL_AI_WDATA_AUDIO_fields_::VDDSOC2PLL_AI_WDATA_AUDIO> {
    using VALUE = VDDSOC2PLL_AI_WDATA_AUDIO_fields_::VDDSOC2PLL_AI_WDATA_AUDIO;
  };

  // VDDSOC2PLL_AI_RDATA_REGISTER
  struct VDDSOC2PLL_AI_RDATA_AUDIO_fields_ {
    // VDDSOC2PLL_AI_RDATA_AUDIO
    using VDDSOC2PLL_AI_RDATA_AUDIO = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VDDSOC2PLL_AI_RDATA_AUDIO_fields_

  struct VDDSOC2PLL_AI_RDATA_AUDIO : ftl::mmio::Register<
      0x40C848A0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      VDDSOC2PLL_AI_RDATA_AUDIO_fields_::VDDSOC2PLL_AI_RDATA_AUDIO> {
    using VALUE = VDDSOC2PLL_AI_RDATA_AUDIO_fields_::VDDSOC2PLL_AI_RDATA_AUDIO;
  };

  // VDDSOC2PLL_AI_CTRL_VIDEO_REGISTER
  struct VDDSOC2PLL_AI_CTRL_VIDEO_fields_ {
    // VDDSOC2PLL_AIADDR_VIDEO
    using VDDSOC2PLL_AIADDR_VIDEO = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VDDSOC2PLL_AITOGGLE_VIDEO
    using VDDSOC2PLL_AITOGGLE_VIDEO = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // VDDSOC2PLL_AITOGGLE_DONE_VIDEO
    using VDDSOC2PLL_AITOGGLE_DONE_VIDEO = ftl::mmio::Field<1, 9, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // VDDSOC2PLL_AIRWB_VIDEO
    using VDDSOC2PLL_AIRWB_VIDEO = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDSOC2PLL_AI_CTRL_VIDEO_fields_

  struct VDDSOC2PLL_AI_CTRL_VIDEO : ftl::mmio::Register<
      0x40C848B0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDSOC2PLL_AI_CTRL_VIDEO_fields_::VDDSOC2PLL_AIADDR_VIDEO,
      VDDSOC2PLL_AI_CTRL_VIDEO_fields_::VDDSOC2PLL_AITOGGLE_VIDEO,
      VDDSOC2PLL_AI_CTRL_VIDEO_fields_::VDDSOC2PLL_AITOGGLE_DONE_VIDEO,
      ftl::mmio::Reserved<6, 10>,
      VDDSOC2PLL_AI_CTRL_VIDEO_fields_::VDDSOC2PLL_AIRWB_VIDEO,
      ftl::mmio::Reserved<15, 17>> {
    using VDDSOC2PLL_AIADDR_VIDEO = VDDSOC2PLL_AI_CTRL_VIDEO_fields_::VDDSOC2PLL_AIADDR_VIDEO;
    using VDDSOC2PLL_AITOGGLE_VIDEO = VDDSOC2PLL_AI_CTRL_VIDEO_fields_::VDDSOC2PLL_AITOGGLE_VIDEO;
    using VDDSOC2PLL_AITOGGLE_DONE_VIDEO = VDDSOC2PLL_AI_CTRL_VIDEO_fields_::VDDSOC2PLL_AITOGGLE_DONE_VIDEO;
    using VDDSOC2PLL_AIRWB_VIDEO = VDDSOC2PLL_AI_CTRL_VIDEO_fields_::VDDSOC2PLL_AIRWB_VIDEO;
  };

  // VDDSOC2PLL_AI_WDATA_VIDEO_REGISTER
  struct VDDSOC2PLL_AI_WDATA_VIDEO_fields_ {
    // VDDSOC2PLL_AI_WDATA_VIDEO
    using VDDSOC2PLL_AI_WDATA_VIDEO = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDSOC2PLL_AI_WDATA_VIDEO_fields_

  struct VDDSOC2PLL_AI_WDATA_VIDEO : ftl::mmio::Register<
      0x40C848C0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDSOC2PLL_AI_WDATA_VIDEO_fields_::VDDSOC2PLL_AI_WDATA_VIDEO> {
    using VALUE = VDDSOC2PLL_AI_WDATA_VIDEO_fields_::VDDSOC2PLL_AI_WDATA_VIDEO;
  };

  // VDDSOC2PLL_AI_RDATA_VIDEO_REGISTER
  struct VDDSOC2PLL_AI_RDATA_VIDEO_fields_ {
    // VDDSOC2PLL_AI_RDATA_VIDEO
    using VDDSOC2PLL_AI_RDATA_VIDEO = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VDDSOC2PLL_AI_RDATA_VIDEO_fields_

  struct VDDSOC2PLL_AI_RDATA_VIDEO : ftl::mmio::Register<
      0x40C848D0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      VDDSOC2PLL_AI_RDATA_VIDEO_fields_::VDDSOC2PLL_AI_RDATA_VIDEO> {
    using VALUE = VDDSOC2PLL_AI_RDATA_VIDEO_fields_::VDDSOC2PLL_AI_RDATA_VIDEO;
  };

  // VDDSOC_AI_CTRL_REGISTER
  struct VDDLPSR_AI_CTRL_fields_ {
    // VDDLPSR_AI_ADDR
    using VDDLPSR_AI_ADDR = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VDDLPSR_AIRWB
    using VDDLPSR_AIRWB = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDLPSR_AI_CTRL_fields_

  struct VDDLPSR_AI_CTRL : ftl::mmio::Register<
      0x40C848E0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDLPSR_AI_CTRL_fields_::VDDLPSR_AI_ADDR,
      ftl::mmio::Reserved<8, 8>,
      VDDLPSR_AI_CTRL_fields_::VDDLPSR_AIRWB,
      ftl::mmio::Reserved<15, 17>> {
    using VDDLPSR_AI_ADDR = VDDLPSR_AI_CTRL_fields_::VDDLPSR_AI_ADDR;
    using VDDLPSR_AIRWB = VDDLPSR_AI_CTRL_fields_::VDDLPSR_AIRWB;
  };

  // VDDLPSR_AI_WDATA_REGISTER
  struct VDDLPSR_AI_WDATA_fields_ {
    // VDD_LPSR_AI_WDATA
    using VDDLPSR_AI_WDATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDLPSR_AI_WDATA_fields_

  struct VDDLPSR_AI_WDATA : ftl::mmio::Register<
      0x40C848F0u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDLPSR_AI_WDATA_fields_::VDDLPSR_AI_WDATA> {
    using VALUE = VDDLPSR_AI_WDATA_fields_::VDDLPSR_AI_WDATA;
  };

  // VDDLPSR_AI_RDATA_REFTOP_REGISTER
  struct VDDLPSR_AI_RDATA_REFTOP_fields_ {
    // VDDLPSR_AI_RDATA_REFTOP
    using VDDLPSR_AI_RDATA_REFTOP = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VDDLPSR_AI_RDATA_REFTOP_fields_

  struct VDDLPSR_AI_RDATA_REFTOP : ftl::mmio::Register<
      0x40C84900u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      VDDLPSR_AI_RDATA_REFTOP_fields_::VDDLPSR_AI_RDATA_REFTOP> {
    using VALUE = VDDLPSR_AI_RDATA_REFTOP_fields_::VDDLPSR_AI_RDATA_REFTOP;
  };

  // VDDLPSR_AI_RDATA_TMPSNS_REGISTER
  struct VDDLPSR_AI_RDATA_TMPSNS_fields_ {
    // VDDLPSR_AI_RDATA_TMPSNS
    using VDDLPSR_AI_RDATA_TMPSNS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VDDLPSR_AI_RDATA_TMPSNS_fields_

  struct VDDLPSR_AI_RDATA_TMPSNS : ftl::mmio::Register<
      0x40C84910u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      VDDLPSR_AI_RDATA_TMPSNS_fields_::VDDLPSR_AI_RDATA_TMPSNS> {
    using VALUE = VDDLPSR_AI_RDATA_TMPSNS_fields_::VDDLPSR_AI_RDATA_TMPSNS;
  };

  // VDDLPSR_AI400M_CTRL_REGISTER
  struct VDDLPSR_AI400M_CTRL_fields_ {
    // VDDLPSR_AI400M_ADDR
    using VDDLPSR_AI400M_ADDR = ftl::mmio::Field<8, 0, std::uint8_t, ftl::mmio::RW, ftl::mmio::Normal>;
    // VDDLPSR_AITOGGLE_400M
    using VDDLPSR_AITOGGLE_400M = ftl::mmio::Field<1, 8, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // VDDLPSR_AITOGGLE_DONE_400M
    using VDDLPSR_AITOGGLE_DONE_400M = ftl::mmio::Field<1, 9, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // VDDLPSR_AI400M_RWB
    using VDDLPSR_AI400M_RWB = ftl::mmio::Field<1, 16, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDLPSR_AI400M_CTRL_fields_

  struct VDDLPSR_AI400M_CTRL : ftl::mmio::Register<
      0x40C84920u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDLPSR_AI400M_CTRL_fields_::VDDLPSR_AI400M_ADDR,
      VDDLPSR_AI400M_CTRL_fields_::VDDLPSR_AITOGGLE_400M,
      VDDLPSR_AI400M_CTRL_fields_::VDDLPSR_AITOGGLE_DONE_400M,
      ftl::mmio::Reserved<6, 10>,
      VDDLPSR_AI400M_CTRL_fields_::VDDLPSR_AI400M_RWB,
      ftl::mmio::Reserved<15, 17>> {
    using VDDLPSR_AI400M_ADDR = VDDLPSR_AI400M_CTRL_fields_::VDDLPSR_AI400M_ADDR;
    using VDDLPSR_AITOGGLE_400M = VDDLPSR_AI400M_CTRL_fields_::VDDLPSR_AITOGGLE_400M;
    using VDDLPSR_AITOGGLE_DONE_400M = VDDLPSR_AI400M_CTRL_fields_::VDDLPSR_AITOGGLE_DONE_400M;
    using VDDLPSR_AI400M_RWB = VDDLPSR_AI400M_CTRL_fields_::VDDLPSR_AI400M_RWB;
  };

  // VDDLPSR_AI400M_WDATA_REGISTER
  struct VDDLPSR_AI400M_WDATA_fields_ {
    // VDDLPSR_AI400M_WDATA
    using VDDLPSR_AI400M_WDATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct VDDLPSR_AI400M_WDATA_fields_

  struct VDDLPSR_AI400M_WDATA : ftl::mmio::Register<
      0x40C84930u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      VDDLPSR_AI400M_WDATA_fields_::VDDLPSR_AI400M_WDATA> {
    using VALUE = VDDLPSR_AI400M_WDATA_fields_::VDDLPSR_AI400M_WDATA;
  };

  // VDDLPSR_AI400M_RDATA_REGISTER
  struct VDDLPSR_AI400M_RDATA_fields_ {
    // VDDLPSR_AI400M_RDATA
    using VDDLPSR_AI400M_RDATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VDDLPSR_AI400M_RDATA_fields_

  struct VDDLPSR_AI400M_RDATA : ftl::mmio::Register<
      0x40C84940u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      VDDLPSR_AI400M_RDATA_fields_::VDDLPSR_AI400M_RDATA> {
    using VALUE = VDDLPSR_AI400M_RDATA_fields_::VDDLPSR_AI400M_RDATA;
  };

};

}  // namespace regs