//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString;

@protocol UNUserNotificationServiceConnectionObserver <NSObject>

@optional
- (void)didChangePendingNotificationRequests:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didDeliverNotifications:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)didReceiveDeviceToken:(NSData *)arg1 forBundleIdentifier:(NSString *)arg2;
@end
