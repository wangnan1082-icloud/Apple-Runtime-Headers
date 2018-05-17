//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSEnterFullScreenTransitionController.h>

@class NSArray, NSWindow, _NSWindowFullScreenContentController;

__attribute__((visibility("hidden")))
@interface _NSWindowEnterFullScreenTransitionController : _NSEnterFullScreenTransitionController
{
    NSWindow *_window;
    _NSWindowFullScreenContentController *_contentController;
    NSArray *_customWindows;
}

- (void)start;
- (id)windowIDsForSnapshot;
- (struct CGSize)transitionedWindowShadowOffset;
- (BOOL)startCustomTransition;
- (void)failedToEnterFullScreen;
- (void)doAfterEnterFullScreen;
- (void)doBeforeEnterFullScreen;
- (struct CGRect)transitionedWindowAnimationTargetFrame;
- (struct CGRect)transitionedWindowFrame;
- (id)maybeFilterParticipatingWindowNumbers:(id)arg1 byScreen:(id)arg2;
- (id)gatherParticipatingWindowNumbers;
- (void)setupWindowForAfterFullScreenEnter;
- (void)orderTransitionedWindowFront;
- (id)_getPossibleCustomWindowsForEnteringIntoFullScreen;
- (id)fullScreenTitle;
- (id)contentController;
- (id)customWindowNumbers;
- (BOOL)shouldContentWindowBeVisible;
- (BOOL)usingAppKitTransition;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

@end
