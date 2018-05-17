//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKCircularComplicationView.h>

@class NSMutableArray, NTKRingsAndDotsView;

@interface NTKWellnessCircularSmallComplicationView : NTKCircularComplicationView
{
    NTKRingsAndDotsView *_ringsView;
    NSMutableArray *_ringsFillFractions;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (void)load;
- (void).cxx_destruct;
- (void)_setLayoutEmptyRingsNoDot;
- (void)_updateForTemplateChange;
- (_Bool)_wantsPlatter;
- (void)layoutSubviews;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setForegroundColor:(id)arg1;
- (float)_ringGapWidth;
- (float)_ringStrokeWidth;
- (float)_ringDiameter;
- (id)initWithFrame:(struct CGRect)arg1;

@end
