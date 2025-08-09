#pragma once

// #include "Blaze/Graphics.h"

#if defined(_WIN32) || defined(_WIN64)

#elif __linux__
    #include <X11/Xlib.h>
#else
#error Software rendering is not supported on this system.
#endif

namespace Blaze {
    class SoftwareRenderer final : public GraphicsDevice
    {
    public:
        ~SoftwareRenderer() override;
    };
}