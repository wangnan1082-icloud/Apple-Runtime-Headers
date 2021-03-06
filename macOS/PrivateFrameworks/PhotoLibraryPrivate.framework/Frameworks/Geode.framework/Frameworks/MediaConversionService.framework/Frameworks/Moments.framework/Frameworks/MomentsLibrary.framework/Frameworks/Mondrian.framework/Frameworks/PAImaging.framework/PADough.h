//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImaging/PADough-Protocol.h>

@class CIImage, NSString, PAOpenGLDevice;

@interface PADough : NSObject <PADough>
{
    CIImage *_inputImage;
    CIImage *_doughImage;
    BOOL _useTextureDough;
    PAOpenGLDevice *_device;
}

@property(nonatomic) BOOL useTextureDough; // @synthesize useTextureDough=_useTextureDough;
@property(retain) PAOpenGLDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (struct CGSize)size;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

