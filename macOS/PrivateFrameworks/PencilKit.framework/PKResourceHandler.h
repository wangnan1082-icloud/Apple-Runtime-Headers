//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DKDGLDataBuffer, DKDGLFrameBufferTextureConfig, DKDGLShader, PKGLContext;

@interface PKResourceHandler : NSObject
{
    DKDGLShader *_blitShader;
    DKDGLShader *_paintShader;
    DKDGLShader *_linesShader;
    DKDGLShader *_paintCircleShader;
    DKDGLShader *_paperShader;
    DKDGLShader *_particleShader;
    struct unordered_map<unsigned long long, DKDGLShader *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, DKDGLShader *>>> _uberShaders;
    struct unordered_map<unsigned long long, DKDGLFrameBufferTextureConfig *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, DKDGLFrameBufferTextureConfig *>>> _drawingTexConfigs;
    DKDGLDataBuffer *_quadBuffer;
    DKDGLFrameBufferTextureConfig *_paintTexConfig;
    PKGLContext *_sharedContext;
    int _backingWidth;
    int _backingHeight;
}

+ (id)inkBundle;
@property(readonly, nonatomic) int backingHeight; // @synthesize backingHeight=_backingHeight;
@property(readonly, nonatomic) int backingWidth; // @synthesize backingWidth=_backingWidth;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)preloadResources;
- (void)flushMemoryIfPossible;
- (id)lineDataBuffer;
- (id)paintDataBufferWithCapacity:(unsigned long long)arg1 dynamicDraw:(BOOL)arg2;
- (void)updateFullScreenQuadDataBuffer:(id)arg1 flipped:(BOOL)arg2;
- (id)quadDataBufferForDynamicDraw:(BOOL)arg1;
- (id)cachedQuadDataBuffer;
@property(readonly, nonatomic) DKDGLShader *particleShader;
@property(readonly, nonatomic) DKDGLShader *paperShader;
@property(readonly, nonatomic) DKDGLShader *paintCircleShader;
@property(readonly, nonatomic) DKDGLShader *linesShader;
@property(readonly, nonatomic) DKDGLShader *paintShader;
- (id)uberShaderForKey:(CDStruct_02b698cc)arg1;
- (id)compositeEraseShaderWithMode:(long long)arg1 clipping:(BOOL)arg2;
- (id)compositeSoftWhiteShaderWithMode:(long long)arg1 clipping:(BOOL)arg2;
- (id)compositeMultiplyShaderWithMode:(long long)arg1 clipping:(BOOL)arg2;
- (id)compositeOverShaderWithMode:(long long)arg1 clipping:(BOOL)arg2;
- (id)compositePaperShaderWithMode:(long long)arg1;
@property(readonly, nonatomic) DKDGLShader *blitShader;
- (id)glVersionString;
- (id)definesForMode:(long long)arg1 clipping:(BOOL)arg2;
- (id)claimPaintFrameBuffer;
- (id)claimDrawingFrameBufferWithSize:(struct CGSize)arg1;
- (id)claimDrawingFrameBuffer;
- (id)createFramebuffer:(struct CGSize)arg1 textureConfig:(id)arg2;
- (id)paintTexConfig;
- (id)drawingTexConfigWithSize:(struct CGSize)arg1;
- (void)setPixelSize:(struct CGSize)arg1;
- (id)initWithPixelSize:(struct CGSize)arg1 andGLContext:(id)arg2;
- (id)init;

@end

