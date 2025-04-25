#pragma once

#include <cstddef>
#include <stdint.h>
#include "ftl/bump_allocator.hpp"
#include "ftl/singleton.hpp"

extern "C" {
    extern uint8_t __m_ocram1_used_end__[];
    extern uint8_t __m_ocram1_total_end__[];
}

// Ocram1 is standard write-back cacheable memory (configured by the MPU).
class Ocram1Allocator : public ftl::BumpAllocator, public ftl::Singleton<Ocram1Allocator> {
  friend class ftl::Singleton<Ocram1Allocator>;
private:
Ocram1Allocator(): ftl::BumpAllocator(start(), size()) {}
public:
  static uint8_t* start() { return __m_ocram1_used_end__; }
  static uint8_t* end()   { return __m_ocram1_total_end__; }
  static size_t size()    {
    return reinterpret_cast<uintptr_t>(end()) - reinterpret_cast<uintptr_t>(start());
  }
};
