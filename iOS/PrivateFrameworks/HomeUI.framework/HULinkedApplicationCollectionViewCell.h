//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "HUCellProtocol.h"
#import "HUCollectionViewCellSeparatorsProtocol.h"

@class HFItem, HULinkedApplicationView, NSString, UIView;

@interface HULinkedApplicationCollectionViewCell : UICollectionViewCell <HUCellProtocol, HUCollectionViewCellSeparatorsProtocol>
{
    HULinkedApplicationView *_linkedApplicationView;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
}

@property(readonly, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(readonly, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(readonly, nonatomic) HULinkedApplicationView *linkedApplicationView; // @synthesize linkedApplicationView=_linkedApplicationView;
- (void).cxx_destruct;
@property(nonatomic) _Bool bottomSeparatorVisible;
@property(nonatomic) _Bool topSeparatorVisible;
- (void)updateUIWithAnimation:(_Bool)arg1;
@property(retain, nonatomic) HFItem *item;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
