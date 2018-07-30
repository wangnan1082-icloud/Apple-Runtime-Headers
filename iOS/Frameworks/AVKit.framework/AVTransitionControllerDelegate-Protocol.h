//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVTransitionController, UIColor, UIGestureRecognizer, UITouch, UIView, UIViewController;

@protocol AVTransitionControllerDelegate <NSObject>
- (void)transitionController:(AVTransitionController *)arg1 transitionWillComplete:(_Bool)arg2;
- (void)transitionController:(AVTransitionController *)arg1 prepareForFinishingInteractiveTransition:(void (^)(void))arg2;
- (void)transitionControllerBeginInteractiveDismissalTransition:(AVTransitionController *)arg1;
- (void)transitionControllerBeginInteractivePresentationTransition:(AVTransitionController *)arg1;
- (_Bool)transitionControllerCanBeginInteractivePresentationTransition:(AVTransitionController *)arg1;
- (_Bool)transitionControllerCanBeginInteractiveDismissalTransition:(AVTransitionController *)arg1;
- (UIColor *)transitionControllerBackgroundColorForInteractivelyTransitioningPresentedViewController:(AVTransitionController *)arg1;
- (_Bool)transitionControllerCanCreateVideoOnlyWindow:(AVTransitionController *)arg1;
- (UIViewController *)transitionControllerContentSourceViewController:(AVTransitionController *)arg1;
- (_Bool)transitionController:(AVTransitionController *)arg1 gestureRecognizer:(UIGestureRecognizer *)arg2 shouldReceiveTouch:(UITouch *)arg3;
- (UIView *)transitionController:(AVTransitionController *)arg1 targetViewForDismissingViewController:(UIViewController *)arg2;
- (void)transitionController:(AVTransitionController *)arg1 willBeginDismissingViewController:(UIViewController *)arg2;
- (void)transitionController:(AVTransitionController *)arg1 willBeginPresentingViewController:(UIViewController *)arg2;
@end
