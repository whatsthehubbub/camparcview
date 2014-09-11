/*****************************************************************************
 * test: Controller
 *****************************************************************************
 * Copyright (C) 2007-2012 Pierre d'Herbemont and VideoLAN
 *
 * Authors: Pierre d'Herbemont
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
 *****************************************************************************/

#import <Cocoa/Cocoa.h>
#import <VLCKit/VLCKit.h>

@interface Controller : NSObject
{
    IBOutlet id window;

    IBOutlet id mainView;
    IBOutlet id videoView1;
    IBOutlet id videoView2;
//    IBOutlet id videoView3;
    
    IBOutlet NSTextField *textField1;
    IBOutlet NSTextField *textField2;
//    IBOutlet NSTextField *textField3;

    VLCVideoView *vlcVideoView1;
    VLCVideoView *vlcVideoView2;
//    VLCVideoView *vlcVideoView3;
    
    VLCMediaPlayer *player1;
    VLCMediaPlayer *player2;
//    VLCMediaPlayer *player3;
}
- (void)awakeFromNib;

- (IBAction)play1:(id)sender;
- (IBAction)play2:(id)sender;
//- (IBAction)play3:(id)sender;

- (IBAction)doEnterFullscreen:(id)sender;

@end
