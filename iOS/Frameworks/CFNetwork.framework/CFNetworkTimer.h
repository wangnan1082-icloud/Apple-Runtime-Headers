//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface CFNetworkTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    double _lastResumeTime;
    double _lastPauseTime;
    double _runTime;
    int _state;
}

@property int state; // @synthesize state=_state;
- (void)setCancelCallbacks:(CDUnknownBlockType)arg1;
- (void)resumeCallbacksForTimer;
- (void)suspendCallbacksForTimer;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)cancelTimer;
- (void)setTimer:(double)arg1;
- (id)initWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end
