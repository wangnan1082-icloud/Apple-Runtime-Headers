//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFHomeKitObject-Protocol.h>

@class HFUserNotificationServiceSettings, NAFuture;

@protocol HFUserNotificationServiceSettingsProviding <HFHomeKitObject>
@property(readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
- (NAFuture *)hf_updateUserNotificationSettings:(HFUserNotificationServiceSettings *)arg1;
@end

