#pragma once

#include <stddef.h>
#include "utils/bump_allocator.hpp"
#include "etl/singleton.h"

extern "C" {
    extern uint8_t __dtcm_high_start__[];
    extern uint8_t __dtcm_high_end__[];
}

__attribute__((section(".m_dtcm_high")))
uint8_t dtcm_bump_region[256 * 1024];

//, public etl::singleton<DtcmAllocator>

class DtcmAllocator : public BumpAllocator {

//TODO can it be private and singlton is friend.
public:
  DtcmAllocator() : BumpAllocator(DtcmAllocator::start(), DtcmAllocator::size()) {}
  static uint8_t* start() { return __dtcm_high_start__; }
  static uint8_t* end() { return __dtcm_high_end__; }
  static size_t size() { return DtcmAllocator::end() - DtcmAllocator::start(); }
};
