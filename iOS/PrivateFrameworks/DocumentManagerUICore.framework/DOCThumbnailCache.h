//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable, NSOperationQueue;

@interface DOCThumbnailCache : NSObject
{
    NSOperationQueue *_operationQueue;
    NSMapTable *_cachedThumbnailItems;
    NSMapTable *_cachedIconItems;
    NSCache *_cachedGenericItems;
    NSCache *_recentlyUsedItems;
}

+ (void)setMaximumThumbnailCount:(unsigned long long)arg1;
+ (void)clearCache;
+ (id)iconForContentType:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(_Bool)arg5 isInteractive:(_Bool)arg6;
+ (id)thumbnailForItem:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(_Bool)arg6 isInteractive:(_Bool)arg7;
+ (id)thumbnailForItem:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(_Bool)arg5 isInteractive:(_Bool)arg6;
+ (id)sharedCache;
@property(readonly, nonatomic) NSCache *recentlyUsedItems; // @synthesize recentlyUsedItems=_recentlyUsedItems;
@property(readonly, nonatomic) NSCache *cachedGenericItems; // @synthesize cachedGenericItems=_cachedGenericItems;
@property(readonly, nonatomic) NSMapTable *cachedIconItems; // @synthesize cachedIconItems=_cachedIconItems;
@property(readonly, nonatomic) NSMapTable *cachedThumbnailItems; // @synthesize cachedThumbnailItems=_cachedThumbnailItems;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)markThumbnailAsRecentlyUsed:(id)arg1;
- (id)_thumbnailFallbackForItem:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(_Bool)arg6 currentThumbnail:(id)arg7;
- (id)_iconForContentType:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(_Bool)arg5 isInteractive:(_Bool)arg6;
- (id)_thumbnailForItem:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(_Bool)arg6 isInteractive:(_Bool)arg7;
- (void)clearCache;
- (id)iconForContentType:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(_Bool)arg5 isInteractive:(_Bool)arg6;
- (id)thumbnailForItem:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(_Bool)arg5 isInteractive:(_Bool)arg6;
- (id)thumbnailForItem:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 folded:(_Bool)arg6 isInteractive:(_Bool)arg7;
- (id)init;

@end

