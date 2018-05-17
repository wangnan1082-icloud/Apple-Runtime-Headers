//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CSLSWakeGestureObserver.h"

@class CSLSConcurrentObserverStore, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface CSLSWakeGestureMonitor : NSObject <CSLSWakeGestureObserver>
{
    int _notifyToken;
    _Bool _wantsUnfilteredGestures;
    _Bool _wantsUnfilteredGesturesWithScreenOff;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    CSLSConcurrentObserverStore *_observers;
    CSLSConcurrentObserverStore *_filteredObservers;
    CSLSConcurrentObserverStore *_screenOffFilteredObservers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CSLSConcurrentObserverStore *screenOffFilteredObservers; // @synthesize screenOffFilteredObservers=_screenOffFilteredObservers;
@property(retain, nonatomic) CSLSConcurrentObserverStore *filteredObservers; // @synthesize filteredObservers=_filteredObservers;
@property(retain, nonatomic) CSLSConcurrentObserverStore *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)wakeGestureRecognized:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 observeFilteredGestures:(_Bool)arg2 includingWhenScreenOff:(_Bool)arg3;
- (void)addObserver:(id)arg1 observeFilteredGestures:(_Bool)arg2;
- (void)addObserver:(id)arg1;
- (void)_queue_updateWantsUnfilteredGesturesForced:(_Bool)arg1;
- (void)_updateWantsUnfilteredGesturesForced:(_Bool)arg1;
- (void)_queue_attemptConnection;
- (void)_attemptConnection;
- (void)_invalidateConnection;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
