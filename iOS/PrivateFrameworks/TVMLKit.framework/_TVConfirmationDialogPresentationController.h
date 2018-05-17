//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPresentationController.h"

@class UIVisualEffectView;

@interface _TVConfirmationDialogPresentationController : UIPresentationController
{
    UIVisualEffectView *_backdropView;
    CDUnknownBlockType _completedAnimationBlock;
    struct CGSize _modalSize;
}

@property(copy, nonatomic) CDUnknownBlockType completedAnimationBlock; // @synthesize completedAnimationBlock=_completedAnimationBlock;
@property(nonatomic) struct CGSize modalSize; // @synthesize modalSize=_modalSize;
- (void).cxx_destruct;
- (void)_tapGesture:(id)arg1;
- (void)_layoutPresentedView;
@property(readonly, nonatomic) UIVisualEffectView *backdropView;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (long long)presentationStyle;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

@end
