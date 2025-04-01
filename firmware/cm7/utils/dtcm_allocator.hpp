#pragma once

#include <stddef.h>
#include "utils/bump_allocator.hpp"
#include "etl/singleton.h"

extern "C" {
    extern uint8_t __dtcm_high_start__[];
    extern uint8_t __dtcm_high_end__[];
}

constexpr uint32_t kDtcmSize = 256 * 1024;

__attribute__((section(".m_dtcm_high")))
uint8_t dtcm_bump_region[kDtcmSize];

//, public etl::singleton<DtcmAllocator>

class DtcmAllocator : public BumpAllocator {

//TODO can it be private and singlton is friend.
public:
  DtcmAllocator() : BumpAllocator(dtcm_bump_region, kDtcmSize) {}
};
