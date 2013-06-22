/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDateFormatter, NSString, PLEntry, PLLogger;

@interface PowerlogMain : NSObject
{
    PLEntry *_loggerList;
    PLLogger *coreLogger;
    struct __sFILE *logFile;
    NSDateFormatter *logTimestampFormatter;
    NSString *linkedLogPath;
    id rolloverTimer;
    int kQueue;
    int crashReportDirectoryDescriptor;
    int currentLogDirectoryDescriptor;
    struct __CFRunLoopSource *kqueueDescriptorSource;
    struct __CFFileDescriptor *kqueueDescriptorRef;
    BOOL rotateDebugLogging;
    BOOL runLoopDebugLogging;
    BOOL _logToFile;
    BOOL _shouldKeepRunning;
    BOOL _bbPostProcessing;
    BOOL _setupComplete;
}

+ (void)stopSharedPowerlogMain;
+ (id)sharedPowerlogMain;
+ (BOOL)shouldRunPowerlogDependant;
@property BOOL setupComplete; // @synthesize setupComplete=_setupComplete;
@property BOOL shouldKeepRunning; // @synthesize shouldKeepRunning=_shouldKeepRunning;
@property BOOL logToFile; // @synthesize logToFile=_logToFile;
@property(readonly) PLEntry *loggerList; // @synthesize loggerList=_loggerList;
@property BOOL basebandPostProcessing; // @synthesize basebandPostProcessing=_bbPostProcessing;
- (void)logStatusRequestFired:(id)arg1;
- (void)logFileCheckFired:(id)arg1;
- (void)rolloverTimerFired:(id)arg1;
- (void)triggerAllLoggers:(id)arg1;
- (void)stopNotifications;
- (void)setupNotifications;
- (void)powerlogExitRequested;
- (void)setupLoggers;
- (id)loggerForName:(id)arg1;
- (void)addLoggerByName:(id)arg1;
- (void)watchCrashReportDirectories:(BOOL)arg1;
- (void)logDirectoryEventForFileDescriptor:(struct __CFFileDescriptor *)arg1;
- (void)setRolloverTimer:(id)arg1;
- (void)startLoggingToFile;
- (void)logStateEvent:(id)arg1 existingLogDate:(id)arg2 periodStart:(id)arg3 rolloverDate:(id)arg4;
- (BOOL)dateInRange:(id)arg1 startInclusive:(id)arg2 endExclusive:(id)arg3;
- (void)startLoggingToCurrentLog:(id)arg1;
- (void)generateLogGatheringFiles:(id)arg1;
- (void)generatePListForLog:(id)arg1 InCrashReporter:(id)arg2;
- (BOOL)archiveLogFile:(id)arg1 toFile:(id)arg2 atDir:(id)arg3;
- (void)DeleteOldFiles;
- (int)ComputeTimeFromNowFromDefaults:(id)arg1;
- (void)stopLoggingAndCloseFile;
- (BOOL)readLogFilePrefix:(id)arg1 buildVersion:(id *)arg2 logDate:(id *)arg3;
- (void)createNewCurrentLogWithTimestamp:(id)arg1;
- (BOOL)shouldRotateLogFilesWithPeriodStart:(id *)arg1 withRolloverDate:(id *)arg2;
- (id)logFileNameForTimestamp:(id)arg1;
- (void)logFileCheck;
- (BOOL)shouldLinkToCrashreporter;
- (id)currentLoggingModeString;
- (id)rotatePowerlogDefaultStringValue;
- (BOOL)moveFileAtPath:(id)arg1;
- (BOOL)moveFileFromPath:(id)arg1 toPath:(id)arg2;
- (BOOL)deleteFileAtPath:(id)arg1;
- (BOOL)doesFileAtPathExist:(id)arg1;
- (BOOL)isFileDescripterMultiLinked:(struct __sFILE *)arg1;
- (BOOL)isSameHardLinkedFileAtPath:(id)arg1 asAtPath:(id)arg2;
- (void)fatalError:(id)arg1 withReason:(id)arg2;
- (id)remainingStringFrom:(id)arg1 byRemovingPrefix:(id)arg2 byRemovingSuffix:(id)arg3;
- (id)mainDispatchQueue;
- (void)dealloc;
- (short)currentRunningMode;
- (short)currentLoggerMode;
- (void)run;
- (void)runThread:(id)arg1;
- (id)init;

@end
