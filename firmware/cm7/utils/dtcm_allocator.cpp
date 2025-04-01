#include <cstddef>
#include "utils/dtcm_allocator.hpp"

__attribute__((section(".m_dtcm_high")))
uint8_t dtcm_bump_region[kDtcmSize];
