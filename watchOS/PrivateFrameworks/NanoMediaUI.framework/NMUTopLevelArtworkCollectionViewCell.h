//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoMediaUI/NMUArtworkCollectionViewCell.h>

@class CAGradientLayer, CALayer, NMCKeyValueObserver, NMUDownloadProgressView, NMUMarqueeView, UILabel;

@interface NMUTopLevelArtworkCollectionViewCell : NMUArtworkCollectionViewCell
{
    NMCKeyValueObserver *_textObserver;
    _Bool _marqueePaused;
    _Bool _spinnerPaused;
    NMUDownloadProgressView *_downloadProgressView;
    CAGradientLayer *_gradientOverlay;
    CALayer *_dimmingLayer;
    CALayer *_backgroundLayer;
    CAGradientLayer *_depthGradientOverlay;
    NMUMarqueeView *_marqueeView;
    UILabel *_textLabel;
}

@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) NMUMarqueeView *marqueeView; // @synthesize marqueeView=_marqueeView;
- (void).cxx_destruct;
- (void)_handleTextChanged;
- (void)_resetMarqueeContentAndPosition;
- (void)_resetMarqueeContentAndPositionWithTextWidth:(float)arg1;
- (void)_setSpinnerPaused:(_Bool)arg1;
- (void)_setMarqueePaused:(_Bool)arg1;
- (void)_updateShadowWithLayoutAttributes:(id)arg1;
- (void)_updateHighlightedAndSelectedAppearance;
- (void)applyLayoutAttributes:(id)arg1;
- (float)_preferredContinuousCornerRadius;
- (void)setDownloadState:(unsigned int)arg1 useLargeDimmedStyle:(_Bool)arg2 progress:(float)arg3 animated:(_Bool)arg4;
- (void)setDownloadState:(unsigned int)arg1 useLargeDimmedStyle:(_Bool)arg2 progress:(float)arg3;
@property(readonly, nonatomic) NMUDownloadProgressView *downloadProgressView;
- (void)didMoveToWindow;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
