//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOPlaceDailyHours : NSObject
{
    struct _NSRange _dayOfWeekRange;
    NSArray *_openIntervals;
    double _closingSoonThresholdSeconds;
    double _openingSoonThresholdSeconds;
}

+ (id)dailyHours:(id)arg1 forDays:(struct _NSRange)arg2 withClosingThreshold:(double)arg3 withOpeningThreshold:(double)arg4;
@property(nonatomic) double openingSoonThresholdSeconds; // @synthesize openingSoonThresholdSeconds=_openingSoonThresholdSeconds;
@property(nonatomic) double closingSoonThresholdSeconds; // @synthesize closingSoonThresholdSeconds=_closingSoonThresholdSeconds;
@property(readonly) NSArray *openIntervals; // @synthesize openIntervals=_openIntervals;
@property(readonly) struct _NSRange dayOfWeekRange; // @synthesize dayOfWeekRange=_dayOfWeekRange;
- (void).cxx_destruct;
- (id)_intervalContainingDate:(id)arg1 intervals:(id)arg2;
- (_Bool)containsWeekday:(unsigned int)arg1;
- (id)dateIntervalInOpenIntervalsContainingDate:(id)arg1 withOpeningThreshold:(double)arg2;
- (id)description;

@end

