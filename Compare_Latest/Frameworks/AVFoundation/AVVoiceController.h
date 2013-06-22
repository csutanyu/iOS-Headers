/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary;

@interface AVVoiceController : NSObject
{
    void *_impl;
}

- (id)initWithHardwareConfig:(int)arg1 error:(id *)arg2;
- (void)finalize;
- (void)dealloc;
- (void)releaseAudioSession;
@property int hardwareConfiguration;
- (BOOL)prepareRecordWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(int)arg2;
- (BOOL)playAlertSoundForType:(int)arg1;
- (BOOL)startRecording;
- (void)stopRecording;
- (BOOL)preparePlaybackWithSettings:(id)arg1 error:(id *)arg2;
- (BOOL)preparePlaybackFromURL:(id)arg1 error:(id *)arg2;
- (BOOL)startPlaying;
- (void)stopPlaying;
@property id <AVVoiceControllerRecordDelegate> recordDelegate; // @dynamic recordDelegate;
@property(readonly) NSDictionary *recordSettings;
- (double)getRecordBufferDuration;
- (BOOL)setRecordBufferDuration:(double)arg1;
@property id <Endpointer> endpointerDelegate;
@property int recordEndpointMode;
@property double recordStartWaitTime;
@property double recordInterspeechWaitTime;
@property double recordEndWaitTime;
@property id <AVVoiceControllerPlaybackDelegate> playbackDelegate; // @dynamic playbackDelegate;
@property(readonly) NSDictionary *playbackSettings;
- (double)getPlaybackBufferDuration;
- (BOOL)setPlaybackBufferDuration:(double)arg1;
@property(readonly, getter=isPlaying) BOOL playing;
@property(readonly, getter=isRecording) BOOL recording;
@property float alertVolume;
@property float playbackVolume;
@property(getter=isMeteringEnabled) BOOL meteringEnabled;
- (void)updateMeters;
- (float)peakPowerForChannel:(unsigned int)arg1;
- (float)averagePowerForChannel:(unsigned int)arg1;
@property(getter=isStopOnEndpointEnabled) BOOL stopOnEndpointEnabled;

@end
