#pragma once

#include <cstddef>
#include <stdint.h>
#include "ftl/bump_allocator.hpp"
#include "ftl/singleton.hpp"

extern "C" {
    extern uint8_t __m_dtcm_used_end__[];
    extern uint8_t __m_dtcm_total_end__[];
}

class DtcmAllocator : public ftl::BumpAllocator, public ftl::Singleton<DtcmAllocator> {
  friend class ftl::Singleton<DtcmAllocator>;
private:
  DtcmAllocator(): ftl::BumpAllocator(start(), size()) {}
public:
  static uint8_t* start() { return __m_dtcm_used_end__; }
  static uint8_t* end()   { return __m_dtcm_total_end__; }
  static size_t size()    {
    return reinterpret_cast<uintptr_t>(end()) - reinterpret_cast<uintptr_t>(start());
  }
};
