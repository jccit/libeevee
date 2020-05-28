#ifndef Eevee_NATIVE_WINDOW_H
#define Eevee_NATIVE_WINDOW_H

namespace Eevee
{
namespace Native
{
class Window
{
public:
    virtual void Init(int width = -1, int height = -1, int x = -1, int y = -1) = 0;
};
}
}

#endif