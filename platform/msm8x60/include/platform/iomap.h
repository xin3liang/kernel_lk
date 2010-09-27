/* Copyright (c) 2008, Google Inc.
 * All rights reserved.
 *
 * Copyright (c) 2009-2010, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *  * Neither the name of Google, Inc. nor the names of its contributors
 *    may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#ifndef _PLATFORM_MSM8X60_IOMAP_H_
#define _PLATFORM_MSM8X60_IOMAP_H_

#define MSM_UART3_BASE	0xA9C00000

#define MSM_VIC_BASE	0x02080000
#define MSM_TMR_BASE	0x02000000
#define MSM_GPT_BASE    (MSM_TMR_BASE + 0x04)
#define MSM_CSR_BASE    0x02081000
#define MSM_GCC_BASE	0x02082000
#define MSM_ACC0_BASE	0x02041000
#define MSM_ACC1_BASE	0x02051000


#define MSM_GIC_CPU_BASE    0x02081000
#define MSM_GIC_DIST_BASE   0x02080000

#define MSM_SDC1_BASE       0x12400000

#define MSM_SHARED_BASE      0x40000000

#define SURF_DEBUG_LED_ADDR      0x1D000202

#define GPIO_CFG133_ADDR    0x00801850
#define GPIO_CFG135_ADDR    0x00801870
#define GPIO_CFG136_ADDR    0x00801880
#define GPIO_CFG137_ADDR    0x00801890
#define GPIO_CFG138_ADDR    0x008018A0
#define GPIO_CFG139_ADDR    0x008018B0
#define GPIO_CFG140_ADDR    0x008018C0
#define GPIO_CFG141_ADDR    0x008018D0
#define GPIO_CFG142_ADDR    0x008018E0
#define GPIO_CFG143_ADDR    0x008018F0
#define GPIO_CFG144_ADDR    0x00801900
#define GPIO_CFG145_ADDR    0x00801910
#define GPIO_CFG146_ADDR    0x00801920
#define GPIO_CFG147_ADDR    0x00801930
#define GPIO_CFG148_ADDR    0x00801940
#define GPIO_CFG149_ADDR    0x00801950
#define GPIO_CFG150_ADDR    0x00801960
#define GPIO_CFG151_ADDR    0x00801970
#define GPIO_CFG152_ADDR    0x00801980
#define GPIO_CFG153_ADDR    0x00801990
#define GPIO_CFG154_ADDR    0x008019A0
#define GPIO_CFG155_ADDR    0x008019B0
#define GPIO_CFG156_ADDR    0x008019C0
#define GPIO_CFG157_ADDR    0x008019D0
#define GPIO_CFG158_ADDR    0x008019E0

#define EBI2_CHIP_SELECT_CFG0    0x1A100000
#define EBI2_XMEM_CS3_CFG1       0x1A110034
#endif