//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>
#import <HealthDaemon/HDProcessStateObserver-Protocol.h>

@class FBSSystemService, HDAssertionManager, HDProcessStateManager, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HDAppLauncher : NSObject <HDProcessStateObserver, HDAssertionObserver>
{
    HDProcessStateManager *_processStateManager;
    FBSSystemService *_systemService;
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    NSMutableDictionary *_registeredAssertionsByIdentifier;
    NSMutableSet *_monitoredProcessBundleIdentifiers;
    NSMutableSet *_launchingProcessBundleIdentifiers;
    double _launchCountResetThreshold;
    double _baseLaunchDelay;
    int _maxLaunchCount;
}

+ (double)_launchCountResetThresholdForDelay:(double)arg1 maxLaunchCount:(int)arg2 base:(double)arg3;
- (void).cxx_destruct;
- (_Bool)unitTest_hasAssertionForBundleIdentifier:(id)arg1;
- (void)unitTest_setBaseLaunchDelay:(double)arg1 launchCountResetThreshold:(double)arg2 maxLaunchCount:(int)arg3;
- (void)processTerminated:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)_queue_scheduleLaunchForClient:(id)arg1;
- (void)_queue_launchClientIfNeeded:(id)arg1;
- (_Bool)_queue_clientRequiresLaunch:(id)arg1 assertions:(id)arg2;
- (id)_queue_assertionsForClientBundleIdentifier:(id)arg1;
- (id)takeKeepAliveAssertionForApplicationBundleIdentifier:(id)arg1 processBundleIdentifier:(id)arg2 payloadOptions:(id)arg3;
- (id)initWithProcessStateManager:(id)arg1 systemService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

