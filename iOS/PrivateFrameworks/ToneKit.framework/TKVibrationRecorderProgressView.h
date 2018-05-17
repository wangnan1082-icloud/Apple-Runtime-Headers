//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, NSMutableArray, TKVibrationRecorderProgressDotImageView;

@interface TKVibrationRecorderProgressView : UIView
{
    double _maximumTimeInterval;
    double _currentVibrationComponentDidBeginTimeInterval;
    double _previousPauseDidBeginTimeInterval;
    id <TKVibrationRecorderStyleProvider> _styleProvider;
    UIView *_progressView;
    NSLayoutConstraint *_progressViewWidthConstraint;
    TKVibrationRecorderProgressDotImageView *_dotForCurrentVibrationComponent;
    NSLayoutConstraint *_dotForCurrentVibrationComponentLeftConstraint;
    NSLayoutConstraint *_dotForCurrentVibrationComponentRightConstraint;
    NSMutableArray *_dots;
    int _roundedCornersCompensationDelayMode;
    double _currentTimeInterval;
}

@property(nonatomic) int roundedCornersCompensationDelayMode; // @synthesize roundedCornersCompensationDelayMode=_roundedCornersCompensationDelayMode;
@property(nonatomic) double currentTimeInterval; // @synthesize currentTimeInterval=_currentTimeInterval;
- (void).cxx_destruct;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (double)_cappedValueForTimeInterval:(double)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (struct CGRect)_frameForDotAtTimeInterval:(double)arg1 duration:(double)arg2;
- (void)_updateHorizontalConstraintsOfDotForCurrentVibrationComponent:(id)arg1 withFrame:(struct CGRect)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)clearAllVibrationComponents;
- (void)vibrationComponentDidEnd;
- (void)vibrationComponentDidStart;
- (struct UIOffset)_dotInsets;
- (struct CGSize)_dotSize;
- (id)_resizableDotImage;
- (void)_updateProgressViewBackgroundColor;
- (id)initWithMaximumTimeInterval:(double)arg1 styleProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
