#pragma once

#include <algorithm>
#include "Blaze.h"

namespace Blaze {
    struct Color {
        float r, g, b, a;

        constexpr Color() noexcept : r(0), g(0), b(0), a(1) {}
        constexpr Color(float red, float green, float blue, float opacity = 1) : r(std::clamp(red, 0.0f, 1.0f)), g(std::clamp(green, 0.0f, 1.0f)), b(std::clamp(blue, 0.0f, 1.0f)), a(std::clamp(opacity, 0.0f, 1.0f)) {}

        static Color fromHSL(float hue, float saturation, float brightness, float opacity = 1);

        Color& operator=(const Color& other) noexcept;
        bool operator==(const Color& other) const noexcept;
        bool operator!=(const Color& other) const noexcept;

        static const Color Black;
        static const Color Blue;
        static const Color Gray;
        static const Color Green;
        static const Color Red;
        static const Color Transparent;
        static const Color White;

    private:
        Color(Color&&) = delete;
        Color& operator=(Color&&) = delete;
    };

    class BLAPI Renderer 
    {
    public:
        virtual ~Renderer() = default;

        virtual void Clear(const Color& clearColor) = 0;
        virtual void DrawRect(int x, int y, int width, int height, const Color& color = Color::Black) = 0;
    };
}