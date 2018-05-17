//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSCloudClient, NMSSubscriptionManager, NSObject<OS_dispatch_queue>;

@interface NMCSubscriptionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    HSCloudClient *_cloudClient;
    _Bool _cloudMusicLibraryEnabled;
    NMSSubscriptionManager *_subscriptionManager;
    _Bool _subscriber;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionStatusDidChangeNotification:(id)arg1;
- (void)_updateCloudMusicLibraryEnabledStatus;
- (void)_updateAppleMusicSubscriptionStatus;
- (void)preloadCloudMusicLibraryEnabledStatus;
@property(readonly, nonatomic, getter=isCloudMusicLibraryEnabled) _Bool cloudMusicLibraryEnabled;
- (void)preloadAppleMusicSubscriptionStatus;
@property(readonly, nonatomic, getter=isSubscriber) _Bool subscriber;
- (void)dealloc;
- (id)init;

@end
