#pragma once

#include "Blaze/Graphics.h"

namespace Blaze {
    class SoftwareRenderer final : public GraphicsDevice
    {
    public:
        ~SoftwareRenderer() override;

    };
}