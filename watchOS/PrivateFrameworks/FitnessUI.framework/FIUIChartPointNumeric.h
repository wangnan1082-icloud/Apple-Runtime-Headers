//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FIUIChartPoint.h"

@class NSDate, NSNumber, NSString;

@interface FIUIChartPointNumeric : NSObject <FIUIChartPoint>
{
    NSDate *_xValue;
    NSNumber *_yValue;
}

+ (id)chartPointWithXValue:(id)arg1 yValue:(id)arg2;
@property(copy, nonatomic) NSNumber *yValue; // @synthesize yValue=_yValue;
@property(copy, nonatomic) NSDate *xValue; // @synthesize xValue=_xValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSNumber *maxYValue;
@property(readonly, nonatomic) NSNumber *minYValue;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
