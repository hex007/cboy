/*************************************************************************
 *   Cboy, a Game Boy emulator
 *   Copyright (C) 2014 jkbenaim
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ************************************************************************/

#ifndef _MBC_C_MBC5_H_
#define _MBC_C_MBC5_H_
extern void mbc_c_mbc5_install();
uint8_t mbc_c_mbc5_read_bank_0( uint16_t address );
uint8_t mbc_c_mbc5_read_bank_n( uint16_t address );
uint8_t mbc_c_mbc5_read_extram( uint16_t address );
uint8_t mbc_c_mbc5_read_ff( uint16_t address );
uint8_t mbc_c_mbc5_read_rtc( uint16_t address );
void mbc_c_mbc5_write_bank_0( uint16_t address, uint8_t data );
void mbc_c_mbc5_write_bank_n( uint16_t address, uint8_t data );
void mbc_c_mbc5_write_dummy( uint16_t address, uint8_t data );
void mbc_c_mbc5_write_extram( uint16_t address, uint8_t data );
void mbc_c_mbc5_write_ram_enable( uint16_t address, uint8_t data );
void mbc_c_mbc5_write_rom_bank_select_low( uint16_t address, uint8_t data );
void mbc_c_mbc5_write_rom_bank_select_high( uint16_t address, uint8_t data );
void mbc_c_mbc5_set_rom_bank();
void mbc_c_mbc5_write_ram_bank_select( uint16_t address, uint8_t data );
void mbc_c_mbc5_cleanup();

#endif // _MBC_C_MBC5_H_
