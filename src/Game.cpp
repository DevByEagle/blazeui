#include "Blaze/Game.h"

namespace Blaze {
    Application::Application(std::unique_ptr<GraphicsDevice>& graphicsDevice) : m_Running(true) 
    {
    }

    Application::~Application() 
    {
    }

    void Application::Run()
    {
        while (m_Running);
    }

    bool Application::IsRunning() const
    {
        return m_Running;
    }

    Game::~Game()
    {
    }
}