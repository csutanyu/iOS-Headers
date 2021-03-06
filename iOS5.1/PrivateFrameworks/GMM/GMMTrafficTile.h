/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface GMMTrafficTile : NSObject
{
    BOOL empty;
    double expirationTime;
    NSMutableArray *roadsAtSpeed[4];
}

+ (double)defaultExpirationTime;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty; // @synthesize empty;
- (void)invalidate;
- (BOOL)readFromStream:(struct InputDataStream *)arg1 tilePath:(const CDStruct_1ea8d665 *)arg2;
- (id)getRoadsAtSpeed:(int)arg1;
@property(readonly, nonatomic) double expirationTime;
- (void)dealloc;
- (id)init;

@end

