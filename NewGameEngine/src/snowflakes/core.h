#pragma once

#ifdef SNOWFLAKES_PLATFORM_WINDOWS
        #ifdef SNOWFLAKE_BUILD_DLL
                #define SNOWFLAKES_API _declspec(dllexport)
        #else 
                #define SNOWFLAKES_API _declspec(dllimport)
        #endif // SNOWFLAKE_BUILD_DLL
#else 
        #error windows only
#endif // SNOWFLAKES_PLATFORM_WINDOWS
