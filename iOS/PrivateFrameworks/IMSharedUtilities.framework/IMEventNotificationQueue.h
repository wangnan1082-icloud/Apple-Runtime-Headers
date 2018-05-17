//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMDoubleLinkedList;

@interface IMEventNotificationQueue : NSObject
{
    _Bool _paused;
    _Bool _scheduled;
    _Bool _busy;
    id <IMEventNotificationQueueDelegate> _delegate;
    IMDoubleLinkedList *_eventNotificationList;
}

@property(readonly, nonatomic) IMDoubleLinkedList *eventNotificationList; // @synthesize eventNotificationList=_eventNotificationList;
@property __weak id <IMEventNotificationQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)containsNotificationTarget:(id)arg1;
@property(readonly) long long count;
@property(getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, getter=isScheduled) _Bool scheduled; // @synthesize scheduled=_scheduled;
- (void)_didChangePausedState:(_Bool)arg1;
- (void)pushEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
- (void)appendEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(CDUnknownBlockType)arg3;
- (void)pushEventTarget:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)appendEventTarget:(id)arg1 eventNotificationBlock:(CDUnknownBlockType)arg2;
- (void)cancelAllEventNotifications;
- (void)cancelEventNotificationsForNotificationTarget:(id)arg1;
- (void)_didCancelNotifications;
- (void)appendEventNotification:(id)arg1;
- (void)pushEventNotification:(id)arg1;
- (void)_didAddNotification:(id)arg1;
- (void)_processQueue;
- (void)_invokeNotifications;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_willProcessQueue;
- (void)_didProcessQueue;
- (void)_setBusy:(_Bool)arg1;
- (void)_didChangeBusyState:(_Bool)arg1;
@property(readonly, getter=isBusy) _Bool busy; // @synthesize busy=_busy;
- (void)_invokeEvent:(id)arg1;
- (void)_scheduleIfNeeded:(_Bool)arg1;
- (void)_dispatchProcessQueue;
- (id)init;

@end
