//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NTKTaskScheduler, PCPersistentTimer;
@protocol NTKRemoteComplicationUpdateSchedulerDelegate;

@interface NTKRemoteComplicationUpdateScheduler : NSObject
{
    NSMutableDictionary *_clientIdentifierToRequestDate;
    NTKTaskScheduler *_taskScheduler;
    PCPersistentTimer *_checkForNextUpdateTimer;
    struct NSNumber *_scheduledTaskToken;
    double _minimumTimeIntervalBetweenUpdates;
    unsigned int _coalesceUpdatesToMinute;
    NSObject<NTKRemoteComplicationUpdateSchedulerDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<NTKRemoteComplicationUpdateSchedulerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleSignificantTimeChange;
- (void)_performRequestedUpdatesAndResetTimer;
- (void)_scheduleTask:(id)arg1;
- (void)_scheduleNextUpdateTimer;
- (void)setEntryForClientIdentifier:(id)arg1 withRequestDate:(id)arg2;
- (void)dealloc;
- (id)init;

@end

