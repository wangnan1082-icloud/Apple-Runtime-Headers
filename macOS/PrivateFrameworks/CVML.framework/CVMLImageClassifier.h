//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CVMLImageClassifier : NSObject
{
}

+ (id)classifyImageHierarchicallyWithDescriptors:(const struct ImageDescriptorBufferAbstract *)arg1 usingImageClassifier:(struct ImageClassifierAbstract *)arg2 andHierarchicalClassifier:(struct ImageClassifier_HierarchicalModel *)arg3 andMinConfidenceForClassification:(float)arg4 outputDebugDictionary:(id)arg5 options:(id)arg6 metalContext:(id)arg7 error:(id *)arg8;
+ (id)classifyImageWithDescriptors:(const struct ImageDescriptorBufferAbstract *)arg1 usingImageClassifier:(struct ImageClassifierAbstract *)arg2 andMinConfidenceForClassification:(float)arg3 outputDebugDictionary:(id)arg4 options:(id)arg5 metalContext:(id)arg6 error:(id *)arg7;
+ (BOOL)computeImageDescriptorsWithImage:(id)arg1 regionOfInterest:(struct CGRect)arg2 usingDescriptorProcessor:(struct ImageDescriptorProcessorAbstract *)arg3 withTileCount:(int)arg4 andScaleImage:(BOOL)arg5 andAugmentationMode:(unsigned int)arg6 andPopulateTheBuffer:(struct ImageDescriptorBufferAbstract *)arg7 debugIntermediatesDumpPath:(id)arg8 outputDebugDictionary:(id)arg9 options:(id)arg10 metalContext:(id)arg11 error:(id *)arg12;

@end

