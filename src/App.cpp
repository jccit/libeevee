#include <Eevee/App.hpp>

#ifdef __APPLE__
#include <Eevee/Mac/App.hpp>
#endif


using namespace Eevee;

App::App() {
    #ifdef __APPLE__
        nativeApp = new Eevee::Mac::App();
        nativeApp->Init();
    #endif
}

void App::MainLoop() {
    #ifdef __APPLE__
        nativeApp->MainLoop();
    #endif
}