//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HKGraphSeriesChartData.h"

@class NSString;

@interface HKInteractiveChartHearingSensitivityData : NSObject <HKGraphSeriesChartData>
{
    _Bool _isLeftEar;
    double _sensitivityDbHL;
}

@property(nonatomic) _Bool isLeftEar; // @synthesize isLeftEar=_isLeftEar;
@property(nonatomic) double sensitivityDbHL; // @synthesize sensitivityDbHL=_sensitivityDbHL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
