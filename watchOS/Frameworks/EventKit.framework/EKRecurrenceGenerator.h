//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDatabase/CDBRecurrenceGenerator.h>

@interface EKRecurrenceGenerator : CDBRecurrenceGenerator
{
}

+ (int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(int)arg1;
- (void)_prepareForEKRecurrence:(id)arg1 forCalendarItem:(id)arg2;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 exceptionDates:(id)arg3 initialDate:(id)arg4 afterDate:(id)arg5;
- (id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4;
- (_Bool)occurrenceDate:(id)arg1 matchesRecurrenceRule:(id)arg2 forEvent:(id)arg3 includeDetachedEventsInSeries:(_Bool)arg4;
- (_Bool)isOccurrenceDate:(id)arg1 validForEvent:(id)arg2;
- (id)_copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(CDStruct_79f9e052)arg3 endDate:(CDStruct_79f9e052)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(int)arg7 adjustDatesForAllDayEvents:(_Bool)arg8;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(CDStruct_79f9e052)arg3 endDate:(CDStruct_79f9e052)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(int)arg7;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(CDStruct_79f9e052)arg3 endDate:(CDStruct_79f9e052)arg4 timeZone:(id)arg5 limit:(int)arg6 adjustDatesForAllDayEvents:(_Bool)arg7;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(CDStruct_79f9e052)arg3 endDate:(CDStruct_79f9e052)arg4 timeZone:(id)arg5 limit:(int)arg6;
- (id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(CDStruct_79f9e052)arg2 endDate:(CDStruct_79f9e052)arg3 timeZone:(id)arg4 limit:(int)arg5;
- (void)_setupForEKEvent:(id)arg1 adjustDatesForAllDayEvents:(_Bool)arg2;

@end

