#include "Blaze/Blaze.h"
#include <stdexcept>

// Include for Graphics Types
#include "Graphics/Software/SoftwareRenderer.h"

namespace Blaze {
    std::unique_ptr<GraphicsDevice> CreateDevice(GraphicsBackend backend)
    {
        switch (backend) {
            case GraphicsBackend::DirectX:
                return nullptr;
            
            case GraphicsBackend::OpenGL:
                return nullptr;
            
            case GraphicsBackend::Vulkan:
                return nullptr;
            
            case GraphicsBackend::Metal:
            #ifdef __APPLE__
                return nullptr;
            #else
                throw std::runtime_error(
                    "[Error] Metal backend is only supported on Apple platforms (macOS/iOS)."
                );
            #endif

            case GraphicsBackend::Software:
                return std::make_unique<SoftwareRenderer>();
            
            default:
                throw std::runtime_error("[Error] Unknown graphics backend requested.");
        }
    }
}