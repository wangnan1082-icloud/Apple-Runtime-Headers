//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUArtworkView, MPUContentSizeLayoutConstraint, NSArray, NSLayoutConstraint, UILabel;

@interface _VideosExtrasGridHeaderView : UIView
{
    NSArray *_artworkSizeConstraints;
    NSArray *_textLeadingConstraints;
    MPUContentSizeLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleBaselineConstraint;
    NSLayoutConstraint *_bottomLabelConstraint;
    MPUContentSizeLayoutConstraint *_bottomLabelSpacerHeight;
    MPUArtworkView *_artworkView;
    UILabel *_subtitleLabel;
    UIView *_bottomLabelSpacer;
    UILabel *_titleLabel;
}

@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)configureForImage:(id)arg1 title:(id)arg2 subtitle:(id)arg3 style:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

