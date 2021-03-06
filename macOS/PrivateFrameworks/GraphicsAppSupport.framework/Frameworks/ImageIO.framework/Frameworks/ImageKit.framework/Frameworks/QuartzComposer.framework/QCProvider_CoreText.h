//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzComposer/QCImageProvider.h>

@class NSArray, QCRegion, QCTextRenderer;

__attribute__((visibility("hidden")))
@interface QCProvider_CoreText : QCImageProvider
{
    QCTextRenderer *_renderer;
    QCRegion *_domainOfDefinition;
    CDStruct_bdcb2b0d _md5;
    NSArray *_pixelFormats;
}

+ (id)createProviderWithSource:(id)arg1 options:(id)arg2;
+ (BOOL)isCompatibleWithSource:(id)arg1 sourceMD5:(CDStruct_bdcb2b0d *)arg2;
- (id)createPixelBufferForManager:(id)arg1 withFormat:(id)arg2 transformation:(id)arg3 bounds:(struct CGRect)arg4 colorSpace:(struct CGColorSpace *)arg5 options:(id)arg6;
- (id)supportedPixelBufferFormatsForManager:(id)arg1;
- (BOOL)supportsColorMatching;
- (BOOL)supportsTransformation;
- (BOOL)supportsCropping;
- (BOOL)hasAlpha;
- (struct CGColorSpace *)colorSpace;
- (id)domainOfDefinition;
- (CDStruct_bdcb2b0d)providerMD5;
- (void)dealloc;
- (id)initWithString:(id)arg1 attributes:(id)arg2 layoutSize:(struct CGSize)arg3 options:(id)arg4;
- (id)initWithTextRenderer:(id)arg1 options:(id)arg2;
- (id)createOptimizedProviderWithTransformation:(id)arg1 cropping:(struct CGRect)arg2;

@end

