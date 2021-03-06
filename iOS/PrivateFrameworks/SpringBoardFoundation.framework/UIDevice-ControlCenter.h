//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDevice.h>

@interface UIDevice (ControlCenter)
- (id)_deviceInfoForKey:(struct __CFString *)arg1;
- (id)_currentProduct;
- (id)_lowQualityDevicesForSearchTransitions;
- (id)_mediumQualityDevicesForHomeScreenBlur;
- (id)_lowQualityDevicesForHomeScreenBlur;
- (id)_mediumQualityDevicesForCoverSheetBlur;
- (id)_lowQualityDevicesForCoverSheetBlur;
- (id)_lowQualityDevicesForDashBoardPresentation;
- (id)_mediumQualityProductsIncludingN41:(_Bool)arg1;
- (long long)_graphicsQualityIncludingMediumN41:(_Bool)arg1;
- (long long)sbf_homeScreenBlurGraphicsQuality;
- (long long)sbf_coverSheetBlurGraphicsQuality;
- (long long)sbf_dashBoardPresentationGraphicsQuality;
- (long long)sbf_searchTransitionGraphicsQuality;
- (long long)sbf_controlCenterGraphicsQuality;
- (long long)sbf_bannerGraphicsQuality;
@end

