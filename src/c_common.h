/*  Common functions, macros, includes
 *
 *  Copyright (C) 2018-2020 Marek Gagolewski (https://www.gagolewski.com)
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *  1. Redistributions of source code must retain the above copyright notice,
 *  this list of conditions and the following disclaimer.
 *
 *  2. Redistributions in binary form must reproduce the above copyright notice,
 *  this list of conditions and the following disclaimer in the documentation
 *  and/or other materials provided with the distribution.
 *
 *  3. Neither the name of the copyright holder nor the names of its
 *  contributors may be used to endorse or promote products derived from this
 *  software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 *  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 *  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
 *  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 *  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 *  OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 *  ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#ifndef __c_common_h
#define __c_common_h


#ifdef Py_PYTHON_H
#define GENIECLUST_PYTHON 1
#endif

#ifdef GENIECLUST_R
#undef GENIECLUST_R
#define GENIECLUST_R 1
#endif


#include <stdexcept>
#include <string>
#include <limits>

#ifdef _OPENMP
#include <omp.h>
#endif

#ifndef GENIECLUST_ASSERT
#define __GENIECLUST_STR(x) #x
#define GENIECLUST_STR(x) __GENIECLUST_STR(x)

#define GENIECLUST_ASSERT(EXPR) { if (!(EXPR)) \
    throw std::runtime_error( "genieclust: Assertion " #EXPR " failed in "\
        __FILE__ ":" GENIECLUST_STR(__LINE__) ); }
#endif




#if GENIECLUST_R
#include <Rcpp.h>
#else
#include <cstdio>
#endif


void GENIECLUST_PRINT(const char* fmt) {
#if GENIECLUST_R
    REprintf(fmt);
#else
    fputs(fmt, stderr);
#endif
}

void GENIECLUST_PRINT_int(const char* fmt, int val) {
    // cstdargs, variadic templates, who needs them :)
#if GENIECLUST_R
    REprintf(fmt, val);
#else
    fprintf(stderr, fmt, val);
#endif
}






#ifndef INFTY
#define INFTY (std::numeric_limits<float>::infinity())
#endif

#endif
