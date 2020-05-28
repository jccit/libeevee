#include <Eevee/Mac/App.hpp>

#import <AppKit/AppKit.h>
#import <Eevee/Mac/EeveeApp.h>
#import <Eevee/Mac/EeveeAppDelegate.h>

using namespace Eevee::Mac;

App::App() {}

void App::Init() {
    [EeveeApp sharedApplication];

    EeveeAppDelegate *delegate = [[EeveeAppDelegate alloc] init];
    [NSApp setDelegate:delegate];

    [NSApp setActivationPolicy:NSApplicationActivationPolicyRegular];

    [EeveeApp initMenuBar];
    [NSApp finishLaunching];
}

void App::MainLoop() {
    [NSApp run];

    while (true) {
        NSEvent* event;

        do {
            event = [NSApp nextEventMatchingMask: NSEventMaskAny
                                       untilDate: nil
                                          inMode: NSDefaultRunLoopMode
                                         dequeue: YES];

            switch ([event type]) {
                default:
                    [NSApp sendEvent: event];
            }
        } while (event != nil);
    }
}