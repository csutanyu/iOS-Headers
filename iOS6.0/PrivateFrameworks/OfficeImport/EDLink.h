/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDCollection;

@interface EDLink : NSObject
{
    int mType;
    EDCollection *mExternalNames;
}

+ (id)linkWithType:(int)arg1;
- (id)externalNames;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (id)initWithType:(int)arg1;

@end

