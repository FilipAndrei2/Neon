//
// Created by filan on 03.06.2025.
//

#ifndef NEON_EXPORT_HPP
#define NEON_EXPORT_HPP

#if defined _WIN32 || defined __CYGWIN__
  #ifdef NEON_BUILD_DLL
    #ifdef __GNUC__
      #define NEON_API extern "C" __attribute__ ((dllexport))
    #else
      #define NEON_API extern "C"  __declspec(dllexport)
    #endif
  #else
    #ifdef __GNUC__
      #define NEON_API __attribute__ ((dllimport))
    #else
      #define NEON_API __declspec(dllimport)
    #endif
  #endif
#else
  #define NEON_API
#endif

#endif //NEON_EXPORT_HPP
