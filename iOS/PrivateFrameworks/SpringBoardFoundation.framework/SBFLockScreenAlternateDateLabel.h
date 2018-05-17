//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBUILegibility.h"

@class NSDate, NSString, SBUILegibilityLabel, UIFont, _UILegibilitySettings;

@interface SBFLockScreenAlternateDateLabel : UIView <SBUILegibility>
{
    UIFont *_font;
    _UILegibilitySettings *_legibilitySettings;
    double _strength;
    NSDate *_date;
    SBUILegibilityLabel *_label;
}

+ (id)_lunarCalendarIdentifier;
+ (_Bool)showAlternateDate;
@property(retain, nonatomic) SBUILegibilityLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings;
- (void).cxx_destruct;
- (id)_alternateDateString;
@property(readonly, nonatomic) struct UIEdgeInsets characterOverflowInsets;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 font:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
