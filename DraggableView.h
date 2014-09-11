//
//  DraggableView.h
//  CamparcView
//
//  Created by Aldo Hoeben on 9/11/14.
//
//

#import <Cocoa/Cocoa.h>

@interface DraggableView : NSView
{
    NSPoint dragStartLocation;
    NSPoint dragStartOrigin;
}
@end

