//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _MFLibrarySearchableIndexBudgetConfiguration : NSObject
{
    int _budgetPeriodInSeconds;
    int _budgetInSeconds;
    int _budgetResumeOverageCount;
}

@property(readonly, nonatomic) int budgetResumeOverageCount; // @synthesize budgetResumeOverageCount=_budgetResumeOverageCount;
@property(readonly, nonatomic) int budgetInSeconds; // @synthesize budgetInSeconds=_budgetInSeconds;
@property(readonly, nonatomic) int budgetPeriodInSeconds; // @synthesize budgetPeriodInSeconds=_budgetPeriodInSeconds;
@property(readonly, nonatomic) long long xpcGracePeriod;
- (id)init;

@end
