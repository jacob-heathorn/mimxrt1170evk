#pragma once

#include <cstddef>
#include <stdint.h>
#include "utils/bump_allocator.hpp"
#include "forge/singleton.hpp"

extern "C" {
    extern uint8_t __m_data_used_end__[];
    extern uint8_t __m_data_total_end__[];
}

class DtcmAllocator : public BumpAllocator, public Singleton<DtcmAllocator> {
  friend class Singleton<DtcmAllocator>;
private:
  DtcmAllocator(): BumpAllocator(start(), size()) {}
public:
  static uint8_t* start() { return __m_data_used_end__; }
  static uint8_t* end()   { return __m_data_total_end__; }
  static size_t size()    {
    return reinterpret_cast<uintptr_t>(end()) - reinterpret_cast<uintptr_t>(start());
  }
};
