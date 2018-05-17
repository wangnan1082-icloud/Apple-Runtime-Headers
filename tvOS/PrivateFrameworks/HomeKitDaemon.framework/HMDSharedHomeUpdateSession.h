//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMFDumpState.h"
#import "HMFLogging.h"
#import "HMFTimerDelegate.h"

@class HMDCentralMessageDispatcher, HMDRemoteDeviceMessageDestination, HMDResidentDevice, HMFTimer, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMDSharedHomeUpdateSession : NSObject <HMFLogging, HMFTimerDelegate, HMFDumpState>
{
    NSString *_homeIdentifier;
    NSUUID *_sessionID;
    NSDictionary *_messagePayload;
    HMDCentralMessageDispatcher *_remoteMessageDispatcher;
    HMDRemoteDeviceMessageDestination *_destination;
    HMDResidentDevice *_residentDevice;
    HMFTimer *_timer;
    unsigned long long _retryCount;
    double _currentTimerValue;
    id <HMDSharedHomeUpdateSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak id <HMDSharedHomeUpdateSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double currentTimerValue; // @synthesize currentTimerValue=_currentTimerValue;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) HMDResidentDevice *residentDevice; // @synthesize residentDevice=_residentDevice;
@property(readonly, nonatomic) HMDRemoteDeviceMessageDestination *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) HMDCentralMessageDispatcher *remoteMessageDispatcher; // @synthesize remoteMessageDispatcher=_remoteMessageDispatcher;
@property(readonly, nonatomic) NSDictionary *messagePayload; // @synthesize messagePayload=_messagePayload;
@property(readonly, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSString *homeIdentifier; // @synthesize homeIdentifier=_homeIdentifier;
- (void).cxx_destruct;
- (id)dumpState;
- (void)_callDelegate;
- (void)timerDidFire:(id)arg1;
- (void)startTimer;
- (void)_requestDataSync;
- (void)requestDataSync;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
- (void)dealloc;
- (id)initWithHomeIdentifier:(id)arg1 delegate:(id)arg2 workQueue:(id)arg3 destination:(id)arg4 residentDevice:(id)arg5 messagePayload:(id)arg6 remoteMessageDispatcher:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
