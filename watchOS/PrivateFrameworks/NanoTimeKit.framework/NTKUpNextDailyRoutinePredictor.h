//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKUpNextObservableSingleton.h>

#import "NTKUpNextPeriodOfDayPredictorDelegate.h"

@class NSDateInterval, NSLock, NSObject<OS_dispatch_queue>, NSString, NTKUpNextPeriodOfDayPredictor, NTKUpNextTimer;

@interface NTKUpNextDailyRoutinePredictor : NTKUpNextObservableSingleton <NTKUpNextPeriodOfDayPredictorDelegate>
{
    NTKUpNextPeriodOfDayPredictor *_periodOfDayPredictor;
    NTKUpNextTimer *_beginMorningRoutineTimer;
    NTKUpNextTimer *_endMorningRoutineTimer;
    NTKUpNextTimer *_beginEveningRoutineTimer;
    NTKUpNextTimer *_endEveningRoutineTimer;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _currentRoutine;
    NSDateInterval *_currentRoutineInterval;
    NSLock *_routineLock;
}

- (void).cxx_destruct;
- (void)_queue_setupEveningBeginTimerIfNeeded;
- (void)_queue_setupMorningBeginTimerIfNeeded;
- (void)_queue_didEndEveningRoutine;
- (void)_queue_setupEveningEndTimer;
- (void)_queue_didBeginEveningRoutine;
- (void)_queue_didEndMorningRoutine;
- (void)_queue_setupMorningEndTimer;
- (void)_queue_didBeginMorningRoutine;
- (void)_updateCurrentRoutine;
- (void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)arg1;
- (void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(id)arg1;
- (id)_eveningRoutineIntervalForEvening:(id)arg1;
- (id)_morningRoutineIntervalForMorning:(id)arg1;
- (id)routineIntervalForPreviousRoutine:(unsigned int)arg1;
- (id)routineIntervalForNextRoutine:(unsigned int)arg1;
@property(readonly, nonatomic) NSDateInterval *currentRoutineInterval;
@property(readonly, nonatomic) unsigned int currentRoutineType;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
