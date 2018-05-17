//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "NTKUpNextSiriServerInterface.h"

@class NSHashTable, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

@interface NTKUpNextSiriServer : NSObject <NSXPCListenerDelegate, NTKUpNextSiriServerInterface>
{
    NSHashTable *_observers;
    NSMutableSet *_connections;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
}

- (void).cxx_destruct;
- (void)_onqueue_async:(CDUnknownBlockType)arg1;
- (void)_accessRemoteClients:(CDUnknownBlockType)arg1;
- (void)_removeConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_accessObservers:(CDUnknownBlockType)arg1;
- (void)completedRequestWithDomain:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
