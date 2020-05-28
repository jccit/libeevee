#ifdef WIN32
#ifndef Eevee_WIN32_WINDOW_H
#define Eevee_WIN32_WINDOW_H

#include <Eevee/Native/Window.hpp>
#include <windows.h>

namespace Eevee
{
namespace Win32
{
class Window : public Eevee::Native::Window
{
public:
    Window();
    void Init(int width = -1, int height = -1, int x = -1, int y = -1);

private:
    void RegisterWindowClass();
    static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

    HWND hwnd;
};
}
}

#endif
#endif