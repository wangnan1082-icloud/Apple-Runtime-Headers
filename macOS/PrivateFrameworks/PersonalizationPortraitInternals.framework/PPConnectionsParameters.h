//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject
{
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)donationBlacklistApps;
- (id)donationWhitelistApps;
- (id)donationBlacklistWebsites;
- (id)donationWhitelistWebsites;
- (id)locationPredictionBlacklistApps;
- (BOOL)shouldUseWhitelistApps;
- (BOOL)shouldUseWhitelistWebsite;
- (double)locationAppLastUseTimeoutSeconds;
- (double)pasteboardItemExpirySeconds;
- (double)linguisticTriggerExpirySeconds;
- (long long)locationAppPredictionOverallLaunchFactor;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (long long)locationAppPredictionInstallMaxScore;
- (long long)locationAppPredictionInstallHalflife;
- (long long)appSwitcherPredictionExpiry;
- (double)userActivityCandidateScore;
- (unsigned long long)userActivityBatchSize;
- (unsigned long long)quickTypePredictionLimit;
- (double)calendarEventLocationExpirySeconds;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (double)namedEntitySourceExpirySeconds;
- (double)namedEntitySourceLookBackSeconds;
- (double)userActivityExpirySeconds;
- (long long)expirySeconds;
- (BOOL)boolValueForKey:(id)arg1 default:(BOOL)arg2;
- (double)doubleValueForKey:(id)arg1 default:(long long)arg2;
- (long long)integerValueForKey:(id)arg1 default:(long long)arg2;
- (long long)unsignedIntegerValueForKey:(id)arg1 default:(long long)arg2;
- (id)assetValueForKey:(id)arg1;
- (id)init;

@end

