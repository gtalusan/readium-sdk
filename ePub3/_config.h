//
//  _config.h
//  ePub3
//
//  Created by Jim Dovey on 2013-02-05.
//  Copyright (c) 2012-2013 The Readium Foundation and contributors.
//  
//  The Readium SDK is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

////////////////////////////////////////////////////////////////////////////////
// General doxygen input for the project as a whole

/**
 @mainpage
 @copyright Copyright (c) 2012–2013 The Readium Foundation and contributors. Released under the GNU Public License, version 3.
 @author Jim Dovey
 @author Boris Schneidermann
 @author Shane Meyer
 */

// I'm putting all Doxygen group definitions in here

/**
 @defgroup utilities Utilities
 
 @defgroup archives Archive Handling
 
 @defgroup epub EPUB® 3 Engine
 @{
    @defgroup epub-model EPUB® 3 Model
    @{
        @defgroup navigation Navigation
    @}

    @defgroup content-proc EPUB® 3 Content Processing
    @{
        @defgroup filters Content Filters
        @defgroup media-handlers Content Handlers
        @defgroup security Encryption and Signatures
    @}
    
    @defgroup events Events Mechanism
 @}
 
 @defgroup xml XML Engine
 @{
    @defgroup validation Content Validation
    @defgroup parsing XML Parsers
    @defgroup tree DOM Tree
    @defgroup xml-utils Utilities
    @defgroup xmlsec XML Security
 @}
 */

// end of global Doxygen input
////////////////////////////////////////////////////////////////////////////////

#ifndef ePub3__config_h
#define ePub3__config_h

#include "_platform.h"

#define REGEX_INCLUDE <regex>
#define REGEX_NS std
#define LOCALE_INCLUDE <locale>
#define LOCALE_NS std

#if !EPUB_COMPILER(CLANG) && !defined(__private_extern__)
# if EPUB_COMPILER(MSVC)
#  define __private_extern__ extern
# else
#  define __private_extern__ extern __attribute__ ((__visibility__("hidden")))
# endif
#endif

#if EPUB_OS(WINDOWS)
# ifndef EPUB3_EXPORT
#  ifdef BUILDING_EPUB3
#   define EPUB3_EXPORT __declspec(dllexport)
#  else
#   define EPUB3_EXPORT __declspec(dllimport)
#  endif
# endif
// Windows doesn't define ssize_t it seems
typedef signed long ssize_t;
#else
# define EPUB3_EXPORT
#endif

#if EPUB_OS(ANDROID)
//# define UTF_USE_ICU 1
# define CXX11_STRING_UNAVAILABLE 1
# undef REGEX_INCLUDE
# define REGEX_INCLUDE <boost/regex.hpp>
# undef REGEX_NS
# define REGEX_NS boost
# undef LOCALE_INCLUDE
# define LOCALE_INCLUDE <boost/locale.hpp>
# undef LOCALE_NS
# define LOCALE_NS boost
# if EPUB_COMPILER(CLANG)
#  define nan(x) __builtin_nan(x)
# endif
#endif

#if EPUB_COMPILER(GCC) && !EPUB_COMPILER(CLANG)
# if GCC_VERSION_AT_LEAST(4, 7, 0)
#  define _GCC_NOTHROW noexcept (true)
# else
#  define _GCC_NOTHROW throw ()
# endif
#else
# define _GCC_NOTHROW
#endif

#ifndef _LIBCPP_HIDDEN
# if EPUB_COMPILER(MSVC)
#  define _LIBCPP_HIDDEN
# else
#  define _LIBCPP_HIDDEN __attribute__ ((__visibility__("hidden")))
# endif
#endif

#ifndef FORCE_INLINE
# if EPUB_COMPILER(MSVC)
#  define FORCE_INLINE __forceinline
# else
#  define FORCE_INLINE __attribute__ ((__visibility__("hidden"), __always_inline__))
# endif
#endif

#ifndef _LIBCPP_INLINE_VISIBILITY
# if EPUB_COMPILER(MSVC)
#  define _LIBCPP_INLINE_VISIBILITY FORCE_INLINE
# else
#  define _LIBCPP_INLINE_VISIBILITY FORCE_INLINE
# endif
#endif

#if EPUB_COMPILER(MSVC)
# pragma section(".CRT$XCU",read)
# define INITIALIZER(f) \
    static void __cdecl f(void); \
    __declspec(allocate(".CRT$XCU")) void (__cdecl*f##_)(void) = f; \
    static void __cdecl f(void)
#else
# define INITIALIZER(f) \
    static void f(void) __attribute__((constructor)); \
    static void f(void)
#endif

// MSVC doesn't have this macro
#ifndef __PRETTY_FUNCTION__
# define __PRETTY_FUNCTION__ __FUNCTION__
#endif

#if EPUB_PLATFORM(WIN)
# define strncasecmp _strnicmp
# define snprintf(buf,count,fmt,...) _snprintf_s(buf, count, count, fmt, __VA_ARGS__)
#endif

#if EPUB_COMPILER_SUPPORTS(CXX_DELETED_FUNCTIONS)
# define _DELETED_ = delete
#else
# define _DELETED_
#endif

#if EPUB_COMPILER_SUPPORTS(CXX_DEFAULT_TEMPLATE_ARGS)
# define _DEFAULT_(x) = x
#else
# define _DEFAULT_(x)
#endif

#endif
