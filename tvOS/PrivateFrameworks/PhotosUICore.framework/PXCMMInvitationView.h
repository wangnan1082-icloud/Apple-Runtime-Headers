//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSAttributedString, PXCMMPosterHeaderView, PXRoundedCornerOverlayView, UIColor, UIFont, UILabel;

@interface PXCMMInvitationView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitle1Label;
    UILabel *_subtitle2Label;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    NSAttributedString *_attributedTitle;
    UIFont *_titleFont;
    long long _titleTextStyle;
    NSAttributedString *_attributedSubtitle1;
    UIFont *_subtitle1Font;
    long long _subtitle1TextStyle;
    NSAttributedString *_attributedSubtitle2;
    UIFont *_subtitle2Font;
    long long _subtitle2TextStyle;
    PXCMMPosterHeaderView *_headerView;
    UIColor *_opaqueAncestorBackgroundColor;
}

@property(copy, nonatomic) UIColor *opaqueAncestorBackgroundColor; // @synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor;
@property(readonly, nonatomic) PXCMMPosterHeaderView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)setAttributedSubtitle2:(id)arg1 withFont:(id)arg2 textStyle:(long long)arg3;
- (void)setAttributedSubtitle1:(id)arg1 withFont:(id)arg2 textStyle:(long long)arg3;
- (void)setAttributedTitle:(id)arg1 withFont:(id)arg2 textStyle:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
