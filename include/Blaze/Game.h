#pragma once

#include "Blaze.h"

namespace Blaze {
    class BLAPI Application {
    public:
        Application(std::unique_ptr<GraphicsDevice>& graphicsDevice);
        virtual ~Application();

        BLAPI void Run();
    };

    class BLAPI Game : public Application {
    public:
        ~Game() override;
    };
}