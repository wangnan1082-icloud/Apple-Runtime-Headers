//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSLayoutConstraint, NSString;

@interface AVInfoPanelNavigationCollectionViewController : UICollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    _Bool _isAtLeastOneImageLoaded;
    _Bool _navigationEnabled;
    id <AVInfoPanelNavigationDelegate> _delegate;
    long long _selectedNavigationMarkerIndex;
    struct CGSize _aspectRatio;
}

@property(nonatomic, getter=isNavigationEnabled) _Bool navigationEnabled; // @synthesize navigationEnabled=_navigationEnabled;
@property(nonatomic) long long selectedNavigationMarkerIndex; // @synthesize selectedNavigationMarkerIndex=_selectedNavigationMarkerIndex;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) __weak id <AVInfoPanelNavigationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_selectNavigationMarkerAtIndex:(long long)arg1 shouldScrollToCenter:(_Bool)arg2;
- (void)_createOrUpdateHeightConstraint;
- (void)_createOrUpdateWidthConstraint;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) _Bool hasContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
