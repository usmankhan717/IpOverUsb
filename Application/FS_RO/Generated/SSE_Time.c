/*********************************************************************
*                   (c) SEGGER Microcontroller GmbH                  *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*       (c) 2003 - 2019     SEGGER Microcontroller GmbH              *
*                                                                    *
*       www.segger.com     Support: support_emusb@segger.com         *
*                                                                    *
**********************************************************************
*                                                                    *
*       emUSB-Device * USB Device stack for embedded applications    *
*                                                                    *
*                                                                    *
*       Please note:                                                 *
*                                                                    *
*       Knowledge of this file may under no circumstances            *
*       be used to write a similar product.                          *
*                                                                    *
*       Thank you for your fairness !                                *
*                                                                    *
**********************************************************************
*                                                                    *
*       emUSB-Device version: V3.19-r15500                           *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File    : SSE_Time.c
Purpose : Automatically created from html\SSE_Time.htm using Bin2C.exe
--------  END-OF-HEADER  ---------------------------------------------
*/

#include "SSE_Time.h"

const unsigned char sse_time_file[1191] =
{
 0x3c,  0x21,  0x44,  0x4f,  0x43,  0x54,  0x59,  0x50,  0x45,  0x20,
 0x68,  0x74,  0x6d,  0x6c,  0x3e,  0x0d,  0x0a,  0x3c,  0x68,  0x74,
 0x6d,  0x6c,  0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x3c,  0x68,  0x65,
 0x61,  0x64,  0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x20,  0x20,  0x3c,
 0x74,  0x69,  0x74,  0x6c,  0x65,  0x3e,  0x53,  0x65,  0x72,  0x76,
 0x65,  0x72,  0x2d,  0x53,  0x65,  0x6e,  0x74,  0x20,  0x45,  0x76,
 0x65,  0x6e,  0x74,  0x73,  0x20,  0x28,  0x53,  0x53,  0x45,  0x29,
 0x20,  0x65,  0x78,  0x61,  0x6d,  0x70,  0x6c,  0x65,  0x3c,  0x2f,
 0x74,  0x69,  0x74,  0x6c,  0x65,  0x3e,  0x0d,  0x0a,  0x20,  0x20,
 0x20,  0x20,  0x3c,  0x6c,  0x69,  0x6e,  0x6b,  0x20,  0x68,  0x72,
 0x65,  0x66,  0x3d,  0x22,  0x53,  0x74,  0x79,  0x6c,  0x65,  0x73,
 0x2e,  0x63,  0x73,  0x73,  0x22,  0x20,  0x72,  0x65,  0x6c,  0x3d,
 0x22,  0x73,  0x74,  0x79,  0x6c,  0x65,  0x73,  0x68,  0x65,  0x65,
 0x74,  0x22,  0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x20,  0x20,  0x3c,
 0x73,  0x63,  0x72,  0x69,  0x70,  0x74,  0x20,  0x73,  0x72,  0x63,
 0x3d,  0x22,  0x65,  0x76,  0x65,  0x6e,  0x74,  0x73,  0x2e,  0x6a,
 0x73,  0x22,  0x3e,  0x3c,  0x2f,  0x73,  0x63,  0x72,  0x69,  0x70,
 0x74,  0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x20,  0x20,  0x3c,  0x73,
 0x63,  0x72,  0x69,  0x70,  0x74,  0x3e,  0x0d,  0x0a,  0x20,  0x20,
 0x20,  0x20,  0x20,  0x20,  0x69,  0x66,  0x28,  0x74,  0x79,  0x70,
 0x65,  0x6f,  0x66,  0x28,  0x45,  0x76,  0x65,  0x6e,  0x74,  0x53,
 0x6f,  0x75,  0x72,  0x63,  0x65,  0x29,  0x20,  0x21,  0x3d,  0x3d,
 0x20,  0x22,  0x75,  0x6e,  0x64,  0x65,  0x66,  0x69,  0x6e,  0x65,
 0x64,  0x22,  0x29,  0x20,  0x7b,  0x0d,  0x0a,  0x20,  0x20,  0x20,
 0x20,  0x20,  0x20,  0x20,  0x20,  0x76,  0x61,  0x72,  0x20,  0x73,
 0x6f,  0x75,  0x72,  0x63,  0x65,  0x20,  0x3d,  0x20,  0x6e,  0x65,
 0x77,  0x20,  0x45,  0x76,  0x65,  0x6e,  0x74,  0x53,  0x6f,  0x75,
 0x72,  0x63,  0x65,  0x28,  0x22,  0x53,  0x53,  0x45,  0x54,  0x69,
 0x6d,  0x65,  0x2e,  0x63,  0x67,  0x69,  0x22,  0x29,  0x3b,  0x0d,
 0x0a,  0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x73,
 0x6f,  0x75,  0x72,  0x63,  0x65,  0x2e,  0x6f,  0x6e,  0x6d,  0x65,
 0x73,  0x73,  0x61,  0x67,  0x65,  0x20,  0x3d,  0x20,  0x66,  0x75,
 0x6e,  0x63,  0x74,  0x69,  0x6f,  0x6e,  0x28,  0x65,  0x76,  0x65,
 0x6e,  0x74,  0x29,  0x20,  0x7b,  0x0d,  0x0a,  0x20,  0x20,  0x20,
 0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x64,  0x6f,  0x63,
 0x75,  0x6d,  0x65,  0x6e,  0x74,  0x2e,  0x67,  0x65,  0x74,  0x45,
 0x6c,  0x65,  0x6d,  0x65,  0x6e,  0x74,  0x42,  0x79,  0x49,  0x64,
 0x28,  0x22,  0x53,  0x79,  0x73,  0x54,  0x69,  0x6d,  0x65,  0x22,
 0x29,  0x2e,  0x69,  0x6e,  0x6e,  0x65,  0x72,  0x48,  0x54,  0x4d,
 0x4c,  0x20,  0x20,  0x3d,  0x20,  0x22,  0x3c,  0x68,  0x32,  0x3e,
 0x22,  0x20,  0x2b,  0x20,  0x65,  0x76,  0x65,  0x6e,  0x74,  0x2e,
 0x64,  0x61,  0x74,  0x61,  0x20,  0x2b,  0x20,  0x22,  0x3c,  0x2f,
 0x68,  0x32,  0x3e,  0x22,  0x3b,  0x0d,  0x0a,  0x20,  0x20,  0x20,
 0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x64,  0x6f,  0x63,
 0x75,  0x6d,  0x65,  0x6e,  0x74,  0x2e,  0x67,  0x65,  0x74,  0x45,
 0x6c,  0x65,  0x6d,  0x65,  0x6e,  0x74,  0x42,  0x79,  0x49,  0x64,
 0x28,  0x22,  0x53,  0x79,  0x73,  0x54,  0x69,  0x6d,  0x65,  0x22,
 0x29,  0x2e,  0x69,  0x6e,  0x6e,  0x65,  0x72,  0x48,  0x54,  0x4d,
 0x4c,  0x20,  0x2b,  0x3d,  0x20,  0x22,  0x54,  0x68,  0x65,  0x20,
 0x62,  0x72,  0x6f,  0x77,  0x73,  0x65,  0x72,  0x20,  0x67,  0x65,
 0x74,  0x73,  0x20,  0x74,  0x68,  0x65,  0x20,  0x73,  0x79,  0x73,
 0x74,  0x65,  0x6d,  0x20,  0x74,  0x69,  0x6d,  0x65,  0x20,  0x76,
 0x69,  0x61,  0x20,  0x53,  0x65,  0x72,  0x76,  0x65,  0x72,  0x2d,
 0x53,  0x65,  0x6e,  0x74,  0x20,  0x45,  0x76,  0x65,  0x6e,  0x74,
 0x73,  0x20,  0x28,  0x53,  0x53,  0x45,  0x29,  0x2e,  0x3c,  0x62,
 0x72,  0x3e,  0x4e,  0x6f,  0x20,  0x6d,  0x65,  0x74,  0x61,  0x20,
 0x72,  0x65,  0x66,  0x72,  0x65,  0x73,  0x68,  0x20,  0x28,  0x72,
 0x65,  0x6c,  0x6f,  0x61,  0x64,  0x29,  0x20,  0x72,  0x65,  0x71,
 0x75,  0x69,  0x72,  0x65,  0x64,  0x21,  0x22,  0x3b,  0x0d,  0x0a,
 0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x7d,  0x3b,
 0x0d,  0x0a,  0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x7d,  0x20,
 0x65,  0x6c,  0x73,  0x65,  0x20,  0x7b,  0x0d,  0x0a,  0x20,  0x20,
 0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x64,  0x6f,  0x63,  0x75,
 0x6d,  0x65,  0x6e,  0x74,  0x2e,  0x67,  0x65,  0x74,  0x45,  0x6c,
 0x65,  0x6d,  0x65,  0x6e,  0x74,  0x42,  0x79,  0x49,  0x64,  0x28,
 0x22,  0x53,  0x79,  0x73,  0x54,  0x69,  0x6d,  0x65,  0x22,  0x29,
 0x2e,  0x69,  0x6e,  0x6e,  0x65,  0x72,  0x48,  0x54,  0x4d,  0x4c,
 0x20,  0x3d,  0x20,  0x22,  0x53,  0x6f,  0x72,  0x72,  0x79,  0x2c,
 0x20,  0x79,  0x6f,  0x75,  0x72,  0x20,  0x62,  0x72,  0x6f,  0x77,
 0x73,  0x65,  0x72,  0x20,  0x64,  0x6f,  0x65,  0x73,  0x20,  0x6e,
 0x6f,  0x74,  0x20,  0x73,  0x75,  0x70,  0x70,  0x6f,  0x72,  0x74,
 0x20,  0x53,  0x65,  0x72,  0x76,  0x65,  0x72,  0x2d,  0x53,  0x65,
 0x6e,  0x74,  0x20,  0x45,  0x76,  0x65,  0x6e,  0x74,  0x73,  0x20,
 0x28,  0x53,  0x53,  0x45,  0x29,  0x2e,  0x2e,  0x2e,  0x22,  0x3b,
 0x0d,  0x0a,  0x20,  0x20,  0x20,  0x20,  0x20,  0x20,  0x7d,  0x0d,
 0x0a,  0x20,  0x20,  0x20,  0x20,  0x3c,  0x2f,  0x73,  0x63,  0x72,
 0x69,  0x70,  0x74,  0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x3c,  0x2f,
 0x68,  0x65,  0x61,  0x64,  0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x3c,
 0x62,  0x6f,  0x64,  0x79,  0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x20,
 0x20,  0x3c,  0x68,  0x65,  0x61,  0x64,  0x65,  0x72,  0x3e,  0x53,
 0x65,  0x72,  0x76,  0x65,  0x72,  0x2d,  0x53,  0x65,  0x6e,  0x74,
 0x20,  0x45,  0x76,  0x65,  0x6e,  0x74,  0x73,  0x20,  0x28,  0x53,
 0x53,  0x45,  0x29,  0x20,  0x65,  0x78,  0x61,  0x6d,  0x70,  0x6c,
 0x65,  0x20,  0x3c,  0x2f,  0x68,  0x65,  0x61,  0x64,  0x65,  0x72,
 0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x20,  0x20,  0x3c,  0x64,  0x69,
 0x76,  0x20,  0x69,  0x64,  0x3d,  0x22,  0x53,  0x79,  0x73,  0x54,
 0x69,  0x6d,  0x65,  0x22,  0x20,  0x63,  0x6c,  0x61,  0x73,  0x73,
 0x3d,  0x22,  0x63,  0x6f,  0x6e,  0x74,  0x65,  0x6e,  0x74,  0x22,
 0x3e,  0x3c,  0x62,  0x72,  0x3e,  0x3c,  0x2f,  0x64,  0x69,  0x76,
 0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x20,  0x20,  0x3c,  0x69,  0x6d,
 0x67,  0x20,  0x73,  0x72,  0x63,  0x3d,  0x22,  0x4c,  0x6f,  0x67,
 0x6f,  0x2e,  0x67,  0x69,  0x66,  0x22,  0x20,  0x61,  0x6c,  0x74,
 0x3d,  0x22,  0x53,  0x65,  0x67,  0x67,  0x65,  0x72,  0x20,  0x6c,
 0x6f,  0x67,  0x6f,  0x22,  0x20,  0x63,  0x6c,  0x61,  0x73,  0x73,
 0x3d,  0x22,  0x6c,  0x6f,  0x67,  0x6f,  0x22,  0x3e,  0x0d,  0x0a,
 0x20,  0x20,  0x20,  0x20,  0x3c,  0x66,  0x6f,  0x6f,  0x74,  0x65,
 0x72,  0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x20,  0x20,  0x20,  0x20,
 0x20,  0x3c,  0x70,  0x3e,  0x3c,  0x61,  0x20,  0x68,  0x72,  0x65,
 0x66,  0x3d,  0x22,  0x69,  0x6e,  0x64,  0x65,  0x78,  0x2e,  0x68,
 0x74,  0x6d,  0x22,  0x3e,  0x42,  0x61,  0x63,  0x6b,  0x20,  0x74,
 0x6f,  0x20,  0x6d,  0x61,  0x69,  0x6e,  0x3c,  0x2f,  0x61,  0x3e,
 0x3c,  0x2f,  0x70,  0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x20,  0x20,
 0x20,  0x20,  0x20,  0x3c,  0x70,  0x3e,  0x53,  0x45,  0x47,  0x47,
 0x45,  0x52,  0x20,  0x4d,  0x69,  0x63,  0x72,  0x6f,  0x63,  0x6f,
 0x6e,  0x74,  0x72,  0x6f,  0x6c,  0x6c,  0x65,  0x72,  0x20,  0x47,
 0x6d,  0x62,  0x48,  0x20,  0x7c,  0x7c,  0x20,  0x3c,  0x61,  0x20,
 0x68,  0x72,  0x65,  0x66,  0x3d,  0x22,  0x68,  0x74,  0x74,  0x70,
 0x3a,  0x2f,  0x2f,  0x77,  0x77,  0x77,  0x2e,  0x73,  0x65,  0x67,
 0x67,  0x65,  0x72,  0x2e,  0x63,  0x6f,  0x6d,  0x22,  0x3e,  0x77,
 0x77,  0x77,  0x2e,  0x73,  0x65,  0x67,  0x67,  0x65,  0x72,  0x2e,
 0x63,  0x6f,  0x6d,  0x3c,  0x2f,  0x61,  0x3e,  0x20,  0x3c,  0x73,
 0x70,  0x61,  0x6e,  0x20,  0x63,  0x6c,  0x61,  0x73,  0x73,  0x3d,
 0x22,  0x68,  0x69,  0x6e,  0x74,  0x22,  0x3e,  0x28,  0x65,  0x78,
 0x74,  0x65,  0x72,  0x6e,  0x61,  0x6c,  0x20,  0x6c,  0x69,  0x6e,
 0x6b,  0x29,  0x3c,  0x2f,  0x73,  0x70,  0x61,  0x6e,  0x3e,  0x20,
 0x3c,  0x2f,  0x70,  0x3e,  0x0d,  0x0a,  0x20,  0x20,  0x20,  0x20,
 0x3c,  0x2f,  0x66,  0x6f,  0x6f,  0x74,  0x65,  0x72,  0x3e,  0x0d,
 0x0a,  0x20,  0x20,  0x3c,  0x2f,  0x62,  0x6f,  0x64,  0x79,  0x3e,
 0x0d,  0x0a,  0x3c,  0x2f,  0x68,  0x74,  0x6d,  0x6c,  0x3e,  0x0d,
 0x0a, };

/****** End Of File *************************************************/