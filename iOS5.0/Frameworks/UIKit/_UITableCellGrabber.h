/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class UITableCell;

@interface _UITableCellGrabber : UIControl
{
    UITableCell *_cell;
    struct CGPoint _downPoint;
}

- (BOOL)cancelTouchTracking;
- (BOOL)cancelMouseTracking;
- (void)_controlMouseDragged:(struct __GSEvent *)arg1;
- (void)_controlMouseUp:(struct __GSEvent *)arg1;
- (void)_controlMouseDown:(struct __GSEvent *)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingAt:(struct CGPoint)arg1 previous:(struct CGPoint)arg2 withEvent:(struct __GSEvent *)arg3;
- (BOOL)continueTrackingAt:(struct CGPoint)arg1 previous:(struct CGPoint)arg2 withEvent:(struct __GSEvent *)arg3;
- (BOOL)beginTrackingAt:(struct CGPoint)arg1 withEvent:(struct __GSEvent *)arg2;
- (BOOL)shouldTrack;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCell:(id)arg1;

@end
