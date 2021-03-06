//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderContext.h>

#import <NetworkExtension/NEFilterDataExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEFilterDataExtensionProviderProtocol-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSXPCListenerEndpoint;
@protocol OS_dispatch_source, OS_xpc_object;

@interface NEFilterDataExtensionProviderContext : NEFilterExtensionProviderContext <NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>
{
    BOOL _controlProviderExists;
    NSObject<OS_xpc_object> *_clientListener;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSMutableDictionary *_browserFlows;
    NSMutableDictionary *_socketFlows;
    NSMutableDictionary *_channelFlows;
    NSMutableArray *_socketExceptions;
    NSObject<OS_dispatch_source> *_source;
    NSDictionary *_remediationMap;
    NSDictionary *_URLAppendStringMap;
    NSMutableArray *_pendingConnections;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(retain) NSMutableArray *pendingConnections; // @synthesize pendingConnections=_pendingConnections;
@property(retain) NSDictionary *URLAppendStringMap; // @synthesize URLAppendStringMap=_URLAppendStringMap;
@property(retain) NSDictionary *remediationMap; // @synthesize remediationMap=_remediationMap;
@property(retain) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableArray *socketExceptions; // @synthesize socketExceptions=_socketExceptions;
@property(retain) NSMutableDictionary *channelFlows; // @synthesize channelFlows=_channelFlows;
@property(retain) NSMutableDictionary *socketFlows; // @synthesize socketFlows=_socketFlows;
@property(retain) NSMutableDictionary *browserFlows; // @synthesize browserFlows=_browserFlows;
@property(retain) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(retain) NSObject<OS_xpc_object> *clientListener; // @synthesize clientListener=_clientListener;
@property BOOL controlProviderExists; // @synthesize controlProviderExists=_controlProviderExists;
- (void).cxx_destruct;
- (void)handleNewChannelFlowMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleChannelMessageFlowFinish:(id)arg1 forConnection:(id)arg2;
- (void)handleChannelMessageMoreData:(id)arg1 forConnection:(id)arg2;
- (void)getSourceAppInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reportFlow:(id)arg1 forVerdict:(id)arg2;
- (void)reportFlow:(id)arg1 forVerdict:(id)arg2 absoluteVerdict:(id)arg3;
- (void)report:(id)arg1;
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)trimURLFromFlow:(id)arg1;
- (void)sendSocketContentFilterRequest;
- (void)sendBrowserContentFilterServerRequest;
- (void)provideURLAppendStringMap:(id)arg1;
- (void)provideRemediationMap:(id)arg1;
- (void)handleRulesChanged;
- (void)fetchProviderConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)providerControlSocketFileHandle:(id)arg1;
- (void)setupSocketContentFilterWithControlSocket:(int)arg1;
- (void)teardownSocketSource;
- (void)closePendingConnections;
- (void)setupSocketSourceWithControlSocket:(int)arg1;
- (void)handleSocketSourceEventWithSocket:(int)arg1;
- (void)purgeData:(int)arg1 size:(int)arg2 buf:(char *)arg3 bufSize:(int)arg4;
- (void)handleChannelSourceEventAttachComplete:(id)arg1 flowUUID:(id)arg2 sendNewFlowReply:(CDUnknownBlockType)arg3;
- (void)closeChannelFlow:(id)arg1 flowUUID:(id)arg2;
- (void)channelContentFilterWriteMessageForFlowUUID:(id)arg1 client_connection:(id)arg2 xpc_object_t:(id)arg3 drop:(BOOL)arg4 inboundPassOffset:(unsigned long long)arg5 inboundPeekOffset:(unsigned long long)arg6 outboundPassOffset:(unsigned long long)arg7 outboundPeekOffset:(unsigned long long)arg8;
- (void)handleSocketSourceEventAttachComplete:(id)arg1 socketID:(unsigned long long)arg2 sendNewFlowReply:(CDUnknownBlockType)arg3;
- (BOOL)blessClient:(id)arg1;
- (BOOL)socketContentFilterWriteMessageWithControlSocket:(int)arg1 socketID:(unsigned long long)arg2 drop:(BOOL)arg3 inboundPassOffset:(unsigned long long)arg4 inboundPeekOffset:(unsigned long long)arg5 outboundPassOffset:(unsigned long long)arg6 outboundPeekOffset:(unsigned long long)arg7;
- (void)closeSocketFlow:(id)arg1 socketID:(unsigned long long)arg2;
- (void)acceptNewClientConnection:(id)arg1;
- (void)handleClientMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleRemediationMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleDataCompleteMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleAddDataMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleNewFlowMessage:(id)arg1 forConnection:(id)arg2;
- (void)handleNewFlowMessageComplete:(id)arg1 forConnection:(id)arg2 flow:(id)arg3 flowUUID:(const char *)arg4 direction:(long long)arg5;
- (id)cleanRemediationURL:(id)arg1 flow:(id)arg2 providerConfiguration:(id)arg3;
- (id)sanitizeRemediationButtonText:(id)arg1;
- (void)closeBrowserFilterFlow:(id)arg1 forUUID:(id)arg2;
- (void)stopWithReason:(int)arg1;
- (void)dispose;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

