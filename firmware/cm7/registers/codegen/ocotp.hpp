#pragma once

#include <cstdint>
#include "ftl/mmio.hpp"

// no description available
//
// NOTE: This file was generated from the forge CMSIS-svd wrapper tool.
namespace regs {

struct Ocotp {
  // OTP Controller Control and Status Register
  struct CtrlFields {
    enum class eADDR : std::uint32_t {
      // Address of one of the 16 supplementary fuse words in OTP memory.
      esupp_word_0 = 0,
      // Address of one of the 16 supplementary fuse words in OTP memory.
      esupp_word_1 = 1,
      // Address of one of the 16 supplementary fuse words in OTP memory.
      esupp_word_2 = 2,
      // Address of one of the 16 supplementary fuse words in OTP memory.
      esupp_word_3 = 3,
      // Address of one of the 16 supplementary fuse words in OTP memory.
      esupp_word_4 = 4,
      // Address of one of the 16 supplementary fuse words in OTP memory.
      esupp_word_5 = 5,
      // Address of one of the 16 supplementary fuse words in OTP memory.
      esupp_word_6 = 6,
      // Address of one of the 16 supplementary fuse words in OTP memory.
      esupp_word_7 = 7,
      // Address of one of the 16 supplementary fuse words in OTP memory.
      esupp_word_8 = 8,
      // Address of one of the 16 supplementary fuse words in OTP memory.
      esupp_word_9 = 9,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_16 = 16,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_17 = 17,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_18 = 18,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_19 = 19,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_20 = 20,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_21 = 21,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_22 = 22,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_23 = 23,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_24 = 24,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_25 = 25,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_26 = 26,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_27 = 27,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_28 = 28,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_29 = 29,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_30 = 30,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_31 = 31,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_32 = 32,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_33 = 33,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_34 = 34,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_35 = 35,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_36 = 36,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_37 = 37,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_38 = 38,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_39 = 39,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_40 = 40,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_41 = 41,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_42 = 42,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_43 = 43,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_44 = 44,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_45 = 45,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_46 = 46,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_47 = 47,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_48 = 48,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_49 = 49,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_50 = 50,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_51 = 51,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_52 = 52,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_53 = 53,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_54 = 54,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_55 = 55,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_56 = 56,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_57 = 57,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_58 = 58,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_59 = 59,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_60 = 60,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_61 = 61,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_62 = 62,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_63 = 63,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_64 = 64,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_65 = 65,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_66 = 66,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_67 = 67,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_68 = 68,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_69 = 69,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_70 = 70,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_71 = 71,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_72 = 72,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_73 = 73,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_74 = 74,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_75 = 75,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_76 = 76,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_77 = 77,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_78 = 78,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_79 = 79,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_80 = 80,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_81 = 81,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_82 = 82,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_83 = 83,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_84 = 84,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_85 = 85,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_86 = 86,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_87 = 87,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_88 = 88,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_89 = 89,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_90 = 90,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_91 = 91,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_92 = 92,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_93 = 93,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_94 = 94,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_95 = 95,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_96 = 96,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_97 = 97,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_98 = 98,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_99 = 99,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_100 = 100,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_101 = 101,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_102 = 102,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_103 = 103,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_104 = 104,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_105 = 105,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_106 = 106,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_107 = 107,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_108 = 108,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_109 = 109,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_110 = 110,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_111 = 111,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_112 = 112,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_113 = 113,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_114 = 114,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_115 = 115,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_116 = 116,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_117 = 117,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_118 = 118,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_119 = 119,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_120 = 120,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_121 = 121,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_122 = 122,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_123 = 123,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_124 = 124,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_125 = 125,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_126 = 126,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_127 = 127,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_128 = 128,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_129 = 129,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_130 = 130,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_131 = 131,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_132 = 132,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_133 = 133,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_134 = 134,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_135 = 135,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_136 = 136,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_137 = 137,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_138 = 138,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_139 = 139,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_140 = 140,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_141 = 141,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_142 = 142,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_143 = 143,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_144 = 144,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_145 = 145,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_146 = 146,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_147 = 147,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_148 = 148,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_149 = 149,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_150 = 150,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_151 = 151,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_152 = 152,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_153 = 153,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_154 = 154,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_155 = 155,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_156 = 156,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_157 = 157,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_158 = 158,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_159 = 159,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_160 = 160,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_161 = 161,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_162 = 162,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_163 = 163,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_164 = 164,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_165 = 165,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_166 = 166,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_167 = 167,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_168 = 168,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_169 = 169,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_170 = 170,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_171 = 171,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_172 = 172,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_173 = 173,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_174 = 174,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_175 = 175,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_176 = 176,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_177 = 177,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_178 = 178,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_179 = 179,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_180 = 180,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_181 = 181,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_182 = 182,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_183 = 183,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_184 = 184,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_185 = 185,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_186 = 186,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_187 = 187,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_188 = 188,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_189 = 189,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_190 = 190,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_191 = 191,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_192 = 192,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_193 = 193,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_194 = 194,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_195 = 195,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_196 = 196,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_197 = 197,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_198 = 198,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_199 = 199,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_200 = 200,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_201 = 201,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_202 = 202,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_203 = 203,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_204 = 204,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_205 = 205,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_206 = 206,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_207 = 207,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_208 = 208,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_209 = 209,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_210 = 210,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_211 = 211,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_212 = 212,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_213 = 213,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_214 = 214,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_215 = 215,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_216 = 216,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_217 = 217,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_218 = 218,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_219 = 219,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_220 = 220,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_221 = 221,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_222 = 222,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_223 = 223,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_224 = 224,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_225 = 225,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_226 = 226,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_227 = 227,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_228 = 228,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_229 = 229,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_230 = 230,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_231 = 231,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_232 = 232,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_233 = 233,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_234 = 234,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_235 = 235,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_236 = 236,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_237 = 237,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_238 = 238,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_239 = 239,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_240 = 240,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_241 = 241,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_242 = 242,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_243 = 243,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_244 = 244,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_245 = 245,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_246 = 246,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_247 = 247,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_248 = 248,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_249 = 249,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_250 = 250,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_251 = 251,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_252 = 252,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_253 = 253,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_254 = 254,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_255 = 255,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_256 = 256,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_257 = 257,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_258 = 258,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_259 = 259,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_260 = 260,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_261 = 261,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_262 = 262,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_263 = 263,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_264 = 264,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_265 = 265,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_266 = 266,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_267 = 267,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_268 = 268,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_269 = 269,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_270 = 270,
      // Address of one of the 256 user fuse words in OTP memory.
      euser_fuse_word_271 = 271,
    };

    enum class eBUSY : std::uint32_t {
      // No write or read access to OTP started.
      enot_busy = 0,
      // Write or read access to OTP started.
      ebusy = 1,
    };

    enum class eERROR : std::uint32_t {
      // No error.
      eno_error = 0,
      // Error - access to a locked region requested.
      eerror = 1,
    };

    enum class eRELOAD_SHADOWS : std::uint32_t {
      // Do not force shadow register re-load.
      eshadow_noforce_reload = 0,
      // Force shadow register re-load. This bit is cleared automatically after shadow registers are re-loaded.
      eshadow_force_reload = 1,
    };

    enum class eWORDLOCK : std::uint32_t {
      // No change to LOCK bit when programming a word using redundancy
      eNO_CHANGE = 0,
      // LOCK bit for fuse word will be set after successfully programming a word using redundancy
      eLOCK = 1,
    };

    enum class eWR_UNLOCK : std::uint32_t {
      // OTP write access is locked.
      eotp_w_locked = 0,
      // OTP write access is unlocked.
      eotp_w_unlocked = 15991,
    };

    // OTP write and read access address register
    using ADDR = ftl::mmio::Field<10, 0, eADDR, ftl::mmio::RW, ftl::mmio::Normal>;
    // OTP controller status bit
    using BUSY = ftl::mmio::Field<1, 10, eBUSY, ftl::mmio::RO, ftl::mmio::Normal>;
    // Locked Region Access Error
    using ERROR = ftl::mmio::Field<1, 11, eERROR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Reload Shadow Registers
    using RELOAD_SHADOWS = ftl::mmio::Field<1, 12, eRELOAD_SHADOWS, ftl::mmio::RW, ftl::mmio::Normal>;
    // Lock fuse word
    using WORDLOCK = ftl::mmio::Field<1, 15, eWORDLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
    // Write unlock
    using WR_UNLOCK = ftl::mmio::Field<16, 16, eWR_UNLOCK, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct CtrlFields

  struct CTRL : ftl::mmio::Register<
      0x40CAC000u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlFields::ADDR,
      CtrlFields::BUSY,
      CtrlFields::ERROR,
      CtrlFields::RELOAD_SHADOWS,
      ftl::mmio::Reserved<2, 13>,
      CtrlFields::WORDLOCK,
      CtrlFields::WR_UNLOCK> {
    using eADDR = CtrlFields::eADDR;
    using eBUSY = CtrlFields::eBUSY;
    using eERROR = CtrlFields::eERROR;
    using eRELOAD_SHADOWS = CtrlFields::eRELOAD_SHADOWS;
    using eWORDLOCK = CtrlFields::eWORDLOCK;
    using eWR_UNLOCK = CtrlFields::eWR_UNLOCK;
    using ADDR = CtrlFields::ADDR;
    using BUSY = CtrlFields::BUSY;
    using ERROR = CtrlFields::ERROR;
    using RELOAD_SHADOWS = CtrlFields::RELOAD_SHADOWS;
    using WORDLOCK = CtrlFields::WORDLOCK;
    using WR_UNLOCK = CtrlFields::WR_UNLOCK;
  };

  // OTP Controller Control and Status Register
  struct CtrlSetFields {
    // OTP write and read access address register
    using ADDR = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // OTP controller status bit
    using BUSY = ftl::mmio::Field<1, 10, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
    // Locked Region Access Error
    using ERROR = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Reload Shadow Registers
    using RELOAD_SHADOWS = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Lock fuse word
    using WORDLOCK = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Write unlock
    using WR_UNLOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct CtrlSetFields

  struct CTRL_SET : ftl::mmio::Register<
      0x40CAC004u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlSetFields::ADDR,
      CtrlSetFields::BUSY,
      CtrlSetFields::ERROR,
      CtrlSetFields::RELOAD_SHADOWS,
      ftl::mmio::Reserved<2, 13>,
      CtrlSetFields::WORDLOCK,
      CtrlSetFields::WR_UNLOCK> {
    using ADDR = CtrlSetFields::ADDR;
    using BUSY = CtrlSetFields::BUSY;
    using ERROR = CtrlSetFields::ERROR;
    using RELOAD_SHADOWS = CtrlSetFields::RELOAD_SHADOWS;
    using WORDLOCK = CtrlSetFields::WORDLOCK;
    using WR_UNLOCK = CtrlSetFields::WR_UNLOCK;
  };

  // OTP Controller Control and Status Register
  struct CtrlClrFields {
    // OTP write and read access address register
    using ADDR = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // OTP controller status bit
    using BUSY = ftl::mmio::Field<1, 10, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
    // Locked Region Access Error
    using ERROR = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Reload Shadow Registers
    using RELOAD_SHADOWS = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Lock fuse word
    using WORDLOCK = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Write unlock
    using WR_UNLOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct CtrlClrFields

  struct CTRL_CLR : ftl::mmio::Register<
      0x40CAC008u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlClrFields::ADDR,
      CtrlClrFields::BUSY,
      CtrlClrFields::ERROR,
      CtrlClrFields::RELOAD_SHADOWS,
      ftl::mmio::Reserved<2, 13>,
      CtrlClrFields::WORDLOCK,
      CtrlClrFields::WR_UNLOCK> {
    using ADDR = CtrlClrFields::ADDR;
    using BUSY = CtrlClrFields::BUSY;
    using ERROR = CtrlClrFields::ERROR;
    using RELOAD_SHADOWS = CtrlClrFields::RELOAD_SHADOWS;
    using WORDLOCK = CtrlClrFields::WORDLOCK;
    using WR_UNLOCK = CtrlClrFields::WR_UNLOCK;
  };

  // OTP Controller Control and Status Register
  struct CtrlTogFields {
    // OTP write and read access address register
    using ADDR = ftl::mmio::Field<10, 0, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // OTP controller status bit
    using BUSY = ftl::mmio::Field<1, 10, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
    // Locked Region Access Error
    using ERROR = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Reload Shadow Registers
    using RELOAD_SHADOWS = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Lock fuse word
    using WORDLOCK = ftl::mmio::Field<1, 15, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Write unlock
    using WR_UNLOCK = ftl::mmio::Field<16, 16, std::uint16_t, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct CtrlTogFields

  struct CTRL_TOG : ftl::mmio::Register<
      0x40CAC00Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      CtrlTogFields::ADDR,
      CtrlTogFields::BUSY,
      CtrlTogFields::ERROR,
      CtrlTogFields::RELOAD_SHADOWS,
      ftl::mmio::Reserved<2, 13>,
      CtrlTogFields::WORDLOCK,
      CtrlTogFields::WR_UNLOCK> {
    using ADDR = CtrlTogFields::ADDR;
    using BUSY = CtrlTogFields::BUSY;
    using ERROR = CtrlTogFields::ERROR;
    using RELOAD_SHADOWS = CtrlTogFields::RELOAD_SHADOWS;
    using WORDLOCK = CtrlTogFields::WORDLOCK;
    using WR_UNLOCK = CtrlTogFields::WR_UNLOCK;
  };

  // OTP Controller PDN Register
  struct PdnFields {
    enum class ePDN : std::uint32_t {
      // OTP memory is not powered
      epower_off = 0,
      // OTP memory is powered
      epower_on = 1,
    };

    // PDN value
    using PDN = ftl::mmio::Field<1, 0, ePDN, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct PdnFields

  struct PDN : ftl::mmio::Register<
      0x40CAC010u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      PdnFields::PDN,
      ftl::mmio::Reserved<31, 1>> {
    using ePDN = PdnFields::ePDN;
    using VALUE = PdnFields::PDN;
  };

  // OTP Controller Write Data Register
  struct DataFields {
    // Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct DataFields

  struct DATA : ftl::mmio::Register<
      0x40CAC020u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      DataFields::DATA> {
    using VALUE = DataFields::DATA;
  };

  // OTP Controller Read Control Register
  struct ReadCtrlFields {
    enum class eREAD_FUSE : std::uint32_t {
      // Do not initiate a read from OTP
      eDO_NOT_START_RD_OP = 0,
      // Initiate a read from OTP
      eSTART_RD_OP = 1,
    };

    enum class eREAD_FUSE_CNTR : std::uint32_t {
      // 1 word
      eONE_WORD = 0,
      // 2 words
      eTWO_WORDS = 1,
      // 3 words
      eTHREE_WORDS = 2,
      // 4 words
      eFOUR_WORDS = 3,
    };

    enum class eREAD_FUSE_DONE_INTR_ENA : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    enum class eREAD_FUSE_ERROR_INTR_ENA : std::uint32_t {
      // Disable
      eDISABLE = 0,
      // Enable
      eENABLE = 1,
    };

    // Read Fuse
    using READ_FUSE = ftl::mmio::Field<1, 0, eREAD_FUSE, ftl::mmio::RW, ftl::mmio::Normal>;
    // Number of words to read.
    using READ_FUSE_CNTR = ftl::mmio::Field<2, 1, eREAD_FUSE_CNTR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable read-done interrupt
    using READ_FUSE_DONE_INTR_ENA = ftl::mmio::Field<1, 3, eREAD_FUSE_DONE_INTR_ENA, ftl::mmio::RW, ftl::mmio::Normal>;
    // Enable read-error interrupt
    using READ_FUSE_ERROR_INTR_ENA = ftl::mmio::Field<1, 4, eREAD_FUSE_ERROR_INTR_ENA, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ReadCtrlFields

  struct READ_CTRL : ftl::mmio::Register<
      0x40CAC030u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ReadCtrlFields::READ_FUSE,
      ReadCtrlFields::READ_FUSE_CNTR,
      ReadCtrlFields::READ_FUSE_DONE_INTR_ENA,
      ReadCtrlFields::READ_FUSE_ERROR_INTR_ENA,
      ftl::mmio::Reserved<27, 5>> {
    using eREAD_FUSE = ReadCtrlFields::eREAD_FUSE;
    using eREAD_FUSE_CNTR = ReadCtrlFields::eREAD_FUSE_CNTR;
    using eREAD_FUSE_DONE_INTR_ENA = ReadCtrlFields::eREAD_FUSE_DONE_INTR_ENA;
    using eREAD_FUSE_ERROR_INTR_ENA = ReadCtrlFields::eREAD_FUSE_ERROR_INTR_ENA;
    using READ_FUSE = ReadCtrlFields::READ_FUSE;
    using READ_FUSE_CNTR = ReadCtrlFields::READ_FUSE_CNTR;
    using READ_FUSE_DONE_INTR_ENA = ReadCtrlFields::READ_FUSE_DONE_INTR_ENA;
    using READ_FUSE_ERROR_INTR_ENA = ReadCtrlFields::READ_FUSE_ERROR_INTR_ENA;
  };

  // 8K OTP Memory STATUS Register
  struct OutStatusFields {
    enum class eREAD_ERROR_INTR : std::uint32_t {
      // Read operation finished with out any error
      eno_error = 0,
      // Read operation finished with an error
      eerror = 1,
    };

    // Single Error Correct
    using SEC = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Double error detect
    using DED = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Word Locked
    using LOCKED = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Programming failed
    using PROGFAIL = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Acknowledge
    using ACK = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Power OK
    using PWOK = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Flag state
    using FLAGSTATE = ftl::mmio::Field<4, 15, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Indicates single error correction occured on reload
    using SEC_RELOAD = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Indicates double error detection occured on reload
    using DED_RELOAD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Calibrated status
    using CALIBRATED = ftl::mmio::Field<1, 21, bool, ftl::mmio::RO, ftl::mmio::Normal>;
    // Read fuse done
    using READ_DONE_INTR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Fuse read error
    using READ_ERROR_INTR = ftl::mmio::Field<1, 23, eREAD_ERROR_INTR, ftl::mmio::RW, ftl::mmio::Normal>;
    // Double error detect
    using DED0 = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Double error detect
    using DED1 = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Double error detect
    using DED2 = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::Normal>;
    // Double error detect
    using DED3 = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct OutStatusFields

  struct OUT_STATUS : ftl::mmio::Register<
      0x40CAC090u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<9, 0>,
      OutStatusFields::SEC,
      OutStatusFields::DED,
      OutStatusFields::LOCKED,
      OutStatusFields::PROGFAIL,
      OutStatusFields::ACK,
      OutStatusFields::PWOK,
      OutStatusFields::FLAGSTATE,
      OutStatusFields::SEC_RELOAD,
      OutStatusFields::DED_RELOAD,
      OutStatusFields::CALIBRATED,
      OutStatusFields::READ_DONE_INTR,
      OutStatusFields::READ_ERROR_INTR,
      OutStatusFields::DED0,
      OutStatusFields::DED1,
      OutStatusFields::DED2,
      OutStatusFields::DED3,
      ftl::mmio::Reserved<4, 28>> {
    using eREAD_ERROR_INTR = OutStatusFields::eREAD_ERROR_INTR;
    using SEC = OutStatusFields::SEC;
    using DED = OutStatusFields::DED;
    using LOCKED = OutStatusFields::LOCKED;
    using PROGFAIL = OutStatusFields::PROGFAIL;
    using ACK = OutStatusFields::ACK;
    using PWOK = OutStatusFields::PWOK;
    using FLAGSTATE = OutStatusFields::FLAGSTATE;
    using SEC_RELOAD = OutStatusFields::SEC_RELOAD;
    using DED_RELOAD = OutStatusFields::DED_RELOAD;
    using CALIBRATED = OutStatusFields::CALIBRATED;
    using READ_DONE_INTR = OutStatusFields::READ_DONE_INTR;
    using READ_ERROR_INTR = OutStatusFields::READ_ERROR_INTR;
    using DED0 = OutStatusFields::DED0;
    using DED1 = OutStatusFields::DED1;
    using DED2 = OutStatusFields::DED2;
    using DED3 = OutStatusFields::DED3;
  };

  // 8K OTP Memory STATUS Register
  struct OutStatusSetFields {
    // Single Error Correct
    using SEC = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Double error detect
    using DED = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Word Locked
    using LOCKED = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Programming failed
    using PROGFAIL = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Acknowledge
    using ACK = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
    // Power OK
    using PWOK = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
    // Flag state
    using FLAGSTATE = ftl::mmio::Field<4, 15, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToSet>;
    // Indicates single error correction occured on reload
    using SEC_RELOAD = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Indicates double error detection occured on reload
    using DED_RELOAD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Calibrated status
    using CALIBRATED = ftl::mmio::Field<1, 21, bool, ftl::mmio::RO, ftl::mmio::OneToSet>;
    // Read fuse done
    using READ_DONE_INTR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Fuse read error
    using READ_ERROR_INTR = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Double error detect
    using DED0 = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Double error detect
    using DED1 = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Double error detect
    using DED2 = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
    // Double error detect
    using DED3 = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::OneToSet>;
  };  // struct OutStatusSetFields

  struct OUT_STATUS_SET : ftl::mmio::Register<
      0x40CAC094u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<9, 0>,
      OutStatusSetFields::SEC,
      OutStatusSetFields::DED,
      OutStatusSetFields::LOCKED,
      OutStatusSetFields::PROGFAIL,
      OutStatusSetFields::ACK,
      OutStatusSetFields::PWOK,
      OutStatusSetFields::FLAGSTATE,
      OutStatusSetFields::SEC_RELOAD,
      OutStatusSetFields::DED_RELOAD,
      OutStatusSetFields::CALIBRATED,
      OutStatusSetFields::READ_DONE_INTR,
      OutStatusSetFields::READ_ERROR_INTR,
      OutStatusSetFields::DED0,
      OutStatusSetFields::DED1,
      OutStatusSetFields::DED2,
      OutStatusSetFields::DED3,
      ftl::mmio::Reserved<4, 28>> {
    using SEC = OutStatusSetFields::SEC;
    using DED = OutStatusSetFields::DED;
    using LOCKED = OutStatusSetFields::LOCKED;
    using PROGFAIL = OutStatusSetFields::PROGFAIL;
    using ACK = OutStatusSetFields::ACK;
    using PWOK = OutStatusSetFields::PWOK;
    using FLAGSTATE = OutStatusSetFields::FLAGSTATE;
    using SEC_RELOAD = OutStatusSetFields::SEC_RELOAD;
    using DED_RELOAD = OutStatusSetFields::DED_RELOAD;
    using CALIBRATED = OutStatusSetFields::CALIBRATED;
    using READ_DONE_INTR = OutStatusSetFields::READ_DONE_INTR;
    using READ_ERROR_INTR = OutStatusSetFields::READ_ERROR_INTR;
    using DED0 = OutStatusSetFields::DED0;
    using DED1 = OutStatusSetFields::DED1;
    using DED2 = OutStatusSetFields::DED2;
    using DED3 = OutStatusSetFields::DED3;
  };

  // 8K OTP Memory STATUS Register
  struct OutStatusClrFields {
    // Single Error Correct
    using SEC = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Double error detect
    using DED = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Word Locked
    using LOCKED = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Programming failed
    using PROGFAIL = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Acknowledge
    using ACK = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
    // Power OK
    using PWOK = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
    // Flag state
    using FLAGSTATE = ftl::mmio::Field<4, 15, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToClear>;
    // Indicates single error correction occured on reload
    using SEC_RELOAD = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Indicates double error detection occured on reload
    using DED_RELOAD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Calibrated status
    using CALIBRATED = ftl::mmio::Field<1, 21, bool, ftl::mmio::RO, ftl::mmio::OneToClear>;
    // Read fuse done
    using READ_DONE_INTR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Fuse read error
    using READ_ERROR_INTR = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Double error detect
    using DED0 = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Double error detect
    using DED1 = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Double error detect
    using DED2 = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
    // Double error detect
    using DED3 = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::OneToClear>;
  };  // struct OutStatusClrFields

  struct OUT_STATUS_CLR : ftl::mmio::Register<
      0x40CAC098u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<9, 0>,
      OutStatusClrFields::SEC,
      OutStatusClrFields::DED,
      OutStatusClrFields::LOCKED,
      OutStatusClrFields::PROGFAIL,
      OutStatusClrFields::ACK,
      OutStatusClrFields::PWOK,
      OutStatusClrFields::FLAGSTATE,
      OutStatusClrFields::SEC_RELOAD,
      OutStatusClrFields::DED_RELOAD,
      OutStatusClrFields::CALIBRATED,
      OutStatusClrFields::READ_DONE_INTR,
      OutStatusClrFields::READ_ERROR_INTR,
      OutStatusClrFields::DED0,
      OutStatusClrFields::DED1,
      OutStatusClrFields::DED2,
      OutStatusClrFields::DED3,
      ftl::mmio::Reserved<4, 28>> {
    using SEC = OutStatusClrFields::SEC;
    using DED = OutStatusClrFields::DED;
    using LOCKED = OutStatusClrFields::LOCKED;
    using PROGFAIL = OutStatusClrFields::PROGFAIL;
    using ACK = OutStatusClrFields::ACK;
    using PWOK = OutStatusClrFields::PWOK;
    using FLAGSTATE = OutStatusClrFields::FLAGSTATE;
    using SEC_RELOAD = OutStatusClrFields::SEC_RELOAD;
    using DED_RELOAD = OutStatusClrFields::DED_RELOAD;
    using CALIBRATED = OutStatusClrFields::CALIBRATED;
    using READ_DONE_INTR = OutStatusClrFields::READ_DONE_INTR;
    using READ_ERROR_INTR = OutStatusClrFields::READ_ERROR_INTR;
    using DED0 = OutStatusClrFields::DED0;
    using DED1 = OutStatusClrFields::DED1;
    using DED2 = OutStatusClrFields::DED2;
    using DED3 = OutStatusClrFields::DED3;
  };

  // 8K OTP Memory STATUS Register
  struct OutStatusTogFields {
    // Single Error Correct
    using SEC = ftl::mmio::Field<1, 9, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Double error detect
    using DED = ftl::mmio::Field<1, 10, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Word Locked
    using LOCKED = ftl::mmio::Field<1, 11, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Programming failed
    using PROGFAIL = ftl::mmio::Field<1, 12, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Acknowledge
    using ACK = ftl::mmio::Field<1, 13, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
    // Power OK
    using PWOK = ftl::mmio::Field<1, 14, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
    // Flag state
    using FLAGSTATE = ftl::mmio::Field<4, 15, std::uint8_t, ftl::mmio::RO, ftl::mmio::OneToToggle>;
    // Indicates single error correction occured on reload
    using SEC_RELOAD = ftl::mmio::Field<1, 19, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Indicates double error detection occured on reload
    using DED_RELOAD = ftl::mmio::Field<1, 20, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Calibrated status
    using CALIBRATED = ftl::mmio::Field<1, 21, bool, ftl::mmio::RO, ftl::mmio::OneToToggle>;
    // Read fuse done
    using READ_DONE_INTR = ftl::mmio::Field<1, 22, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Fuse read error
    using READ_ERROR_INTR = ftl::mmio::Field<1, 23, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Double error detect
    using DED0 = ftl::mmio::Field<1, 24, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Double error detect
    using DED1 = ftl::mmio::Field<1, 25, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Double error detect
    using DED2 = ftl::mmio::Field<1, 26, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
    // Double error detect
    using DED3 = ftl::mmio::Field<1, 27, bool, ftl::mmio::RW, ftl::mmio::OneToToggle>;
  };  // struct OutStatusTogFields

  struct OUT_STATUS_TOG : ftl::mmio::Register<
      0x40CAC09Cu,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ftl::mmio::Reserved<9, 0>,
      OutStatusTogFields::SEC,
      OutStatusTogFields::DED,
      OutStatusTogFields::LOCKED,
      OutStatusTogFields::PROGFAIL,
      OutStatusTogFields::ACK,
      OutStatusTogFields::PWOK,
      OutStatusTogFields::FLAGSTATE,
      OutStatusTogFields::SEC_RELOAD,
      OutStatusTogFields::DED_RELOAD,
      OutStatusTogFields::CALIBRATED,
      OutStatusTogFields::READ_DONE_INTR,
      OutStatusTogFields::READ_ERROR_INTR,
      OutStatusTogFields::DED0,
      OutStatusTogFields::DED1,
      OutStatusTogFields::DED2,
      OutStatusTogFields::DED3,
      ftl::mmio::Reserved<4, 28>> {
    using SEC = OutStatusTogFields::SEC;
    using DED = OutStatusTogFields::DED;
    using LOCKED = OutStatusTogFields::LOCKED;
    using PROGFAIL = OutStatusTogFields::PROGFAIL;
    using ACK = OutStatusTogFields::ACK;
    using PWOK = OutStatusTogFields::PWOK;
    using FLAGSTATE = OutStatusTogFields::FLAGSTATE;
    using SEC_RELOAD = OutStatusTogFields::SEC_RELOAD;
    using DED_RELOAD = OutStatusTogFields::DED_RELOAD;
    using CALIBRATED = OutStatusTogFields::CALIBRATED;
    using READ_DONE_INTR = OutStatusTogFields::READ_DONE_INTR;
    using READ_ERROR_INTR = OutStatusTogFields::READ_ERROR_INTR;
    using DED0 = OutStatusTogFields::DED0;
    using DED1 = OutStatusTogFields::DED1;
    using DED2 = OutStatusTogFields::DED2;
    using DED3 = OutStatusTogFields::DED3;
  };

  // OTP Controller Version Register
  struct VersionFields {
    // RTL Version Stepping
    using STEP = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Minor RTL Version
    using MINOR = ftl::mmio::Field<8, 16, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
    // Major RTL Version
    using MAJOR = ftl::mmio::Field<8, 24, std::uint8_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct VersionFields

  struct VERSION : ftl::mmio::Register<
      0x40CAC0B0u,
      std::uint32_t,
      0x0A000000u,
      ftl::mmio::RO,
      VersionFields::STEP,
      VersionFields::MINOR,
      VersionFields::MAJOR> {
    using STEP = VersionFields::STEP;
    using MINOR = VersionFields::MINOR;
    using MAJOR = VersionFields::MAJOR;
  };

  // OTP Controller Read Data 0 Register
  struct ReadFuseData0Fields {
    // Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ReadFuseData0Fields

  struct READ_FUSE_DATA0 : ftl::mmio::Register<
      0x40CAC100u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ReadFuseData0Fields::DATA> {
    using DATA = ReadFuseData0Fields::DATA;
  };

  // OTP Controller Read Data 1 Register
  struct ReadFuseData1Fields {
    // Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ReadFuseData1Fields

  struct READ_FUSE_DATA1 : ftl::mmio::Register<
      0x40CAC110u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ReadFuseData1Fields::DATA> {
    using DATA = ReadFuseData1Fields::DATA;
  };

  // OTP Controller Read Data 2 Register
  struct ReadFuseData2Fields {
    // Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ReadFuseData2Fields

  struct READ_FUSE_DATA2 : ftl::mmio::Register<
      0x40CAC120u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ReadFuseData2Fields::DATA> {
    using DATA = ReadFuseData2Fields::DATA;
  };

  // OTP Controller Read Data 3 Register
  struct ReadFuseData3Fields {
    // Data
    using DATA = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct ReadFuseData3Fields

  struct READ_FUSE_DATA3 : ftl::mmio::Register<
      0x40CAC130u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      ReadFuseData3Fields::DATA> {
    using DATA = ReadFuseData3Fields::DATA;
  };

  // SW_LOCK Register
  struct SwLockFields {
    // This register contains lock information, which has the same function as the RLOCK fuse words (supplementary fuse words 8 (0x880) and 9 (0x890)) in fuse memory
    using SW_LOCK = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct SwLockFields

  struct SW_LOCK : ftl::mmio::Register<
      0x40CAC140u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      SwLockFields::SW_LOCK> {
    using VALUE = SwLockFields::SW_LOCK;
  };

  // BIT_LOCK Register
  struct BitLockFields {
    // Each bit controls the corresponding bit in supplementary fuse word 13 and its shadow register
    using BIT_LOCK = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RW, ftl::mmio::Normal>;
  };  // struct BitLockFields

  struct BIT_LOCK : ftl::mmio::Register<
      0x40CAC150u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RW,
      BitLockFields::BIT_LOCK> {
    using VALUE = BitLockFields::BIT_LOCK;
  };

  // OTP Controller Program Locked Status 0 Register
  struct Locked0Fields {
    // Stores program locked status for fuse words 0-15.
    using LOCKED = ftl::mmio::Field<16, 0, std::uint16_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Locked0Fields

  struct LOCKED0 : ftl::mmio::Register<
      0x40CAC600u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Locked0Fields::LOCKED,
      ftl::mmio::Reserved<16, 16>> {
    using LOCKED = Locked0Fields::LOCKED;
  };

  // OTP Controller Program Locked Status 1 Register
  struct Locked1Fields {
    // Stores program locked status for fuse words 16-47
    using LOCKED = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct Locked1Fields

  struct LOCKED1 : ftl::mmio::Register<
      0x40CAC610u,
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      Locked1Fields::LOCKED> {
    using LOCKED = Locked1Fields::LOCKED;
  };

  // Value of fuse word index
  struct FuseFields {
    // Reflects value of the fuse word
    using BITS = ftl::mmio::Field<32, 0, std::uint32_t, ftl::mmio::RO, ftl::mmio::Normal>;
  };  // struct FuseFields

  template<std::uint32_t ClusterIndex>
  struct FUSE : ftl::mmio::Register<
      0x40CAC800u + (ClusterIndex * 0x10u),
      std::uint32_t,
      0x00000000u,
      ftl::mmio::RO,
      FuseFields::BITS> {
    static_assert(ClusterIndex < 144u, "FUSE: ClusterIndex out of range");
    using BITS = FuseFields::BITS;
  };

};

}  // namespace regs