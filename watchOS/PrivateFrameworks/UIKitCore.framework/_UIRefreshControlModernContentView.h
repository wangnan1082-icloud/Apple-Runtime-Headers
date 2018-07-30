//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIRefreshControlContentView.h>

@class UILabel, UIView, _UIRefreshControlModernReplicatorView;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView
{
    _Bool _animationsAreValid;
    UIView *_replicatorContainer;
    _UIRefreshControlModernReplicatorView *_replicatorView;
    UIView *_seed;
    _Bool _hasFinishedRevealing;
    UILabel *_textLabel;
    _Bool _areAnimationsValid;
    float _currentPopStiffness;
    float _impactIntensity;
}

@property(nonatomic) float impactIntensity; // @synthesize impactIntensity=_impactIntensity;
@property(nonatomic) float currentPopStiffness; // @synthesize currentPopStiffness=_currentPopStiffness;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) _Bool areAnimationsValid; // @synthesize areAnimationsValid=_areAnimationsValid;
- (void).cxx_destruct;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)_effectiveTintColorWithAlpha:(float)arg1;
- (id)_effectiveTintColor;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (float)maximumSnappingHeight;
- (float)_maximumSnappingHeightScalingForScrollViewHeight;
- (float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (double)_currentTimeOffset;
- (void)_updateTimeOffsetOfRelevantLayers;
- (float)_percentageShowing;
- (void)_snappingMagic;
- (void)_goAway;
- (void)_tick;
- (void)_spin;
- (void)_bloom;
- (void)_unbloom;
- (void)_reveal;
- (void)_resetToRevealingState;
- (struct CGAffineTransform)_unbloomedSeedTransform;
- (struct CGAffineTransform)_bloomedSeedTransform;
- (void)_setUnbloomedAppearance;
- (void)_setBloomedAppearance;
- (void)_setSpunAppearance;
- (void)_cleanUpAfterRevealing;
- (void)_removeAllAnimations;
- (void)_tickDueToProgrammaticRefresh;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;
- (int)style;
- (id)initWithFrame:(struct CGRect)arg1;

@end
