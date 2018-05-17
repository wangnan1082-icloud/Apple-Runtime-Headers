//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUIPowerDownViewInterface.h"
#import "_UIActionSliderDelegate.h"

@class NSString, NSTimer, SBUIShapeView, UIButton, UILabel, _UIActionSlider;

@interface SBUIPowerDownView : UIView <_UIActionSliderDelegate, SBUIPowerDownViewInterface>
{
    NSTimer *_autoDismissTimer;
    UIView *_backdropView;
    SBUIShapeView *_darkeningUnderlayView;
    UIView *_darkeningOverlayView;
    _UIActionSlider *_actionSlider;
    UIButton *_cancelButton;
    UILabel *_cancelLabel;
    id <SBUIPowerDownViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SBUIPowerDownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_animatePowerDown;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_idleTimerFired;
- (void)_cancelButtonTapped;
- (void)_updateSliderExclusionPath;
- (void)_resetAutoDismissTimer;
- (void)_cancelAutoDismissTimer;
- (_Bool)_isLandscapeAspectRatio;
- (void)_powerDownSliderDidCancelSlide;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(float)arg1;
- (void)_powerDownSliderDidBeginSlide;
- (void)_willAnimateOut;
- (void)_willAnimateIn;
- (void)actionSliderDidCancelSlide:(id)arg1;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(float)arg2;
- (void)actionSliderDidBeginSlide:(id)arg1;
- (void)layoutSubviews;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 vibrantSettings:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
