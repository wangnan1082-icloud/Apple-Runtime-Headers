//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (RTExtensions)
+ (id)dateWithHour:(int)arg1 minute:(int)arg2 second:(int)arg3;
+ (id)dateWithResolution:(unsigned int)arg1 calendar:(id)arg2;
+ (id)dateWithResolution:(unsigned int)arg1;
+ (id)dateFormatter;
+ (id)stringFromTimestamp:(double)arg1;
+ (id)endOfDay;
+ (id)startOfDay;
- (id)dateByRoundingWithTimeQuantization:(int)arg1;
- (id)dateByAddingUnit:(unsigned int)arg1 value:(int)arg2;
- (id)dateReducedToResolution:(unsigned int)arg1 calendar:(id)arg2;
- (id)dateReducedToResolution:(unsigned int)arg1;
- (id)stringFromDate;
- (id)weekdayStringFromDate;
- (int)weekday;
- (unsigned int)minute;
- (unsigned int)hour;
- (id)endOfDay;
- (id)startOfDay;
- (id)dateOfTimestampForCurrentCalendar;
- (id)dateOfTimestampForCalendar:(id)arg1;
- (_Bool)isOnOrAfter:(id)arg1;
- (_Bool)isAfterDate:(id)arg1;
- (_Bool)isOnOrBefore:(id)arg1;
- (_Bool)isBeforeDate:(id)arg1;
- (_Bool)betweenDate:(id)arg1 andDate:(id)arg2;
@end
