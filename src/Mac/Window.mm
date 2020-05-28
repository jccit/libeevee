#include <Eevee/Mac/Window.hpp>

#import <Eevee/Mac/EeveeWindowDelegate.h>
#import <AppKit/AppKit.h>

using namespace Eevee::Mac;

NSWindow *window;

Window::Window() {}

void Window::Init(int width, int height, int x, int y) {
    EeveeWindowDelegate *windowDelegate = [[EeveeWindowDelegate alloc] init];

    NSRect rect = NSMakeRect(0, 0, 200, 200);

    window = [[NSWindow alloc] initWithContentRect:rect
                                           styleMask:NSWindowStyleMaskTitled |
                                                     NSWindowStyleMaskClosable |
                                                     NSWindowStyleMaskMiniaturizable |
                                                     NSWindowStyleMaskResizable
                                             backing:NSBackingStoreBuffered
                                               defer:NO];

    [window setDelegate:windowDelegate];
    [window setBackgroundColor:[NSColor blueColor]];
    [window setTitle: @"Eevee"];
    [window makeKeyAndOrderFront:nil];

    NSLog(@"Window: %s", window.isVisible ? "true" : "false");
}