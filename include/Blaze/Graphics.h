#pragma once

#include "Blaze.h"

namespace Blaze {
    struct Color {
        explicit Color() noexcept = default;
    };
    
    /**
     * @see Blaze::GraphicsDevice 
     */
    enum class GraphicsBackend {
        /// @brief No graphics backend selected
        None = 0,
        /// @brief Microsoft DirectX API (Windows only)
        DirectX,
        /// @brief Cross-platform OpenGL API
        OpenGL,
        /// @brief Modern low-level Vulkan API
        Vulkan,
        /// @brief Apple Metal API (macOS/iOS only)
        Metal,
        /// @brief CPU-based software renderer
        Software,
    };

    class BLAPI GraphicsDevice {
    public:
        virtual ~GraphicsDevice() = default;

        virtual void Clear(const Color& color);
    };
}