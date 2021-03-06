//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface WebGLLayer : CALayer
{
    struct GraphicsContext3D *_context;
    float _devicePixelRatio;
    struct unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface>> _contentsBuffer;
    struct unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface>> _drawingBuffer;
    struct unique_ptr<WebCore::IOSurface, std::__1::default_delete<WebCore::IOSurface>> _spareBuffer;
    struct IntSize _bufferSize;
    BOOL _usingAlpha;
}

@property(nonatomic) struct GraphicsContext3D *context; // @synthesize context=_context;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)bindFramebufferToNextAvailableSurface;
- (void)allocateIOSurfaceBackingStoreWithSize:(struct IntSize)arg1 usingAlpha:(BOOL)arg2;
- (void)display;
- (struct CGImage *)copyImageSnapshotWithColorSpace:(struct CGColorSpace *)arg1;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (void)setTransform:(struct CATransform3D)arg1;
- (id)initWithGraphicsContext3D:(struct GraphicsContext3D *)arg1;

@end

