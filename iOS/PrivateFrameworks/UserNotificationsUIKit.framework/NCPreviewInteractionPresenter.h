//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIPreviewInteractionDelegatePrivate.h"

@class MTMaterialView, NCPreviewInteractionPresentedControl, NCPreviewInteractionPresenterContentView, NCTouchEaterGestureRecognizer, NSString, UIPreviewInteraction, UIView;

@interface NCPreviewInteractionPresenter : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegatePrivate>
{
    _Bool _presented;
    _Bool _transitioning;
    UIView *_sourceView;
    NSString *_groupName;
    long long _materialRecipe;
    unsigned long long _backgroundMaterialOptions;
    unsigned long long _overlayMaterialOptions;
    id <NCPreviewInteractionPresenterDelegate> _delegate;
    UIPreviewInteraction *_previewInteraction;
    UIView *_containerView;
    NCPreviewInteractionPresenterContentView *_contentView;
    NCTouchEaterGestureRecognizer *_touchEater;
    NCPreviewInteractionPresentedControl *_presentedControl;
    MTMaterialView *_backgroundMaterialView;
    struct CGRect _sourceViewVisibleRect;
}

@property(nonatomic, getter=_isTransitioning, setter=_setTransitioning:) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView; // @synthesize backgroundMaterialView=_backgroundMaterialView;
@property(readonly, nonatomic, getter=_presentedControl) NCPreviewInteractionPresentedControl *presentedControl; // @synthesize presentedControl=_presentedControl;
@property(readonly, nonatomic, getter=_touchEater) __weak NCTouchEaterGestureRecognizer *touchEater; // @synthesize touchEater=_touchEater;
@property(readonly, nonatomic, getter=_contentView) NCPreviewInteractionPresenterContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic, getter=_containerView) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic, getter=_previewInteraction) UIPreviewInteraction *previewInteraction; // @synthesize previewInteraction=_previewInteraction;
@property(nonatomic, getter=isPresented, setter=_setPresented:) _Bool presented; // @synthesize presented=_presented;
@property(nonatomic) __weak id <NCPreviewInteractionPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long overlayMaterialOptions; // @synthesize overlayMaterialOptions=_overlayMaterialOptions;
@property(readonly, nonatomic) unsigned long long backgroundMaterialOptions; // @synthesize backgroundMaterialOptions=_backgroundMaterialOptions;
@property(readonly, nonatomic) long long materialRecipe; // @synthesize materialRecipe=_materialRecipe;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) struct CGRect sourceViewVisibleRect; // @synthesize sourceViewVisibleRect=_sourceViewVisibleRect;
@property(readonly, nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_tearDown;
- (void)_performCancel;
- (void)handleEatenTouch:(id)arg1;
- (void)_animateTransitionWithProgress:(double)arg1 ended:(_Bool)arg2 cancelled:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (double)_frictionForTransitionProgress:(double)arg1 ended:(_Bool)arg2 cancelled:(_Bool)arg3;
- (double)_tensionForTransitionProgress:(double)arg1 ended:(_Bool)arg2 cancelled:(_Bool)arg3;
- (struct CGRect)_finalPresentedViewFrame;
- (struct CGRect)_transitionalPresentedViewFrameWithProgress:(double)arg1;
- (struct CGRect)_initialPresentedViewFrame;
- (void)_setUpPresentedControl;
- (void)_configurePresentedControlIfNecessaryWithTitle:(id)arg1;
- (void)_setUpBackgroundMaterialView;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_setUpContentView;
- (void)_configureContentViewIfNecessary;
- (void)_setUpContainerView;
- (void)_configureContainerViewIfNecessary;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, copy, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 sourceView:(id)arg2 materialRecipe:(long long)arg3 backgroundMaterialOptions:(unsigned long long)arg4 overlayMaterialOptions:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
