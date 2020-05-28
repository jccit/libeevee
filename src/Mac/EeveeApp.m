#import <Eevee/Mac/EeveeApp.h>

@implementation EeveeApp

+(NSString*)applicationName
{
    return @"Eevee Test App";
}

+(void)initMenuBar
{
    [EeveeApp sharedApplication];

    NSMenu *mainMenu = [[NSMenu alloc] init];
    NSString *appName = [NSRunningApplication currentApplication].localizedName;

    NSMenuItem *appMenuItem = [[NSMenuItem alloc] init];
    [mainMenu addItem:appMenuItem];

    NSMenu *appMenu = [[NSMenu alloc] init];

    NSMenuItem *quitItem = [[NSMenuItem alloc] init];
    quitItem.action = @selector(terminate:);
    quitItem.keyEquivalent = @"q";
    quitItem.title = [NSString stringWithFormat:@"Quit %@", appName];

    [appMenu addItem:quitItem];

    [mainMenu setSubmenu:appMenu forItem:appMenuItem];
    [NSApp setMainMenu:mainMenu];
}

@end