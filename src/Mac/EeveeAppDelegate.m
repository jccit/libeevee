#import <Eevee/Mac/EeveeAppDelegate.h>

@implementation EeveeAppDelegate

-(void)applicationDidFinishLaunching:(NSNotification *)notif
{
    [NSApp activateIgnoringOtherApps:YES];
    NSLog(@"App launched");
}

@end