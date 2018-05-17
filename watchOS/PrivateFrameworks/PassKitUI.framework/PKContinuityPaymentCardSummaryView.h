//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImageView, UILabel;

@interface PKContinuityPaymentCardSummaryView : UIView
{
    UIImageView *_alertView;
    NSLayoutConstraint *_textToTrailingConstraint;
    NSLayoutConstraint *_textToAlertConstraint;
    _Bool _showsAlert;
    UILabel *_valueView;
    UIImageView *_thumbnailView;
}

@property(nonatomic) _Bool showsAlert; // @synthesize showsAlert=_showsAlert;
@property(readonly, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(readonly, nonatomic) UILabel *valueView; // @synthesize valueView=_valueView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_prepareImageAndValueConstraints;
- (void)_createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
