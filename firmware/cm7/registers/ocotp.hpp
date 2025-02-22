#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.

namespace nOCOTP {


// OTP Controller Control and Status Register
//
union CTRL {
  
  enum class eADDR : uint32_t {
    esupp_word = 0, // Address of one of the 16 supplementary fuse words in OTP memory.
    esupp_word = 1, // Address of one of the 16 supplementary fuse words in OTP memory.
    esupp_word = 2, // Address of one of the 16 supplementary fuse words in OTP memory.
    esupp_word = 3, // Address of one of the 16 supplementary fuse words in OTP memory.
    esupp_word = 4, // Address of one of the 16 supplementary fuse words in OTP memory.
    esupp_word = 5, // Address of one of the 16 supplementary fuse words in OTP memory.
    esupp_word = 6, // Address of one of the 16 supplementary fuse words in OTP memory.
    esupp_word = 7, // Address of one of the 16 supplementary fuse words in OTP memory.
    esupp_word = 8, // Address of one of the 16 supplementary fuse words in OTP memory.
    esupp_word = 9, // Address of one of the 16 supplementary fuse words in OTP memory.
    euser_fuse_word = 16, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 17, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 18, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 19, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 20, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 21, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 22, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 23, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 24, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 25, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 26, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 27, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 28, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 29, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 30, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 31, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 32, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 33, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 34, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 35, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 36, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 37, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 38, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 39, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 40, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 41, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 42, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 43, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 44, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 45, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 46, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 47, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 48, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 49, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 50, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 51, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 52, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 53, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 54, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 55, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 56, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 57, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 58, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 59, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 60, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 61, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 62, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 63, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 64, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 65, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 66, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 67, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 68, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 69, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 70, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 71, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 72, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 73, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 74, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 75, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 76, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 77, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 78, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 79, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 80, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 81, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 82, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 83, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 84, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 85, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 86, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 87, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 88, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 89, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 90, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 91, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 92, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 93, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 94, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 95, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 96, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 97, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 98, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 99, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 100, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 101, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 102, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 103, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 104, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 105, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 106, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 107, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 108, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 109, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 110, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 111, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 112, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 113, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 114, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 115, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 116, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 117, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 118, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 119, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 120, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 121, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 122, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 123, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 124, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 125, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 126, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 127, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 128, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 129, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 130, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 131, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 132, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 133, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 134, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 135, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 136, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 137, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 138, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 139, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 140, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 141, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 142, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 143, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 144, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 145, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 146, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 147, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 148, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 149, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 150, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 151, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 152, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 153, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 154, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 155, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 156, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 157, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 158, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 159, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 160, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 161, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 162, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 163, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 164, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 165, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 166, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 167, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 168, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 169, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 170, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 171, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 172, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 173, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 174, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 175, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 176, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 177, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 178, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 179, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 180, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 181, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 182, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 183, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 184, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 185, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 186, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 187, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 188, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 189, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 190, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 191, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 192, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 193, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 194, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 195, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 196, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 197, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 198, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 199, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 200, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 201, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 202, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 203, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 204, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 205, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 206, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 207, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 208, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 209, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 210, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 211, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 212, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 213, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 214, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 215, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 216, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 217, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 218, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 219, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 220, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 221, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 222, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 223, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 224, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 225, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 226, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 227, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 228, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 229, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 230, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 231, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 232, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 233, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 234, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 235, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 236, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 237, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 238, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 239, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 240, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 241, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 242, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 243, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 244, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 245, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 246, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 247, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 248, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 249, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 250, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 251, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 252, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 253, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 254, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 255, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 256, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 257, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 258, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 259, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 260, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 261, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 262, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 263, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 264, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 265, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 266, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 267, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 268, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 269, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 270, // Address of one of the 256 user fuse words in OTP memory.
    euser_fuse_word = 271, // Address of one of the 256 user fuse words in OTP memory.
  };
  
  enum class eBUSY : uint32_t {
    enot_busy = 0, // No write or read access to OTP started.
    ebusy = 1, // Write or read access to OTP started.
  };
  
  enum class eERROR : uint32_t {
    eno_error = 0, // No error.
    eerror = 1, // Error - access to a locked region requested.
  };
  
  enum class eRELOAD_SHADOWS : uint32_t {
    eshadow_noforce_reload = 0, // Do not force shadow register re-load.
    eshadow_force_reload = 1, // Force shadow register re-load. This bit is cleared automatically after shadow registers are re-loaded.
  };
  
  enum class eWORDLOCK : uint32_t {
    eNO_CHANGE = 0, // No change to LOCK bit when programming a word using redundancy
    eLOCK = 1, // LOCK bit for fuse word will be set after successfully programming a word using redundancy
  };
  
  enum class eWR_UNLOCK : uint32_t {
    eotp_w_locked = 0, // OTP write access is locked.
    eotp_w_unlocked = 15991, // OTP write access is unlocked.
  };
  
  // Bit field definition.
  struct {
    eADDR ADDR : 10;
    eBUSY BUSY : 1;
    eERROR ERROR : 1;
    eRELOAD_SHADOWS RELOAD_SHADOWS : 1;
    uint32_t _reserved_0 : 2;
    eWORDLOCK WORDLOCK : 1;
    eWR_UNLOCK WR_UNLOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40CAC000); }
};

// OTP Controller Control and Status Register
//
union CTRL_SET {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 10;
    uint32_t BUSY : 1;
    uint32_t ERROR : 1;
    uint32_t RELOAD_SHADOWS : 1;
    uint32_t _reserved_0 : 2;
    uint32_t WORDLOCK : 1;
    uint32_t WR_UNLOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_SET &Instance() { return *reinterpret_cast<volatile CTRL_SET*>(0x40CAC004); }
};

// OTP Controller Control and Status Register
//
union CTRL_CLR {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 10;
    uint32_t BUSY : 1;
    uint32_t ERROR : 1;
    uint32_t RELOAD_SHADOWS : 1;
    uint32_t _reserved_0 : 2;
    uint32_t WORDLOCK : 1;
    uint32_t WR_UNLOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_CLR &Instance() { return *reinterpret_cast<volatile CTRL_CLR*>(0x40CAC008); }
};

// OTP Controller Control and Status Register
//
union CTRL_TOG {
  
  // Bit field definition.
  struct {
    uint32_t ADDR : 10;
    uint32_t BUSY : 1;
    uint32_t ERROR : 1;
    uint32_t RELOAD_SHADOWS : 1;
    uint32_t _reserved_0 : 2;
    uint32_t WORDLOCK : 1;
    uint32_t WR_UNLOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_TOG &Instance() { return *reinterpret_cast<volatile CTRL_TOG*>(0x40CAC00C); }
};

// OTP Controller PDN Register
//
union PDN {
  
  enum class ePDN : uint32_t {
    epower_off = 0, // OTP memory is not powered
    epower_on = 1, // OTP memory is powered
  };
  
  // Bit field definition.
  struct {
    ePDN PDN : 1;
    uint32_t _reserved_0 : 31;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  PDN() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile PDN &Instance() { return *reinterpret_cast<volatile PDN*>(0x40CAC010); }
};

// OTP Controller Write Data Register
//
union DATA {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATA &Instance() { return *reinterpret_cast<volatile DATA*>(0x40CAC020); }
};

// OTP Controller Read Control Register
//
union READ_CTRL {
  
  enum class eREAD_FUSE : uint32_t {
    eDO_NOT_START_RD_OP = 0, // Do not initiate a read from OTP
    eSTART_RD_OP = 1, // Initiate a read from OTP
  };
  
  enum class eREAD_FUSE_CNTR : uint32_t {
    eONE_WORD = 0, // 1 word
    eTWO_WORDS = 1, // 2 words
    eTHREE_WORDS = 2, // 3 words
    eFOUR_WORDS = 3, // 4 words
  };
  
  enum class eREAD_FUSE_DONE_INTR_ENA : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  enum class eREAD_FUSE_ERROR_INTR_ENA : uint32_t {
    eDISABLE = 0, // Disable
    eENABLE = 1, // Enable
  };
  
  // Bit field definition.
  struct {
    eREAD_FUSE READ_FUSE : 1;
    eREAD_FUSE_CNTR READ_FUSE_CNTR : 2;
    eREAD_FUSE_DONE_INTR_ENA READ_FUSE_DONE_INTR_ENA : 1;
    eREAD_FUSE_ERROR_INTR_ENA READ_FUSE_ERROR_INTR_ENA : 1;
    uint32_t _reserved_0 : 27;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  READ_CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile READ_CTRL &Instance() { return *reinterpret_cast<volatile READ_CTRL*>(0x40CAC030); }
};

// 8K OTP Memory STATUS Register
//
union OUT_STATUS {
  
  enum class eREAD_ERROR_INTR : uint32_t {
    eno_error = 0, // Read operation finished with out any error
    eerror = 1, // Read operation finished with an error
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 9;
    uint32_t SEC : 1;
    uint32_t DED : 1;
    uint32_t LOCKED : 1;
    uint32_t PROGFAIL : 1;
    uint32_t ACK : 1;
    uint32_t PWOK : 1;
    uint32_t FLAGSTATE : 4;
    uint32_t SEC_RELOAD : 1;
    uint32_t DED_RELOAD : 1;
    uint32_t CALIBRATED : 1;
    uint32_t READ_DONE_INTR : 1;
    eREAD_ERROR_INTR READ_ERROR_INTR : 1;
    uint32_t DED0 : 1;
    uint32_t DED1 : 1;
    uint32_t DED2 : 1;
    uint32_t DED3 : 1;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OUT_STATUS() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OUT_STATUS &Instance() { return *reinterpret_cast<volatile OUT_STATUS*>(0x40CAC090); }
};

// 8K OTP Memory STATUS Register
//
union OUT_STATUS_SET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 9;
    uint32_t SEC : 1;
    uint32_t DED : 1;
    uint32_t LOCKED : 1;
    uint32_t PROGFAIL : 1;
    uint32_t ACK : 1;
    uint32_t PWOK : 1;
    uint32_t FLAGSTATE : 4;
    uint32_t SEC_RELOAD : 1;
    uint32_t DED_RELOAD : 1;
    uint32_t CALIBRATED : 1;
    uint32_t READ_DONE_INTR : 1;
    uint32_t READ_ERROR_INTR : 1;
    uint32_t DED0 : 1;
    uint32_t DED1 : 1;
    uint32_t DED2 : 1;
    uint32_t DED3 : 1;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OUT_STATUS_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OUT_STATUS_SET &Instance() { return *reinterpret_cast<volatile OUT_STATUS_SET*>(0x40CAC094); }
};

// 8K OTP Memory STATUS Register
//
union OUT_STATUS_CLR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 9;
    uint32_t SEC : 1;
    uint32_t DED : 1;
    uint32_t LOCKED : 1;
    uint32_t PROGFAIL : 1;
    uint32_t ACK : 1;
    uint32_t PWOK : 1;
    uint32_t FLAGSTATE : 4;
    uint32_t SEC_RELOAD : 1;
    uint32_t DED_RELOAD : 1;
    uint32_t CALIBRATED : 1;
    uint32_t READ_DONE_INTR : 1;
    uint32_t READ_ERROR_INTR : 1;
    uint32_t DED0 : 1;
    uint32_t DED1 : 1;
    uint32_t DED2 : 1;
    uint32_t DED3 : 1;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OUT_STATUS_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OUT_STATUS_CLR &Instance() { return *reinterpret_cast<volatile OUT_STATUS_CLR*>(0x40CAC098); }
};

// 8K OTP Memory STATUS Register
//
union OUT_STATUS_TOG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 9;
    uint32_t SEC : 1;
    uint32_t DED : 1;
    uint32_t LOCKED : 1;
    uint32_t PROGFAIL : 1;
    uint32_t ACK : 1;
    uint32_t PWOK : 1;
    uint32_t FLAGSTATE : 4;
    uint32_t SEC_RELOAD : 1;
    uint32_t DED_RELOAD : 1;
    uint32_t CALIBRATED : 1;
    uint32_t READ_DONE_INTR : 1;
    uint32_t READ_ERROR_INTR : 1;
    uint32_t DED0 : 1;
    uint32_t DED1 : 1;
    uint32_t DED2 : 1;
    uint32_t DED3 : 1;
    uint32_t _reserved_1 : 4;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  OUT_STATUS_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile OUT_STATUS_TOG &Instance() { return *reinterpret_cast<volatile OUT_STATUS_TOG*>(0x40CAC09C); }
};

// OTP Controller Version Register
//
union VERSION {
  
  // Bit field definition.
  struct {
    uint32_t STEP : 16;
    uint32_t MINOR : 8;
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VERSION() = delete;
  inline void Reset() volatile { this->value = 0x0A000000; }
  static inline volatile VERSION &Instance() { return *reinterpret_cast<volatile VERSION*>(0x40CAC0B0); }
};

// OTP Controller Read Data 0 Register
//
union READ_FUSE_DATA0 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  READ_FUSE_DATA0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile READ_FUSE_DATA0 &Instance() { return *reinterpret_cast<volatile READ_FUSE_DATA0*>(0x40CAC100); }
};

// OTP Controller Read Data 1 Register
//
union READ_FUSE_DATA1 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  READ_FUSE_DATA1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile READ_FUSE_DATA1 &Instance() { return *reinterpret_cast<volatile READ_FUSE_DATA1*>(0x40CAC110); }
};

// OTP Controller Read Data 2 Register
//
union READ_FUSE_DATA2 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  READ_FUSE_DATA2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile READ_FUSE_DATA2 &Instance() { return *reinterpret_cast<volatile READ_FUSE_DATA2*>(0x40CAC120); }
};

// OTP Controller Read Data 3 Register
//
union READ_FUSE_DATA3 {
  
  // Bit field definition.
  struct {
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  READ_FUSE_DATA3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile READ_FUSE_DATA3 &Instance() { return *reinterpret_cast<volatile READ_FUSE_DATA3*>(0x40CAC130); }
};

// SW_LOCK Register
//
union SW_LOCK {
  
  // Bit field definition.
  struct {
    uint32_t SW_LOCK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_LOCK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_LOCK &Instance() { return *reinterpret_cast<volatile SW_LOCK*>(0x40CAC140); }
};

// BIT_LOCK Register
//
union BIT_LOCK {
  
  // Bit field definition.
  struct {
    uint32_t BIT_LOCK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BIT_LOCK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BIT_LOCK &Instance() { return *reinterpret_cast<volatile BIT_LOCK*>(0x40CAC150); }
};

// OTP Controller Program Locked Status 0 Register
//
union LOCKED0 {
  
  // Bit field definition.
  struct {
    uint32_t LOCKED : 16;
    uint32_t _reserved_0 : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOCKED0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOCKED0 &Instance() { return *reinterpret_cast<volatile LOCKED0*>(0x40CAC600); }
};

// OTP Controller Program Locked Status 1 Register
//
union LOCKED1 {
  
  // Bit field definition.
  struct {
    uint32_t LOCKED : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOCKED1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOCKED1 &Instance() { return *reinterpret_cast<volatile LOCKED1*>(0x40CAC610); }
};

// OTP Controller Program Locked Status 2 Register
//
union LOCKED2 {
  
  // Bit field definition.
  struct {
    uint32_t LOCKED : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOCKED2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOCKED2 &Instance() { return *reinterpret_cast<volatile LOCKED2*>(0x40CAC620); }
};

// OTP Controller Program Locked Status 3 Register
//
union LOCKED3 {
  
  // Bit field definition.
  struct {
    uint32_t LOCKED : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOCKED3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOCKED3 &Instance() { return *reinterpret_cast<volatile LOCKED3*>(0x40CAC630); }
};

// OTP Controller Program Locked Status 4 Register
//
union LOCKED4 {
  
  // Bit field definition.
  struct {
    uint32_t LOCKED : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOCKED4() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOCKED4 &Instance() { return *reinterpret_cast<volatile LOCKED4*>(0x40CAC640); }
};



} // namespace nOCOTP