//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKEvent, NSDate, NSString;

@interface PPQuickTypeEvent : NSObject
{
    BOOL _isUnscheduledFreeTime;
    NSString *_identifier;
    NSString *_title;
    NSString *_calendarTitle;
    NSDate *_start;
    NSDate *_end;
    EKEvent *_event;
}

+ (id)eventFromEKEvent:(id)arg1;
@property(retain, nonatomic) EKEvent *event; // @synthesize event=_event;
@property(nonatomic) BOOL isUnscheduledFreeTime; // @synthesize isUnscheduledFreeTime=_isUnscheduledFreeTime;
@property(copy, nonatomic) NSDate *end; // @synthesize end=_end;
@property(copy, nonatomic) NSDate *start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *calendarTitle; // @synthesize calendarTitle=_calendarTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToEvent:(id)arg1;
- (unsigned long long)hash;
- (long long)compareStartDateWithEvent:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 calendarTitle:(id)arg3 start:(id)arg4 end:(id)arg5 isUnscheduledFreeTime:(BOOL)arg6;

@end
