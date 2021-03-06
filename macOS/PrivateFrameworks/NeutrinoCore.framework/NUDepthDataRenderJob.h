//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class AVDepthData, CIRenderTask, NUCVPixelBuffer;

@interface NUDepthDataRenderJob : NURenderJob
{
    long long _depthType;
    unsigned int _pixelFormat;
    CIRenderTask *_renderTask;
    NUCVPixelBuffer *_depthMap;
    AVDepthData *_depthData;
}

@property(retain) AVDepthData *depthData; // @synthesize depthData=_depthData;
- (void).cxx_destruct;
- (id)result;
- (void)cleanUp;
- (BOOL)complete:(out id *)arg1;
- (BOOL)render:(out id *)arg1;
- (BOOL)prepare:(out id *)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)scalePolicy;
- (BOOL)wantsRenderScaleClampedToNativeScale;
- (BOOL)wantsRenderNodeCached;
- (BOOL)wantsPrepareNodeCached;
- (BOOL)wantsOutputImage;
- (BOOL)wantsOutputGeometry;

@end

