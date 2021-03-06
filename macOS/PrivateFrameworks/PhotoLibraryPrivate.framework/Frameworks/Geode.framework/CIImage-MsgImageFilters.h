//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIImage.h>

@interface CIImage (MsgImageFilters)
- (void)saveTIFF:(id)arg1 withColorSpace:(struct CGColorSpace *)arg2;
- (void)saveTIFF:(id)arg1;
- (void)saveJPEG:(id)arg1;
- (void)saveJPEG:(id)arg1 withQuality:(float)arg2;
- (id)flattenInFloatLinear;
- (id)flattenForDisplayGPU;
- (id)flattenInFloatLinearGPU;
- (id)cropToReference:(id)arg1;
- (id)gaussianBlurWithRadius:(float)arg1;
- (id)raiseToImage:(id)arg1;
@end

