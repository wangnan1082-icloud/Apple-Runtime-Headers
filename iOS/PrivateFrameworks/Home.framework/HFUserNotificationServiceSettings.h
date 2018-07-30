//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSPredicate;

@interface HFUserNotificationServiceSettings : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _notificationsEnabled;
    NSPredicate *_notificationCondition;
}

+ (id)combinedConditionForBulletinBoardNotifications:(id)arg1;
@property(retain, nonatomic) NSPredicate *notificationCondition; // @synthesize notificationCondition=_notificationCondition;
@property(nonatomic, getter=areNotificationsEnabled) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)applySettingsToBulletinBoardNotifications:(id)arg1;
- (id)initWithNotificationsEnabled:(_Bool)arg1 condition:(id)arg2;
- (id)initWithBulletinBoardNotifications:(id)arg1;

@end
