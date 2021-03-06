//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDAccessory, HMDSoftwareUpdateModel, HMFMessageDispatcher, HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata, NSArray, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSoftwareUpdate : HMFObject <HMFLogging, HMFObject, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, NSSecureCoding>
{
    long long _state;
    HMSoftwareUpdateDocumentationMetadata *_documentationMetadata;
    NSUUID *_identifier;
    HMFSoftwareVersion *_version;
    unsigned long long _downloadSize;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_messageDispatcher;
    HMDAccessory *_accessory;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)modelNamespace;
@property __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) unsigned long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, copy) HMFSoftwareVersion *version; // @synthesize version=_version;
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;
@property(readonly, copy) HMDSoftwareUpdateModel *model;
- (void)_handleDocumentationStateNotification:(id)arg1;
- (void)_handleDocumentationRequest:(id)arg1;
- (void)_handleUpdateDocumentationMetadata:(id)arg1;
- (void)setDocumentationMetadata:(id)arg1;
@property(readonly) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @synthesize documentationMetadata=_documentationMetadata;
- (void)_handleUpdateState:(id)arg1;
- (void)setState:(long long)arg1;
@property(readonly) long long state; // @synthesize state=_state;
- (void)registerForMessages;
- (void)configureWithAccessory:(id)arg1 messageDispatcher:(id)arg2;
@property(readonly, copy) NSString *propertyDescription;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)__init;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

