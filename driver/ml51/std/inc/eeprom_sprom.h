/*---------------------------------------------------------------------------------------------------------*/
/*                                                                                                         */
/* SPDX-License-Identifier: Apache-2.0                                                                     */
/* Copyright(c) 2020 Nuvoton Technology Corp. All rights reserved.                                         */
/*                                                                                                         */
/*---------------------------------------------------------------------------------------------------------*/

unsigned char Read_SPROM_BYTE(const __code *u8_addr);
void Write_SPROM_DATAFLASH_ARRAY(unsigned char u8_addr, unsigned char *pDat, unsigned int num);
void Read_SPROM_DATAFLASH_ARRAY(unsigned int u16_addr, unsigned char *pDat, unsigned int num);

