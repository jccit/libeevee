#import <Eevee/Mac/EeveeWindowDelegate.h>

@implementation EeveeWindowDelegate

-(void)windowWillClose:(id)sender {
    NSLog(@"Will close");
}

@end