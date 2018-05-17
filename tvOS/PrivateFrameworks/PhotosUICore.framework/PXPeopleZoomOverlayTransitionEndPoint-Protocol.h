//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PXPeopleZoomOverlayTransitionAnimator;

@protocol PXPeopleZoomOverlayTransitionEndPoint <NSObject>
- (_Bool)shouldPerformZoomingTransitionWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (NSArray *)snapshotRectsInScreenCoordinatesWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (NSArray *)snapshotViewsForZoomingTransitionWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;

@optional
- (void)zoomOverlayTransitionDidEndAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (void)zoomOverlayTransitionWillEndAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (void)zoomOverlayTransitionDidBeginAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
- (void)zoomOverlayTransitionWillBeginAnimationWithAnimator:(PXPeopleZoomOverlayTransitionAnimator *)arg1;
@end
