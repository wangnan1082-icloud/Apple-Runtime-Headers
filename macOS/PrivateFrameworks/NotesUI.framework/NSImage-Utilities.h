//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImage.h"

@interface NSImage (Utilities)
+ (struct CGRect)ic_aspectFitImageFrameForViewWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;
+ (struct NSImage *)ic_imageWithColor:(struct NSColor *)arg1 size:(struct CGSize)arg2;
+ (struct NSImage *)fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;
+ (id)orientationMetadataFromImageOrientation:(long long)arg1;
+ (struct NSImage *)imageWithData:(id)arg1;
+ (struct NSImage *)imageWithCGImage:(struct CGImage *)arg1;
+ (struct NSImage *)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (struct NSImage *)orientedImageFromImage:(struct NSImage *)arg1 toOrientation:(long long)arg2;
+ (struct NSImage *)orientedImageFromImage:(struct NSImage *)arg1 fromOrientation:(long long)arg2;
+ (struct NSImage *)orientedImageFromCGImage:(struct CGImage *)arg1 scale:(double)arg2 transform:(struct CGAffineTransform)arg3;
+ (struct NSImage *)imageNamed:(id)arg1 withTint:(struct NSColor *)arg2;
+ (struct NSImage *)ic_imageWithContentsOfURL:(id)arg1;
- (struct CGContext *)newARGB8BitmapContextFromImage:(struct CGImage *)arg1;
- (struct CGRect)ic_cropRectZeroAlpha;
- (id)ic_imageDataWithUTType:(id)arg1 metadata:(id)arg2;
- (id)ic_imageDataWithUTType:(id)arg1;
- (id)ic_PNGData;
- (id)ic_JPEGDataWithOrientation:(long long)arg1;
- (id)ic_JPEGData;
- (long long)imageOrientation;
- (struct CGImage *)CGImage;
- (id)bitmapRepresentation;
- (struct NSImage *)imageFromRect:(struct CGRect)arg1;
- (struct NSImage *)scaledImageWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct NSImage *)scaledImageMaxDimension:(double)arg1 scale:(double)arg2;
- (struct NSImage *)scaledImageMinDimension:(double)arg1 scale:(double)arg2;
@end
