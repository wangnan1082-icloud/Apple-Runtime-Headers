//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegatePrivate.h"

@class NSMutableArray, NSString, UILongPressGestureRecognizer, UIView, UIViewController;

@interface UIAccessibilityHUDGestureManager : NSObject <UIGestureRecognizerDelegatePrivate>
{
    UIView *_view;
    id <UIAccessibilityHUDGestureDelegate> _delegate;
    UIViewController *_viewControllerDisplayingHUD;
    UILongPressGestureRecognizer *_recognizer;
    NSMutableArray *_subscribedConcurrentGestureRecognizers;
    _Bool _delegateDirectlyShowsHUD;
}

@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)_gestureRecognizerChanged:(id)arg1;
- (id)_bestViewControllerForView;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_dismissAccessibilityHUD;
- (void)_showAccessibilityHUDItem:(id)arg1;
- (void)_concurrentGestureRecognizerFired:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_clearButtonItemGestureSubscriptions;
- (id)_subscribedConcurrentGestureRecognizers;
- (void)dealloc;
- (id)initWithView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
