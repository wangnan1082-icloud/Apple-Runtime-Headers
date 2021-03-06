//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDRemoteDeviceConfirmationHandler : HMFObject <HMFTimerDelegate>
{
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFTimer *_timer;
    double _timeout;
}

@property(readonly) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly) double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)completeWithError:(id)arg1;
- (void)start;
- (id)initWithTimeout:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

