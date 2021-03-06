//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NMUNowPlayingArtworkProcessing : NSObject
{
}

+ (id)_touchHighlightCachePath;
+ (id)_processedArtworkCachePath;
+ (void)_getCachePathsForItemWithPersistentID:(id)arg1 processedArtworkImageCachePath:(id *)arg2 touchHighlightImageCachePath:(id *)arg3;
+ (void)_getProcessedImagesForSourceImage:(id)arg1 processedArtworkImage:(id *)arg2 touchHighlightImage:(id *)arg3 optionalItemPersistentIDForCaching:(id)arg4;
+ (void)_clearCachedBackgroundArtworkIfNecessary;
+ (id)placeholderArtworkWithTemplateImageName:(id)arg1;
+ (void)processArtworkRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

