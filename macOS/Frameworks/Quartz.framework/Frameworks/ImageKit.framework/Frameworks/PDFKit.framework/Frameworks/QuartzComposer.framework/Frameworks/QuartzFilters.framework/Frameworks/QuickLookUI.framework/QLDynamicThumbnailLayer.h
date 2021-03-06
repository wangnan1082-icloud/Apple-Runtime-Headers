//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSConditionLock, NSString, NSURL;
@protocol QLPreviewItem;

@interface QLDynamicThumbnailLayer : CALayer
{
    NSURL *_url;
    unsigned long long _requestIndex;
    struct __QLThumbnail *_thumbnail;
    CALayer *_backLayer;
    CALayer *_frontLayer;
    struct CGRect _thumbnailContentRect;
    BOOL _subthumbnailNeedsDisplayRequested;
    BOOL _isPaused;
    NSConditionLock *_pauseLock;
    BOOL _hasSubthumbnailToRemove;
    BOOL _hasSubthumbnailToShow;
    BOOL _loaded;
    struct CGSize _maxThumbnailSize;
    struct CGSize _minThumbnailSize;
    NSString *_contentTypeUTIHint;
    id <QLPreviewItem> _previewItem;
    BOOL _needsPlaceHolder;
    BOOL _showPlaceholderAfterTimeout;
    BOOL _dark;
}

@property(retain) id <QLPreviewItem> previewItem; // @synthesize previewItem=_previewItem;
@property(copy) NSString *contentTypeUTIHint; // @synthesize contentTypeUTIHint=_contentTypeUTIHint;
@property struct CGSize minThumbnailSize; // @synthesize minThumbnailSize=_minThumbnailSize;
@property BOOL showPlaceholderAfterTimeout; // @synthesize showPlaceholderAfterTimeout=_showPlaceholderAfterTimeout;
- (void)recomputeThumbnailIfNeeded;
@property(readonly) struct CGImage *thumbnailImage;
@property(readonly) struct CGRect thumbnailContentFrame;
@property(readonly) struct CGSize thumbnailSize;
- (struct CGSize)_realThumbnailSize;
- (BOOL)isPaused;
- (void)resume;
- (void)pause;
- (void)handleMouseDownAtPoint:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1;
@property(readonly) BOOL loaded;
@property(copy) NSURL *URL; // @dynamic URL;
- (void)_dispatchRequestInfo;
- (struct CGSize)_optimalThumbnailSize;
- (void)_computeThumbnail:(struct __QLThumbnail *)arg1 forURL:(id)arg2 withUTIHint:(id)arg3 requestIndex:(unsigned long long)arg4;
- (void)_computeFolderContentsThumbnailsContinuously:(struct __CFURL *)arg1 requestIndex:(unsigned long long)arg2;
- (void)_blockAndWaitIfNecessaryWithRequestIndex:(unsigned long long)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_updateSubthumbnails;
- (void)_thumbnailDone:(id)arg1;
- (void)_appendSubThumbnail:(id)arg1;
- (void)appendSubThumbnail:(struct CGImage *)arg1;
- (void)_showNewestSubthumbnail;
- (void)_removeOldestSubthumbnail;
- (void)_reallyRemoveOldestSubthumbnail;
- (void)_ql_layoutSublayers;
- (id)_subthumbnailLayers;
- (void)_setPlaceHolder;
- (void)_updatePauseLock;
- (void)set_QLLayerAppearance:(id)arg1;
- (void)dealloc;
- (id)init;

@end

