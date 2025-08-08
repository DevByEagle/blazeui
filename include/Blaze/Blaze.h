#pragma once

#include <algorithm>

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

namespace Blaze {
    /* Functions */
    
    /* Types */
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

    struct Vector2 {
    };
}