//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (CalendarAdditions)
- (void)_performBlockBehindDispatchSync:(CDUnknownBlockType)arg1 inTimeZone:(id)arg2;
- (id)dateWithoutTimeComponentsInTimeZone:(id)arg1;
- (id)dateAtHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 second:(unsigned long long)arg3 inTimeZone:(id)arg4;
- (id)dateForEndOfDayInTimeZone:(id)arg1;
- (id)dateForStartOfDayInTimeZone:(id)arg1;
@end

