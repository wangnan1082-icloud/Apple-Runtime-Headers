//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Messages/CKAnimationTimerObserver-Protocol.h>
#import <Messages/UIGestureRecognizerDelegate-Protocol.h>

@class CKAnimatedImage, CKImageData, MSSticker, NSArray, NSError, NSString, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface MSStickerView : UIView <UIGestureRecognizerDelegate, CKAnimationTimerObserver>
{
    _Bool _initialLayoutComplete;
    _Bool _animating;
    _Bool _isPeeled;
    MSSticker *_sticker;
    double _animationDuration;
    NSError *_stickerError;
    UIImage *_stickerImage;
    UIImageView *_imageView;
    CKAnimatedImage *_image;
    CKImageData *_imageData;
    NSArray *_frames;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
}

@property(nonatomic) _Bool isPeeled; // @synthesize isPeeled=_isPeeled;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(nonatomic) _Bool initialLayoutComplete; // @synthesize initialLayoutComplete=_initialLayoutComplete;
@property(retain, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) CKImageData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) CKAnimatedImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *stickerImage; // @synthesize stickerImage=_stickerImage;
@property(retain, nonatomic) NSError *stickerError; // @synthesize stickerError=_stickerError;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) MSSticker *sticker; // @synthesize sticker=_sticker;
- (void).cxx_destruct;
- (void)handleLongPress:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)animationTimerFired:(unsigned long long)arg1;
- (void)didMoveToWindow;
- (void)prepareForSnapshotting;
- (void)updateAnimationTimerObserving;
@property(readonly, nonatomic) _Bool isAnimated;
- (id)accessibilityLabel;
- (void)_resetPeel:(_Bool)arg1;
- (void)_swapWithOutlineImage;
- (void)_setImage:(id)arg1;
- (void)_updateStickerView;
- (void)_loadAnimatedStickerfIfNecessary;
- (void)_loadSticker;
- (_Bool)isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (void)_stickerPreviewCachePreviewDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_prepareForReuse;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 sticker:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_configureStickerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

