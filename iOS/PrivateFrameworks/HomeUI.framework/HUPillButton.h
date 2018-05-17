//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NAUILayoutConstraintSet, NSString, UIFont, UILabel, UIView;

@interface HUPillButton : UIButton
{
    unsigned long long _style;
    NAUILayoutConstraintSet *_constraintSet;
    UIView *_backgroundView;
    UILabel *_buttonLabel;
    struct {
        double topToLabelBaselineDistance;
        double labelBaselineToBottomDistance;
        double minHorizontalPadding;
        double minWidth;
    } _metrics;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (CDStruct_d2b197d1)defaultMetrics;
@property(readonly, nonatomic) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) NAUILayoutConstraintSet *constraintSet; // @synthesize constraintSet=_constraintSet;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) CDStruct_d2b197d1 metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)_setupConstraintSet;
@property(nonatomic) _Bool adjustsFontSizeToFitWidth; // @dynamic adjustsFontSizeToFitWidth;
@property(copy, nonatomic) NSString *buttonText; // @dynamic buttonText;
@property(retain, nonatomic) UIFont *buttonFont;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithBackgroundStyle:(unsigned long long)arg1;

@end
