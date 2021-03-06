/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSPersistentStoreCache : NSObject
{
    id _externalData;
    unsigned int _capacity;
}

+ (void)initialize;
- (id)init;
- (void)_growRegistrationCollectionTo:(unsigned int)arg1;
- (void)dealloc;
- (void)forgetAllExternalData;
- (void)decrementRefCountForObjectID:(id)arg1;
- (void)incrementRefCountForObjectID:(id)arg1;
- (int)refCountForObjectID:(id)arg1;
- (void)forgetExternalDataForObjectID:(id)arg1;
- (void)registerExternalData:(id)arg1 forObjectID:(id)arg2 options:(unsigned int)arg3;
- (id)externalDataForObjectID:(id)arg1 timestamp:(double)arg2;
- (unsigned int)optionsForObjectID:(id)arg1;
- (void)registerExternalData:(id)arg1 forSourceObjectID:(id)arg2 key:(id)arg3 options:(unsigned int)arg4 andTimestamp:(double)arg5;
- (id)externalDataForSourceObjectID:(id)arg1 key:(id)arg2 timestamp:(double)arg3;

@end

