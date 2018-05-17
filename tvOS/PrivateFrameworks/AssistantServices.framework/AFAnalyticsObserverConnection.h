//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFAnalyticsObserver.h"
#import "AFInvalidating.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSXPCConnection;

@interface AFAnalyticsObserverConnection : NSObject <AFAnalyticsObserver, AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSXPCConnection *_connection;
    CDUnknownBlockType _observation;
}

- (void).cxx_destruct;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (id)_connection;
- (void)_cleanUpConnection;
- (oneway void)didObserveEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)dealloc;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitUntilInvalidated;
- (id)initWithObservation:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
