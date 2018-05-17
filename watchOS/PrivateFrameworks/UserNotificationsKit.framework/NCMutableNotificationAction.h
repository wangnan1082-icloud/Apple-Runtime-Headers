//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationAction.h>

@class NSDictionary, NSString, NSURL;

@interface NCMutableNotificationAction : NCNotificationAction
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool shouldDismissNotification; // @dynamic shouldDismissNotification;
@property(nonatomic, getter=isDestructiveAction) _Bool destructiveAction; // @dynamic destructiveAction;
@property(retain, nonatomic) id <NCNotificationActionRunner> actionRunner; // @dynamic actionRunner;
@property(copy, nonatomic) NSDictionary *behaviorParameters; // @dynamic behaviorParameters;
@property(nonatomic) unsigned int behavior; // @dynamic behavior;
@property(copy, nonatomic) NSString *launchBundleID; // @dynamic launchBundleID;
@property(copy, nonatomic) NSURL *launchURL; // @dynamic launchURL;
@property(nonatomic) _Bool requiresAuthentication; // @dynamic requiresAuthentication;
@property(nonatomic) unsigned int activationMode; // @dynamic activationMode;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;

@end
