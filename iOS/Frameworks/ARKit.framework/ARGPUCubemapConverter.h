//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice;

@interface ARGPUCubemapConverter : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _cubemapToLatLongPipelineState;
    id <MTLComputePipelineState> _latLongToCubemapPipelineState;
    id <MTLComputePipelineState> _cubemapHistogramPipelineState;
    _Bool _gpuFamilyAtleast4;
}

@property(readonly, nonatomic, getter=isGPUFamilyAtleast4) _Bool gpuFamilyAtleast4; // @synthesize gpuFamilyAtleast4=_gpuFamilyAtleast4;
- (void).cxx_destruct;
- (struct ARLabHistogram)colorHistogramForCubemap:(id)arg1;
-     // Error parsing type: @80@0:8{?=[3]}16Q64@72, name: cubemapTextureWithRotation:size:forLatLong:
-     // Error parsing type: @80@0:8{?=[3]}16Q64@72, name: latlongTextureWithRotation:size:forCubemap:
- (id)init;

@end

