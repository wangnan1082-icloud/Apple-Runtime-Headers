//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class BKSAnimationFenceHandle, BSAnimationSettings, NSArray, NSData, NSString, NSValue, UIColor, UIFocusMovementAction;

@protocol _UIRemoteViewController_ViewControllerOperatorInterface
- (void)__handleFocusMovementAction:(UIFocusMovementAction *)arg1;
- (void)__showEditAlertViewWithToken:(long)arg1 canUndo:(_Bool)arg2 canRedo:(_Bool)arg3;
- (void)__trampolineButtonPressData:(NSData *)arg1 canceled:(_Bool)arg2;
- (void)__viewServiceDidUpdatePreferredUserInterfaceStyle:(int)arg1;
- (void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(int)arg1 animationSettings:(BSAnimationSettings *)arg2;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(int)arg1 preferredStatusBarVisibility:(int)arg2 updateAnimation:(int)arg3 currentAnimationSettings:(BSAnimationSettings *)arg4;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize)arg1 fence:(BKSAnimationFenceHandle *)arg2;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize)arg1 fence:(BKSAnimationFenceHandle *)arg2;
- (void)__viewServicePopoverDidSetUseToolbarShine:(_Bool)arg1;
- (void)__viewServicePopoverDidChangeContentSize:(struct CGSize)arg1 animated:(_Bool)arg2 fence:(BKSAnimationFenceHandle *)arg3 withReplyHandler:(void (^)(struct CGSize))arg4;
- (void)__setViewServiceIsDisplayingPopover:(_Bool)arg1;
- (void)__dismissTextServiceSessionAnimated:(_Bool)arg1;
- (void)__showServiceForText:(NSString *)arg1 selectedTextRangeValue:(NSValue *)arg2 type:(int)arg3 fromRectValue:(NSValue *)arg4 replyHandler:(void (^)(id, NSError *))arg5;
- (void)__showServiceForText:(NSString *)arg1 type:(int)arg2 fromRectValue:(NSValue *)arg3 replyHandler:(void (^)(id, NSError *))arg4;
- (void)__viewServiceDidUpdateTintColor:(UIColor *)arg1 duration:(double)arg2;
- (void)__setSupportedInterfaceOrientations:(NSArray *)arg1;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidPromoteFirstResponder;
@end
