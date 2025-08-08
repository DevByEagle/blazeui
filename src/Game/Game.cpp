#include "Blaze/Game.h"

namespace Blaze {
    Application::~Application() 
    {
    }

    bool Application::IsRunning() const 
    {
        return m_Running;
    }

    void Application::Run()
    {
        while (true);
    }
}