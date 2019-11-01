/*
* Copyright (c) 2017-2019, Intel Corporation
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the "Software"),
* to deal in the Software without restriction, including without limitation
* the rights to use, copy, modify, merge, publish, distribute, sublicense,
* and/or sell copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*/
//!
//! \file      cm_gpuinit_kernel_g12lp.h  
//! \brief     Contains binary of GPUInit kernel on gen12lp.
//!

#pragma once

#ifdef IGFX_GEN12_TGLLP_SUPPORTED
unsigned int iGPUInit_kernel_isa_size_gen12lp = 4235;

unsigned char pGPUInit_kernel_isa_gen12lp[] = {
0x43, 0x49, 0x53, 0x41, 0x03, 0x06, 0x02, 0x00, 0x0f, 0x73, 0x75, 0x72, 0x66, 0x61, 0x63, 0x65, 0x43, 0x6f, 0x70, 0x79, 0x5f, 0x73, 0x65, 0x74, 0x65, 0x00, 0x00, 0x00, 0x7d, 0x04, 0x00, 0x00, 
0xdd, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0c, 0xe2, 0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x14, 0x73, 0x75, 0x72, 0x66, 0x61, 0x63, 0x65, 0x43, 0x6f, 0x70, 0x79, 0x5f, 0x73, 
0x65, 0x74, 0x5f, 0x4e, 0x56, 0x31, 0x32, 0x02, 0x07, 0x00, 0x00, 0x99, 0x05, 0x00, 0x00, 0xbd, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0c, 0x9b, 0x0c, 0x00, 0x00, 0xf0, 0x03, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x73, 0x75, 0x72, 0x66, 0x61, 0x63, 0x65, 0x43, 0x6f, 0x70, 0x79, 0x5f, 0x73, 0x65, 0x74, 0x00, 0x6e, 0x75, 0x6c, 0x6c, 0x00, 0x74, 0x68, 
0x72, 0x65, 0x61, 0x64, 0x5f, 0x78, 0x00, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x5f, 0x79, 0x00, 0x67, 0x72, 0x6f, 0x75, 0x70, 0x5f, 0x69, 0x64, 0x5f, 0x78, 0x00, 0x67, 0x72, 0x6f, 0x75, 0x70, 
0x5f, 0x69, 0x64, 0x5f, 0x79, 0x00, 0x67, 0x72, 0x6f, 0x75, 0x70, 0x5f, 0x69, 0x64, 0x5f, 0x7a, 0x00, 0x74, 0x73, 0x63, 0x00, 0x72, 0x30, 0x00, 0x61, 0x72, 0x67, 0x00, 0x72, 0x65, 0x74, 0x76, 
0x61, 0x6c, 0x00, 0x73, 0x70, 0x00, 0x66, 0x70, 0x00, 0x68, 0x77, 0x5f, 0x69, 0x64, 0x00, 0x73, 0x72, 0x30, 0x00, 0x63, 0x72, 0x30, 0x00, 0x63, 0x65, 0x30, 0x00, 0x64, 0x62, 0x67, 0x30, 0x00, 
0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x54, 0x30, 0x00, 0x54, 0x31, 0x00, 0x54, 0x32, 0x00, 0x54, 0x33, 0x00, 0x54, 0x32, 0x35, 0x32, 0x00, 0x54, 0x32, 0x35, 0x35, 0x00, 0x53, 0x33, 0x31, 0x00, 
0x49, 0x6e, 0x70, 0x75, 0x74, 0x30, 0x00, 0x56, 0x33, 0x32, 0x00, 0x56, 0x33, 0x33, 0x00, 0x56, 0x33, 0x34, 0x00, 0x56, 0x33, 0x35, 0x00, 0x56, 0x33, 0x36, 0x00, 0x56, 0x33, 0x37, 0x00, 0x56, 
0x33, 0x38, 0x00, 0x56, 0x33, 0x39, 0x00, 0x56, 0x34, 0x30, 0x00, 0x56, 0x34, 0x31, 0x00, 0x56, 0x34, 0x32, 0x00, 0x56, 0x34, 0x33, 0x00, 0x56, 0x34, 0x34, 0x00, 0x73, 0x75, 0x72, 0x66, 0x61, 
0x63, 0x65, 0x43, 0x6f, 0x70, 0x79, 0x5f, 0x73, 0x65, 0x74, 0x5f, 0x42, 0x42, 0x5f, 0x30, 0x5f, 0x31, 0x00, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x31, 0x00, 0x41, 0x73, 0x6d, 0x4e, 0x61, 0x6d, 0x65, 
0x00, 0x4e, 0x6f, 0x42, 0x61, 0x72, 0x72, 0x69, 0x65, 0x72, 0x00, 0x54, 0x61, 0x72, 0x67, 0x65, 0x74, 0x00, 0x64, 0x3a, 0x5c, 0x63, 0x79, 0x67, 0x77, 0x69, 0x6e, 0x36, 0x34, 0x5c, 0x68, 0x6f, 
0x6d, 0x65, 0x5c, 0x73, 0x68, 0x65, 0x6e, 0x67, 0x63, 0x6f, 0x6e, 0x5c, 0x64, 0x65, 0x76, 0x5f, 0x6d, 0x65, 0x64, 0x69, 0x61, 0x5c, 0x53, 0x57, 0x45, 0x5f, 0x4d, 0x65, 0x64, 0x69, 0x61, 0x5f, 
0x43, 0x4d, 0x5f, 0x52, 0x54, 0x5c, 0x6d, 0x61, 0x69, 0x6e, 0x6c, 0x69, 0x6e, 0x65, 0x5c, 0x75, 0x74, 0x69, 0x6c, 0x69, 0x74, 0x69, 0x65, 0x73, 0x5c, 0x47, 0x50, 0x55, 0x5f, 0x43, 0x6f, 0x70, 
0x79, 0x5f, 0x49, 0x6e, 0x69, 0x74, 0x5f, 0x4b, 0x65, 0x72, 0x6e, 0x65, 0x6c, 0x32, 0x42, 0x69, 0x6e, 0x61, 0x72, 0x79, 0x5c, 0x47, 0x50, 0x55, 0x49, 0x6e, 0x69, 0x74, 0x5f, 0x6b, 0x65, 0x72, 
0x6e, 0x65, 0x6c, 0x5f, 0x67, 0x65, 0x6e, 0x78, 0x2e, 0x63, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x61, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x12, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x12, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x1f, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 
0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 
0x20, 0x01, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x20, 0x01, 
0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x28, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x28, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x29, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 
0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x02, 0x06, 0x00, 0x00, 0x00, 0x24, 0x00, 0x04, 0x00, 0xbc, 0x01, 0x00, 0x00, 0xc1, 0x02, 0x00, 0x00, 0x03, 0x00, 0x2a, 0x00, 0x00, 
0x00, 0x19, 0x47, 0x50, 0x55, 0x49, 0x6e, 0x69, 0x74, 0x5f, 0x6b, 0x65, 0x72, 0x6e, 0x65, 0x6c, 0x5f, 0x67, 0x65, 0x6e, 0x78, 0x5f, 0x30, 0x2e, 0x61, 0x73, 0x6d, 0x2b, 0x00, 0x00, 0x00, 0x00, 
0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x30, 0x00, 0x00, 0x51, 0x2d, 0x00, 0x00, 0x00, 0x52, 0x1a, 0x00, 0x00, 0x00, 0x29, 0x04, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x29, 0x04, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x29, 
0x04, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x29, 0x04, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x06, 0x00, 
0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x52, 0x1c, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x24, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x05, 0x01, 0x07, 0x00, 
0x00, 0x00, 0x52, 0x1d, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x24, 0x00, 0x00, 
0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x05, 0x01, 0x03, 0x00, 0x00, 0x00, 0x52, 0x22, 0x00, 0x00, 0x00, 0x38, 0x00, 
0x06, 0x00, 0x20, 0x08, 0x00, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x23, 0x00, 0x00, 
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x05, 0x01, 0x20, 0x00, 0x00, 0x00, 0x38, 0x00, 0x06, 
0x00, 0x20, 0x08, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x24, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x05, 0x01, 0x40, 0x00, 0x00, 0x00, 0x38, 0x00, 0x06, 0x00, 
0x20, 0x08, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x25, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x05, 0x01, 0x60, 0x00, 0x00, 0x00, 0x38, 0x00, 0x06, 0x00, 0x20, 
0x08, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x26, 0x00, 0x00, 0x00, 0x34, 0x00, 
0x00, 0x00, 0x65, 0x01, 0x00, 0x80, 0x10, 0x82, 0x66, 0x01, 0x24, 0x00, 0x00, 0x01, 0xff, 0x0f, 0xff, 0x0f, 0x61, 0x00, 0x04, 0x00, 0xa0, 0x0a, 0x05, 0x02, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x68, 0x00, 0x00, 0x80, 0x10, 0x82, 0x46, 0x01, 0x24, 0x00, 0x00, 0x01, 0x0c, 0x00, 0x0c, 0x00, 0x61, 0x00, 0x04, 0x00, 0xa0, 0x0a, 0x05, 0x04, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x69, 0x04, 0x00, 0x00, 0x60, 0x81, 0x85, 0x01, 0x64, 0x01, 0x00, 0x05, 0x07, 0x00, 0x07, 0x00, 0x61, 0x00, 0x04, 0x00, 0xa0, 0x0a, 0x05, 0x06, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x65, 0x04, 0x00, 0x80, 0x10, 0x81, 0x55, 0x01, 0x44, 0x01, 0x00, 0x01, 0xff, 0x0f, 0xff, 0x0f, 0x61, 0x00, 0x04, 0x00, 0xa0, 0x0a, 0x05, 0x08, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 0x0a, 0x05, 0x0a, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x00, 0x80, 
0x0a, 0x02, 0x69, 0x04, 0x00, 0x00, 0x60, 0x81, 0x25, 0x0a, 0x54, 0x01, 0x00, 0x05, 0x03, 0x00, 0x03, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x4a, 0x45, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 
0x07, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 0x0a, 0x05, 0x0b, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x07, 0x00, 0x80, 0xa0, 0x0a, 0x05, 0x0a, 0x84, 0x01, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x60, 0x86, 0x05, 0x0b, 0x84, 0x01, 0x00, 0x05, 0x20, 0x00, 0x20, 0x00, 0x31, 0xa0, 0x03, 0x80, 0x00, 0x00, 0x01, 0x00, 0x04, 0x0a, 0x00, 0xc0, 0x44, 0x02, 
0x00, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x4a, 0x45, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x07, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x00, 0x80, 
0x0a, 0x02, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x0a, 0x25, 0x0b, 0x24, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 0x0a, 0x05, 0x0c, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x31, 0xa1, 0x03, 0x80, 0x00, 0x00, 0x01, 0x00, 0x04, 0x0b, 0x00, 0xc0, 0x44, 0x02, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x60, 0x86, 0x05, 0x0c, 0x84, 0x01, 0x00, 0x05, 0x40, 0x00, 
0x40, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x4a, 0x45, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x07, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x00, 0x80, 
0x0a, 0x02, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x0a, 0x25, 0x0c, 0x24, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 0x0a, 0x05, 0x0d, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x31, 0xa2, 0x03, 0x80, 0x00, 0x00, 0x01, 0x00, 0x04, 0x0c, 0x00, 0xc0, 0x44, 0x02, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x60, 0x86, 0x05, 0x0d, 0x84, 0x01, 0x00, 0x05, 0x60, 0x00, 
0x60, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x4a, 0x45, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x07, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x00, 0x80, 
0x0a, 0x02, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x0a, 0x25, 0x0d, 0x24, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 0x0a, 0x05, 0x7f, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x31, 0xa3, 0x03, 0x80, 0x00, 0x00, 0x01, 0x00, 0x04, 0x0d, 0x00, 0xc0, 0x44, 0x02, 0x00, 0x00, 0x31, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0c, 0x7f, 0x20, 0x70, 0x00, 0x00, 
0x00, 0x00, 0x31, 0x00, 0x00, 0x00, 0x73, 0x75, 0x72, 0x66, 0x61, 0x63, 0x65, 0x43, 0x6f, 0x70, 0x79, 0x5f, 0x73, 0x65, 0x74, 0x5f, 0x4e, 0x56, 0x31, 0x32, 0x00, 0x6e, 0x75, 0x6c, 0x6c, 0x00, 
0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x5f, 0x78, 0x00, 0x74, 0x68, 0x72, 0x65, 0x61, 0x64, 0x5f, 0x79, 0x00, 0x67, 0x72, 0x6f, 0x75, 0x70, 0x5f, 0x69, 0x64, 0x5f, 0x78, 0x00, 0x67, 0x72, 0x6f, 
0x75, 0x70, 0x5f, 0x69, 0x64, 0x5f, 0x79, 0x00, 0x67, 0x72, 0x6f, 0x75, 0x70, 0x5f, 0x69, 0x64, 0x5f, 0x7a, 0x00, 0x74, 0x73, 0x63, 0x00, 0x72, 0x30, 0x00, 0x61, 0x72, 0x67, 0x00, 0x72, 0x65, 
0x74, 0x76, 0x61, 0x6c, 0x00, 0x73, 0x70, 0x00, 0x66, 0x70, 0x00, 0x68, 0x77, 0x5f, 0x69, 0x64, 0x00, 0x73, 0x72, 0x30, 0x00, 0x63, 0x72, 0x30, 0x00, 0x63, 0x65, 0x30, 0x00, 0x64, 0x62, 0x67, 
0x30, 0x00, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x54, 0x30, 0x00, 0x54, 0x31, 0x00, 0x54, 0x32, 0x00, 0x54, 0x33, 0x00, 0x54, 0x32, 0x35, 0x32, 0x00, 0x54, 0x32, 0x35, 0x35, 0x00, 0x53, 0x33, 
0x31, 0x00, 0x56, 0x33, 0x32, 0x00, 0x56, 0x33, 0x33, 0x00, 0x56, 0x33, 0x34, 0x00, 0x56, 0x33, 0x35, 0x00, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x30, 0x00, 0x56, 0x33, 0x36, 0x00, 0x56, 0x33, 0x37, 
0x00, 0x56, 0x33, 0x38, 0x00, 0x56, 0x33, 0x39, 0x00, 0x56, 0x34, 0x30, 0x00, 0x56, 0x34, 0x31, 0x00, 0x56, 0x34, 0x32, 0x00, 0x56, 0x34, 0x33, 0x00, 0x56, 0x34, 0x34, 0x00, 0x56, 0x34, 0x35, 
0x00, 0x56, 0x34, 0x36, 0x00, 0x56, 0x34, 0x37, 0x00, 0x73, 0x75, 0x72, 0x66, 0x61, 0x63, 0x65, 0x43, 0x6f, 0x70, 0x79, 0x5f, 0x73, 0x65, 0x74, 0x5f, 0x4e, 0x56, 0x31, 0x32, 0x5f, 0x42, 0x42, 
0x5f, 0x30, 0x5f, 0x31, 0x00, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x31, 0x00, 0x41, 0x73, 0x6d, 0x4e, 0x61, 0x6d, 0x65, 0x00, 0x4e, 0x6f, 0x42, 0x61, 0x72, 0x72, 0x69, 0x65, 0x72, 0x00, 0x54, 0x61, 
0x72, 0x67, 0x65, 0x74, 0x00, 0x64, 0x3a, 0x5c, 0x63, 0x79, 0x67, 0x77, 0x69, 0x6e, 0x36, 0x34, 0x5c, 0x68, 0x6f, 0x6d, 0x65, 0x5c, 0x73, 0x68, 0x65, 0x6e, 0x67, 0x63, 0x6f, 0x6e, 0x5c, 0x64, 
0x65, 0x76, 0x5f, 0x6d, 0x65, 0x64, 0x69, 0x61, 0x5c, 0x53, 0x57, 0x45, 0x5f, 0x4d, 0x65, 0x64, 0x69, 0x61, 0x5f, 0x43, 0x4d, 0x5f, 0x52, 0x54, 0x5c, 0x6d, 0x61, 0x69, 0x6e, 0x6c, 0x69, 0x6e, 
0x65, 0x5c, 0x75, 0x74, 0x69, 0x6c, 0x69, 0x74, 0x69, 0x65, 0x73, 0x5c, 0x47, 0x50, 0x55, 0x5f, 0x43, 0x6f, 0x70, 0x79, 0x5f, 0x49, 0x6e, 0x69, 0x74, 0x5f, 0x4b, 0x65, 0x72, 0x6e, 0x65, 0x6c, 
0x32, 0x42, 0x69, 0x6e, 0x61, 0x72, 0x79, 0x5c, 0x47, 0x50, 0x55, 0x49, 0x6e, 0x69, 0x74, 0x5f, 0x6b, 0x65, 0x72, 0x6e, 0x65, 0x6c, 0x5f, 0x67, 0x65, 0x6e, 0x78, 0x2e, 0x63, 0x70, 0x70, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x12, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x12, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x00, 0x61, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x22, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x61, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 
0x00, 0x00, 0x21, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 
0x20, 0x01, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x20, 0x01, 
0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x2a, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 
0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x02, 0x06, 0x00, 0x00, 0x00, 0x24, 0x00, 0x04, 0x00, 0x95, 0x02, 0x00, 0x00, 0x04, 0x03, 0x00, 0x00, 0x03, 0x00, 0x2d, 0x00, 0x00, 
0x00, 0x19, 0x47, 0x50, 0x55, 0x49, 0x6e, 0x69, 0x74, 0x5f, 0x6b, 0x65, 0x72, 0x6e, 0x65, 0x6c, 0x5f, 0x67, 0x65, 0x6e, 0x78, 0x5f, 0x31, 0x2e, 0x61, 0x73, 0x6d, 0x2e, 0x00, 0x00, 0x00, 0x00, 
0x2f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x30, 0x00, 0x00, 0x51, 0x30, 0x00, 0x00, 0x00, 0x52, 0x2b, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x24, 0x00, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x05, 
0x01, 0x07, 0x00, 0x00, 0x00, 0x52, 0x2c, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 
0x24, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x05, 0x01, 0x03, 0x00, 0x00, 0x00, 0x52, 0x32, 0x00, 0x00, 
0x00, 0x29, 0x04, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x29, 0x04, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 
0x02, 0x00, 0x00, 0x02, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x29, 0x04, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x21, 0x01, 0x29, 0x04, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x02, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x52, 0x34, 0x00, 0x00, 0x00, 0x38, 0x00, 
0x06, 0x00, 0x20, 0x08, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x35, 0x00, 0x00, 
0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x05, 0x01, 0x20, 0x00, 0x00, 0x00, 0x38, 0x00, 0x06, 
0x00, 0x20, 0x08, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x36, 0x00, 0x00, 0x00, 
0x01, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x05, 0x01, 0x40, 0x00, 0x00, 0x00, 0x38, 0x00, 0x06, 0x00, 
0x20, 0x08, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x37, 0x00, 0x00, 0x00, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x05, 0x01, 0x60, 0x00, 0x00, 0x00, 0x38, 0x00, 0x06, 0x00, 0x20, 
0x08, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x3a, 0x00, 0x00, 0x00, 0x29, 0x04, 
0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x29, 0x04, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 
0x02, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x52, 0x3c, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x22, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x21, 0x01, 0x05, 0x01, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x06, 0x01, 0x20, 0x04, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x21, 0x01, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x3d, 0x00, 0x00, 0x00, 0x38, 0x00, 0x06, 0x01, 0x20, 0x04, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x00, 0x30, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x3e, 0x00, 0x00, 0x00, 0x38, 0x00, 0x06, 0x01, 0x20, 0x04, 0x00, 0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 
0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x3f, 0x00, 0x00, 0x00, 0x38, 0x00, 0x06, 0x01, 0x20, 0x04, 0x00, 0x2f, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x21, 0x01, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x01, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x52, 0x40, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x65, 0x01, 0x00, 0x80, 0x10, 
0x82, 0x66, 0x01, 0x24, 0x00, 0x00, 0x01, 0xff, 0x0f, 0xff, 0x0f, 0x61, 0x00, 0x04, 0x00, 0xa0, 0x0a, 0x05, 0x02, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x80, 0x10, 
0x82, 0x46, 0x01, 0x24, 0x00, 0x00, 0x01, 0x0c, 0x00, 0x0c, 0x00, 0x61, 0x00, 0x04, 0x00, 0xa0, 0x0a, 0x05, 0x04, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x69, 0x04, 0x00, 0x00, 0x60, 
0x81, 0x85, 0x01, 0x64, 0x01, 0x00, 0x05, 0x07, 0x00, 0x07, 0x00, 0x61, 0x00, 0x04, 0x00, 0xa0, 0x0a, 0x05, 0x06, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0x04, 0x00, 0x80, 0x10, 
0x81, 0x55, 0x01, 0x44, 0x01, 0x00, 0x01, 0xff, 0x0f, 0xff, 0x0f, 0x61, 0x00, 0x04, 0x00, 0xa0, 0x0a, 0x05, 0x08, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 
0x0a, 0x05, 0x0e, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x00, 0x80, 0x0a, 0x02, 0x40, 0x06, 0x00, 0x00, 0x60, 
0x86, 0xa5, 0x01, 0x84, 0x01, 0x00, 0x05, 0x20, 0x00, 0x20, 0x00, 0x69, 0x05, 0x00, 0x00, 0x60, 0x81, 0x25, 0x0e, 0x54, 0x01, 0x00, 0x05, 0x03, 0x00, 0x03, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 
0x4a, 0x45, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x07, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 0x0a, 0x05, 0x0f, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 
0x0a, 0x05, 0x0e, 0x84, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x60, 0x86, 0xc5, 0x01, 0x84, 0x01, 0x00, 0x05, 0x40, 0x00, 0x40, 0x00, 0x31, 0xa0, 0x03, 0x80, 0x00, 
0x00, 0x01, 0x00, 0x04, 0x0e, 0x00, 0xc0, 0x44, 0x02, 0x00, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x4a, 0x45, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x07, 0x00, 0x61, 0x07, 0x00, 0x80, 0xa0, 
0x0a, 0x05, 0x0f, 0xa4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x00, 0x80, 0x0a, 0x02, 0x61, 0x00, 0x00, 0x80, 0xa0, 
0x0a, 0x25, 0x0f, 0x24, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 0x0a, 0x05, 0x10, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xa1, 0x03, 0x80, 0x00, 
0x00, 0x01, 0x00, 0x04, 0x0f, 0x00, 0xc0, 0x44, 0x02, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x60, 0x86, 0xe5, 0x01, 0x84, 0x01, 0x00, 0x05, 0x60, 0x00, 0x60, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 
0x4a, 0x45, 0x10, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x07, 0x00, 0x61, 0x07, 0x00, 0x80, 0xa0, 0x0a, 0x05, 0x10, 0xc4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 
0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x00, 0x80, 0x0a, 0x02, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x0a, 0x25, 0x10, 0x24, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 
0x0a, 0x05, 0x11, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xa2, 0x03, 0x80, 0x00, 0x00, 0x01, 0x00, 0x04, 0x10, 0x00, 0xc0, 0x44, 0x02, 0x00, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 
0x4a, 0x45, 0x11, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x07, 0x00, 0x61, 0x07, 0x00, 0x80, 0xa0, 0x0a, 0x05, 0x11, 0xe4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 
0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x00, 0x80, 0x0a, 0x02, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x0a, 0x25, 0x11, 0x24, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x04, 0x00, 0xa0, 
0x0a, 0x05, 0x0a, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xa3, 0x03, 0x80, 0x00, 0x00, 0x01, 0x00, 0x04, 0x11, 0x00, 0xc0, 0x44, 0x02, 0x00, 0x00, 0x61, 0x00, 0x04, 0x00, 0xa0, 
0x0a, 0x05, 0x0c, 0x04, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 0x0a, 0x05, 0x12, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 
0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x01, 0x80, 0x0a, 0x02, 0x69, 0x00, 0x00, 0x00, 0x60, 0x81, 0x25, 0x12, 0x54, 0x01, 0x00, 0x05, 0x02, 0x00, 0x02, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 
0x4a, 0x45, 0x12, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x03, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 0x0a, 0x05, 0x13, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 
0x0a, 0x05, 0x12, 0x84, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x4a, 0x45, 0x13, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x03, 0x00, 0x31, 0xa4, 0x03, 0x80, 0x00, 
0x00, 0x01, 0x00, 0x04, 0x12, 0x00, 0xc0, 0x24, 0x0a, 0x00, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x0a, 0x05, 0x13, 0xa4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 
0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x01, 0x80, 0x0a, 0x02, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x0a, 0x25, 0x13, 0x24, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 
0x0a, 0x05, 0x14, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xa5, 0x03, 0x80, 0x00, 0x00, 0x01, 0x00, 0x04, 0x13, 0x00, 0xc0, 0x24, 0x0a, 0x00, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 
0x4a, 0x45, 0x14, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x03, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x0a, 0x05, 0x14, 0xc4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 
0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x01, 0x80, 0x0a, 0x02, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x0a, 0x25, 0x14, 0x24, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 
0x0a, 0x05, 0x15, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xa6, 0x03, 0x80, 0x00, 0x00, 0x01, 0x00, 0x04, 0x14, 0x00, 0xc0, 0x24, 0x0a, 0x00, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 
0x4a, 0x45, 0x15, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x03, 0x00, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x0a, 0x05, 0x15, 0xe4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x80, 0x20, 
0x82, 0x01, 0x10, 0x24, 0x01, 0x00, 0x02, 0x01, 0x80, 0x0a, 0x02, 0x61, 0x00, 0x00, 0x80, 0xa0, 0x0a, 0x25, 0x15, 0x24, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x00, 0x03, 0x80, 0xa0, 
0x0a, 0x05, 0x7f, 0x05, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0xa7, 0x03, 0x80, 0x00, 0x00, 0x01, 0x00, 0x04, 0x15, 0x00, 0xc0, 0x24, 0x0a, 0x00, 0x00, 0x31, 0x01, 0x00, 0x00, 0x04, 
0x00, 0x00, 0x00, 0x0c, 0x7f, 0x20, 0x70, 0x00, 0x00, 0x00, 0x00 };

#else
unsigned int iGPUInit_kernel_isa_size_gen12lp = 4;

unsigned char pGPUInit_kernel_isa_gen12lp[] = { 0x00, 0x00, 0x00, 0x00 };
#endif