//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKit/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationDialView, NTKWorldClockRichComplicationHandsView, UILabel, WorldClockCity;

@interface NTKWorldClockRichComplicationCircularView : NTKRichComplicationCircularBaseView
{
    struct {
        float cityNameFontSize;
        float cityNameBaselineOffsetNorthSide;
        float cityNameBaselineOffsetSouthSide;
        float dialDiameter;
        struct CGSize majorTickSize;
        struct CGSize minorTickSize;
    } _constants;
    NTKRichComplicationDialView *_dialView;
    UILabel *_cityNameLabel;
    NTKWorldClockRichComplicationHandsView *_handsView;
    WorldClockCity *_city;
    struct NSNumber *_clockTimerToken;
    _Bool _positionLabelNorthSide;
}

- (void).cxx_destruct;
- (_Bool)_shouldUseDaytimeColoring;
- (void)_updateUI;
- (void)_stopClockUpdates;
- (void)_startClockUpdates;
- (_Bool)_shouldAnimateWithTemplateUpdateReason:(int)arg1;
- (void)_handleTemplate:(id)arg1 reason:(int)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

