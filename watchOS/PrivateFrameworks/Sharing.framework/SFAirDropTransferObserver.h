//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Sharing/SFXPCClient.h>

#import "SFAirDropTransferObserverProtocol.h"

@class NSMutableDictionary, NSString;

@interface SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol>
{
    id <SFAirDropTransferObserverDelegate> _delegate;
    NSMutableDictionary *_transferIdentifierToTransfer;
}

@property(retain) NSMutableDictionary *transferIdentifierToTransfer; // @synthesize transferIdentifierToTransfer=_transferIdentifierToTransfer;
@property(nonatomic) __weak id <SFAirDropTransferObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldEscapeXpcTryCatch;
- (id)remoteObjectInterface;
- (id)exportedInterface;
- (id)machServiceName;
- (void)removedTransfer:(id)arg1;
- (void)updatedTransfer:(id)arg1;
- (void)updateActionHandlersOnTransfer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)arg1;
- (void)observeForLocalOnlyPropertiesOnTransfer:(id)arg1;
- (void)invalidate;
- (void)activate;
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
