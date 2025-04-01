#pragma once

#include <stddef.h>
#include "utils/bump_allocator.hpp"
#include "etl/singleton.h"

static constexpr uint32_t kDtcmSize = 256 * 1024;

__attribute__((section(".m_dtcm_high")))
uint8_t dtcm_bump_region[kDtcmSize];

//, public etl::singleton<DtcmAllocator>

class DtcmAllocator : public BumpAllocator {

//TODO can it be private and singlton is friend.
public:
  DtcmAllocator() : BumpAllocator(dtcm_bump_region, kDtcmSize) {
//   // Ensure the memory region is valid
//   static_assert(reinterpret_cast<uintptr_t>(__dtcm_high_end__) > reinterpret_cast<uintptr_t>(__dtcm_high_start__),
//                 "DTCM high region end must be greater than start");
//   static_assert((reinterpret_cast<uintptr_t>(__dtcm_high_end__) - reinterpret_cast<uintptr_t>(__dtcm_high_start__)) <= 0x40000,
//                 "DTCM high region size exceeds 256 KB");
  }
// private:
//   static constexpr uint32_t k_size_ = 64 * 1024;

//   __attribute__((section(".m_dtcm_high")))
//   static uint8_t dtcm_bump_region_[k_size_];
};
