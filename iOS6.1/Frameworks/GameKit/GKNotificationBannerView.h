/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface GKNotificationBannerView : UIView
{
    NSString *_title;
    NSString *_message;
    BOOL _showing;
    UIImageView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    double _duration;
    id _completionHandler;
    id _touchHandler;
}

+ (void)decrementCount;
+ (void)incrementCount;
+ (id)semaphore;
+ (id)queue;
+ (id)bannerWindow;
@property(copy, nonatomic) id touchHandler; // @synthesize touchHandler=_touchHandler;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL showing; // @synthesize showing=_showing;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_layoutForOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_hide;
- (void)_show;
- (void)_wasTouched:(id)arg1;
- (void)showWithTouchHandler:(id)arg1;
- (void)showWithCompletionHandler:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)orientationChanged:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;

@end

