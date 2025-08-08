# BlazeUI

BlazeUI is a lightweight, modular, and **cross-platform C++ UI library** designed for seamless integration into desktop applications, game engines, and embedded systems. Built with performance and flexibility in mind, BlazeUI provides a modern, customizable widget toolkit with no external dependencies.

---

## 📦 Build Instructions

### ✅ Prerequisites

- **CMake** `3.16+`
- **C++17** or newer
<!-- - **OpenGL** drivers
- **GLFW** (for OpenGL examples)
- **X11** (Linux only) -->

---

### 🐧 Build (Linux/macOS/WSL)

```bash
git clone https://github.com/DevByEagle/blazeui.git
cd blazeui
mkdir build && cd build
cmake ..
make -j$(nproc)
```

---

### 🪟 Build (Windows)

```bash
git clone https://github.com/DevByEagle/blazeui.git
cd blazeui
mkdir build && cd build
cmake .. -G "Visual Studio 17 2022"
```

---

## 📖 Usage

### Basic Example

```cpp
#include <Blaze/Blaze.h>
// Use this for the Blaze game development library API:
#include <Blaze/Game.h>

// Otherwise, use this for the Blaze widgets API:
// #include <Blaze/Widgets.h>

int main() {
    // Create a graphics device. You can specify any GraphicsBackend provided by BlazeUI.
    auto graphicsDevice = Blaze::CreateDevice(Blaze::GraphicsBackend::OpenGL);

    // Create a new Application instance with the specified graphics device
    Blaze::Application* app = new Blaze::Application(graphicsDevice);

    // Run the application
    app->Run();

    return 0;
}
```

---

## 📃 License

BlazeUI is licensed under [MIT License](https://opensource.org/license/mit). See [LICENSE.txt](LICENSE.txt) for details.