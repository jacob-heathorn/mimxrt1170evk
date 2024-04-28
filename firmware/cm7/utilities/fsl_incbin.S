;/*
; * Copyright 2020 NXP
; *
; * All rights reserved.
; *
; * SPDX-License-Identifier: BSD-3-Clause
; */

#if defined(__CC_ARM)

        AREA core1_code, DATA, READONLY, PREINIT_ARRAY, ALIGN=3
        EXPORT core1_image_start
        EXPORT core1_image_end
core1_image_start
        INCBIN "/home/jacob/embedded/nxp/mimxrt1170evk/bin/cm4-debug/test/cm4/hello_world/hello-world-cm4.bin"
core1_image_end
        END

#elif defined(__GNUC__) || defined(__ARMCC_VERSION)

        .section .core1_code, "ax" @progbits @preinit_array
        .global core1_image_start
        .type core1_image_start, %object
        .align 4
core1_image_start:
        .incbin "/home/jacob/embedded/nxp/mimxrt1170evk/bin/cm4-debug/test/cm4/hello_world/hello-world-cm4.bin"
        .global core1_image_end
        .type core1_image_end, %object
core1_image_end:
        .global core1_image_size
        .type core1_image_size, %object
        .align 4
core1_image_size:
        .int  core1_image_end - core1_image_start
        .end

#endif
