//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject
{
    HKHealthStore *_healthStore;
}

- (void).cxx_destruct;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2;
- (void)fetchMostRecentWeeklyGoalWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)init;

@end
