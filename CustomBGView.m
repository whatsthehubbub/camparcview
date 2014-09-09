//
//  CustomBGView.m
//  CamparcView
//
//  Created by Aldo Hoeben on 9/8/14.
//
//

#import "CustomBGView.h"

@implementation CustomBGView

- (id)initWithFrame:(NSRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}

- (void)drawRect:(NSRect)dirtyRect
{
    // Drawing code here.
    [[NSColor blackColor] setFill];
    NSRectFill(dirtyRect);
    
    [super drawRect:dirtyRect];
}

@end
