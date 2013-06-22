/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BBSettingsGateway, BBSystemStateProvider;

@interface SBBulletinSystemStateAdapter : NSObject
{
    BBSystemStateProvider *_stateProvider;
    BBSettingsGateway *_settingsGateway;
    BOOL _quietModeEnabled;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
- (void)_lostModeStateChanged;
- (void)_screenDimmed:(id)arg1;
- (void)_lockStateChanged:(id)arg1;
- (BOOL)quietModeEnabled;
- (void)_activeBehaviorOverrideTypesChanged:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end
