//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDateInterval;

@interface HKSleepDay : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_sleepPeriods;
    NSDateInterval *_dateInterval;
    double _inBedDuration;
    double _asleepDuration;
    double _asleepDurationGoal;
    long long _asleepDurationGoalSource;
    long long _numberOfInterruptions;
    double _timeAwakeDuringIntendedSleepPeriod;
    double _efficiency;
}

@property(readonly, nonatomic) double efficiency; // @synthesize efficiency=_efficiency;
@property(readonly, nonatomic) double timeAwakeDuringIntendedSleepPeriod; // @synthesize timeAwakeDuringIntendedSleepPeriod=_timeAwakeDuringIntendedSleepPeriod;
@property(readonly, nonatomic) long long numberOfInterruptions; // @synthesize numberOfInterruptions=_numberOfInterruptions;
@property(readonly, nonatomic) long long asleepDurationGoalSource; // @synthesize asleepDurationGoalSource=_asleepDurationGoalSource;
@property(readonly, nonatomic) double asleepDurationGoal; // @synthesize asleepDurationGoal=_asleepDurationGoal;
@property(readonly, nonatomic) double asleepDuration; // @synthesize asleepDuration=_asleepDuration;
@property(readonly, nonatomic) double inBedDuration; // @synthesize inBedDuration=_inBedDuration;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, copy, nonatomic) NSArray *sleepPeriods; // @synthesize sleepPeriods=_sleepPeriods;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void).cxx_destruct;
- (id)description;
- (id)primarySleepPeriod;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 sleepPeriods:(id)arg3;

@end
