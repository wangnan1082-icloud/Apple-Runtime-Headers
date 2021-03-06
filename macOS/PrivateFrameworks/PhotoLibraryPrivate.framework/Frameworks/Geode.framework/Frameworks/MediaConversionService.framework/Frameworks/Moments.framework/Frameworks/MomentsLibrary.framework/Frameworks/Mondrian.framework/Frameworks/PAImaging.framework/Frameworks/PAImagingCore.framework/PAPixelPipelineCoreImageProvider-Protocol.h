//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PAImagingCore/DGISIP-Protocol.h>
#import <PAImagingCore/NSObject-Protocol.h>

@class CIImage, NSString;

@protocol PAPixelPipelineCoreImageProvider <NSObject, DGISIP>
- (void)endAccess:(NSString *)arg1;
- (void)beginAccess:(NSString *)arg1;
- (struct CGColorSpace *)colorSpaceForScale:(double)arg1;
- (int)ciFormatForScale:(double)arg1;
- (int)formatForScale:(double)arg1;
- (void)getPixelsFromImageWithScale:(double)arg1 roi:(struct CGRect)arg2 destPtr:(void *)arg3 destPtrRowBytes:(long long)arg4;
- (struct CGRect)imageExtentWithScale:(double)arg1;
- (struct PFIntSize_st)imageSizeWithScale:(double)arg1;
- (void)prepareToRenderWithScale:(double)arg1 viewport:(struct CGRect)arg2;
- (CIImage *)ciImageWithScale:(double)arg1 accessToken:(NSString *)arg2;
- (CIImage *)ciImageWithScale:(double)arg1;
@end

