//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/ESDObject.h>

@class CHDChart, NSData;

@interface EBEscherShape : ESDObject
{
    NSData *mChartData;
    BOOL mShowLegend;
    CHDChart *mChart;
}

- (void).cxx_destruct;
- (void)setChart:(id)arg1;
- (id)chart;
- (void)setShowLegend:(BOOL)arg1;
- (BOOL)showLegend;
- (void)setChartData:(id)arg1;
- (id)chartData;

@end

