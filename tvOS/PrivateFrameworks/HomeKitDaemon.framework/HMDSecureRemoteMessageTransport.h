//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFMessageTransport.h"

#import "HMDRemoteDeviceMonitorDelegate.h"
#import "HMDSecureRemoteSessionDelegate.h"
#import "HMFDumpState.h"
#import "HMFLogging.h"
#import "HMFMessageTransportDelegate.h"

@class HMDAccountRegistry, HMDRemoteDeviceMonitor, HMDRemoteIdentityRegistry, HMDRemoteMessageNotifications, NSArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface HMDSecureRemoteMessageTransport : HMFMessageTransport <HMDRemoteDeviceMonitorDelegate, HMDSecureRemoteSessionDelegate, HMFLogging, HMFMessageTransportDelegate, HMFDumpState>
{
    NSArray *_transports;
    HMDRemoteIdentityRegistry *_identityRegistry;
    HMDAccountRegistry *_accountRegistry;
    HMDRemoteDeviceMonitor *_deviceMonitor;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSMutableSet *_secureRemoteSessions;
    HMDRemoteMessageNotifications *_sessionNotifications;
    NSMutableDictionary *_currentHomeConfigurations;
}

+ (id)logCategory;
+ (id)shortDescription;
@property(retain, nonatomic) NSMutableDictionary *currentHomeConfigurations; // @synthesize currentHomeConfigurations=_currentHomeConfigurations;
@property(retain, nonatomic) HMDRemoteMessageNotifications *sessionNotifications; // @synthesize sessionNotifications=_sessionNotifications;
@property(readonly, nonatomic) NSMutableSet *secureRemoteSessions; // @synthesize secureRemoteSessions=_secureRemoteSessions;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) HMDRemoteDeviceMonitor *deviceMonitor; // @synthesize deviceMonitor=_deviceMonitor;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
@property(readonly, nonatomic) HMDRemoteIdentityRegistry *identityRegistry; // @synthesize identityRegistry=_identityRegistry;
@property(readonly, copy, nonatomic) NSArray *transports; // @synthesize transports=_transports;
- (void).cxx_destruct;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (id)dumpState;
- (void)secureRemoteSession:(id)arg1 receivedRequestToSendMessage:(id)arg2;
- (void)secureRemoteSession:(id)arg1 didCloseWithError:(id)arg2;
- (void)_handleSecureMessage:(id)arg1 fromDevice:(id)arg2 transport:(id)arg3;
- (id)_openSecureSessionToDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openSecureSessionToDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_sendSecureMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_secureRemoteSessionForDevice:(id)arg1;
- (void)_handleNotificationResponseForMessage:(id)arg1 responsePayload:(id)arg2 responseError:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_handleNotificationMessage:(id)arg1;
- (void)_sendPingToDevice:(id)arg1 timeout:(double)arg2 restriction:(unsigned long long)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_pingDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pingDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handlePingMessage:(id)arg1;
- (void)_updateDeviceInformationFromMessage:(id)arg1;
- (void)_handleElectDeviceForIDSSession:(id)arg1;
- (_Bool)_haveAllCapabilities:(id)arg1;
- (id)prepareAnswerForRequestedCapabilities:(id)arg1;
- (void)_handleElectDeviceForUserResponse:(id)arg1 error:(id)arg2 responseQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)electDeviceForUser:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)_electDeviceForAccountDestination:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeHome:(id)arg1;
- (void)updateHome:(id)arg1 configurationVersion:(long long)arg2;
- (_Bool)_handleReceivedMessage:(id)arg1 transport:(id)arg2;
- (id)_preferredTransportForMessage:(id)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)start;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (void)dealloc;
- (id)initWithTransports:(id)arg1 identityRegistry:(id)arg2 accountRegistry:(id)arg3;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
