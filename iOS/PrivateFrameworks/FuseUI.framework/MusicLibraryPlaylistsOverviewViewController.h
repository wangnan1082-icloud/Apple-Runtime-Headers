//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MusicActionableHeaderViewDelegate.h"
#import "MusicClientContextConsuming.h"
#import "MusicLibraryBrowseCollectionViewControllerDelegate.h"
#import "MusicNoContentViewDelegate.h"
#import "MusicSwitcherButtonContainerViewDelegate.h"
#import "SKUIProxyScrollViewDelegate.h"
#import "SKUITabBarItemRootViewController.h"
#import "UIViewControllerRestoration.h"

@class MusicActionableHeaderView, MusicClientContext, MusicHairlineView, MusicLibraryBrowseCollectionViewController, MusicLibraryTopBarController, MusicPlaylistsWithNewActionViewConfiguration, MusicSwitcherButtonContainerView, MusicVerticalScrollingContainerViewController, NSDictionary, NSString, SKUIClientContext, SKUIProxyScrollView, UIAlertController, UISwitch;

@interface MusicLibraryPlaylistsOverviewViewController : UIViewController <MusicActionableHeaderViewDelegate, MusicLibraryBrowseCollectionViewControllerDelegate, MusicNoContentViewDelegate, MusicSwitcherButtonContainerViewDelegate, UIViewControllerRestoration, SKUIProxyScrollViewDelegate, SKUITabBarItemRootViewController, MusicClientContextConsuming>
{
    UISwitch *_alertShowOfflineSwitch;
    NSDictionary *_curatorsByID;
    UIAlertController *_filterAlertController;
    MusicHairlineView *_hairlineView;
    _Bool _hasSubscribedPlaylistsCapability;
    MusicSwitcherButtonContainerView *_librarySwitcherButtonContainerView;
    UIViewController *_noContentViewController;
    unsigned long long _playlistsConfigurationOptions;
    MusicPlaylistsWithNewActionViewConfiguration *_playlistsViewConfiguration;
    MusicActionableHeaderView *_playlistsHeaderView;
    UIViewController *_playlistsViewController;
    SKUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets _proxyScrollViewContentInsetAdditions;
    MusicActionableHeaderView *_recentlyAddedPlaylistsHeaderView;
    MusicLibraryBrowseCollectionViewController *_recentlyAddedPlaylistsViewController;
    NSString *_selectedFilter;
    _Bool _selectedFilterIsCuratorID;
    MusicPlaylistsWithNewActionViewConfiguration *_selectedPlaylistsViewConfiguration;
    _Bool _shouldShowNoContentView;
    MusicLibraryTopBarController *_topBarController;
    MusicVerticalScrollingContainerViewController *_verticalScrollingContainerViewController;
    MusicClientContext *_clientContext;
}

+ (id)_recentlyAddedViewControllerWithClientContext:(id)arg1;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;
@property(retain, nonatomic) SKUIClientContext *clientContext;
- (void).cxx_destruct;
- (id)_validFilterForFilter:(id)arg1;
- (void)_updateRecentlyAddedViewMoreButton;
- (void)_updateSizeOfRecentlyAddedPlaylistsView;
- (void)_updateSizeOfRecentlyAddedPlaylistsHeaderView;
- (void)_updateSizeOfPlaylistsHeaderView;
- (void)_updateSizeOfLibrarySwitcherButtonContainerView;
- (void)_updateRecentlyAddedPlaylistsHeaderMetricsAllowingInvalidationOfVerticalScrollingContainerLayout:(_Bool)arg1;
- (void)_updatePlaylistsHeaderMetricsAllowingInvalidationOfVerticalScrollingContainerLayout:(_Bool)arg1;
- (void)_updatePlaylistNoContentViewVisibilityForceReload:(_Bool)arg1;
- (void)_updateLibrarySwitcherButtonWithVerticalContainerItemsReload:(_Bool)arg1;
- (void)_updateCuratorsMapping;
- (void)_updateChildViewController;
- (id)_titleForPlaylistsOverviewFilter:(id)arg1;
- (id)_sortedBasicPlaylistsOverviewFilters;
- (id)_sortedSubscriberPlaylistsOverviewFilters;
- (void)_setSelectedFilter:(id)arg1;
- (void)_presentCreatePlaylistViewController;
- (id)_noContentViewController;
- (id)_newLibraryPlaylistsViewConfiguration;
- (void)_musicLibraryPlaylistsOverviewViewControllerCommonInitialization;
- (void)_loadRecentlyAddedPlaylistsViewController;
- (void)_loadRecentlyAddedPlaylistsHeaderView;
- (void)_handlePlaylistsOverviewFilterAlertControllerDismissal;
- (id)_getCurrentSortedPlaylistsOverviewFilters;
- (void)_dismissEditSheet;
- (void)_delayedDismissFilterAlertController;
- (void)_configureNoContentView:(id)arg1;
- (void)_configureForSelectedFilter;
- (_Bool)_calculateHasSubscribedPlaylistsCapability;
- (double)_calculateHairlineViewHeight;
- (void)_subscriptionStatusDidChangeNotification:(id)arg1;
- (void)_recentlyAddedEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_playlistsEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_didUpdateDefaultLibrary:(id)arg1;
- (void)_cloudUpdateInProgressDidChangeNotification:(id)arg1;
- (void)_alertShowOfflineSwitchValueChangedAction:(id)arg1;
- (void)music_handleCreatePlaylistAction;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)switcherButtonWasSelectedInContainerView:(id)arg1;
- (void)noContentViewDidTapButton:(id)arg1;
- (void)collectionViewFlowLayoutLayoutMetricsWereUpdatedForLibraryBrowseCollectionViewController:(id)arg1;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (_Bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTabBarItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
