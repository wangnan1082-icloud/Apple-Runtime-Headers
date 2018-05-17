//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMDAccessory, HMDCameraSessionID, HMDCameraStreamMetrics, HMDCameraStreamSnapshotHandler, HMDService, NSNumber, NSObject<OS_dispatch_queue>, NSString;

@interface HMDCameraStreamControlManager : HMFObject <HMFLogging>
{
    id <HMDCameraStreamControlManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDAccessory *_accessory;
    HMDService *_streamManagementService;
    NSNumber *_slotIdentifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraSessionID *_sessionID;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    HMDCameraStreamMetrics *_streamMetrics;
}

+ (id)logCategory;
@property(readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics; // @synthesize streamMetrics=_streamMetrics;
@property(readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property(readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
@property(readonly, nonatomic) HMDService *streamManagementService; // @synthesize streamManagementService=_streamManagementService;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <HMDCameraStreamControlManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_callStreamStopped:(id)arg1;
- (void)_callStreamReconfigured;
- (void)_callStreamFirstFrameReceived:(unsigned long long)arg1 aspectRatio:(id)arg2 slotIdentifier:(id)arg3;
- (void)_callStreamStarted;
- (void)_callStreamRemoteConnectionSetup;
- (void)_callStreamNegotiated:(id)arg1;
- (void)_reportError:(id)arg1;
- (id)managerProtocol;
- (void)_reportInternalErrorCode:(long long)arg1;
- (void)_reportErrorCode:(long long)arg1;
- (void)_cleanUpStreamSession:(id)arg1;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 isLocal:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
