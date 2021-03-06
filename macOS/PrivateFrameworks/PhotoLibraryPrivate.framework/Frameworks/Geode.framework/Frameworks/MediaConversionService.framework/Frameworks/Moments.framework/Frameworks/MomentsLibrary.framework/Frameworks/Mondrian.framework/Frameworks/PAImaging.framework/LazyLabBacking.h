//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/PA2DBufferBacking-Protocol.h>

@class NSData, NSMutableData, NSString, PA2DMutableBuffer, PAPixelPipeline;
@protocol PAPixelPipelineCoreImageProvider;

__attribute__((visibility("hidden")))
@interface LazyLabBacking : NSObject <PA2DBufferBacking>
{
    double _srcGamma;
    PAPixelPipeline *_srcPipeline;
    id <PAPixelPipelineCoreImageProvider> _srcProvider;
    NSData *_tileList;
    NSMutableData *_cleanList;
    PA2DMutableBuffer *_cacheBuffer;
    NSMutableData *_srcScratchBuffer;
    NSMutableData *_destScratchBuffer;
}

- (void).cxx_destruct;
- (void)accumulateMemoryInfo:(id)arg1;
- (void)forEachMutableTileInROI:(struct PFIntRect_st)arg1 processor:(CDUnknownBlockType)arg2;
- (void)setPixelsForROI:(struct PFIntRect_st)arg1 srcPtr:(const void *)arg2 srcPtrRowBytes:(long long)arg3;
- (void)forEachImmutableTileInROI:(struct PFIntRect_st)arg1 processor:(CDUnknownBlockType)arg2;
- (void)getPixelsForROI:(struct PFIntRect_st)arg1 destPtr:(void *)arg2 destPtrRowBytes:(long long)arg3;
- (void)preload;
- (void)_ensurePixelsForROI:(struct PFIntRect_st)arg1;
- (struct PFIntRect_st)tileBoundsAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileCount;
@property(nonatomic) struct CGColorSpace *colorSpace;
- (int)format;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourcePipeline:(id)arg1 sourceGamma:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

