//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _CDInBedDetector : NSObject
{
    id <_DKKnowledgeQuerying> _knowledge;
    unsigned long long _method;
}

+ (id)inBedDetector;
+ (id)simpleLockBasedInBedDetector;
+ (id)inBedDetectorWithKnowledge:(id)arg1 method:(unsigned long long)arg2;
+ (id)inBedDetectorWithKnowledge:(id)arg1;
@property unsigned long long method; // @synthesize method=_method;
@property(retain) id <_DKKnowledgeQuerying> knowledge; // @synthesize knowledge=_knowledge;
- (void).cxx_destruct;
- (id)findDateIntervalOfEventInStream:(id)arg1 datePredicate:(id)arg2 valuePredicate:(id)arg3 sortDescriptor:(id)arg4 error:(id *)arg5;
- (id)findLastTimeDeviceWasPluggedInBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (id)findLastTimeDeviceWasLockedBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (id)findLatestEndOfWalkingActivityBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (struct NSArray *)detectInBedWithPolicyV1BetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (struct NSArray *)lockedTimesBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (struct NSArray *)detectInBedBetweenBedtimeDate:(id)arg1 wakupDate:(id)arg2 error:(id *)arg3;
- (id)initWithKnowledge:(id)arg1 method:(unsigned long long)arg2;

@end
