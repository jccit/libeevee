#ifndef Eevee_NATIVE_APP_H
#define Eevee_NATIVE_APP_H

namespace Eevee
{
namespace Native
{
class App
{
public:
    virtual void Init() = 0;
    virtual void MainLoop() = 0;
};
}
}

#endif