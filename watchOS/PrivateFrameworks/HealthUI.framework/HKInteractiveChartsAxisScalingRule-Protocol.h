//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HKGraphSeriesAxisScalingRule.h"

@class HKQuantityType, HKUnit, HKValueRange;

@protocol HKInteractiveChartsAxisScalingRule <HKGraphSeriesAxisScalingRule>
- (HKValueRange *)portraitYValueRangeForRange:(HKValueRange *)arg1 zoomLevel:(int)arg2 allowedDecimalPrecision:(int)arg3;

@optional
- (_Bool)isCompatibleWithQuantityType:(HKQuantityType *)arg1;
- (void)setUnit:(HKUnit *)arg1;
@end
