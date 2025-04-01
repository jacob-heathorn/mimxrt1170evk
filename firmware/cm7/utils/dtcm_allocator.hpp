#pragma once

#include <cstddef>
#include "utils/bump_allocator.hpp"
#include "etl/singleton.h"

extern "C" {
    extern uint8_t __dtcm_high_start__[];
    extern uint8_t __dtcm_high_end__[];
}

__attribute__((section(".m_dtcm_high")))
uint8_t dtcm_bump_region[256 * 1024];

class DtcmAllocator : public BumpAllocator, public etl::singleton<DtcmAllocator> {
private:
  DtcmAllocator() = default;
public:
  void initialize() {
    BumpAllocator::initialize(start(), size());
  }

  static uint8_t* start() { return __dtcm_high_start__; }
  static uint8_t* end()   { return __dtcm_high_end__; }
  static size_t size()    {
    return reinterpret_cast<uintptr_t>(end()) - reinterpret_cast<uintptr_t>(start());
  }
};
