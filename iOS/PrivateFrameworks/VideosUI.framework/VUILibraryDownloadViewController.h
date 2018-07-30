//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideosUI/VUILibraryStackViewController.h>

#import "UICollectionViewDataSource.h"
#import "VUILibraryShelfCollectionViewControllerDelegate.h"
#import "VUIMediaEntitiesFetchControllerDelegate.h"

@class NSString, UIBarButtonItem, VUILibraryBannerCollectionViewCell, VUILibraryMediaEntityShelvesViewModel, _VUIDownloadSeeAllController;

__attribute__((visibility("hidden")))
@interface VUILibraryDownloadViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUIMediaEntitiesFetchControllerDelegate, VUILibraryShelfCollectionViewControllerDelegate>
{
    VUILibraryBannerCollectionViewCell *_bannerViewSizingCell;
    _Bool _isPhone;
    UIBarButtonItem *_libraryBarButton;
    VUILibraryMediaEntityShelvesViewModel *_viewModel;
    UIBarButtonItem *_currentNavBarButtonItem;
    _VUIDownloadSeeAllController *_currentSeeAllController;
}

+ (id)_localizedTitleForMediaEntityType:(id)arg1;
@property(retain, nonatomic) _VUIDownloadSeeAllController *currentSeeAllController; // @synthesize currentSeeAllController=_currentSeeAllController;
@property(retain, nonatomic) UIBarButtonItem *currentNavBarButtonItem; // @synthesize currentNavBarButtonItem=_currentNavBarButtonItem;
@property(retain, nonatomic) VUILibraryMediaEntityShelvesViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIBarButtonItem *libraryBarButton; // @synthesize libraryBarButton=_libraryBarButton;
- (void).cxx_destruct;
- (id)_localizedBannerString;
- (void)seeAllButtonPressed:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)shelfCollectionViewController:(id)arg1 collectionView:(id)arg2 didSelectMediaEntity:(id)arg3 atIndexPath:(id)arg4;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)start;
- (void)configureWithCollectionView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMediaLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
