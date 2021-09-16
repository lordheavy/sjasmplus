/*

  SjASMPlus Z80 Cross Compiler - modified - SAVECPCSNA extension

  Copyright (c) 2006 Sjoerd Mastijn (original SW)

  This software is provided 'as-is', without any express or implied warranty.
  In no event will the authors be held liable for any damages arising from the
  use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it freely,
  subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not claim
	 that you wrote the original software. If you use this software in a product,
	 an acknowledgment in the product documentation would be appreciated but is
	 not required.

  2. Altered source versions must be plainly marked as such, and must not be
	 misrepresented as being the original software.

  3. This notice may not be removed or altered from any source distribution.

*/

// io_cpc.h

#ifndef __IO_CPC
#define __IO_CPC

enum ECDTHeadlessFormat { AMSTRAD, SPECTRUM };

int SaveSNA_CPC(const char* fname, word start);

void SaveCDT_Snapshot(const char* fname, aint startAddr);
void SaveCDT_SnapshotWithPalette(const char* fname, aint startAddr, byte screenMode, const byte* palette);
void SaveCDT_BASIC(const char* fname, const char* tfname, aint startAddr, aint length);
void SaveCDT_Code(const char* fname, const char* tfname, aint startAddr, aint length, aint entryAddr);
void SaveCDT_Headless(const char* fname, aint startAddr, aint length, byte sync, ECDTHeadlessFormat format);

void dirSAVECPCSNA();
void dirSAVECDT();

#endif

// eof io_cpc.h
