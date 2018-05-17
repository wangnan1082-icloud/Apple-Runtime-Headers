//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTouchBarColorPickerSliders.h>

@class NSTouchBarColorPickerSliderArtworkProvider, NSTouchBarColorPickerSliderHSBArtworkProvider;

__attribute__((visibility("hidden")))
@interface NSTouchBarColorPickerSlidersHSB : NSTouchBarColorPickerSliders
{
}

+ (id)keyPathsForValuesAffecting_brightnessArtworkProvider;
+ (id)keyPathsForValuesAffecting_saturationArtworkProvider;
+ (id)keyPathsForValuesAffecting_hueArtworkProvider;
+ (id)accessibilityIdentifierForComponent:(long long)arg1;
+ (id)artworkProviderKeyForComponent:(long long)arg1;
+ (id)colorValueKeyForComponent:(long long)arg1;
- (id)colorWithValue:(double)arg1 forComponent:(long long)arg2 baseColor:(id)arg3;
@property(readonly, copy) NSTouchBarColorPickerSliderArtworkProvider *_alphaArtworkProvider;
@property(readonly, copy) NSTouchBarColorPickerSliderHSBArtworkProvider *_brightnessArtworkProvider;
@property(readonly, copy) NSTouchBarColorPickerSliderHSBArtworkProvider *_saturationArtworkProvider;
@property(readonly, copy) NSTouchBarColorPickerSliderHSBArtworkProvider *_hueArtworkProvider;
@property(readonly) double _displayedAlphaComponent;
@property(readonly) double _displayedBrightnessComponent;
@property(readonly) double _displayedSaturationComponent;
@property(readonly) double _displayedHueComponent;
- (id)brightnessSlider;
- (id)saturationSlider;
- (id)hueSlider;

@end
