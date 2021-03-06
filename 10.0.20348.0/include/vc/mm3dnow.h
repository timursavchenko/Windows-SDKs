/***
*  Copyright (C) 2007-2020 Advanced Micro Devices Inc.  All rights reserved.
*
*  Boost Software License - Version 1.0 - August 17th, 2003
*
*  Permission is hereby granted, free of charge, to any person or organization
*  obtaining a copy of the software and accompanying documentation covered by
*  this license (the "Software") to use, reproduce, display, distribute,
*  execute, and transmit the Software, and to prepare derivative works of the
*  Software, and to permit third-parties to whom the Software is furnished to
*  do so, all subject to the following:
*
*  The copyright notices in the Software and this entire statement, including
*  the above license grant, this restriction and the following disclaimer,
*  must be included in all copies of the Software, in whole or in part, and
*  all derivative works of the Software, unless such copies or derivative
*  works are solely in the form of machine-executable object code generated by
*  a source language processor.
*
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
*  FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
*  SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
*  FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
*  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
*  DEALINGS IN THE SOFTWARE.
****/

/*
 * mm3dnow.h
 *
 */

#pragma once

#if !defined(_M_IX86)
#error This header is specific to X86 targets
#endif

#ifndef _MM3DNOW_H_INCLUDED
#define _MM3DNOW_H_INCLUDED
#ifndef __midl

#if !defined _M_IX86
    #error This header is specific to the X86 target
#endif

#include <vcruntime.h>
#include <mmintrin.h>
#include <xmmintrin.h>

#pragma warning(push)
#pragma warning(disable: _VCRUNTIME_DISABLED_WARNINGS)

#if defined __cplusplus
extern "C" { /* Intrinsics use C name-mangling.  */
#endif  /* defined __cplusplus */

/* 3DNOW intrinsics */

void _m_femms(void);
__m64 _m_pavgusb(__m64, __m64);
__m64 _m_pf2id(__m64);
__m64 _m_pfacc(__m64, __m64);
__m64 _m_pfadd(__m64, __m64);
__m64 _m_pfcmpeq(__m64, __m64);
__m64 _m_pfcmpge(__m64, __m64);
__m64 _m_pfcmpgt(__m64, __m64);
__m64 _m_pfmax(__m64, __m64);
__m64 _m_pfmin(__m64, __m64);
__m64 _m_pfmul(__m64, __m64);
__m64 _m_pfrcp(__m64);
__m64 _m_pfrcpit1(__m64, __m64);
__m64 _m_pfrcpit2(__m64, __m64);
__m64 _m_pfrsqrt(__m64);
__m64 _m_pfrsqit1(__m64, __m64);
__m64 _m_pfsub(__m64, __m64);
__m64 _m_pfsubr(__m64, __m64);
__m64 _m_pi2fd(__m64);
__m64 _m_pmulhrw(__m64, __m64);
void _m_prefetch(void*);
void _m_prefetchw(volatile const void*_Source);

__m64 _m_from_float(float);
float _m_to_float(__m64);

/* Athlon DSP intrinsics */

__m64 _m_pf2iw(__m64);
__m64 _m_pfnacc(__m64, __m64);
__m64 _m_pfpnacc(__m64, __m64);
__m64 _m_pi2fw(__m64);
__m64 _m_pswapd(__m64);

#if defined __cplusplus
}; /* End "C" */
#endif  /* defined __cplusplus */
#pragma warning(pop) // _VCRUNTIME_DISABLED_WARNINGS
#endif  /* __midl */
#endif  /* _MM3DNOW_H_INCLUDED */
