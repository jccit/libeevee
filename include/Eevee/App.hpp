#ifndef Eevee_APP_H
#define Eevee_APP_H

#include <Eevee/Native/App.hpp>

namespace Eevee
{

class App
{
public:
    App();
    void MainLoop();
private:
    Eevee::Native::App *nativeApp;
};

}

#endif