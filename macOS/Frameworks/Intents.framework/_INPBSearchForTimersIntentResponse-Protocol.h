//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _INPBTimer;

@protocol _INPBSearchForTimersIntentResponse <NSObject>
+ (Class)unmatchedTimersType;
+ (Class)timersType;
+ (Class)matchedTimersType;
@property(readonly, nonatomic) unsigned long long unmatchedTimersCount;
@property(copy, nonatomic) NSArray *unmatchedTimers;
@property(readonly, nonatomic) unsigned long long timersCount;
@property(copy, nonatomic) NSArray *timers;
@property(readonly, nonatomic) unsigned long long matchedTimersCount;
@property(copy, nonatomic) NSArray *matchedTimers;
- (_INPBTimer *)unmatchedTimersAtIndex:(unsigned long long)arg1;
- (void)addUnmatchedTimers:(_INPBTimer *)arg1;
- (void)clearUnmatchedTimers;
- (_INPBTimer *)timersAtIndex:(unsigned long long)arg1;
- (void)addTimers:(_INPBTimer *)arg1;
- (void)clearTimers;
- (_INPBTimer *)matchedTimersAtIndex:(unsigned long long)arg1;
- (void)addMatchedTimers:(_INPBTimer *)arg1;
- (void)clearMatchedTimers;
@end
