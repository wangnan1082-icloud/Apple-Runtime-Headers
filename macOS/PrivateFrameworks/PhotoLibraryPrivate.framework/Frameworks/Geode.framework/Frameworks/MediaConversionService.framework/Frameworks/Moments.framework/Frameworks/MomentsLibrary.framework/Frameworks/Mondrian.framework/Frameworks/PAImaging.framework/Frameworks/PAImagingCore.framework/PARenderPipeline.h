//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PARenderPipeline : NSObject
{
}

+ (void)initialize;
- (void)computeGeometry:(id)arg1 inputSize:(struct PFIntSize_st)arg2 scaledInputSize:(struct PFIntSize_st)arg3 scale:(double)arg4 renderType:(int)arg5 orientation:(long long)arg6;
- (void)computeGeometry:(id)arg1 inputSize:(struct PFIntSize_st)arg2 scaledInputSize:(struct PFIntSize_st)arg3 scale:(double)arg4 straightenType:(int)arg5 orientation:(long long)arg6 actualOrientation:(long long)arg7;
- (void)computeGeometry:(id)arg1 inputSize:(struct PFIntSize_st)arg2 scaledInputSize:(struct PFIntSize_st)arg3 scale:(double)arg4 orientation:(long long)arg5;
- (id)newGeometryForCropOperation:(id)arg1;
- (id)newGeometryForRenderDescription:(id)arg1;
- (id)linearHistogramColorProfile;
- (id)histogramColorProfile;
- (id)workingColorProfile;
- (id)_processedImage:(id)arg1 scale:(double)arg2 renderDescription:(id)arg3 options:(id)arg4 state:(id)arg5;
- (id)processedImage:(id)arg1 scale:(double)arg2 renderDescription:(id)arg3 options:(id)arg4 state:(id)arg5;

@end

