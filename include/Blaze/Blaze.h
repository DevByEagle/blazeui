#pragma once

#include <memory>
#include "Macros.h"
#include "Graphics.h"

namespace Blaze {
    class GraphicsDevice;
    enum class GraphicsBackend;

    BLAPI std::unique_ptr<GraphicsDevice> CreateDevice(GraphicsBackend backend);
}