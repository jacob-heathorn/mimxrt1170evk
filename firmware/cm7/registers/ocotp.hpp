#pragma once

#include <stddef.h>
#include <stdint.h>
#include <cstring>

// no description available
namespace nOCOTP {


// OTP Controller Control and Status Register
union CTRL {
  
  // OTP write and read access address register
  enum class eADDR : uint32_t {
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
  
  // OTP controller status bit
  enum class eBUSY : uint32_t {
    // No write or read access to OTP started.
    enot_busy = 0,
    // Write or read access to OTP started.
    ebusy = 1,
  };
  
  // Locked Region Access Error
  enum class eERROR : uint32_t {
    // No error.
    eno_error = 0,
    // Error - access to a locked region requested.
    eerror = 1,
  };
  
  // Reload Shadow Registers
  enum class eRELOAD_SHADOWS : uint32_t {
    // Do not force shadow register re-load.
    eshadow_noforce_reload = 0,
    // Force shadow register re-load. This bit is cleared automatically after shadow registers are re-loaded.
    eshadow_force_reload = 1,
  };
  
  // Lock fuse word
  enum class eWORDLOCK : uint32_t {
    // No change to LOCK bit when programming a word using redundancy
    eNO_CHANGE = 0,
    // LOCK bit for fuse word will be set after successfully programming a word using redundancy
    eLOCK = 1,
  };
  
  // Write unlock
  enum class eWR_UNLOCK : uint32_t {
    // OTP write access is locked.
    eotp_w_locked = 0,
    // OTP write access is unlocked.
    eotp_w_unlocked = 15991,
  };
  
  // Bit field definition.
  struct {
    // read-write - OTP write and read access address register
    eADDR ADDR : 10;
    // read-only - OTP controller status bit
    eBUSY BUSY : 1;
    // read-write - Locked Region Access Error
    eERROR ERROR : 1;
    // read-write - Reload Shadow Registers
    eRELOAD_SHADOWS RELOAD_SHADOWS : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Lock fuse word
    eWORDLOCK WORDLOCK : 1;
    // read-write - Write unlock
    eWR_UNLOCK WR_UNLOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL &Instance() { return *reinterpret_cast<volatile CTRL*>(0x40CAC000); }
};

// OTP Controller Control and Status Register
union CTRL_SET {
  
  // Bit field definition.
  struct {
    // read-write - OTP write and read access address register
    uint32_t ADDR : 10;
    // read-only - OTP controller status bit
    uint32_t BUSY : 1;
    // read-write - Locked Region Access Error
    uint32_t ERROR : 1;
    // read-write - Reload Shadow Registers
    uint32_t RELOAD_SHADOWS : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Lock fuse word
    uint32_t WORDLOCK : 1;
    // read-write - Write unlock
    uint32_t WR_UNLOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_SET() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_SET &Instance() { return *reinterpret_cast<volatile CTRL_SET*>(0x40CAC004); }
};

// OTP Controller Control and Status Register
union CTRL_CLR {
  
  // Bit field definition.
  struct {
    // read-write - OTP write and read access address register
    uint32_t ADDR : 10;
    // read-only - OTP controller status bit
    uint32_t BUSY : 1;
    // read-write - Locked Region Access Error
    uint32_t ERROR : 1;
    // read-write - Reload Shadow Registers
    uint32_t RELOAD_SHADOWS : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Lock fuse word
    uint32_t WORDLOCK : 1;
    // read-write - Write unlock
    uint32_t WR_UNLOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_CLR() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_CLR &Instance() { return *reinterpret_cast<volatile CTRL_CLR*>(0x40CAC008); }
};

// OTP Controller Control and Status Register
union CTRL_TOG {
  
  // Bit field definition.
  struct {
    // read-write - OTP write and read access address register
    uint32_t ADDR : 10;
    // read-only - OTP controller status bit
    uint32_t BUSY : 1;
    // read-write - Locked Region Access Error
    uint32_t ERROR : 1;
    // read-write - Reload Shadow Registers
    uint32_t RELOAD_SHADOWS : 1;
    uint32_t _reserved_0 : 2;
    // read-write - Lock fuse word
    uint32_t WORDLOCK : 1;
    // read-write - Write unlock
    uint32_t WR_UNLOCK : 16;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  CTRL_TOG() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile CTRL_TOG &Instance() { return *reinterpret_cast<volatile CTRL_TOG*>(0x40CAC00C); }
};

// OTP Controller PDN Register
union PDN {
  
  // PDN value
  enum class ePDN : uint32_t {
    // OTP memory is not powered
    epower_off = 0,
    // OTP memory is powered
    epower_on = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - PDN value
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
union DATA {
  
  // Bit field definition.
  struct {
    // read-write - Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  DATA() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile DATA &Instance() { return *reinterpret_cast<volatile DATA*>(0x40CAC020); }
};

// OTP Controller Read Control Register
union READ_CTRL {
  
  // Read Fuse
  enum class eREAD_FUSE : uint32_t {
    // Do not initiate a read from OTP
    eDO_NOT_START_RD_OP = 0,
    // Initiate a read from OTP
    eSTART_RD_OP = 1,
  };
  
  // Number of words to read.
  enum class eREAD_FUSE_CNTR : uint32_t {
    // 1 word
    eONE_WORD = 0,
    // 2 words
    eTWO_WORDS = 1,
    // 3 words
    eTHREE_WORDS = 2,
    // 4 words
    eFOUR_WORDS = 3,
  };
  
  // Enable read-done interrupt
  enum class eREAD_FUSE_DONE_INTR_ENA : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Enable read-error interrupt
  enum class eREAD_FUSE_ERROR_INTR_ENA : uint32_t {
    // Disable
    eDISABLE = 0,
    // Enable
    eENABLE = 1,
  };
  
  // Bit field definition.
  struct {
    // read-write - Read Fuse
    eREAD_FUSE READ_FUSE : 1;
    // read-write - Number of words to read.
    eREAD_FUSE_CNTR READ_FUSE_CNTR : 2;
    // read-write - Enable read-done interrupt
    eREAD_FUSE_DONE_INTR_ENA READ_FUSE_DONE_INTR_ENA : 1;
    // read-write - Enable read-error interrupt
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
union OUT_STATUS {
  
  // Fuse read error
  enum class eREAD_ERROR_INTR : uint32_t {
    // Read operation finished with out any error
    eno_error = 0,
    // Read operation finished with an error
    eerror = 1,
  };
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 9;
    // read-write - Single Error Correct
    uint32_t SEC : 1;
    // read-write - Double error detect
    uint32_t DED : 1;
    // read-write - Word Locked
    uint32_t LOCKED : 1;
    // read-write - Programming failed
    uint32_t PROGFAIL : 1;
    // read-only - Acknowledge
    uint32_t ACK : 1;
    // read-only - Power OK
    uint32_t PWOK : 1;
    // read-only - Flag state
    uint32_t FLAGSTATE : 4;
    // read-write - Indicates single error correction occured on reload
    uint32_t SEC_RELOAD : 1;
    // read-write - Indicates double error detection occured on reload
    uint32_t DED_RELOAD : 1;
    // read-only - Calibrated status
    uint32_t CALIBRATED : 1;
    // read-write - Read fuse done
    uint32_t READ_DONE_INTR : 1;
    // read-write - Fuse read error
    eREAD_ERROR_INTR READ_ERROR_INTR : 1;
    // read-write - Double error detect
    uint32_t DED0 : 1;
    // read-write - Double error detect
    uint32_t DED1 : 1;
    // read-write - Double error detect
    uint32_t DED2 : 1;
    // read-write - Double error detect
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
union OUT_STATUS_SET {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 9;
    // read-write - Single Error Correct
    uint32_t SEC : 1;
    // read-write - Double error detect
    uint32_t DED : 1;
    // read-write - Word Locked
    uint32_t LOCKED : 1;
    // read-write - Programming failed
    uint32_t PROGFAIL : 1;
    // read-only - Acknowledge
    uint32_t ACK : 1;
    // read-only - Power OK
    uint32_t PWOK : 1;
    // read-only - Flag state
    uint32_t FLAGSTATE : 4;
    // read-write - Indicates single error correction occured on reload
    uint32_t SEC_RELOAD : 1;
    // read-write - Indicates double error detection occured on reload
    uint32_t DED_RELOAD : 1;
    // read-only - Calibrated status
    uint32_t CALIBRATED : 1;
    // read-write - Read fuse done
    uint32_t READ_DONE_INTR : 1;
    // read-write - Fuse read error
    uint32_t READ_ERROR_INTR : 1;
    // read-write - Double error detect
    uint32_t DED0 : 1;
    // read-write - Double error detect
    uint32_t DED1 : 1;
    // read-write - Double error detect
    uint32_t DED2 : 1;
    // read-write - Double error detect
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
union OUT_STATUS_CLR {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 9;
    // read-write - Single Error Correct
    uint32_t SEC : 1;
    // read-write - Double error detect
    uint32_t DED : 1;
    // read-write - Word Locked
    uint32_t LOCKED : 1;
    // read-write - Programming failed
    uint32_t PROGFAIL : 1;
    // read-only - Acknowledge
    uint32_t ACK : 1;
    // read-only - Power OK
    uint32_t PWOK : 1;
    // read-only - Flag state
    uint32_t FLAGSTATE : 4;
    // read-write - Indicates single error correction occured on reload
    uint32_t SEC_RELOAD : 1;
    // read-write - Indicates double error detection occured on reload
    uint32_t DED_RELOAD : 1;
    // read-only - Calibrated status
    uint32_t CALIBRATED : 1;
    // read-write - Read fuse done
    uint32_t READ_DONE_INTR : 1;
    // read-write - Fuse read error
    uint32_t READ_ERROR_INTR : 1;
    // read-write - Double error detect
    uint32_t DED0 : 1;
    // read-write - Double error detect
    uint32_t DED1 : 1;
    // read-write - Double error detect
    uint32_t DED2 : 1;
    // read-write - Double error detect
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
union OUT_STATUS_TOG {
  
  // Bit field definition.
  struct {
    uint32_t _reserved_0 : 9;
    // read-write - Single Error Correct
    uint32_t SEC : 1;
    // read-write - Double error detect
    uint32_t DED : 1;
    // read-write - Word Locked
    uint32_t LOCKED : 1;
    // read-write - Programming failed
    uint32_t PROGFAIL : 1;
    // read-only - Acknowledge
    uint32_t ACK : 1;
    // read-only - Power OK
    uint32_t PWOK : 1;
    // read-only - Flag state
    uint32_t FLAGSTATE : 4;
    // read-write - Indicates single error correction occured on reload
    uint32_t SEC_RELOAD : 1;
    // read-write - Indicates double error detection occured on reload
    uint32_t DED_RELOAD : 1;
    // read-only - Calibrated status
    uint32_t CALIBRATED : 1;
    // read-write - Read fuse done
    uint32_t READ_DONE_INTR : 1;
    // read-write - Fuse read error
    uint32_t READ_ERROR_INTR : 1;
    // read-write - Double error detect
    uint32_t DED0 : 1;
    // read-write - Double error detect
    uint32_t DED1 : 1;
    // read-write - Double error detect
    uint32_t DED2 : 1;
    // read-write - Double error detect
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
union VERSION {
  
  // Bit field definition.
  struct {
    // read-only - RTL Version Stepping
    uint32_t STEP : 16;
    // read-only - Minor RTL Version
    uint32_t MINOR : 8;
    // read-only - Major RTL Version
    uint32_t MAJOR : 8;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  VERSION() = delete;
  inline void Reset() volatile { this->value = 0x0A000000; }
  static inline volatile VERSION &Instance() { return *reinterpret_cast<volatile VERSION*>(0x40CAC0B0); }
};

// OTP Controller Read Data 0 Register
union READ_FUSE_DATA0 {
  
  // Bit field definition.
  struct {
    // read-write - Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  READ_FUSE_DATA0() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile READ_FUSE_DATA0 &Instance() { return *reinterpret_cast<volatile READ_FUSE_DATA0*>(0x40CAC100); }
};

// OTP Controller Read Data 1 Register
union READ_FUSE_DATA1 {
  
  // Bit field definition.
  struct {
    // read-write - Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  READ_FUSE_DATA1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile READ_FUSE_DATA1 &Instance() { return *reinterpret_cast<volatile READ_FUSE_DATA1*>(0x40CAC110); }
};

// OTP Controller Read Data 2 Register
union READ_FUSE_DATA2 {
  
  // Bit field definition.
  struct {
    // read-write - Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  READ_FUSE_DATA2() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile READ_FUSE_DATA2 &Instance() { return *reinterpret_cast<volatile READ_FUSE_DATA2*>(0x40CAC120); }
};

// OTP Controller Read Data 3 Register
union READ_FUSE_DATA3 {
  
  // Bit field definition.
  struct {
    // read-write - Data
    uint32_t DATA : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  READ_FUSE_DATA3() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile READ_FUSE_DATA3 &Instance() { return *reinterpret_cast<volatile READ_FUSE_DATA3*>(0x40CAC130); }
};

// SW_LOCK Register
union SW_LOCK {
  
  // Bit field definition.
  struct {
    // read-write - This register contains lock information, which has the same function as the RLOCK fuse words (supplementary fuse words 8 (0x880) and 9 (0x890)) in fuse memory
    uint32_t SW_LOCK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  SW_LOCK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile SW_LOCK &Instance() { return *reinterpret_cast<volatile SW_LOCK*>(0x40CAC140); }
};

// BIT_LOCK Register
union BIT_LOCK {
  
  // Bit field definition.
  struct {
    // read-write - Each bit controls the corresponding bit in supplementary fuse word 13 and its shadow register
    uint32_t BIT_LOCK : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  BIT_LOCK() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile BIT_LOCK &Instance() { return *reinterpret_cast<volatile BIT_LOCK*>(0x40CAC150); }
};

// OTP Controller Program Locked Status 0 Register
union LOCKED0 {
  
  // Bit field definition.
  struct {
    // read-only - Stores program locked status for fuse words 0-15.
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
union LOCKED1 {
  
  // Bit field definition.
  struct {
    // read-only - Stores program locked status for fuse words 16-47
    uint32_t LOCKED : 32;
  } bits;
  
  // Full 32-bit register value.
  uint32_t value;

  LOCKED1() = delete;
  inline void Reset() volatile { this->value = 0x00000000; }
  static inline volatile LOCKED1 &Instance() { return *reinterpret_cast<volatile LOCKED1*>(0x40CAC610); }
};



} // namespace nOCOTP