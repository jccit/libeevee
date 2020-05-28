#include <Eevee/Window.hpp>

#ifdef __APPLE__
#include <Eevee/Mac/Window.hpp>
#elif WIN32
#include <Eevee/Win32/Window.hpp>
#endif

using namespace Eevee;

Window::Window(int width, int height, int x, int y) {
    #ifdef __APPLE__
        nativeWindow = new Eevee::Mac::Window();
    #elif WIN32
        nativeWindow = new Eevee::Win32::Window();
    #endif

    nativeWindow->Init(width, height, x, y);
}