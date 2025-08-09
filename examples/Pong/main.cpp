#include <Blaze/Blaze.h>
#include <Blaze/Game.h>
#include <Blaze/Widgets.h>
#include <iostream>

auto graphicsDevice = Blaze::CreateDevice(Blaze::GraphicsBackend::Software);

class MyApp : public Blaze::Application
{
public:
    MyApp() : Application(graphicsDevice)
    {
        auto rootView = std::make_unique<Blaze::View<void>>();
        auto label = std::make_unique<Blaze::Label>();
    }
};

int main() {
    MyApp app;
    app.Run();
    return 0;
}