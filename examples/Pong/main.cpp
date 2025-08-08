#include <Blaze/Blaze.h>
#include <Blaze/Game.h>
#include <iostream>

class PongGame : public Blaze::Game
{

};

int main() {
    auto graphicsDevice = Blaze::CreateDevice(Blaze::GraphicsBackend::Software);
    Blaze::Application* app = new Blaze::Application(graphicsDevice);
    app->Run();
    return 0;
}