//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NTKNumeralsAnalogFaceConfiguration, UIColor;

@interface NTKNumeralsHourView : UIImageView
{
    int _hour;
    unsigned int _style;
    NTKNumeralsAnalogFaceConfiguration *_faceConfiguration;
    UIColor *_appliedColor;
    _Bool _isLoaded;
}

@property(readonly) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
- (void).cxx_destruct;
- (id)_imageNameForStyle:(unsigned int)arg1 hour:(int)arg2;
- (void)_applyTintColor:(id)arg1;
- (id)_hourColorForDevice:(id)arg1 faceColor:(unsigned int)arg2 colorSchemeUnits:(unsigned int)arg3;
- (void)applyTransitionFraction:(float)arg1 fromFaceColor:(unsigned int)arg2 toFaceColor:(unsigned int)arg3 faceConfiguration:(id)arg4;
- (void)applyFaceColorFromFaceConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)load;
- (id)initUnloadedHourViewForHour:(int)arg1 style:(unsigned int)arg2 faceConfiguration:(id)arg3;
- (id)initForHour:(int)arg1 style:(unsigned int)arg2 faceConfiguration:(id)arg3;

@end

