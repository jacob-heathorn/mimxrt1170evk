#pragma once

#include <cstddef>
#include <stdint.h>
#include "utils/bump_allocator.hpp"
#include "etl/singleton.h"

constexpr uint32_t kDtcmSize = 256 * 1024;

extern "C" {
    extern uint8_t __dtcm_high_start__[];
    extern uint8_t __dtcm_high_end__[];
    extern uint8_t dtcm_bump_region[kDtcmSize];
}

class DtcmAllocator : public BumpAllocator, public etl::singleton<DtcmAllocator> {
private:
  DtcmAllocator() = default;
public:
  void initialize() {
    BumpAllocator::initialize(start(), kDtcmSize);
  }
  static uint8_t* start() { return __dtcm_high_start__; }
  static uint8_t* end()   { return __dtcm_high_end__; }
  static size_t size()    {
    return reinterpret_cast<uintptr_t>(end()) - reinterpret_cast<uintptr_t>(start());
  }
};
