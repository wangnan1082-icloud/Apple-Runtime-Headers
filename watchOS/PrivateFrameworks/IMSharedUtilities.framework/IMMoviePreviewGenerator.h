//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMSharedUtilities/IMPreviewGenerator.h>

@interface IMMoviePreviewGenerator : IMPreviewGenerator
{
}

+ (struct CGSize)thumbnailFillSizeForWidth:(float)arg1 imageSize:(struct CGSize)arg2;
+ (id)_avAssetForURL:(id)arg1;
+ (Class)__AVAssetImageGeneratorClass;
+ (Class)__AVURLAssetClass;
+ (struct CGImage *)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(struct IMPreviewConstraints)arg2 error:(id *)arg3;
+ (id)UTITypes;
+ (id)fetchUTITypes;

@end

