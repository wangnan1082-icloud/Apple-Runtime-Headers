//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSSet, NSString;

@protocol PDPushNotificationConsumer <NSObject>
- (void)applyPushNotificationToken:(NSString *)arg1;
- (void)handlePushNotificationForTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (NSSet *)pushNotificationTopics;
@end
