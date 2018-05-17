//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CUISMediaPlayerViewControllerDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class AVAsset, NSString, UIButton, UIImageView, UIResponder;

@interface CUISAlertMovieView : UIView <CUISMediaPlayerViewControllerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    AVAsset *_asset;
    UIImageView *_imageView;
    UIButton *_button;
    struct CGSize _cachedContainerSize;
    struct CGSize _cachedSize;
    unsigned int _animateFullScreenTransitionForPresenting:1;
    struct CGRect _viewBoundsInTransitionView;
    UIResponder *_previousFirstResponder;
}

@property(nonatomic) __weak UIResponder *previousFirstResponder; // @synthesize previousFirstResponder=_previousFirstResponder;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)mediaPlayerViewController:(id)arg1 didPlayToEnd:(_Bool)arg2 endTime:(double)arg3 error:(id)arg4;
- (void)_buttonTapped:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)naturalSize;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
