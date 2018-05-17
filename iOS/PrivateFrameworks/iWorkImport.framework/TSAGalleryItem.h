//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSDChangeableInfo.h"
#import "TSDContainerInfo.h"
#import "TSKDocumentObject.h"
#import "TSWPStorageParent.h"

@class NSArray, NSObject<OS_dispatch_queue>, NSObject<TSDContainerInfo>, NSString, TSAGalleryInfo, TSDImageAdjustments, TSDImageDataHelper, TSDInfoGeometry, TSPData, TSPObject<TSDOwningAttachment>, TSSPropertySetChangeDetails, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSAGalleryItem : TSPObject <TSDContainerInfo, TSWPStorageParent, TSDChangeableInfo, TSKDocumentObject>
{
    TSPData *_imageData;
    TSWPStorage *_captionStorage;
    struct CGPoint _offset;
    double _scale;
    TSPData *_thumbnailImageData;
    TSDImageAdjustments *_imageAdjustments;
    TSPData *_adjustedImageData;
    TSPData *_thumbnailAdjustedImageData;
    NSString *_accessibilityDescription;
    _Bool _definedOffset;
    _Bool _definedScale;
    _Bool _definedThumbnailImageData;
    _Bool _definedImageAdjustments;
    _Bool _definedAdjustedImageData;
    _Bool _definedThumbnailAdjustedImageData;
    _Bool _definedAccessibilityDescription;
    TSDImageDataHelper *_imageDataHelper;
    TSDImageDataHelper *_adjustedImageDataHelper;
    NSObject<OS_dispatch_queue> *_naturalSizeQueue;
    TSSPropertySetChangeDetails *_changes;
    NSObject<TSDContainerInfo> *_parentInfo;
    TSAGalleryInfo *_parentGalleryInfo;
}

+ (_Bool)needsObjectUUID;
@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property(retain, nonatomic) TSPData *thumbnailAdjustedImageData; // @synthesize thumbnailAdjustedImageData=_thumbnailAdjustedImageData;
@property(retain, nonatomic) TSPData *adjustedImageData; // @synthesize adjustedImageData=_adjustedImageData;
@property(copy, nonatomic) TSDImageAdjustments *imageAdjustments; // @synthesize imageAdjustments=_imageAdjustments;
@property(retain, nonatomic) TSPData *thumbnailImageData; // @synthesize thumbnailImageData=_thumbnailImageData;
@property(retain, nonatomic) TSPData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) __weak TSAGalleryInfo *parentGalleryInfo; // @synthesize parentGalleryInfo=_parentGalleryInfo;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @synthesize parentInfo=_parentInfo;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayName;
- (void)saveToMessage:(struct GalleryItem *)arg1 archiver:(id)arg2;
- (void)loadFromMessage:(const struct GalleryItem *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)objectUUIDPath;
@property(readonly, nonatomic) _Bool storageChangesInvalidateWrap;
@property(readonly, nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) _Bool preventsComments;
@property(readonly, nonatomic) _Bool textIsLinked;
@property(readonly, nonatomic) _Bool textIsVertical;
@property(readonly, nonatomic) _Bool autoListTermination;
@property(readonly, nonatomic) _Bool autoListRecognition;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
@property(readonly, nonatomic) NSArray *childInfos;
- (id)endCollectingChanges;
- (void)willChangeProperty:(int)arg1;
- (void)beginCollectingChanges;
@property(readonly, nonatomic) _Bool isUserModifiable;
@property(readonly, nonatomic) _Bool needsDownload;
- (_Bool)isThemeContent;
- (Class)repClass;
- (Class)layoutClass;
- (_Bool)isSelectable;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
@property(readonly, nonatomic) struct CGSize naturalSize;
@property(nonatomic) double scale;
- (id)copyWithContext:(id)arg1;
- (void)didInitFromSOS;
- (void)commonInit;
- (id)initWithContext:(id)arg1 imageData:(id)arg2;
- (void)setCaptionStorage:(id)arg1;
@property(readonly, nonatomic) TSWPStorage *captionStorage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end
