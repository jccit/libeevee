#ifndef Eevee_WINDOW_H
#define Eevee_WINDOW_H

#include <Eevee/Native/Window.hpp>

namespace Eevee
{
class Window
{
public:
    Window(int width = -1, int height = -1, int x = -1, int y = -1);
private:
    Eevee::Native::Window *nativeWindow;
};
}

#endif