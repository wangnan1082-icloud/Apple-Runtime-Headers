//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIMorphingLabel, _UILegibilitySettings;

@interface SBUIFaceIDCoachingView : UIView
{
    unsigned long long _coachingCondition;
    NSString *_currentSizeCategory;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_labelText;
    UIMorphingLabel *_label;
}

@property(retain, nonatomic, getter=_label) UIMorphingLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *labelText; // @synthesize labelText=_labelText;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) NSString *currentSizeCategory; // @synthesize currentSizeCategory=_currentSizeCategory;
@property(nonatomic) unsigned long long coachingCondition; // @synthesize coachingCondition=_coachingCondition;
- (void).cxx_destruct;
- (void)_resizeLabelToFirstSizeCategoryThatFits;
- (void)_contentSizeCategoryChanged;
- (void)_updateLabelTextForCurrentCoachingConditionAnimated:(_Bool)arg1;
- (void)setCoachingCondition:(unsigned long long)arg1 animated:(_Bool)arg2 delay:(double)arg3;
@property(readonly, nonatomic) double stringWidth;
- (void)layoutSubviews;
- (id)init;

@end

