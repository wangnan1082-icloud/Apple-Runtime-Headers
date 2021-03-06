//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <VideosUI/VUIOverlayViewProtocol-Protocol.h>

@class NSString, TVViewElement, UIImage, VUIOverlayLayout, _TVImageView, _TVProgressView;

__attribute__((visibility("hidden")))
@interface VUIOverlayView : UIView <VUIOverlayViewProtocol>
{
    UIImage *_backgroundImageForMaterialRendering;
    VUIOverlayLayout *_overlayLayout;
    TVViewElement *_viewElement;
    _TVProgressView *_progressView;
    TVViewElement *_progressViewElement;
    _TVImageView *_appImageView;
    TVViewElement *_appImageElement;
}

+ (id)overlayViewFromElement:(id)arg1 overlayLayout:(id)arg2 existingView:(id)arg3;
@property(retain, nonatomic) TVViewElement *appImageElement; // @synthesize appImageElement=_appImageElement;
@property(retain, nonatomic) _TVImageView *appImageView; // @synthesize appImageView=_appImageView;
@property(retain, nonatomic) TVViewElement *progressViewElement; // @synthesize progressViewElement=_progressViewElement;
@property(retain, nonatomic) _TVProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) TVViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(retain, nonatomic) VUIOverlayLayout *overlayLayout; // @synthesize overlayLayout=_overlayLayout;
@property(retain, nonatomic) UIImage *backgroundImageForMaterialRendering; // @synthesize backgroundImageForMaterialRendering=_backgroundImageForMaterialRendering;
- (void).cxx_destruct;
- (void)backgroundImageSizeDidChange:(struct CGSize)arg1;
- (void)reset;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

