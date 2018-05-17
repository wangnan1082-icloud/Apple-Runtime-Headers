//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPageCurlWithShadowTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputBacksideImage;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
    NSNumber *inputShadowSize;
    NSNumber *inputShadowAmount;
    CIVector *inputShadowExtent;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CIPageCurlNoShadowTransition;
- (id)_CIPageCurlWithShadowTransition;

@end
