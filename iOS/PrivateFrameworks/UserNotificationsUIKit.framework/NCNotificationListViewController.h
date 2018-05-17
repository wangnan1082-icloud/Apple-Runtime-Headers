//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "NCNotificationListCellDelegate.h"
#import "NCNotificationListCollectionViewDelegate.h"
#import "NCNotificationViewControllerDelegatePrivate.h"
#import "UIGestureRecognizerDelegate.h"

@class NCAnimationCoordinator, NCNotificationListCell, NCNotificationListTouchEater, NCNotificationViewController, NSHashTable, NSMutableDictionary, NSString;

@interface NCNotificationListViewController : UICollectionViewController <NCNotificationListCellDelegate, UIGestureRecognizerDelegate, NCNotificationViewControllerDelegatePrivate, NCNotificationListCollectionViewDelegate>
{
    _Bool _backgroundBlurred;
    _Bool _needsReloadData;
    _Bool _notificationRequestRemovedWhilePossiblyInLongLook;
    _Bool _notificationRequestRemovedWhileInLongLook;
    CDStruct_27a46a9e _userInteractionDelegateFlags;
    id <NCNotificationListViewControllerUserInteractionDelegate> _userInteractionDelegate;
    id <NCNotificationListViewControllerDestinationDelegate> _destinationDelegate;
    NCNotificationViewController *_notificationViewControllerForSizing;
    NCNotificationViewController *_viewControllerPresentingLongLook;
    NCNotificationViewController *_viewControllerPossiblyPresentingLongLook;
    NSMutableDictionary *_cellsSizesCaches;
    NSMutableDictionary *_cellsSizesCachesSuppressedContent;
    NSHashTable *_observers;
    NCNotificationListTouchEater *_touchEater;
    NCNotificationListCell *_cellWithRevealedActions;
    NCAnimationCoordinator *_childPreferredContentSizeChangeCoordinator;
    struct UIEdgeInsets _insetMargins;
}

@property(nonatomic) CDStruct_27a46a9e userInteractionDelegateFlags; // @synthesize userInteractionDelegateFlags=_userInteractionDelegateFlags;
@property(retain, nonatomic) NCAnimationCoordinator *childPreferredContentSizeChangeCoordinator; // @synthesize childPreferredContentSizeChangeCoordinator=_childPreferredContentSizeChangeCoordinator;
@property(nonatomic) _Bool notificationRequestRemovedWhileInLongLook; // @synthesize notificationRequestRemovedWhileInLongLook=_notificationRequestRemovedWhileInLongLook;
@property(nonatomic) _Bool notificationRequestRemovedWhilePossiblyInLongLook; // @synthesize notificationRequestRemovedWhilePossiblyInLongLook=_notificationRequestRemovedWhilePossiblyInLongLook;
@property(nonatomic) _Bool needsReloadData; // @synthesize needsReloadData=_needsReloadData;
@property(nonatomic) __weak NCNotificationListCell *cellWithRevealedActions; // @synthesize cellWithRevealedActions=_cellWithRevealedActions;
@property(retain, nonatomic) NCNotificationListTouchEater *touchEater; // @synthesize touchEater=_touchEater;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableDictionary *cellsSizesCachesSuppressedContent; // @synthesize cellsSizesCachesSuppressedContent=_cellsSizesCachesSuppressedContent;
@property(retain, nonatomic) NSMutableDictionary *cellsSizesCaches; // @synthesize cellsSizesCaches=_cellsSizesCaches;
@property(retain, nonatomic) NCNotificationViewController *viewControllerPossiblyPresentingLongLook; // @synthesize viewControllerPossiblyPresentingLongLook=_viewControllerPossiblyPresentingLongLook;
@property(retain, nonatomic) NCNotificationViewController *viewControllerPresentingLongLook; // @synthesize viewControllerPresentingLongLook=_viewControllerPresentingLongLook;
@property(readonly, nonatomic) struct UIEdgeInsets insetMargins; // @synthesize insetMargins=_insetMargins;
@property(retain, nonatomic) NCNotificationViewController *notificationViewControllerForSizing; // @synthesize notificationViewControllerForSizing=_notificationViewControllerForSizing;
@property(nonatomic, getter=isBackgroundBlurred) _Bool backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
@property(nonatomic) __weak id <NCNotificationListViewControllerDestinationDelegate> destinationDelegate; // @synthesize destinationDelegate=_destinationDelegate;
@property(nonatomic) __weak id <NCNotificationListViewControllerUserInteractionDelegate> userInteractionDelegate; // @synthesize userInteractionDelegate=_userInteractionDelegate;
- (void).cxx_destruct;
- (void)setCustomContentHomeAffordanceVisible:(_Bool)arg1 withGestureRecognizer:(id)arg2;
- (_Bool)_isContentSuppressedForNotificationRequest:(id)arg1;
- (void)_hintSideSwipeForDefaultActionForNotificationRequest:(id)arg1;
- (id)_notificationRequestForCell:(id)arg1;
- (id)_groupName;
- (void)_reloadRequestsAtIndices:(id)arg1;
- (void)_removeCachedSizesForNotificationRequest:(id)arg1;
- (void)_performCollectionViewOperationBlockIfNecessary:(CDUnknownBlockType)arg1;
- (void)_performCollectionViewOperationBlock:(CDUnknownBlockType)arg1;
- (_Bool)_forwardRequestToLongLookIfPresented:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)_isPointInWindowSpace:(struct CGPoint)arg1 insideCell:(id)arg2;
- (void)_handleEatenTouch:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_installTouchEater;
- (void)notificationListCollectionView:(id)arg1 willSetFrame:(struct CGRect)arg2;
- (_Bool)notificationListCell:(id)arg1 shouldPanHorizontallyWithTouch:(id)arg2;
- (void)notificationListCellDidHideCellActions:(id)arg1 resetCellScrollPosition:(_Bool)arg2 animated:(_Bool)arg3;
- (void)notificationListCellDidRevealCellActions:(id)arg1;
- (void)notificationListCellDidSignificantUserInteraction:(id)arg1;
- (void)notificationListCellRequestsDismissAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notificationListCellRequestsPresentingLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notificationListCellRequestsDefaultAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willTearDownNotificationListCell:(id)arg1;
- (void)longLookDidDismissForNotificationViewController:(id)arg1;
- (void)longLookWillDismissForNotificationViewController:(id)arg1;
- (void)longLookDidPresentForNotificationViewController:(id)arg1;
- (void)longLookWillPresentForNotificationViewController:(id)arg1;
- (void)notificationViewControllerDidEndUserInteraction:(id)arg1;
- (void)notificationViewControllerWillBeginUserInteraction:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (_Bool)showAdditionalMessageLinesForNotificationViewController:(id)arg1;
- (_Bool)notificationViewControllerShouldAllowInteractionGesture:(id)arg1;
- (id)notificationViewController:(id)arg1 staticContentProviderForNotificationRequest:(id)arg2;
- (_Bool)notificationViewControllerShouldBlurShortLook:(id)arg1;
- (void)notificationViewController:(id)arg1 shouldFinishLongLookTransitionWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)notificationUsageTrackingStateForNotificationViewController:(id)arg1;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)collectionView:(id)arg1 performUpdatesAlongsideLayout:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)setTouchEaterEnabled:(_Bool)arg1;
- (void)handleEatenTouchEndStateForGestureRecognizer:(id)arg1;
- (void)handleEatenTouchBeginStateForGestureRecognizer:(id)arg1;
- (_Bool)shouldReceiveTouch:(id)arg1 forGestureRecognizer:(id)arg2;
- (_Bool)isNotificationListCellVisibleForNotificationRequest:(id)arg1;
- (void)listViewControllerPresentedByUserAction;
@property(readonly, nonatomic) NSString *backgroundGroupName;
@property(readonly, nonatomic) double itemSpacing;
- (id)notificationRequestsPassingTest:(CDUnknownBlockType)arg1;
- (void)_forceTouchAvailabilityDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)notifyContentObservers;
- (void)removeContentObserver:(id)arg1;
- (void)addContentObserver:(id)arg1;
- (void)_reloadCollectionViewDataIfNecessary;
- (_Bool)dismissModalFullScreenAnimated:(_Bool)arg1;
- (id)notificationRequestPossiblyInLongLook;
- (id)notificationRequestInLongLook;
@property(readonly, nonatomic, getter=isPresentingNotificationInLongLook) _Bool presentingNotificationInLongLook;
- (_Bool)isContentExtensionVisible:(id)arg1;
- (_Bool)hasVisibleContent;
- (_Bool)hasContent;
- (void)showRequestsForNotificationSectionSettings:(id)arg1;
- (void)hideRequestsForNotificationSectionSettings:(id)arg1;
- (void)showRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)hideRequestsForNotificationSectionIdentifier:(id)arg1 subSectionIdentifier:(id)arg2;
- (void)reloadNotificationRequests:(id)arg1 clearCachedSizes:(_Bool)arg2;
- (void)reloadNotificationRequest:(id)arg1;
- (void)reloadRequestsWithSuppressedContent;
- (void)clearAllNonPersistent;
- (void)clearAll;
- (id)indexPathForNotificationRequest:(id)arg1;
- (id)notificationRequestAtIndexPath:(id)arg1;
- (void)removeNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (_Bool)insertNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (id)captureOnlyMaterialViewForCurrentState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
