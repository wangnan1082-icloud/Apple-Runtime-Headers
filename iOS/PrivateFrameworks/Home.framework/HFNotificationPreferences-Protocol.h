//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NAFuture, NSPredicate;

@protocol HFNotificationPreferences <NSObject>
@property(readonly, nonatomic) NSPredicate *hf_notificationsCondition;
@property(readonly, nonatomic) _Bool hf_isShowNotificationsStatus;
@property(readonly, nonatomic) _Bool hf_supportsNotifications;
- (NAFuture *)hf_updateNotificationsCondition:(NSPredicate *)arg1;
- (NAFuture *)hf_updateShowNotificationsStatus:(_Bool)arg1;
@end
