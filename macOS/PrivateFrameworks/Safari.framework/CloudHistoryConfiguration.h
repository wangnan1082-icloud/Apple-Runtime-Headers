//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSCloudHistoryConfiguration.h"

#import "RemoteConfigurationsControllerDelegate.h"

@class NSDictionary, NSString, RemoteConfigurationsController;

__attribute__((visibility("hidden")))
@interface CloudHistoryConfiguration : WBSCloudHistoryConfiguration <RemoteConfigurationsControllerDelegate>
{
    NSDictionary *_remoteConfiguration;
    RemoteConfigurationsController *_remoteConfigurationsController;
    BOOL _fullyConfigured;
    double _historyModificationIdleDelayBeforeSyncAttempt;
    double _historyRemovalIdleDelayBeforeSyncAttempt;
    double _saveChangesBeforeTerminationTimeout;
}

+ (id)sharedConfiguration;
@property(readonly, nonatomic) double saveChangesBeforeTerminationTimeout; // @synthesize saveChangesBeforeTerminationTimeout=_saveChangesBeforeTerminationTimeout;
@property(readonly, nonatomic) double historyRemovalIdleDelayBeforeSyncAttempt; // @synthesize historyRemovalIdleDelayBeforeSyncAttempt=_historyRemovalIdleDelayBeforeSyncAttempt;
@property(readonly, nonatomic) double historyModificationIdleDelayBeforeSyncAttempt; // @synthesize historyModificationIdleDelayBeforeSyncAttempt=_historyModificationIdleDelayBeforeSyncAttempt;
@property(readonly, nonatomic, getter=isFullyConfigured) BOOL fullyConfigured; // @synthesize fullyConfigured=_fullyConfigured;
- (void).cxx_destruct;
- (void)remoteConfigurationsController:(id)arg1 didReceiveNewConfiguration:(id)arg2;
- (void)applyPlatformConfiguration:(id)arg1 withTolerance:(long long)arg2;
- (id)remoteConfiguration;
- (id)platformBuiltInConfiguration;
- (void)stopTryingToLoadRemoteConfiguration;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
