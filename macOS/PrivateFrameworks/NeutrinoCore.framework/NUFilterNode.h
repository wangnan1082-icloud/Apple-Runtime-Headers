//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@class NSString;

@interface NUFilterNode : NURenderNode
{
    NSString *_filterName;
}

@property(readonly) NSString *filterName; // @synthesize filterName=_filterName;
- (void).cxx_destruct;
- (BOOL)requiresVideoComposition;
- (void)nu_updateDigest:(id)arg1;
- (id)descriptionSubClassHook;
- (unsigned long long)hash;
- (BOOL)isEqualToRenderNode:(id)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (BOOL)isGeometryNode;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)initWithFilter:(id)arg1 settings:(id)arg2 inputs:(struct NSDictionary *)arg3;
- (id)initWithFilterName:(id)arg1 settings:(id)arg2 inputs:(struct NSDictionary *)arg3;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;

@end

