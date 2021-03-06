//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSLayoutManager.h>

#import <NanoMailKitClient/NSLayoutManagerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UIView;

@interface NNMKMessageBodyLayoutManager : NSLayoutManager <NSLayoutManagerDelegate>
{
    UIView *_viewForAddingImageViews;
    NSMutableDictionary *_imageAttachmentsImageViews;
    NSMutableDictionary *_imageAttachmentsNotLoaded;
}

@property(retain, nonatomic) NSMutableDictionary *imageAttachmentsNotLoaded; // @synthesize imageAttachmentsNotLoaded=_imageAttachmentsNotLoaded;
@property(retain, nonatomic) NSMutableDictionary *imageAttachmentsImageViews; // @synthesize imageAttachmentsImageViews=_imageAttachmentsImageViews;
@property(nonatomic) __weak UIView *viewForAddingImageViews; // @synthesize viewForAddingImageViews=_viewForAddingImageViews;
- (void).cxx_destruct;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)replaceImageAttachmentImage:(id)arg1 forContentId:(id)arg2;
- (void)renderImageAttachmentImage:(id)arg1 inFrame:(struct CGRect)arg2 forContentId:(id)arg3;
- (void)notifyImageAttachmentNotYetLoadedForContentId:(id)arg1 characterIndex:(unsigned int)arg2;
- (void)notifyImageAttachmentLoadedForContentId:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

