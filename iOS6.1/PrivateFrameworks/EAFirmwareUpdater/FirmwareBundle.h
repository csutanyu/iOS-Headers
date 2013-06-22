/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface FirmwareBundle : NSObject
{
    NSData *hash;
    NSData *firmwareImage;
    NSData *signature;
    NSData *certificate;
    unsigned int productIDCode;
    unsigned int firmwareImageBaseAddress;
    unsigned int firmwareImageSize;
}

+ (id)parseResourceFileIntoData:(id)arg1;
@property(readonly) unsigned int firmwareImageSize; // @synthesize firmwareImageSize;
@property(readonly) unsigned int firmwareImageBaseAddress; // @synthesize firmwareImageBaseAddress;
@property(readonly) unsigned int productIDCode; // @synthesize productIDCode;
@property(readonly) NSData *signature; // @synthesize signature;
@property(readonly) NSData *certificate; // @synthesize certificate;
@property(readonly) NSData *hash; // @synthesize hash;
@property(readonly) NSData *firmwareImage; // @synthesize firmwareImage;
- (void)dealloc;
- (id)parseFirmwareImageFileIntoData:(id)arg1;
- (id)initWithBundleName:(id)arg1;
- (id)initWithBundlePath:(id)arg1;
- (id)initWithBundle:(id)arg1;

@end
