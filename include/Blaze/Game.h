#pragma once

#include "Blaze.h"

namespace Blaze {
    class BLAPI Application {
    public:
       explicit Application(std::unique_ptr<GraphicsDevice>& graphicsDevice);
       virtual ~Application();
       
       void Run();
       bool IsRunning() const;
    private:
        bool m_Running = false;
        std::unique_ptr<GraphicsDevice> m_GraphicsDevice;
    };

    class BLAPI Game : public Application {
    public:
        ~Game() override;
    };
}