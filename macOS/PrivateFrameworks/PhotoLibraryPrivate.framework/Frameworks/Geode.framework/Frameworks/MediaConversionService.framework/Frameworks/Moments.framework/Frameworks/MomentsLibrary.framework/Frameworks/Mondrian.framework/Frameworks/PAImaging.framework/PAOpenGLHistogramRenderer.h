//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImaging/PAHistogramRenderer.h>

@class PAGLProgramInstance, PAOpenGLDevice;

@interface PAOpenGLHistogramRenderer : PAHistogramRenderer
{
    PAOpenGLDevice *_device;
    PAGLProgramInstance *_program;
    PAGLProgramInstance *_emptyHistogramProgram;
}

- (void).cxx_destruct;
- (id)_emptyHistogramRenderProgram;
- (id)_histogramRenderProgram;
- (id)_newTextureForHistogram:(id)arg1 channel:(unsigned long long)arg2 context:(id)arg3 options:(long long)arg4;
- (id)_newTexturesForHistogram:(id)arg1 context:(id)arg2 options:(long long)arg3;
- (unsigned long long)_mapChannel:(unsigned long long)arg1 options:(long long)arg2;
- (void)renderRGBHistogram:(id)arg1 withContext:(id)arg2 options:(long long)arg3;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

