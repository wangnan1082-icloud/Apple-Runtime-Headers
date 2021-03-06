//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <MapKit/MKLocationManagerObserver-Protocol.h>

@class CLLocation, MKImageView, MKLocationManager, MKMapItem, NSArray, NSColor, NSMutableArray, NSString, NSTimer, _MKUILabel;
@protocol _MKResultViewDelegate;

@interface _MKResultView : NSView <MKLocationManagerObserver>
{
    NSArray *_mapItems;
    CLLocation *_referenceLocation;
    BOOL _alwaysUsesBusinessLayout;
    int _layoutType;
    id <_MKResultViewDelegate> delegate;
    BOOL _selected;
    BOOL _showsDistance;
    NSMutableArray *_resultConstraints;
    MKLocationManager *_locManager;
    NSString *_primaryLabelText;
    NSString *_secondaryLabelText;
    NSTimer *_refLocationTimer;
    BOOL _isResizableImage;
    _MKUILabel *_nameLabel;
    _MKUILabel *_secondaryLabel;
    _MKUILabel *_tertiaryLabel;
    id <_MKResultViewDelegate> _delegate;
    double _fallbackDistance;
    NSColor *_primaryTextColor;
    NSColor *_secondaryTextColor;
    MKImageView *_imageView;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) MKImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) NSColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(nonatomic) double fallbackDistance; // @synthesize fallbackDistance=_fallbackDistance;
@property(nonatomic) __weak id <_MKResultViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL alwaysUsesBusinessLayout; // @synthesize alwaysUsesBusinessLayout=_alwaysUsesBusinessLayout;
@property(retain, nonatomic) _MKUILabel *tertiaryLabel; // @synthesize tertiaryLabel=_tertiaryLabel;
@property(retain, nonatomic) _MKUILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(retain, nonatomic) _MKUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)_locationApprovalDidChange;
- (void)mouseUp:(id)arg1;
@property(retain, nonatomic) CLLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
- (void)_cancelReferenceLocationTimer;
- (void)_fireReferenceLocationTimer;
@property(retain, nonatomic) NSString *secondaryLabelText;
@property(retain, nonatomic) NSString *primaryLabelText;
@property(retain, nonatomic) NSArray *mapItems;
@property(retain, nonatomic) MKMapItem *mapItem;
- (void)updateLayout;
- (void)updateSubviews;
- (double)_expectedHeightForLabels;
- (id)_defaultSecondaryCategoryLabel;
- (unsigned long long)_maxNameLengthForEndingString:(id)arg1;
- (unsigned long long)_maxSecondaryStringLengthForEndingString:(id)arg1;
- (id)_defaultPrimaryLabel;
- (void)_updateLayoutForAddress;
- (void)_updateLayoutForBusinessOrCategory;
- (void)addLabelIfNecessary:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) double preferredHeight;
- (struct CGSize)_imageSize;
- (void)updateConstraints;
- (void)setNeedsUpdateConstraints;
- (void)updateImageView;
- (void)dealloc;
- (void)_updateSecondaryColors;
- (void)_updatePrimaryColors;
- (void)_updateColors;
@property(nonatomic) BOOL showsDistance;
@property(nonatomic) BOOL selected;
- (id)_labelWithFontSize:(double)arg1;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1 highlightsOnTouch:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithMapItems:(id)arg1 primaryLabelText:(id)arg2;
- (id)initWithMapItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

