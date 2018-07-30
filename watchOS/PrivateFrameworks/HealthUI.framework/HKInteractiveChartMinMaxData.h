//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKGraphSeriesChartData.h"

@class HKUnit, NSString;

@interface HKInteractiveChartMinMaxData : NSObject <HKGraphSeriesChartData>
{
    HKUnit *_unit;
    double _minValue;
    double _maxValue;
}

@property(retain, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
@property(nonatomic) double maxValue; // @synthesize maxValue=_maxValue;
@property(nonatomic) double minValue; // @synthesize minValue=_minValue;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
