/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMDaemonCore/IMDServiceSession.h>

@class NSArray, NSDictionary;

@interface IMDServiceSession (IMDServiceSession_BuddyList)
- (void)changeLocalProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;
- (id)localPropertiesOfBuddy:(id)arg1;
- (void)clearLocalProperties;
- (id)localProperty:(id)arg1 ofBuddy:(id)arg2;
- (id)property:(id)arg1 ofBuddy:(id)arg2;
- (void)endBuddyChanges;
- (void)clearPropertiesOfBuddy:(id)arg1;
- (void)changeProperty:(id)arg1 ofBuddy:(id)arg2 to:(id)arg3;
- (void)beginBuddyChanges;
- (void)markBuddiesAsChanged:(id)arg1;
- (void)resumeBuddyUpdates;
- (void)holdBuddyUpdates;
@property(readonly) NSDictionary *buddyProperties;
- (id)groups;
@property(readonly, nonatomic) NSArray *allBuddies;
- (id)pictureKeyForBuddy:(id)arg1;
- (id)pictureOfBuddy:(id)arg1;
@property(readonly, nonatomic) NSDictionary *buddyPictures;
@end

