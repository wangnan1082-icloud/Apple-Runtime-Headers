//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEventStore, NSArray, NSDate, NSMutableSet, NSObject<OS_dispatch_queue>, NSTimer, PCPersistentTimer;

@interface _EKNotificationMonitor : NSObject
{
    EKEventStore *_eventStore;
    CDUnknownBlockType _eventStoreGetter;
    _Bool _running;
    PCPersistentTimer *_timer;
    NSDate *_nextFireTime;
    NSTimer *_syncTimer;
    _Bool _pendingChanges;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSArray *_eventNotificationReferences;
    NSArray *_reminderNotificationReferences;
    _Bool _initialCheck;
    _Bool _shouldInstallPersistentTimer;
    _Bool _useSyncIdleTimer;
    _Bool _loadRecentlyRepliedNotifications;
    _Bool _registerForDarwinNotifications;
    int _notificationTypes;
    NSMutableSet *_alertedNotificationsThatFailedToMarkAlerted;
    _Bool _allowedToMarkAlerted;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

+ (id)requestedDarwinNotifications;
+ (id)logHandle;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(nonatomic) _Bool allowedToMarkAlerted; // @synthesize allowedToMarkAlerted=_allowedToMarkAlerted;
- (void).cxx_destruct;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_killSyncTimer;
- (void)_resetSyncTimer;
- (void)_notifyForUnalertedNotifications:(id)arg1;
- (id)_fetchEventNotificationReferencesFromEventStore:(id)arg1;
- (void)_timerFired;
- (void)_alertPrefChanged;
- (void)_notificationCountChangedExternally;
- (void)_databaseChanged;
- (void)handleDarwinNotification:(id)arg1;
- (void)_resetTimer;
- (void)attemptReloadSynchronously:(_Bool)arg1;
- (void)attemptReload;
- (void)adjust;
@property(readonly, nonatomic) NSArray *reminderNotificationReferences;
@property(readonly, nonatomic) NSArray *eventNotificationReferences;
@property(readonly, nonatomic) NSArray *notificationReferences;
@property(readonly, nonatomic) unsigned int notificationCount;
- (unsigned int)_reminderNotificationCount;
@property(readonly, nonatomic) unsigned int eventNotificationCount;
- (void)stop;
- (void)start;
- (void)killTimer;
- (id)_eventStore;
- (_Bool)wantsReminders;
- (_Bool)wantsEvents;
- (void)dealloc;
- (id)init;
- (id)initByHandlingOnlyEvents:(_Bool)arg1 eventStore:(id)arg2;
- (id)initByHandlingTypes:(int)arg1 bulletinBoardWithEventStoreGetter:(CDUnknownBlockType)arg2;

@end
