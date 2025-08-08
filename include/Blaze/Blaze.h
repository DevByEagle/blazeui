#pragma once

#include <memory>

#if defined(_WIN32) || defined(_WIN64)
    #if defined(BLAZEUI_BUILD_DLL)
        #define BLAPI __declspec(dllexport)
    #elif defined(BLAZEUI_USE_DLL)
        #define BLAPI __declspec(dllimport)
    #else
        #define BLAPI
    #endif
#else
    #if __GNUC__ >= 4
        #define BLAPI __attribute__((visibility("default")))
    #else
        #define BLAPI
    #endif
#endif

#include "Graphics.h"

namespace Blaze {
    class GraphicsDevice;
    enum class GraphicsBackend;

    BLAPI std::unique_ptr<GraphicsDevice> CreateDevice(GraphicsBackend backend);
}