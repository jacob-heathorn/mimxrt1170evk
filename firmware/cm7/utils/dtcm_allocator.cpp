#include <cstddef>
#include "utils/dtcm_allocator.hpp"

// Force the linker to allocate this region.
__attribute__((section(".m_dtcm_high")))
uint8_t dtcm_bump_region[256 * 1024];
