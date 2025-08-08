#include "pch.h"
#include "Blaze/Blaze.h"

namespace Blaze {
    Color Color::fromHSL(float hue, float saturation, float brightness, float opacity)
    {
        hue = std::fmod(hue, 360.0f);
        if (hue < 0) hue += 360.0f;

        auto hue2rgb = [](float p, float q, float t) {
            if (t < 0) t += 1;
            if (t > 1) t -= 1;
            if (t < 1 / 6.0f) return p + (q - p) * 6 * t;
            if (t < 1 / 2.0f) return q;
            if (t < 2 / 3.0f) return p + (q - p) * (2 / 3.0f - t) * 6;
            return p;
        };

        float r, g, b;
        if (saturation == 0) {
            r = g = b = brightness;
        } else {
            float q = brightness < 0.5f ? brightness * (1 + saturation) : brightness + saturation - brightness * saturation;
            float p = 2 * brightness - q;
            float hk = hue / 360.0f;
            r = hue2rgb(p, q, hk + 1 / 3.0f);
            g = hue2rgb(p, q, hk);
            b = hue2rgb(p, q, hk - 1 / 3.0f);
        }
        return Color(r, g, b, opacity);
    }

    bool Color::operator==(const Color& rhs) 
    {
        return true;
    }
}