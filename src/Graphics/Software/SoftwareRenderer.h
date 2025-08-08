#pragma once

#include "Blaze/Graphics.h"

namespace Blaze {
    class SoftwareRenderer : public Renderer
    {
    public:
        SoftwareRenderer();
        ~SoftwareRenderer() override;

        void DrawRect(int x, int y, int width, int height, const Color& color) override;
    };
}