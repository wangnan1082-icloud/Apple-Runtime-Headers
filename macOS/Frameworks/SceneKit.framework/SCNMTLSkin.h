//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTLStageInputOutputDescriptor;

__attribute__((visibility("hidden")))
@interface SCNMTLSkin : NSObject
{
    unsigned int _vertexCount;
    _Bool _needNormal;
    _Bool _needTangent;
    id <MTLBuffer> _skinIndicesBuffer;
    id <MTLBuffer> _skinWeightsBuffer;
    id <MTLComputePipelineState> _computePS;
    MTLStageInputOutputDescriptor *_computeStageDesc;
}

- (void)skinMesh:(id)arg1 with:(id)arg2 skinner:(struct __C3DSkinner *)arg3 renderContext:(id)arg4;
- (void)dealloc;
- (id)initWithSkinner:(struct __C3DSkinner *)arg1 baseMesh:(struct __C3DMesh *)arg2 resourceManager:(id)arg3;

@end
