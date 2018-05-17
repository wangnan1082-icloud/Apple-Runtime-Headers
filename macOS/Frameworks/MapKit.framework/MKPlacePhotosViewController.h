//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/_MKUIViewController.h>

#import "MKModuleViewControllerProtocol.h"
#import "MKPlaceAttributionCellDelegate.h"
#import "_MKInfoCardChildViewControllerAnalyticsDelegate.h"

@class MKMapItem, MKPhotoSmallAttributionView, MKPlaceAttributionCell, NSArray, NSLayoutConstraint, NSScrollView, NSString, NSView, _MKPlaceViewController;

@interface MKPlacePhotosViewController : _MKUIViewController <MKPlaceAttributionCellDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol>
{
    NSArray *_photoViews;
    NSScrollView *_photosContainerScrollView;
    NSView *_photosContainer;
    MKPhotoSmallAttributionView *_photosSmallAttributionsView;
    double _lastPhotoScrollOffset;
    BOOL _photoScrollViewScrollingLeft;
    BOOL _photoScrollViewScrollingRight;
    BOOL _canUseFullscreenViewer;
    BOOL _canUseGallery;
    BOOL _photoLoaded;
    BOOL _loadAppImageCanceledOrFailed;
    BOOL _isRTL;
    unsigned long long _photosCount;
    MKMapItem *_mapItem;
    NSLayoutConstraint *_heightConstraint;
    NSArray *_photos;
    unsigned long long _mode;
    unsigned long long _originalMode;
    MKPlaceAttributionCell *_attributionCell;
    NSScrollView *_parentScrollView;
    _MKPlaceViewController *_owner;
    id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> _photosControllerDelegate;
}

@property(nonatomic) __weak id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> photosControllerDelegate; // @synthesize photosControllerDelegate=_photosControllerDelegate;
@property(nonatomic) __weak _MKPlaceViewController *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)viewDidLayout;
- (id)infoCardChildPossibleActions;
- (void)_callPhotoDelegateForPhotoAt:(unsigned long long)arg1;
- (void)_photoTappedAtIndex:(unsigned long long)arg1;
- (void)_photoSelected:(id)arg1;
- (void)_loadPhotos;
- (void)_cancelLoadPhotos;
- (void)_updatePhotoBackgroundColor:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (void)updateAttributionPositionWithOffset:(double)arg1;
- (void)scrollDidEndScrolling:(id)arg1;
- (void)scrollBoundsDidChange:(id)arg1;
- (struct CGSize)sizeForIndex:(unsigned long long)arg1;
- (void)layoutImages;
- (void)_createImageViews;
- (void)openURL;
- (id)attributionString;
- (void)addAttributionCell;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
