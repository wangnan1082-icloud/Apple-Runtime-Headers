//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DigitalTouchShared/DTSColorPicker.h>

#import <DigitalTouchShared/DTSColorWheelDelegate-Protocol.h>

@class ETColorWheelView, ETPaletteCircleView, NSString, UITapGestureRecognizer, UIView;
@protocol ETColorPickerViewDelegate;

@interface ETColorPickerView : DTSColorPicker <DTSColorWheelDelegate>
{
    UIView *_contentView;
    ETPaletteCircleView *_collapsedSelectedCircle;
    UITapGestureRecognizer *_presentTapGestureRecognizer;
    struct CGRect _expandedFrame;
    struct CGRect _collapsedFrame;
    ETColorWheelView *_colorWheelView;
    _Bool _dismissingColorPicker;
    float _selectedCircleRotationAngle;
    _Bool _isExpanded;
    id <ETColorPickerViewDelegate> _presentationDelegate;
}

@property(nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;
@property(nonatomic) __weak id <ETColorPickerViewDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
- (void).cxx_destruct;
- (void)colorWheel:(id)arg1 didPickColor:(id)arg2;
- (void)colorWheel:(id)arg1 willPickColor:(id)arg2;
- (id)paletteCircleAnimationPairs;
- (void)movePalettCircleToOriginalLayoutPosition:(id)arg1;
- (void)movePaletteCircleTowardsViewCenter:(id)arg1 distance:(float)arg2;
- (void)fadeinPaletteCircle:(id)arg1 delay:(double)arg2;
- (void)fadeoutPaletteCircle:(id)arg1 delay:(double)arg2;
- (void)fadeinPaletterCirclesInPairs;
- (void)fadeoutPaletterCirclesInPairs;
- (void)transformPickerCircleToSelectionMarkerWithCompletion:(CDUnknownBlockType)arg1;
- (void)transformSelectionMarkerToPickerCircleWithCompletion:(CDUnknownBlockType)arg1;
- (void)showColorWheel;
- (void)paletteCircleTapped:(id)arg1;
- (void)animateOnscreen;
- (void)animateOffscreen;
- (void)animateToSelectedColor;
- (void)animateToGray;
- (void)setDimmed:(_Bool)arg1;
- (_Bool)_isCenterCircle:(unsigned int)arg1;
- (void)_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_addRotationAnimationFromAngle:(float)arg1 toAngle:(float)arg2;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentTapReceived:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutPaletteCircles;
- (id)initWithFrame:(struct CGRect)arg1 collapsedFrame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

