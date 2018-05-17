//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssertionServices/BKSBaseAssertionClient.h>

@class NSHashTable, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface BKSTerminationAssertionClient : BKSBaseAssertionClient
{
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_assertionEfficacyQueue;
    NSMutableDictionary *_efficaciesByBundleID;
}

- (void)_requestAllCurrentAssertions;
- (void)_notifyObserversOfEfficacyChangedTo:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_handleEfficacyChangedEvent:(id)arg1;
- (void)connectionWasDestroyed;
- (void)assertionQueue_handleEvent:(id)arg1 ofType:(unsigned int)arg2;
- (void)assertionQueue_handleMessage:(id)arg1;
- (void)sendDestroyEvent:(id)arg1;
- (void)sendUpdateEvent:(id)arg1;
- (_Bool)sendCreateEvent:(id)arg1 error:(id *)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)terminationAssertionIsHeldForBundleIdentifier:(id)arg1 withEfficacy:(unsigned int)arg2 error:(id *)arg3;
- (unsigned int)terminationAssertionEfficacyForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)supportedAssertionType;
- (void)dealloc;
- (id)initWithMultiplexer:(id)arg1;

@end
