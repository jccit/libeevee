#ifdef WIN32

#include <Eevee/Win32/Window.hpp>

using namespace Eevee::Win32;

const wchar_t* CLASS_NAME = L"Eevee_Window";

Window::Window() {
    RegisterWindowClass();
}

void Window::Init(int width, int height, int x, int y) {
    int winW = width    == -1 ? CW_USEDEFAULT : width;
    int winH = height   == -1 ? CW_USEDEFAULT : height;
    int winX = x        == -1 ? CW_USEDEFAULT : x;
    int winY = y        == -1 ? CW_USEDEFAULT : y;

    hwnd = CreateWindowEx(
        0L,
        (LPCSTR)CLASS_NAME,
        "Eevee",
        WS_OVERLAPPEDWINDOW,
        winX, winY, winW, winH,
        NULL,
        NULL,
        GetModuleHandle(NULL),
        this
    );

    ShowWindow(hwnd, true);

    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
}

void Window::RegisterWindowClass() {
    WNDCLASS wClass = {};
    wClass.hInstance = GetModuleHandle(NULL);
    wClass.lpfnWndProc = &Window::WindowProc;
    wClass.lpszClassName = (LPCSTR)CLASS_NAME;

    RegisterClass(&wClass);
}

LRESULT CALLBACK Window::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

#endif