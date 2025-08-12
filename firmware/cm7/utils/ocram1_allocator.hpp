#pragma once

#include <cstddef>
#include <stdint.h>
#include "ftl/allocator/bump_allocator.hpp"
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
  // Returns a pointer to the beginning of the memory block.
  static uint8_t* start() { return __m_ocram1_used_end__; }
  // Returns a pointer 1 past the end of the memory block.
  static uint8_t* end()   { return __m_ocram1_total_end__; }
  // Returns the total size of the memory block.
  static size_t size()    {
    return reinterpret_cast<uintptr_t>(end()) - reinterpret_cast<uintptr_t>(start());
  }
};
