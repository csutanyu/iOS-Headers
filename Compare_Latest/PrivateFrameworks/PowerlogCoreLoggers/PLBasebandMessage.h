/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDate, PLLogger;

@interface PLBasebandMessage : NSObject
{
    NSData *rawData;
    unsigned int ticksInGoodState;
    unsigned int ticksInGPSONState;
    double timeCalibration;
    NSDate *_apTimestamp;
    PLLogger *_logger;
}

+ (id)messageWithData:(id)arg1;
@property(retain) PLLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSDate *apTimestamp; // @synthesize apTimestamp=_apTimestamp;
@property(nonatomic) double timeCalibration; // @synthesize timeCalibration;
@property(readonly, nonatomic) unsigned int ticksInGPSONState; // @synthesize ticksInGPSONState;
@property(readonly, nonatomic) unsigned int ticksInGoodState; // @synthesize ticksInGoodState;
@property(readonly, nonatomic) NSData *rawData; // @synthesize rawData;
- (void)logEntry:(id)arg1 withBody:(id)arg2;
- (void)logWithLogger:(id)arg1;
- (_Bool)isCalibratedDateGood;
@property(readonly, nonatomic) NSDate *calibratedTimestamp;
@property(readonly, nonatomic) NSDate *timestamp;
- (_Bool)isTimestampValid:(CDStruct_81b19818 *)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

