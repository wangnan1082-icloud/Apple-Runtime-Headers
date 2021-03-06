//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/WKInterfaceController.h>

@class NSArray, NSString;

@interface WKUserNotificationInterfaceController : WKInterfaceController
{
    _Bool _calledDidReceiveNotification;
    NSArray *_notificationActionsStorage;
    NSString *_hostID;
}

@property(nonatomic) _Bool calledDidReceiveNotification; // @synthesize calledDidReceiveNotification=_calledDidReceiveNotification;
@property(copy, nonatomic) NSString *hostID; // @synthesize hostID=_hostID;
@property(retain, nonatomic) NSArray *notificationActionsStorage; // @synthesize notificationActionsStorage=_notificationActionsStorage;
- (void).cxx_destruct;
- (id)suggestionsForResponseToActionWithIdentifier:(id)arg1 forLocalNotification:(id)arg2 inputLanguage:(id)arg3;
- (id)suggestionsForResponseToActionWithIdentifier:(id)arg1 forRemoteNotification:(id)arg2 inputLanguage:(id)arg3;
- (id)suggestionsForResponseToActionWithIdentifier:(id)arg1 forNotification:(id)arg2 inputLanguage:(id)arg3;
- (id)_suggestionsForResponseToActionWithIdentifier:(id)arg1 forNotification:(id)arg2 remoteNotification:(id)arg3 localNotification:(id)arg4 inputLanguage:(id)arg5;
- (void)didReceiveLocalNotification:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didReceiveRemoteNotification:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didReceiveNotification:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_setInitialActions:(id)arg1;
@property(copy, nonatomic) NSArray *notificationActions;
- (void)dismissController;
- (void)performDismissAction;
- (void)performNotificationDefaultAction;
- (void)didReceiveNotification:(id)arg1;
- (void)_didReceiveNotification:(id)arg1 remoteNotification:(id)arg2 localNotification:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)init;

@end

