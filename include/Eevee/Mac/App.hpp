#ifndef Eevee_MAC_APP_H
#define Eevee_MAC_APP_H

#include <Eevee/Native/App.hpp>

namespace Eevee
{
    namespace Mac
    {

    class App : public Eevee::Native::App
    {
    public:
        App();
        void Init();
        void MainLoop();
    };

    }
}

#endif