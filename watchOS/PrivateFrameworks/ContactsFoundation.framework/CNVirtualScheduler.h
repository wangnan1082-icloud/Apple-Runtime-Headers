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
    unsigned int _clock;
    unsigned int _nextSchedulableTick;
    unsigned int _stopTime;
    CNQueue *_queue;
    _Bool _isStarted;
    _Bool _isPerforming;
}

+ (unsigned int)timeWithDelay:(double)arg1 fromClock:(unsigned int)arg2;
+ (id)providerWithScheduler:(id)arg1;
@property(readonly) unsigned int clock; // @synthesize clock=_clock;
- (void).cxx_destruct;
- (_Bool)hasJobsScheduled;
- (void)stop;
- (_Bool)_performJobs;
- (void)advanceTo:(unsigned int)arg1;
- (void)advanceBy:(unsigned int)arg1;
- (void)start;
- (unsigned int)_nextSchedulableTick;
- (id)_scheduleBlock:(CDUnknownBlockType)arg1 atTime:(unsigned int)arg2;
- (double)timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned int)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned int)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned int)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
