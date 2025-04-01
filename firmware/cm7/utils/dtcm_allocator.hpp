#pragma once

#include <cstddef>
#include <stdint.h>
#include "utils/bump_allocator.hpp"
#include "etl/singleton.h"

extern "C" {
    extern uint8_t __dtcm_high_start__[];
    extern uint8_t __dtcm_high_end__[];
}

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
