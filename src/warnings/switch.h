//  :copyright: (c) 2014 Ruslan Baratov.
//  :copyright: (c) 2017 Alex Huszagh.
//  :license: BSD-2, see LICENSE.md for more details.

#pragma once

// MACROS
// ------

#if !defined(WARNINGS_PUSH)
#   error Must push before suppressing errors.
#endif

#if defined(WARNINGS_SWITCH)
#   error switch already suppressed.
#else
#   define WARNINGS_SWITCH
#endif

#if defined(WARNINGS_HAVE_CLANG)
#   if __has_warning("-Wswitch")
#       pragma clang diagnostic ignored "-Wswitch"
#   endif
#endif

#if defined(WARNINGS_HAVE_GCC)
#   pragma GCC diagnostic ignored "-Wswitch"
#endif

#if defined(WARNINGS_HAVE_MSVC)
#   pragma warning(disable: 4062)
#endif