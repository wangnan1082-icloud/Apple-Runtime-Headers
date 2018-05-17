//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CKBadgeView, CKBrowserSelectionLabelAccessoryView, UILabel, UIView;

@interface CKBrowserCell : UICollectionViewCell
{
    _Bool _jitter;
    _Bool _shouldShowLabel;
    id <CKBrowserCellDelegate> _delegate;
    CKBadgeView *_badgeView;
    unsigned long long _shinyStatus;
    CKBrowserSelectionLabelAccessoryView *_shinyStatusView;
    UILabel *_browserLabel;
}

+ (Class)classForItemType:(long long)arg1;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *browserLabel; // @synthesize browserLabel=_browserLabel;
@property(retain, nonatomic) CKBrowserSelectionLabelAccessoryView *shinyStatusView; // @synthesize shinyStatusView=_shinyStatusView;
@property(nonatomic) unsigned long long shinyStatus; // @synthesize shinyStatus=_shinyStatus;
@property(nonatomic) _Bool shouldShowLabel; // @synthesize shouldShowLabel=_shouldShowLabel;
@property(nonatomic) _Bool jitter; // @synthesize jitter=_jitter;
@property(retain, nonatomic) CKBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(nonatomic) __weak id <CKBrowserCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly) UIView *iconView;

@end
