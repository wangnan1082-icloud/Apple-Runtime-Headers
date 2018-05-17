//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKAnalogHandsView, UIView;

@interface NTKAnalogFaceView : NTKFaceView
{
    _Bool __contentViewsOpaque;
    _Bool __timeViewBehindContentView;
    UIView *_contentView;
    UIView *_zoomingClippingView;
    UIView *_borrowedCircleView;
    UIView *_borrowedHandsView;
    double _maxZoomingIconDiameter;
}

+ (void)_prewarm;
+ (Class)_timeViewClass;
@property(nonatomic, setter=_setTimeViewBehindContentView:) _Bool _timeViewBehindContentView; // @synthesize _timeViewBehindContentView=__timeViewBehindContentView;
@property(nonatomic, getter=_contentViewsAreOpaque, setter=_setContentViewsOpaque:) _Bool _contentViewsOpaque; // @synthesize _contentViewsOpaque=__contentViewsOpaque;
@property(nonatomic) double maxZoomingIconDiameter; // @synthesize maxZoomingIconDiameter=_maxZoomingIconDiameter;
@property(nonatomic) __weak UIView *borrowedHandsView; // @synthesize borrowedHandsView=_borrowedHandsView;
@property(nonatomic) __weak UIView *borrowedCircleView; // @synthesize borrowedCircleView=_borrowedCircleView;
@property(retain, nonatomic) UIView *zoomingClippingView; // @synthesize zoomingClippingView=_zoomingClippingView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_updateDateComplicationPositionIfNecessary;
- (struct CGPoint)_dateComplicationCenterOffset;
- (struct CGPoint)_dateComplicationRightAlignment;
- (_Bool)_shouldRasterizeForegroundContainerViewForEditMode:(long long)arg1;
- (_Bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (long long)_backgroundedTimeViewEditModes;
- (struct CGPoint)_contentCenterOffset;
- (void)_prepareTimeViewForReuse:(id)arg1;
- (void)_configureReusableTimeView:(id)arg1;
- (void)_cleanupAfterZoom;
- (void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (_Bool)_usesCustomZoom;
- (void)_bringForegroundViewsToFront;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_cleanupAfterEditing;
- (void)_prepareForEditing;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (void)_applyShowContentForUnadornedSnapshot;
- (id)_timeTravelCaptionFontSizeOverrides;
- (double)_timeTravelCaptionLabelMaxWidth;
- (void)_applyDataMode;
- (_Bool)_needsForegroundContainerView;
- (void)_handleLocaleDidChange;
- (void)_endScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_scrubToDate:(id)arg1 animated:(_Bool)arg2;
- (void)_startScrubbingAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_canStartTimeScrubbing;
- (_Bool)_supportsTimeScrubbing;
- (void)_reuseTimeView;
- (void)dealloc;
- (void)_unloadSnapshotContentViews;
- (void)_loadSnapshotContentViews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) NTKAnalogHandsView *timeView; // @dynamic timeView;

@end
