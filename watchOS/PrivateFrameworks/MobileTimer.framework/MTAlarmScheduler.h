//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTAgentDiagnosticDelegate.h"
#import "MTAgentNotificationListener.h"
#import "MTAlarmObserver.h"
#import "MTScheduledListDelegate.h"

@class MTScheduledList, NSString;

@interface MTAlarmScheduler : NSObject <MTAlarmObserver, MTScheduledListDelegate, MTAgentDiagnosticDelegate, MTAgentNotificationListener>
{
    id <MTAlarmScheduleDelegate> _delegate;
    id <MTAlarmStorage> _storage;
    MTScheduledList *_scheduledAlarms;
    id <NAScheduler> _serializer;
    id <MTNotificationPoster> _notificationPoster;
    CDUnknownBlockType _currentDateProvider;
    id <MTSchedulingDelegate> _schedulingDelegate;
    id <MTTaskScheduler> _taskScheduler;
}

+ (id)_intervalToCheckForAlarmsToFireBeforeDate:(id)arg1;
@property(readonly, nonatomic) id <MTTaskScheduler> taskScheduler; // @synthesize taskScheduler=_taskScheduler;
@property(readonly, nonatomic) id <MTSchedulingDelegate> schedulingDelegate; // @synthesize schedulingDelegate=_schedulingDelegate;
@property(readonly, copy, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(readonly, nonatomic) id <MTNotificationPoster> notificationPoster; // @synthesize notificationPoster=_notificationPoster;
@property(readonly, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(readonly, nonatomic) MTScheduledList *scheduledAlarms; // @synthesize scheduledAlarms=_scheduledAlarms;
@property(readonly, nonatomic) id <MTAlarmStorage> storage; // @synthesize storage=_storage;
@property(nonatomic) __weak id <MTAlarmScheduleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)printDiagnostics;
- (void)handleNotification:(id)arg1;
- (_Bool)handlesNotification:(id)arg1;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didFireAlarm:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned int)arg3;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned int)arg3;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (id)sourceIdentifier;
- (id)nextWakeUpDate;
- (id)_nextScheduledAlertIncludingBedtimeNotification:(_Bool)arg1;
- (id)_nextTriggerDateIncludingBedtimeNotification:(_Bool)arg1;
- (id)nextScheduledAlarmIncludingBedtimeNotification:(_Bool)arg1;
- (id)nextTriggerDateIncludingBedtimeNotification:(_Bool)arg1;
- (id)nextTriggerDate;
- (id)nextAlarmIncludingBedtimeNotification:(_Bool)arg1;
- (id)nextAlarm;
- (void)_setLastAlarmTriggerDate:(id)arg1;
- (id)_lastAlarmTriggerDate;
- (void)_queue_fireTriggeredAlarmsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_fireScheduledAlarm:(id)arg1 firedDate:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_queue_triggerDidFireForAlarmWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)handleEarlyWakeUpForAlarm:(id)arg1 withTriggerDate:(id)arg2;
- (void)_queue_unregisterTimer;
- (void)_queue_updateNextAlarmTimerWithCompletion:(CDUnknownBlockType)arg1;
- (void)scheduledListDidChange:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_unscheduleAlarms:(id)arg1;
- (void)unscheduleAlarms:(id)arg1;
- (void)_scheduleAlarms:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)scheduleAlarms:(id)arg1;
- (void)_rescheduleAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)rescheduleAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStorage:(id)arg1 notificationPoster:(id)arg2 scheduler:(id)arg3 schedulingDelegate:(id)arg4 taskScheduler:(id)arg5 currentDateProvider:(CDUnknownBlockType)arg6;
- (id)initWithStorage:(id)arg1 notificationPoster:(id)arg2 scheduler:(id)arg3;
- (id)initWithStorage:(id)arg1 notificationPoster:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
