﻿/****************************************************************************************************
    This source code was generated by Solid Memory Map tool.
****************************************************************************************************/

const static SOLID_MEM_CONF myMemories[] =
{
    { 0x20100000, 0x180000, SOLID_RAM, "RAM", NO_ADDRESS,  },
    { 0x20280000, 0x100000, SOLID_RAM, "TRACE_POINT", 0xF5000000 },
    { 0x20380000, 0x18000, SOLID_IO, "JPEG", 0xF6000000 },
    { 0x20398000, 0xE8000, SOLID_RAM, "JPEG_READ_BUF", 0xF6018000 },
    { 0x20480000, 0x180000, SOLID_IO, "FRAME", 0xF6100000 },
#if USE_TASAN
    { 0x20600000, 0x100000, SOLID_RAM, "TASAN", 0x40000000 },
#endif /* USE_TASAN */
    { 0x20700000, 0x100000, SOLID_RAM, "MEMFS", 0xF7000000 },
    { 0x20800000, 0x300000, SOLID_CORE, "SOLID", 0xF8000000 },
    { 0xE8000000, 0x20000, SOLID_IO, "SLV3", 0xF0000000 },
    { 0xE8030000, 0x20000, SOLID_IO, "SLV2", 0xF0030000 },
    { 0xE8100000, 0x40000, SOLID_IO, "SLV5", 0xF0100000 },
    { 0xE8200000, 0x15800, SOLID_IO, "SLV4", 0xF0200000 },
    { 0xF0000000, 0x2000, SOLID_IO, "CA9", 0xF1000000 },
    { 0xFC000000, 0x80000, SOLID_IO, "SLV6", 0xF1100000 },
    { 0xFCFE0000, 0x10000, SOLID_IO, "SLV1", 0xF1200000 },
    { 0xFCFF0000, 0x10000, SOLID_IO, "SLV0", 0xF1210000 },
    { NO_ADDRESS, 0x1000000, SOLID_RESERVE, "IOAREA", 0xFA000000 },
    { NO_ADDRESS, 0x300000, SOLID_RESERVE, "OSSTACK", 0xF8300000 },
    { NO_ADDRESS, 0x80000, SOLID_RESERVE, "SOLID_HEAP", 0xF8700000 },
};