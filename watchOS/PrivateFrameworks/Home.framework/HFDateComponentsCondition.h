//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Home/HFTimeCondition.h>

#import "HFPrimitiveTimeCondition.h"

@class NSDateComponents, NSString;

@interface HFDateComponentsCondition : HFTimeCondition <HFPrimitiveTimeCondition>
{
    unsigned int _comparisonType;
    NSDateComponents *_dateComponents;
}

@property(readonly, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;
@property(readonly, nonatomic) unsigned int comparisonType; // @synthesize comparisonType=_comparisonType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (int)compare:(id)arg1;
@property(readonly, nonatomic) _Bool isTimeOfDayCondition;
- (id)initWithPredicate:(id)arg1;
- (id)initWithDateComponents:(id)arg1 comparisonType:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
