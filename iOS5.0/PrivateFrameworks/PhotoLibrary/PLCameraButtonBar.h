/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIToolbar.h"

@class PLCameraButton;

@interface PLCameraButtonBar : UIToolbar
{
    PLCameraButton *_cameraButton;
}

+ (float)defaultHeight;
+ (id)backgroundImage;
@property(retain, nonatomic) PLCameraButton *cameraButton; // @synthesize cameraButton=_cameraButton;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initInView:(id)arg1 withItems:(CDStruct_dbaf35c5 *)arg2 withCount:(int)arg3;

@end

