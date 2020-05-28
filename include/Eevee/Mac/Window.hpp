#ifndef Eevee_MAC_WINDOW_H
#define Eevee_MAC_WINDOW_H

#include <Eevee/Native/Window.hpp>

namespace Eevee
{
namespace Mac
{

class Window : public Eevee::Native::Window
{
public:
    Window();
    void Init(int width = -1, int height = -1, int x = -1, int y = -1);
};

}
}

#endif