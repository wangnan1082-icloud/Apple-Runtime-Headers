//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIClassicStatusBarView, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIStatusBarViewController : UIViewController
{
    _Bool _iPhoneWS;
    UIWindow *_window;
    UIView *_statusBar;
    UIClassicStatusBarView *_statusBarBackgroundView;
    _Bool _keyboardVisible;
}

+ (double)statusBarOrientationAnimationDurationFrom:(int)arg1 to:(int)arg2;
- (id)_window;
- (void).cxx_destruct;
- (void)_statusBarViewControllerKeyboardDidHide:(id)arg1;
- (void)_statusBarViewControllerKeyboardWillShow:(id)arg1;
- (void)_changeStatusBarOrientationFinished:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)_finishStatusBarOrientationChange;
- (void)_changeStatusBarOrientationFrom:(int)arg1 toOrientation:(int)arg2;
- (void)_statusBarHideAnimationFinished:(id)arg1 finished:(_Bool)arg2 hidden:(id)arg3;
- (struct CGSize)_statusBarSizeForOrientation:(int)arg1;
- (void)_updateStatusBarForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 style:(int)arg3 hidden:(_Bool)arg4 slideUp:(_Bool)arg5;
- (void)_updateStatusBarGeometryForRotationFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 hidden:(_Bool)arg3 slideUp:(_Bool)arg4;
- (void)_zoom:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_prepareForZoom:(_Bool)arg1;
- (void)setStatusBarOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 animationParameters:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)isClassicControlWindow:(id)arg1;
- (void)dealloc;
- (id)init;

@end
