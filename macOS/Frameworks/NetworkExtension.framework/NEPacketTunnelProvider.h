//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NETunnelProvider.h>

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NEPacketTunnelFlow, NSString;

@interface NEPacketTunnelProvider : NETunnelProvider <NSExtensionRequestHandling>
{
    NEPacketTunnelFlow *_packetFlow;
}

@property(retain) NEPacketTunnelFlow *packetFlow; // @synthesize packetFlow=_packetFlow;
- (void).cxx_destruct;
- (void)requestSocket:(BOOL)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)stopTunnelWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startTunnelWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelTunnelWithError:(id)arg1;
- (id)createUDPSessionThroughTunnelToEndpoint:(id)arg1 fromEndpoint:(id)arg2;
- (id)createTCPConnectionThroughTunnelToEndpoint:(id)arg1 enableTLS:(BOOL)arg2 TLSParameters:(id)arg3 delegate:(id)arg4;
- (id)getTunnelInterface;
- (id)initWithVirtualInterfaceType:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

