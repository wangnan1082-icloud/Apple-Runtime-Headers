//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKStackingViewController, _MKUIViewController;

@protocol MKStackingViewControllerDelegate <NSObject>

@optional
- (void)stackingViewControllerDidLayoutViewControllers:(MKStackingViewController *)arg1;
- (void)stackingViewController:(MKStackingViewController *)arg1 verticalScrollerInsetDidChangeDuringLayoutPhase:(long long)arg2;
- (void)stackingViewControllerDidEndScroll:(MKStackingViewController *)arg1;
- (void)stackingViewControllerWillBeginScroll:(MKStackingViewController *)arg1;
- (void)stackingViewController:(MKStackingViewController *)arg1 didShowMinimumVisibleSurfacePercentForAnalyticsSelection:(_MKUIViewController *)arg2;
- (double)stackingViewController:(MKStackingViewController *)arg1 minimumVisibleSurfacePercentForAnalyticsSelection:(_MKUIViewController *)arg2;
- (double)stackingViewController:(MKStackingViewController *)arg1 heightForSeparatorBetweenUpperViewController:(_MKUIViewController *)arg2 andLowerViewController:(_MKUIViewController *)arg3;
- (double)stackingViewControllerHeightForTitleView:(MKStackingViewController *)arg1;
@end
