//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TVGraphicsImageRenderer : NSObject
{
}

+ (id)sharedBlurRenderer;
+ (id)blurRenderer:(id)arg1 renderImage:(id)arg2 targetSize:(struct CGSize)arg3 scaleSize:(struct CGSize)arg4 blurStyle:(long long)arg5 blurRadius:(double)arg6;
+ (id)blurRenderer:(id)arg1 renderImage:(id)arg2 blurStyle:(long long)arg3 targetSize:(struct CGSize)arg4 blurRadius:(double)arg5;
+ (id)decodedImage:(id)arg1 opaque:(_Bool)arg2;
+ (id)imageWithSize:(struct CGSize)arg1 alpha:(_Bool)arg2 cgContextActions:(CDUnknownBlockType)arg3;
+ (id)imageWithSize:(struct CGSize)arg1 alpha:(_Bool)arg2 actions:(CDUnknownBlockType)arg3;
+ (id)imageWithSize:(struct CGSize)arg1 format:(id)arg2 cgContextActions:(CDUnknownBlockType)arg3;
+ (id)imageWithSize:(struct CGSize)arg1 format:(id)arg2 actions:(CDUnknownBlockType)arg3;
+ (id)formatWithUIImage:(id)arg1;
+ (id)formatWithCGImage:(struct CGImage *)arg1;
+ (id)preferredFormat;

@end
