/*
 * This file was generated automatically from PDF file by mkiomuxreg_imx51.rb
 *
 */

/*-
 * Copyright (c) 2012 The FreeBSD Foundation
 * All rights reserved.
 *
 * Portions of this software were developed by Oleksandr Rybalko
 * under sponsorship from the FreeBSD Foundation.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1.	Redistributions of source code must retain the above copyright
 *	notice, this list of conditions and the following disclaimer.
 * 2.	Redistributions in binary form must reproduce the above copyright
 *	notice, this list of conditions and the following disclaimer in the
 *	documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef	_IMX51_IOMUXREG_H
#define	_IMX51_IOMUXREG_H

#define	IOMUXC_MUX_CTL		0x001c		/* multiplex control */
#define	 IOMUX_CONFIG_SION	(1 << 4)
#define	 IOMUX_CONFIG_ALT0	(0)
#define	 IOMUX_CONFIG_ALT1	(1)
#define	 IOMUX_CONFIG_ALT2	(2)
#define	 IOMUX_CONFIG_ALT3	(3)
#define	 IOMUX_CONFIG_ALT4	(4)
#define	 IOMUX_CONFIG_ALT5	(5)
#define	 IOMUX_CONFIG_ALT6	(6)
#define	 IOMUX_CONFIG_ALT7	(7)
#define	IOMUXC_PAD_CTL		0x03f0		/* pad control */
#define	 PAD_CTL_HVE		(1 << 13)
#define	 PAD_CTL_DDR_INPUT	(1 << 9)
#define	 PAD_CTL_HYS		(1 << 8)
#define	 PAD_CTL_PKE		(1 << 7)
#define	 PAD_CTL_PUE		(1 << 6)
#define	 PAD_CTL_PULL		(PAD_CTL_PKE|PAD_CTL_PUE)
#define	 PAD_CTL_KEEPER		(PAD_CTL_PKE|0)
#define	 PAD_CTL_PUS_100K_PD	(0x0 << 4)
#define	 PAD_CTL_PUS_47K_PU	(0x1 << 4)
#define	 PAD_CTL_PUS_100K_PU	(0x2 << 4)
#define	 PAD_CTL_PUS_22K_PU	(0x3 << 4)
#define	 PAD_CTL_ODE		(1 << 3)	/* opendrain */
#define	 PAD_CTL_DSE_LOW	(0x0 << 1)
#define	 PAD_CTL_DSE_MID	(0x1 << 1)
#define	 PAD_CTL_DSE_HIGH	(0x2 << 1)
#define	 PAD_CTL_DSE_MAX	(0x3 << 1)
#define	 PAD_CTL_SRE		(1 << 0)
#define	IOMUXC_INPUT_CTL	0x08c4		/* input control */
#define	 INPUT_DAISY_0		0
#define	 INPUT_DAISY_1		1
#define	 INPUT_DAISY_2		2
#define	 INPUT_DAISY_3		3
#define	 INPUT_DAISY_4		4
#define	 INPUT_DAISY_5		5
#define	 INPUT_DAISY_6		6
#define	 INPUT_DAISY_7		7

/*
 * IOMUX index
 */
#define	IOMUX_PIN_TO_MUX_ADDRESS(pin)	(((pin) >> 16) & 0xffff)
#define	IOMUX_PIN_TO_PAD_ADDRESS(pin)	(((pin) >>  0) & 0xffff)

#define	IOMUX_PIN(mux_adr, pad_adr)			\
	(((mux_adr) << 16) | (((pad_adr) << 0)))
#define	IOMUX_MUX_NONE	0xffff
#define	IOMUX_PAD_NONE	0xffff

/* register offset address */
#define IOMUXC_GPR0					0x0000
#define IOMUXC_GPR1					0x0004
#define IOMUXC_OBSERVE_MUX_0				0x0008
#define IOMUXC_OBSERVE_MUX_1				0x000c
#define IOMUXC_OBSERVE_MUX_2				0x0010
#define IOMUXC_OBSERVE_MUX_3				0x0014
#define IOMUXC_OBSERVE_MUX_4				0x0018
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA0			0x001c
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA1			0x0020
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA2			0x0024
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA3			0x0028
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA4			0x002c
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA5			0x0030
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA6			0x0034
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA7			0x0038
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA8			0x003c
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA9			0x0040
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA10			0x0044
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA11			0x0048
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA12			0x004c
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA13			0x0050
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA14			0x0054
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DA15			0x0058
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D16			0x005c
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D17			0x0060
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D18			0x0064
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D19			0x0068
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D20			0x006c
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D21			0x0070
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D22			0x0074
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D23			0x0078
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D24			0x007c
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D25			0x0080
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D26			0x0084
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D27			0x0088
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D28			0x008c
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D29			0x0090
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D30			0x0094
#define IOMUXC_SW_MUX_CTL_PAD_EIM_D31			0x0098
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A16			0x009c
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A17			0x00a0
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A18			0x00a4
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A19			0x00a8
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A20			0x00ac
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A21			0x00b0
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A22			0x00b4
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A23			0x00b8
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A24			0x00bc
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A25			0x00c0
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A26			0x00c4
#define IOMUXC_SW_MUX_CTL_PAD_EIM_A27			0x00c8
#define IOMUXC_SW_MUX_CTL_PAD_EIM_EB0			0x00cc
#define IOMUXC_SW_MUX_CTL_PAD_EIM_EB1			0x00d0
#define IOMUXC_SW_MUX_CTL_PAD_EIM_EB2			0x00d4
#define IOMUXC_SW_MUX_CTL_PAD_EIM_EB3			0x00d8
#define IOMUXC_SW_MUX_CTL_PAD_EIM_OE			0x00dc
#define IOMUXC_SW_MUX_CTL_PAD_EIM_CS0			0x00e0
#define IOMUXC_SW_MUX_CTL_PAD_EIM_CS1			0x00e4
#define IOMUXC_SW_MUX_CTL_PAD_EIM_CS2			0x00e8
#define IOMUXC_SW_MUX_CTL_PAD_EIM_CS3			0x00ec
#define IOMUXC_SW_MUX_CTL_PAD_EIM_CS4			0x00f0
#define IOMUXC_SW_MUX_CTL_PAD_EIM_CS5			0x00f4
#define IOMUXC_SW_MUX_CTL_PAD_EIM_DTACK			0x00f8
#define IOMUXC_SW_MUX_CTL_PAD_EIM_LBA			0x00fc
#define IOMUXC_SW_MUX_CTL_PAD_EIM_CRE			0x0100
#define IOMUXC_SW_MUX_CTL_PAD_DRAM_CS1			0x0104
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_WE_B		0x0108
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_RE_B		0x010c
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_ALE			0x0110
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_CLE			0x0114
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_WP_B		0x0118
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_RB0			0x011c
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_RB1			0x0120
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_RB2			0x0124
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_RB3			0x0128
#define IOMUXC_SW_MUX_CTL_PAD_GPIO_NAND			0x012c
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_CS0			0x0130
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_CS1			0x0134
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_CS2			0x0138
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_CS3			0x013c
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_CS4			0x0140
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_CS5			0x0144
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_CS6			0x0148
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_CS7			0x014c
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_RDY_INT		0x0150
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D15			0x0154
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D14			0x0158
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D13			0x015c
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D12			0x0160
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D11			0x0164
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D10			0x0168
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D9			0x016c
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D8			0x0170
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D7			0x0174
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D6			0x0178
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D5			0x017c
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D4			0x0180
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D3			0x0184
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D2			0x0188
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D1			0x018c
#define IOMUXC_SW_MUX_CTL_PAD_NANDF_D0			0x0190
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D8			0x0194
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D9			0x0198
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D10			0x019c
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D11			0x01a0
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D12			0x01a4
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D13			0x01a8
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D14			0x01ac
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D15			0x01b0
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D16			0x01b4
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D17			0x01b8
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D18			0x01bc
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_D19			0x01c0
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_VSYNC		0x01c4
#define IOMUXC_SW_MUX_CTL_PAD_CSI1_HSYNC		0x01c8
#define IOMUXC_SW_MUX_CTL_PAD_CSI2_D12			0x01cc
#define IOMUXC_SW_MUX_CTL_PAD_CSI2_D13			0x01d0
#define IOMUXC_SW_MUX_CTL_PAD_CSI2_D14			0x01d4
#define IOMUXC_SW_MUX_CTL_PAD_CSI2_D15			0x01d8
#define IOMUXC_SW_MUX_CTL_PAD_CSI2_D16			0x01dc
#define IOMUXC_SW_MUX_CTL_PAD_CSI2_D17			0x01e0
#define IOMUXC_SW_MUX_CTL_PAD_CSI2_D18			0x01e4
#define IOMUXC_SW_MUX_CTL_PAD_CSI2_D19			0x01e8
#define IOMUXC_SW_MUX_CTL_PAD_CSI2_VSYNC		0x01ec
#define IOMUXC_SW_MUX_CTL_PAD_CSI2_HSYNC		0x01f0
#define IOMUXC_SW_MUX_CTL_PAD_CSI2_PIXCLK		0x01f4
#define IOMUXC_SW_MUX_CTL_PAD_I2C1_CLK			0x01f8
#define IOMUXC_SW_MUX_CTL_PAD_I2C1_DAT			0x01fc
#define IOMUXC_SW_MUX_CTL_PAD_AUD3_BB_TXD		0x0200
#define IOMUXC_SW_MUX_CTL_PAD_AUD3_BB_RXD		0x0204
#define IOMUXC_SW_MUX_CTL_PAD_AUD3_BB_CK		0x0208
#define IOMUXC_SW_MUX_CTL_PAD_AUD3_BB_FS		0x020c
#define IOMUXC_SW_MUX_CTL_PAD_CSPI1_MOSI		0x0210
#define IOMUXC_SW_MUX_CTL_PAD_CSPI1_MISO		0x0214
#define IOMUXC_SW_MUX_CTL_PAD_CSPI1_SS0			0x0218
#define IOMUXC_SW_MUX_CTL_PAD_CSPI1_SS1			0x021c
#define IOMUXC_SW_MUX_CTL_PAD_CSPI1_RDY			0x0220
#define IOMUXC_SW_MUX_CTL_PAD_CSPI1_SCLK		0x0224
#define IOMUXC_SW_MUX_CTL_PAD_UART1_RXD			0x0228
#define IOMUXC_SW_MUX_CTL_PAD_UART1_TXD			0x022c
#define IOMUXC_SW_MUX_CTL_PAD_UART1_RTS			0x0230
#define IOMUXC_SW_MUX_CTL_PAD_UART1_CTS			0x0234
#define IOMUXC_SW_MUX_CTL_PAD_UART2_RXD			0x0238
#define IOMUXC_SW_MUX_CTL_PAD_UART2_TXD			0x023c
#define IOMUXC_SW_MUX_CTL_PAD_UART3_RXD			0x0240
#define IOMUXC_SW_MUX_CTL_PAD_UART3_TXD			0x0244
#define IOMUXC_SW_MUX_CTL_PAD_OWIRE_LINE		0x0248
#define IOMUXC_SW_MUX_CTL_PAD_KEY_ROW0			0x024c
#define IOMUXC_SW_MUX_CTL_PAD_KEY_ROW1			0x0250
#define IOMUXC_SW_MUX_CTL_PAD_KEY_ROW2			0x0254
#define IOMUXC_SW_MUX_CTL_PAD_KEY_ROW3			0x0258
#define IOMUXC_SW_MUX_CTL_PAD_KEY_COL0			0x025c
#define IOMUXC_SW_MUX_CTL_PAD_KEY_COL1			0x0260
#define IOMUXC_SW_MUX_CTL_PAD_KEY_COL2			0x0264
#define IOMUXC_SW_MUX_CTL_PAD_KEY_COL3			0x0268
#define IOMUXC_SW_MUX_CTL_PAD_KEY_COL4			0x026c
#define IOMUXC_SW_MUX_CTL_PAD_KEY_COL5			0x0270
#define IOMUXC_SW_MUX_CTL_PAD_JTAG_DE_B			0x0274
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_CLK			0x0278
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_DIR			0x027c
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_STP			0x0280
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_NXT			0x0284
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_DATA0		0x0288
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_DATA1		0x028c
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_DATA2		0x0290
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_DATA3		0x0294
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_DATA4		0x0298
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_DATA5		0x029c
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_DATA6		0x02a0
#define IOMUXC_SW_MUX_CTL_PAD_USBH1_DATA7		0x02a4
#define IOMUXC_SW_MUX_CTL_PAD_DI1_PIN11			0x02a8
#define IOMUXC_SW_MUX_CTL_PAD_DI1_PIN12			0x02ac
#define IOMUXC_SW_MUX_CTL_PAD_DI1_PIN13			0x02b0
#define IOMUXC_SW_MUX_CTL_PAD_DI1_D0_CS			0x02b4
#define IOMUXC_SW_MUX_CTL_PAD_DI1_D1_CS			0x02b8
#define IOMUXC_SW_MUX_CTL_PAD_DISPB2_SER_DIN		0x02bc
#define IOMUXC_SW_MUX_CTL_PAD_DISPB2_SER_DIO		0x02c0
#define IOMUXC_SW_MUX_CTL_PAD_DISPB2_SER_CLK		0x02c4
#define IOMUXC_SW_MUX_CTL_PAD_DISPB2_SER_RS		0x02c8
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT0		0x02cc
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT1		0x02d0
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT2		0x02d4
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT3		0x02d8
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT4		0x02dc
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT5		0x02e0
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT6		0x02e4
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT7		0x02e8
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT8		0x02ec
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT9		0x02f0
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT10		0x02f4
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT11		0x02f8
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT12		0x02fc
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT13		0x0300
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT14		0x0304
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT15		0x0308
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT16		0x030c
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT17		0x0310
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT18		0x0314
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT19		0x0318
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT20		0x031c
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT21		0x0320
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT22		0x0324
#define IOMUXC_SW_MUX_CTL_PAD_DISP1_DAT23		0x0328
#define IOMUXC_SW_MUX_CTL_PAD_DI1_PIN3			0x032c
#define IOMUXC_SW_MUX_CTL_PAD_DI1_PIN2			0x0330
#define IOMUXC_SW_MUX_CTL_PAD_DI_GP1			0x0334
#define IOMUXC_SW_MUX_CTL_PAD_DI_GP2			0x0338
#define IOMUXC_SW_MUX_CTL_PAD_DI_GP3			0x033c
#define IOMUXC_SW_MUX_CTL_PAD_DI2_PIN4			0x0340
#define IOMUXC_SW_MUX_CTL_PAD_DI2_PIN2			0x0344
#define IOMUXC_SW_MUX_CTL_PAD_DI2_PIN3			0x0348
#define IOMUXC_SW_MUX_CTL_PAD_DI2_DISP_CLK		0x034c
#define IOMUXC_SW_MUX_CTL_PAD_DI_GP4			0x0350
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT0		0x0354
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT1		0x0358
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT2		0x035c
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT3		0x0360
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT4		0x0364
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT5		0x0368
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT6		0x036c
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT7		0x0370
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT8		0x0374
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT9		0x0378
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT10		0x037c
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT11		0x0380
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT12		0x0384
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT13		0x0388
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT14		0x038c
#define IOMUXC_SW_MUX_CTL_PAD_DISP2_DAT15		0x0390
#define IOMUXC_SW_MUX_CTL_PAD_SD1_CMD			0x0394
#define IOMUXC_SW_MUX_CTL_PAD_SD1_CLK			0x0398
#define IOMUXC_SW_MUX_CTL_PAD_SD1_DATA0			0x039c
#define IOMUXC_SW_MUX_CTL_PAD_SD1_DATA1			0x03a0
#define IOMUXC_SW_MUX_CTL_PAD_SD1_DATA2			0x03a4
#define IOMUXC_SW_MUX_CTL_PAD_SD1_DATA3			0x03a8
#define IOMUXC_SW_MUX_CTL_PAD_GPIO1_0			0x03ac
#define IOMUXC_SW_MUX_CTL_PAD_GPIO1_1			0x03b0
#define IOMUXC_SW_MUX_CTL_PAD_SD2_CMD			0x03b4
#define IOMUXC_SW_MUX_CTL_PAD_SD2_CLK			0x03b8
#define IOMUXC_SW_MUX_CTL_PAD_SD2_DATA0			0x03bc
#define IOMUXC_SW_MUX_CTL_PAD_SD2_DATA1			0x03c0
#define IOMUXC_SW_MUX_CTL_PAD_SD2_DATA2			0x03c4
#define IOMUXC_SW_MUX_CTL_PAD_SD2_DATA3			0x03c8
#define IOMUXC_SW_MUX_CTL_PAD_GPIO1_2			0x03cc
#define IOMUXC_SW_MUX_CTL_PAD_GPIO1_3			0x03d0
#define IOMUXC_SW_MUX_CTL_PAD_PMIC_INT_REQ		0x03d4
#define IOMUXC_SW_MUX_CTL_PAD_GPIO1_4			0x03d8
#define IOMUXC_SW_MUX_CTL_PAD_GPIO1_5			0x03dc
#define IOMUXC_SW_MUX_CTL_PAD_GPIO1_6			0x03e0
#define IOMUXC_SW_MUX_CTL_PAD_GPIO1_7			0x03e4
#define IOMUXC_SW_MUX_CTL_PAD_GPIO1_8			0x03e8
#define IOMUXC_SW_MUX_CTL_PAD_GPIO1_9			0x03ec
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D16			0x03f0
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D17			0x03f4
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D18			0x03f8
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D19			0x03fc
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D20			0x0400
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D21			0x0404
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D22			0x0408
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D23			0x040c
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D24			0x0410
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D25			0x0414
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D26			0x0418
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D27			0x041c
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D28			0x0420
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D29			0x0424
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D30			0x0428
#define IOMUXC_SW_PAD_CTL_PAD_EIM_D31			0x042c
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A16			0x0430
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A17			0x0434
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A18			0x0438
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A19			0x043c
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A20			0x0440
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A21			0x0444
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A22			0x0448
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A23			0x044c
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A24			0x0450
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A25			0x0454
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A26			0x0458
#define IOMUXC_SW_PAD_CTL_PAD_EIM_A27			0x045c
#define IOMUXC_SW_PAD_CTL_PAD_EIM_EB0			0x0460
#define IOMUXC_SW_PAD_CTL_PAD_EIM_EB1			0x0464
#define IOMUXC_SW_PAD_CTL_PAD_EIM_EB2			0x0468
#define IOMUXC_SW_PAD_CTL_PAD_EIM_EB3			0x046c
#define IOMUXC_SW_PAD_CTL_PAD_EIM_OE			0x0470
#define IOMUXC_SW_PAD_CTL_PAD_EIM_CS0			0x0474
#define IOMUXC_SW_PAD_CTL_PAD_EIM_CS1			0x0478
#define IOMUXC_SW_PAD_CTL_PAD_EIM_CS2			0x047c
#define IOMUXC_SW_PAD_CTL_PAD_EIM_CS3			0x0480
#define IOMUXC_SW_PAD_CTL_PAD_EIM_CS4			0x0484
#define IOMUXC_SW_PAD_CTL_PAD_EIM_CS5			0x0488
#define IOMUXC_SW_PAD_CTL_PAD_EIM_DTACK			0x048c
#define IOMUXC_SW_PAD_CTL_PAD_EIM_WAIT			0x0490
#define IOMUXC_SW_PAD_CTL_PAD_EIM_LBA			0x0494
#define IOMUXC_SW_PAD_CTL_PAD_EIM_BCLK			0x0498
#define IOMUXC_SW_PAD_CTL_PAD_EIM_RW			0x049c
#define IOMUXC_SW_PAD_CTL_PAD_EIM_CRE			0x04a0
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_RAS			0x04a4
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_CAS			0x04a8
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_SDWE			0x04ac
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_SDCKE0		0x04b0
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_SDCKE1		0x04b4
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_SDCLK		0x04b8
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS0		0x04bc
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS1		0x04c0
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS2		0x04c4
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_SDQS3		0x04c8
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_CS0			0x04cc
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_CS1			0x04d0
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM0			0x04d4
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM1			0x04d8
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM2			0x04dc
#define IOMUXC_SW_PAD_CTL_PAD_DRAM_DQM3			0x04e0
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_WE_B		0x04e4
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_RE_B		0x04e8
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_ALE			0x04ec
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_CLE			0x04f0
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_WP_B		0x04f4
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_RB0			0x04f8
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_RB1			0x04fc
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_RB2			0x0500
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_RB3			0x0504
#define IOMUXC_SW_PAD_CTL_PAD_EIM_SDBA2			0x0508
#define IOMUXC_SW_PAD_CTL_PAD_EIM_SDODT1		0x050c
#define IOMUXC_SW_PAD_CTL_PAD_EIM_SDODT0		0x0510
#define IOMUXC_SW_PAD_CTL_PAD_GPIO_NAND			0x0514
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_CS0			0x0518
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_CS1			0x051c
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_CS2			0x0520
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_CS3			0x0524
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_CS4			0x0528
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_CS5			0x052c
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_CS6			0x0530
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_CS7			0x0534
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_RDY_INT		0x0538
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D15			0x053c
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D14			0x0540
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D13			0x0544
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D12			0x0548
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D11			0x054c
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D10			0x0550
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D9			0x0554
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D8			0x0558
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D7			0x055c
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D6			0x0560
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D5			0x0564
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D4			0x0568
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D3			0x056c
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D2			0x0570
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D1			0x0574
#define IOMUXC_SW_PAD_CTL_PAD_NANDF_D0			0x0578
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D8			0x057c
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D9			0x0580
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D10			0x0584
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D11			0x0588
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D12			0x058c
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D13			0x0590
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D14			0x0594
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D15			0x0598
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D16			0x059c
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D17			0x05a0
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D18			0x05a4
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_D19			0x05a8
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_VSYNC		0x05ac
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_HSYNC		0x05b0
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_PIXCLK		0x05b4
#define IOMUXC_SW_PAD_CTL_PAD_CSI1_MCLK			0x05b8
#define IOMUXC_SW_PAD_CTL_PAD_CSI2_D12			0x05bc
#define IOMUXC_SW_PAD_CTL_PAD_CSI2_D13			0x05c0
#define IOMUXC_SW_PAD_CTL_PAD_CSI2_D14			0x05c4
#define IOMUXC_SW_PAD_CTL_PAD_CSI2_D15			0x05c8
#define IOMUXC_SW_PAD_CTL_PAD_CSI2_D16			0x05cc
#define IOMUXC_SW_PAD_CTL_PAD_CSI2_D17			0x05d0
#define IOMUXC_SW_PAD_CTL_PAD_CSI2_D18			0x05d4
#define IOMUXC_SW_PAD_CTL_PAD_CSI2_D19			0x05d8
#define IOMUXC_SW_PAD_CTL_PAD_CSI2_VSYNC		0x05dc
#define IOMUXC_SW_PAD_CTL_PAD_CSI2_HSYNC		0x05e0
#define IOMUXC_SW_PAD_CTL_PAD_CSI2_PIXCLK		0x05e4
#define IOMUXC_SW_PAD_CTL_PAD_I2C1_CLK			0x05e8
#define IOMUXC_SW_PAD_CTL_PAD_I2C1_DAT			0x05ec
#define IOMUXC_SW_PAD_CTL_PAD_AUD3_BB_TXD		0x05f0
#define IOMUXC_SW_PAD_CTL_PAD_AUD3_BB_RXD		0x05f4
#define IOMUXC_SW_PAD_CTL_PAD_AUD3_BB_CK		0x05f8
#define IOMUXC_SW_PAD_CTL_PAD_AUD3_BB_FS		0x05fc
#define IOMUXC_SW_PAD_CTL_PAD_CSPI1_MOSI		0x0600
#define IOMUXC_SW_PAD_CTL_PAD_CSPI1_MISO		0x0604
#define IOMUXC_SW_PAD_CTL_PAD_CSPI1_SS0			0x0608
#define IOMUXC_SW_PAD_CTL_PAD_CSPI1_SS1			0x060c
#define IOMUXC_SW_PAD_CTL_PAD_CSPI1_RDY			0x0610
#define IOMUXC_SW_PAD_CTL_PAD_CSPI1_SCLK		0x0614
#define IOMUXC_SW_PAD_CTL_PAD_UART1_RXD			0x0618
#define IOMUXC_SW_PAD_CTL_PAD_UART1_TXD			0x061c
#define IOMUXC_SW_PAD_CTL_PAD_UART1_RTS			0x0620
#define IOMUXC_SW_PAD_CTL_PAD_UART1_CTS			0x0624
#define IOMUXC_SW_PAD_CTL_PAD_UART2_RXD			0x0628
#define IOMUXC_SW_PAD_CTL_PAD_UART2_TXD			0x062c
#define IOMUXC_SW_PAD_CTL_PAD_UART3_RXD			0x0630
#define IOMUXC_SW_PAD_CTL_PAD_UART3_TXD			0x0634
#define IOMUXC_SW_PAD_CTL_PAD_OWIRE_LINE		0x0638
#define IOMUXC_SW_PAD_CTL_PAD_KEY_ROW0			0x063c
#define IOMUXC_SW_PAD_CTL_PAD_KEY_ROW1			0x0640
#define IOMUXC_SW_PAD_CTL_PAD_KEY_ROW2			0x0644
#define IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3			0x0648
#define IOMUXC_SW_PAD_CTL_PAD_KEY_COL0			0x064c
#define IOMUXC_SW_PAD_CTL_PAD_KEY_COL1			0x0650
#define IOMUXC_SW_PAD_CTL_PAD_KEY_COL2			0x0654
#define IOMUXC_SW_PAD_CTL_PAD_KEY_COL3			0x0658
#define IOMUXC_SW_PAD_CTL_PAD_KEY_COL4			0x065c
#define IOMUXC_SW_PAD_CTL_PAD_KEY_COL5			0x0660
#define IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK			0x0664
#define IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS			0x0668
#define IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI			0x066c
#define IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB		0x0670
#define IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD			0x0674
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_CLK			0x0678
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_DIR			0x067c
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_STP			0x0680
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_NXT			0x0684
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_DATA0		0x0688
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_DATA1		0x068c
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_DATA2		0x0690
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_DATA3		0x0694
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_DATA4		0x0698
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_DATA5		0x069c
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_DATA6		0x06a0
#define IOMUXC_SW_PAD_CTL_PAD_USBH1_DATA7		0x06a4
#define IOMUXC_SW_PAD_CTL_PAD_DI1_PIN11			0x06a8
#define IOMUXC_SW_PAD_CTL_PAD_DI1_PIN12			0x06ac
#define IOMUXC_SW_PAD_CTL_PAD_DI1_PIN13			0x06b0
#define IOMUXC_SW_PAD_CTL_PAD_DI1_D0_CS			0x06b4
#define IOMUXC_SW_PAD_CTL_PAD_DI1_D1_CS			0x06b8
#define IOMUXC_SW_PAD_CTL_PAD_DISPB2_SER_DIN		0x06bc
#define IOMUXC_SW_PAD_CTL_PAD_DISPB2_SER_DIO		0x06c0
#define IOMUXC_SW_PAD_CTL_PAD_DISPB2_SER_CLK		0x06c4
#define IOMUXC_SW_PAD_CTL_PAD_DISPB2_SER_RS		0x06c8
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT0		0x06cc
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT1		0x06d0
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT2		0x06d4
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT3		0x06d8
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT4		0x06dc
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT5		0x06e0
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT6		0x06e4
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT7		0x06e8
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT8		0x06ec
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT9		0x06f0
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT10		0x06f4
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT11		0x06f8
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT12		0x06fc
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT13		0x0700
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT14		0x0704
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT15		0x0708
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT16		0x070c
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT17		0x0710
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT18		0x0714
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT19		0x0718
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT20		0x071c
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT21		0x0720
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT22		0x0724
#define IOMUXC_SW_PAD_CTL_PAD_DISP1_DAT23		0x0728
#define IOMUXC_SW_PAD_CTL_PAD_DI1_PIN3			0x072c
#define IOMUXC_SW_PAD_CTL_PAD_DI1_DISP_CLK		0x0730
#define IOMUXC_SW_PAD_CTL_PAD_DI1_PIN2			0x0734
#define IOMUXC_SW_PAD_CTL_PAD_DI1_PIN15			0x0738
#define IOMUXC_SW_PAD_CTL_PAD_DI_GP1			0x073c
#define IOMUXC_SW_PAD_CTL_PAD_DI_GP2			0x0740
#define IOMUXC_SW_PAD_CTL_PAD_DI_GP3			0x0744
#define IOMUXC_SW_PAD_CTL_PAD_DI2_PIN4			0x0748
#define IOMUXC_SW_PAD_CTL_PAD_DI2_PIN2			0x074c
#define IOMUXC_SW_PAD_CTL_PAD_DI2_PIN3			0x0750
#define IOMUXC_SW_PAD_CTL_PAD_DI2_DISP_CLK		0x0754
#define IOMUXC_SW_PAD_CTL_PAD_DI_GP4			0x0758
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT0		0x075c
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT1		0x0760
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT2		0x0764
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT3		0x0768
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT4		0x076c
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT5		0x0770
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT6		0x0774
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT7		0x0778
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT8		0x077c
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT9		0x0780
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT10		0x0784
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT11		0x0788
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT12		0x078c
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT13		0x0790
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT14		0x0794
#define IOMUXC_SW_PAD_CTL_PAD_DISP2_DAT15		0x0798
#define IOMUXC_SW_PAD_CTL_PAD_SD1_CMD			0x079c
#define IOMUXC_SW_PAD_CTL_PAD_SD1_CLK			0x07a0
#define IOMUXC_SW_PAD_CTL_PAD_SD1_DATA0			0x07a4
#define IOMUXC_SW_PAD_CTL_PAD_SD1_DATA1			0x07a8
#define IOMUXC_SW_PAD_CTL_PAD_SD1_DATA2			0x07ac
#define IOMUXC_SW_PAD_CTL_PAD_SD1_DATA3			0x07b0
#define IOMUXC_SW_PAD_CTL_PAD_GPIO1_0			0x07b4
#define IOMUXC_SW_PAD_CTL_PAD_GPIO1_1			0x07b8
#define IOMUXC_SW_PAD_CTL_PAD_SD2_CMD			0x07bc
#define IOMUXC_SW_PAD_CTL_PAD_SD2_CLK			0x07c0
#define IOMUXC_SW_PAD_CTL_PAD_SD2_DATA0			0x07c4
#define IOMUXC_SW_PAD_CTL_PAD_SD2_DATA1			0x07c8
#define IOMUXC_SW_PAD_CTL_PAD_SD2_DATA2			0x07cc
#define IOMUXC_SW_PAD_CTL_PAD_SD2_DATA3			0x07d0
#define IOMUXC_SW_PAD_CTL_PAD_GPIO1_2			0x07d4
#define IOMUXC_SW_PAD_CTL_PAD_GPIO1_3			0x07d8
#define IOMUXC_SW_PAD_CTL_PAD_RESET_IN_B		0x07dc
#define IOMUXC_SW_PAD_CTL_PAD_POR_B			0x07e0
#define IOMUXC_SW_PAD_CTL_PAD_BOOT_MODE1		0x07e4
#define IOMUXC_SW_PAD_CTL_PAD_BOOT_MODE0		0x07e8
#define IOMUXC_SW_PAD_CTL_PAD_PMIC_RDY			0x07ec
#define IOMUXC_SW_PAD_CTL_PAD_CKIL			0x07f0
#define IOMUXC_SW_PAD_CTL_PAD_PMIC_STBY_REQ		0x07f4
#define IOMUXC_SW_PAD_CTL_PAD_PMIC_ON_REQ		0x07f8
#define IOMUXC_SW_PAD_CTL_PAD_PMIC_INT_REQ		0x07fc
#define IOMUXC_SW_PAD_CTL_PAD_CLK_SS			0x0800
#define IOMUXC_SW_PAD_CTL_PAD_GPIO1_4			0x0804
#define IOMUXC_SW_PAD_CTL_PAD_GPIO1_5			0x0808
#define IOMUXC_SW_PAD_CTL_PAD_GPIO1_6			0x080c
#define IOMUXC_SW_PAD_CTL_PAD_GPIO1_7			0x0810
#define IOMUXC_SW_PAD_CTL_PAD_GPIO1_8			0x0814
#define IOMUXC_SW_PAD_CTL_PAD_GPIO1_9			0x0818
#define IOMUXC_SW_PAD_CTL_GRP_CSI2_PKE0			0x081c
#define IOMUXC_SW_PAD_CTL_GRP_DDRPKS			0x0820
#define IOMUXC_SW_PAD_CTL_GRP_EIM_SR1			0x0824
#define IOMUXC_SW_PAD_CTL_GRP_DISP2_PKE0		0x0828
#define IOMUXC_SW_PAD_CTL_GRP_DRAM_B4			0x082c
#define IOMUXC_SW_PAD_CTL_GRP_INDDR			0x0830
#define IOMUXC_SW_PAD_CTL_GRP_EIM_SR2			0x0834
#define IOMUXC_SW_PAD_CTL_GRP_PKEDDR			0x0838
#define IOMUXC_SW_PAD_CTL_GRP_DDR_A0			0x083c
#define IOMUXC_SW_PAD_CTL_GRP_EMI_PKE0			0x0840
#define IOMUXC_SW_PAD_CTL_GRP_EIM_SR3			0x0844
#define IOMUXC_SW_PAD_CTL_GRP_DDR_A1			0x0848
#define IOMUXC_SW_PAD_CTL_GRP_DDRAPUS			0x084c
#define IOMUXC_SW_PAD_CTL_GRP_EIM_SR4			0x0850
#define IOMUXC_SW_PAD_CTL_GRP_EMI_SR5			0x0854
#define IOMUXC_SW_PAD_CTL_GRP_EMI_SR6			0x0858
#define IOMUXC_SW_PAD_CTL_GRP_HYSDDR0			0x085c
#define IOMUXC_SW_PAD_CTL_GRP_CSI1_PKE0			0x0860
#define IOMUXC_SW_PAD_CTL_GRP_HYSDDR1			0x0864
#define IOMUXC_SW_PAD_CTL_GRP_DISP1_PKE0		0x0868
#define IOMUXC_SW_PAD_CTL_GRP_HYSDDR2			0x086c
#define IOMUXC_SW_PAD_CTL_GRP_HVDDR			0x0870
#define IOMUXC_SW_PAD_CTL_GRP_HYSDDR3			0x0874
#define IOMUXC_SW_PAD_CTL_GRP_DRAM_SR_B0		0x0878
#define IOMUXC_SW_PAD_CTL_GRP_DDRAPKS			0x087c
#define IOMUXC_SW_PAD_CTL_GRP_DRAM_SR_B1		0x0880
#define IOMUXC_SW_PAD_CTL_GRP_DDRPUS			0x0884
#define IOMUXC_SW_PAD_CTL_GRP_EIM_DS1			0x0888
#define IOMUXC_SW_PAD_CTL_GRP_DRAM_SR_B2		0x088c
#define IOMUXC_SW_PAD_CTL_GRP_PKEADDR			0x0890
#define IOMUXC_SW_PAD_CTL_GRP_EIM_DS2			0x0894
#define IOMUXC_SW_PAD_CTL_GRP_EIM_DS3			0x0898
#define IOMUXC_SW_PAD_CTL_GRP_DRAM_SR_B4		0x089c
#define IOMUXC_SW_PAD_CTL_GRP_INMODE1			0x08a0
#define IOMUXC_SW_PAD_CTL_GRP_DRAM_B0			0x08a4
#define IOMUXC_SW_PAD_CTL_GRP_EIM_DS4			0x08a8
#define IOMUXC_SW_PAD_CTL_GRP_DRAM_B1			0x08ac
#define IOMUXC_SW_PAD_CTL_GRP_DDR_SR_A0			0x08b0
#define IOMUXC_SW_PAD_CTL_GRP_EMI_DS5			0x08b4
#define IOMUXC_SW_PAD_CTL_GRP_DRAM_B2			0x08b8
#define IOMUXC_SW_PAD_CTL_GRP_DDR_SR_A1			0x08bc
#define IOMUXC_SW_PAD_CTL_GRP_EMI_DS6			0x08c0
#define IOMUXC_AUDMUX_P4_INPUT_DA_AMX_SELECT_INPUT	0x08c4
#define IOMUXC_AUDMUX_P4_INPUT_DB_AMX_SELECT_INPUT	0x08c8
#define IOMUXC_AUDMUX_P4_INPUT_TXCLK_AMX_SELECT_INPUT	0x08cc
#define IOMUXC_AUDMUX_P4_INPUT_TXFS_AMX_SELECT_INPUT	0x08d0
#define IOMUXC_AUDMUX_P5_INPUT_DA_AMX_SELECT_INPUT	0x08d4
#define IOMUXC_AUDMUX_P5_INPUT_DB_AMX_SELECT_INPUT	0x08d8
#define IOMUXC_AUDMUX_P5_INPUT_RXCLK_AMX_SELECT_INPUT	0x08dc
#define IOMUXC_AUDMUX_P5_INPUT_RXFS_AMX_SELECT_INPUT	0x08e0
#define IOMUXC_AUDMUX_P5_INPUT_TXCLK_AMX_SELECT_INPUT	0x08e4
#define IOMUXC_AUDMUX_P5_INPUT_TXFS_AMX_SELECT_INPUT	0x08e8
#define IOMUXC_AUDMUX_P6_INPUT_DA_AMX_SELECT_INPUT	0x08ec
#define IOMUXC_AUDMUX_P6_INPUT_DB_AMX_SELECT_INPUT	0x08f0
#define IOMUXC_AUDMUX_P6_INPUT_RXCLK_AMX_SELECT_INPUT	0x08f4
#define IOMUXC_AUDMUX_P6_INPUT_RXFS_AMX_SELECT_INPUT	0x08f8
#define IOMUXC_AUDMUX_P6_INPUT_TXCLK_AMX_SELECT_INPUT	0x08fc
#define IOMUXC_AUDMUX_P6_INPUT_TXFS_AMX_SELECT_INPUT	0x0900
#define IOMUXC_CCM_IPP_DI0_CLK_SELECT_INPUT		0x0904
#define IOMUXC_CCM_IPP_DI1_CLK_SELECT_INPUT		0x0908
#define IOMUXC_CCM_PLL1_BYPASS_CLK_SELECT_INPUT		0x090c
#define IOMUXC_CCM_PLL2_BYPASS_CLK_SELECT_INPUT		0x0910
#define IOMUXC_CSPI_IPP_CSPI_CLK_IN_SELECT_INPUT	0x0914
#define IOMUXC_CSPI_IPP_IND_MISO_SELECT_INPUT		0x0918
#define IOMUXC_CSPI_IPP_IND_MOSI_SELECT_INPUT		0x091c
#define IOMUXC_CSPI_IPP_IND_SS1_B_SELECT_INPUT		0x0920
#define IOMUXC_CSPI_IPP_IND_SS2_B_SELECT_INPUT		0x0924
#define IOMUXC_CSPI_IPP_IND_SS3_B_SELECT_INPUT		0x0928
#define IOMUXC_DPLLIP1_L1T_TOG_EN_SELECT_INPUT		0x092c
#define IOMUXC_ECSPI2_IPP_IND_SS_B_1_SELECT_INPUT	0x0930
#define IOMUXC_ECSPI2_IPP_IND_SS_B_3_SELECT_INPUT	0x0934
#define IOMUXC_EMI_IPP_IND_RDY_INT_SELECT_INPUT		0x0938
#define IOMUXC_ESDHC3_IPP_DAT0_IN_SELECT_INPUT		0x093c
#define IOMUXC_ESDHC3_IPP_DAT1_IN_SELECT_INPUT		0x0940
#define IOMUXC_ESDHC3_IPP_DAT2_IN_SELECT_INPUT		0x0944
#define IOMUXC_ESDHC3_IPP_DAT3_IN_SELECT_INPUT		0x0948
#define IOMUXC_FEC_FEC_COL_SELECT_INPUT			0x094c
#define IOMUXC_FEC_FEC_CRS_SELECT_INPUT			0x0950
#define IOMUXC_FEC_FEC_MDI_SELECT_INPUT			0x0954
#define IOMUXC_FEC_FEC_RDATA_0_SELECT_INPUT		0x0958
#define IOMUXC_FEC_FEC_RDATA_1_SELECT_INPUT		0x095c
#define IOMUXC_FEC_FEC_RDATA_2_SELECT_INPUT		0x0960
#define IOMUXC_FEC_FEC_RDATA_3_SELECT_INPUT		0x0964
#define IOMUXC_FEC_FEC_RX_CLK_SELECT_INPUT		0x0968
#define IOMUXC_FEC_FEC_RX_DV_SELECT_INPUT		0x096c
#define IOMUXC_FEC_FEC_RX_ER_SELECT_INPUT		0x0970
#define IOMUXC_FEC_FEC_TX_CLK_SELECT_INPUT		0x0974
#define IOMUXC_GPIO3_IPP_IND_G_IN_1_SELECT_INPUT	0x0978
#define IOMUXC_GPIO3_IPP_IND_G_IN_2_SELECT_INPUT	0x097c
#define IOMUXC_GPIO3_IPP_IND_G_IN_3_SELECT_INPUT	0x0980
#define IOMUXC_GPIO3_IPP_IND_G_IN_4_SELECT_INPUT	0x0984
#define IOMUXC_GPIO3_IPP_IND_G_IN_5_SELECT_INPUT	0x0988
#define IOMUXC_GPIO3_IPP_IND_G_IN_6_SELECT_INPUT	0x098c
#define IOMUXC_GPIO3_IPP_IND_G_IN_7_SELECT_INPUT	0x0990
#define IOMUXC_GPIO3_IPP_IND_G_IN_8_SELECT_INPUT	0x0994
#define IOMUXC_GPIO3_IPP_IND_G_IN_12_SELECT_INPUT	0x0998
#define IOMUXC_HSC_MIPI_MIX_PAR0_VSYNC_SELECT_INPUT	0x09a4
#define IOMUXC_HSC_MIPI_MIX_PAR1_DI_WAIT_SELECT_INPUT	0x09a8
#define IOMUXC_HSC_MIPI_MIX_PAR_SISG_TRIG_SELECT_INPUT	0x09ac
#define IOMUXC_I2C1_IPP_SCL_IN_SELECT_INPUT		0x09b0
#define IOMUXC_I2C1_IPP_SDA_IN_SELECT_INPUT		0x09b4
#define IOMUXC_I2C2_IPP_SCL_IN_SELECT_INPUT		0x09b8
#define IOMUXC_I2C2_IPP_SDA_IN_SELECT_INPUT		0x09bc
#define IOMUXC_IPU_IPP_DI_0_IND_DISPB_SD_D_SELECT_INPUT	0x09c0
#define IOMUXC_IPU_IPP_DI_1_IND_DISPB_SD_D_SELECT_INPUT	0x09c4
#define IOMUXC_KPP_IPP_IND_COL_6_SELECT_INPUT		0x09c8
#define IOMUXC_KPP_IPP_IND_COL_7_SELECT_INPUT		0x09cc
#define IOMUXC_KPP_IPP_IND_ROW_4_SELECT_INPUT		0x09d0
#define IOMUXC_KPP_IPP_IND_ROW_5_SELECT_INPUT		0x09d4
#define IOMUXC_KPP_IPP_IND_ROW_6_SELECT_INPUT		0x09d8
#define IOMUXC_KPP_IPP_IND_ROW_7_SELECT_INPUT		0x09dc
#define IOMUXC_UART1_IPP_UART_RTS_B_SELECT_INPUT	0x09e0
#define IOMUXC_UART1_IPP_UART_RXD_MUX_SELECT_INPUT	0x09e4
#define IOMUXC_UART2_IPP_UART_RTS_B_SELECT_INPUT	0x09e8
#define IOMUXC_UART2_IPP_UART_RXD_MUX_SELECT_INPUT	0x09ec
#define IOMUXC_UART3_IPP_UART_RTS_B_SELECT_INPUT	0x09f0
#define IOMUXC_UART3_IPP_UART_RXD_MUX_SELECT_INPUT	0x09f4
#define IOMUXC_USBOH3_IPP_IND_UH3_CLK_SELECT_INPUT	0x09f8
#define IOMUXC_USBOH3_IPP_IND_UH3_DATA_0_SELECT_INPUT	0x09fc
#define IOMUXC_USBOH3_IPP_IND_UH3_DATA_1_SELECT_INPUT	0x0a00
#define IOMUXC_USBOH3_IPP_IND_UH3_DATA_2_SELECT_INPUT	0x0a04
#define IOMUXC_USBOH3_IPP_IND_UH3_DATA_3_SELECT_INPUT	0x0a08
#define IOMUXC_USBOH3_IPP_IND_UH3_DATA_4_SELECT_INPUT	0x0a0c
#define IOMUXC_USBOH3_IPP_IND_UH3_DATA_5_SELECT_INPUT	0x0a10
#define IOMUXC_USBOH3_IPP_IND_UH3_DATA_6_SELECT_INPUT	0x0a14
#define IOMUXC_USBOH3_IPP_IND_UH3_DATA_7_SELECT_INPUT	0x0a18
#define IOMUXC_USBOH3_IPP_IND_UH3_DIR_SELECT_INPUT	0x0a1c
#define IOMUXC_USBOH3_IPP_IND_UH3_NXT_SELECT_INPUT	0x0a20
#define IOMUXC_USBOH3_IPP_IND_UH3_STP_SELECT_INPUT	0x0a24

/* MUX & PAD Control */

#define MUX_PIN(name)				\
	IOMUX_PIN(IOMUXC_SW_MUX_CTL_PAD_##name,	\
	    IOMUXC_SW_PAD_CTL_PAD_##name)

#define MUX_PIN_MUX(name)			\
	IOMUX_PIN(IOMUXC_SW_MUX_CTL_PAD_##name, IOMUX_PAD_NONE)

#define MUX_PIN_PAD(name) \
	IOMUX_PIN(IOMUX_MUX_NONE, IOMUXC_SW_PAD_CTL_PAD_##name)

#define MUX_PIN_GRP(name) \
	IOMUX_PIN(IOMUX_MUX_NONE, IOMUXC_SW_PAD_CTL_GRP_##name)

#define MUX_PIN_PATH(name) \
	IOMUX_PIN(IOMUXC_##name##_SELECT_INPUT, IOMUX_MUX_NONE)

/* INPUT Control */

#define MUX_SELECT(name) (name##_SELECT_INPUT)

#endif /* _IMX51_IOMUXREG_H */
