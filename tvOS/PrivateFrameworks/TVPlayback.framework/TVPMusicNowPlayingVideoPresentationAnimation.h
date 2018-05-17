//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UIView;

@interface TVPMusicNowPlayingVideoPresentationAnimation : NSObject <UIViewControllerAnimatedTransitioning>
{
    long long _animationType;
    UIView *_interstitialView;
    UIView *_sourceView;
    long long _initialContentMode;
    struct CGRect _sourceFrame;
}

@property(readonly, nonatomic) long long initialContentMode; // @synthesize initialContentMode=_initialContentMode;
@property(readonly, nonatomic) struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, nonatomic) UIView *interstitialView; // @synthesize interstitialView=_interstitialView;
@property(readonly, nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (void).cxx_destruct;
- (void)_animateDismissTransition:(id)arg1;
- (void)_animatePresentTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithAnimationType:(long long)arg1 interstitialView:(id)arg2 sourceView:(id)arg3 sourceFrame:(struct CGRect)arg4 initialContentMode:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
