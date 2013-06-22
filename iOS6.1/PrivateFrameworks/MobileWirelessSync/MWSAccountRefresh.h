/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AccountRefreshProtocol-Protocol.h"

@class NSSet, NSString;

@interface MWSAccountRefresh : NSObject <AccountRefreshProtocol>
{
    NSString *_username;
    NSString *_accountId;
    NSSet *_subscribedCalendarIds;
}

+ (id)accountToRefreshForBasicAccount:(id)arg1;
- (id)defaultContainerIdentifierForDataclass:(id)arg1;
- (BOOL)refreshContainerListForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)refreshContainersForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(BOOL)arg3;
- (void)dealloc;
- (id)init;
- (BOOL)_refreshSubscribedCalendarWithIdentifier:(id)arg1;
- (BOOL)_refreshSubscribedCalendars;
- (BOOL)_hasSubscribedCalendarWithIdentifier:(id)arg1;
- (BOOL)_hasSubscribedCalendars;
- (struct __CFString *)_mwsDataclassNameForDataclass:(id)arg1;
- (BOOL)_isConfiguredSyncAccount;
- (id)_username;
- (BOOL)_refreshDataclass:(id)arg1;
- (id)_initWithBasicAccount:(id)arg1;

@end
