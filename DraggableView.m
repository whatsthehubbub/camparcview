//
//  DraggableView.m
//  CamparcView
//
//  Created by Aldo Hoeben on 9/11/14.
//
//

#import "DraggableView.h"

@implementation DraggableView

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
}

- (BOOL) acceptsFirstMouse:(NSEvent *)e {
    return YES;
}

- (void)mouseDown:(NSEvent *) e {
    
    // Convert to superview's coordinate space
    dragStartLocation = [[self superview] convertPoint:[e locationInWindow] fromView:nil];
    dragStartOrigin = [self frame].origin;
}

- (void)mouseDragged:(NSEvent *)theEvent {
    
    // We're working only in the superview's coordinate space, so we always convert.
    NSPoint newDragLocation = [[self superview] convertPoint:[theEvent locationInWindow] fromView:nil];
    NSPoint newOrigin = dragStartOrigin;
    newOrigin.x += (newDragLocation.x - dragStartLocation.x);
    newOrigin.y += (newDragLocation.y - dragStartLocation.y);
    [self setFrameOrigin:newOrigin];
}

@end
