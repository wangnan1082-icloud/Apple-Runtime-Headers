//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNScheduler.h"

@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject <CNScheduler>
{
    unsigned long long _clock;
    unsigned long long _nextSchedulableTick;
    unsigned long long _stopTime;
    CNQueue *_queue;
    _Bool _isStarted;
    _Bool _isPerforming;
}

+ (unsigned long long)timeWithDelay:(double)arg1 fromClock:(unsigned long long)arg2;
+ (id)providerWithScheduler:(id)arg1;
@property(readonly) unsigned long long clock; // @synthesize clock=_clock;
- (void).cxx_destruct;
- (_Bool)hasJobsScheduled;
- (void)stop;
- (_Bool)_performJobs;
- (void)advanceTo:(unsigned long long)arg1;
- (void)advanceBy:(unsigned long long)arg1;
- (void)start;
- (unsigned long long)_nextSchedulableTick;
- (id)_scheduleBlock:(CDUnknownBlockType)arg1 atTime:(unsigned long long)arg2;
- (double)timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
