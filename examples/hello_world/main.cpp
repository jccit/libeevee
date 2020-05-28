#include <Eevee/Eevee.hpp>

int main(int argc, char * argv[]) {
    Eevee::App* app = new Eevee::App();
    Eevee::Window* window = new Eevee::Window(400, 400);

    app->MainLoop();

    return 0;
}

#ifdef WIN32

#include <windows.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, INT) {
    return main(__argc, __argv);
}

#endif