//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKContinuityPaymentServiceDelegate.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, PKContinuityPaymentService, PKRemotePaymentRequest;

@interface PKContinuityPaymentCoordinator : NSObject <PKContinuityPaymentServiceDelegate>
{
    PKContinuityPaymentService *_continuityPaymentService;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_deviceUpdateTimeoutTimer;
    NSObject<OS_dispatch_source> *_deviceTotalUpdateTimeoutTimer;
    _Bool _isUpdatingDevices;
    PKRemotePaymentRequest *_currentRemotePaymentRequest;
    int _messageSendCount;
    int _messageSendCompleteCount;
    id <PKContinuityPaymentCoordinatorDelegate> _delegate;
    double _updatePaymentDeviceTimeout;
}

- (void).cxx_destruct;
- (void)_send_didReceiveCancellation;
- (void)_send_didReceivePayment:(id)arg1;
- (void)_send_didReceiveUpdatedPaymentDevice:(id)arg1;
- (void)_send_didTimeoutTotalUpdatePaymentDevices;
- (void)_send_didTimeoutUpdatePaymentDevices;
- (void)_deviceUpdateTotalTimerDidTimeout;
- (void)_deviceUpdateTimerDidTimeout;
- (void)_resetRequest;
- (void)_queue_sendPaymentResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceiveUpdatedPaymentDevices:(id)arg1;
- (void)cancelRemotePaymentRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendPaymentResult:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendPaymentClientUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRemotePaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePaymentDevices;
@property(readonly, nonatomic, getter=isAwaitingReply) _Bool awaitingReply;
@property(readonly, nonatomic) PKRemotePaymentRequest *currentRemotePaymentRequest;
@property(nonatomic) double updatePaymentDeviceTimeout; // @synthesize updatePaymentDeviceTimeout=_updatePaymentDeviceTimeout;
@property(nonatomic) __weak id <PKContinuityPaymentCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (id)initWithContinuityPaymentService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
