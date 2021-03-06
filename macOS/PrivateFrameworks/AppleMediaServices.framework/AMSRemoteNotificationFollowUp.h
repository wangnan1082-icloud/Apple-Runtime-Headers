//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSRemoteNotificationParsable-Protocol.h>
#import <AppleMediaServices/AMSUserNotificationIntentCallback-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSRemoteNotificationFollowUp : NSObject <AMSRemoteNotificationParsable, AMSUserNotificationIntentCallback>
{
}

+ (id)_createNotificationFromFollowUpItem:(id)arg1;
+ (id)_createFollowUpItemFromNotification:(id)arg1;
+ (id)_createFollowUpItemFromPayload:(id)arg1;
+ (BOOL)_shouldClearFollowUpFromPayload:(id)arg1;
+ (BOOL)_shouldAllowFollowUp:(id)arg1;
+ (id)_sharedNotificationCenter;
+ (void)_performPostWithPayload:(id)arg1;
+ (void)_performClearWithPayload:(id)arg1;
+ (void)userNotification:(id)arg1 selectedButtonAction:(id)arg2;
+ (BOOL)supportsInactiveAccounts;
+ (long long)supportedActionType;
+ (void)handleNotificationPayload:(id)arg1;
+ (BOOL)isDeviceOfferNotification:(id)arg1;
+ (void)removeDeviceOfferWithPayload:(id)arg1 logKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

