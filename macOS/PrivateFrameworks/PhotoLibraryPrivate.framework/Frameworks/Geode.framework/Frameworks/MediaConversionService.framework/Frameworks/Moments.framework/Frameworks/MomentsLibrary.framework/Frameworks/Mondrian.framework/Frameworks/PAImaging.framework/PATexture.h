//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/PAGLFramebufferAttachable-Protocol.h>

@class NSString, PAOpenGLDevice;
@protocol OS_dispatch_queue;

@interface PATexture : NSObject <PAGLFramebufferAttachable>
{
    PAOpenGLDevice *_device;
    unsigned long long _textureState;
    unsigned long long _bufferSize;
    void *_buffer;
    struct PFIntSize_st _size;
    BOOL _flipped;
    int _glInternalFormat;
    unsigned int _glFormat;
    unsigned int _glType;
    unsigned long long _bitsPerComponent;
    unsigned long long _alignedBytesPerRow;
    unsigned int _textureID;
    unsigned int _fbo;
    NSString *_textureName;
    BOOL _opaque;
    NSObject<OS_dispatch_queue> *_textureStateQueue;
    unsigned int _type;
    struct CGColorSpace *_colorSpace;
}

@property(readonly, nonatomic) PAOpenGLDevice *device; // @synthesize device=_device;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL opaque; // @synthesize opaque=_opaque;
@property(retain) NSString *textureName; // @synthesize textureName=_textureName;
- (void).cxx_destruct;
- (void)writeTIFFToDisk;
- (void)writeTIFFToDisk:(id)arg1;
- (void)drawCGImage:(struct CGImage *)arg1;
- (struct CGImage *)newCGImage;
- (id)ciImage;
- (struct CGColorSpace *)colorSpace;
- (void)drawCIImage:(id)arg1 withCIContext:(id)arg2 cglContext:(struct _CGLContextObject *)arg3;
- (unsigned int)glTexture;
- (void)uploadTextureData;
- (void)_makeGLTexture:(struct _CGLContextObject *)arg1 textureRange:(BOOL)arg2;
- (struct CGContext *)newBitmapContext:(long long)arg1 colorspace:(struct CGColorSpace *)arg2 clear:(BOOL)arg3;
- (void)allocateBuffer;
- (void)_allocateBuffer:(long long)arg1 clear:(BOOL)arg2;
- (void)copyToPixelBuffer:(id)arg1 context:(id)arg2;
- (void)scheduleReadback:(BOOL)arg1;
- (void)detachFromFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (void)attachToFramebuffer:(id)arg1 atPoint:(unsigned int)arg2 context:(id)arg3;
- (int)_calculateBytesPerRow:(long long)arg1;
- (BOOL)markUnpurgeable;
- (void)markPurgeable;
- (BOOL)isOnGPU;
- (BOOL)hasBufferPixels;
- (BOOL)isPurged;
- (BOOL)isPurgeable;
- (void)_clearTextureState:(unsigned long long)arg1;
- (void)_addTextureState:(unsigned long long)arg1;
- (void)setTextureState:(unsigned long long)arg1;
@property(readonly) unsigned long long textureState;
- (void)_logStateChange:(unsigned long long)arg1 newState:(unsigned long long)arg2;
- (id)description;
- (id)_stringForTextureState:(unsigned long long)arg1;
- (struct PFIntSize_st)size;
- (long long)bytesPerRow;
- (unsigned int)bitmapInfo;
- (long long)componentCount;
- (void *)buffer;
- (void)allocateBuffer:(unsigned long long)arg1 bytesPerRow:(long long)arg2;
- (unsigned long long)bufferSize;
- (void)dealloc;
- (id)initWithSize:(struct PFIntSize_st)arg1 colorSpace:(struct CGColorSpace *)arg2 opaque:(BOOL)arg3 flipped:(BOOL)arg4 bitsPerComponent:(unsigned long long)arg5 internalFormat:(int)arg6 format:(unsigned int)arg7 type:(unsigned int)arg8 device:(id)arg9;
- (id)initWithSize:(struct PFIntSize_st)arg1 colorSpace:(struct CGColorSpace *)arg2 opaque:(BOOL)arg3 device:(id)arg4;

@end

