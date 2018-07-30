//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class HMDAccessory, HMFMessage, NSObject<OS_dispatch_queue>, NSSet, NSString;

@interface HMDCameraSettingProactiveReader : HMFObject <HMFLogging>
{
    HMFMessage *_message;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HMDCameraSettingProactiveReaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSSet *_streamControlMessageHandlers;
    NSString *_logID;
    HMDAccessory *_accessory;
}

+ (id)logCategory;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) NSSet *streamControlMessageHandlers; // @synthesize streamControlMessageHandlers=_streamControlMessageHandlers;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <HMDCameraSettingProactiveReaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMFMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)_handleStreamStatusMultireadResponse:(id)arg1;
- (void)readSetting;
- (id)logIdentifier;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 message:(id)arg5 streamMessageHandlers:(id)arg6 logID:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
