//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIBezierPath, UIColor;

__attribute__((visibility("hidden")))
@interface TVPProgressBarShapeView : UIView
{
    _Bool _filled;
    _Bool _needsPathUpdate;
    _Bool _needsAdMarkerPathsUpdate;
    _Bool _needsClippingUpdate;
    double _borderWidth;
    UIColor *_fillColor;
    double _minPlayheadPercentage;
    double _maxPlayheadPercentage;
    NSArray *_adMarkerPositions;
    UIBezierPath *_rectangularPath;
    UIBezierPath *_roundedPath;
    NSArray *_adMarkerPaths;
    struct CGRect _leftClippingRect;
    struct CGRect _middleClippingRect;
    struct CGRect _rightClippingRect;
}

@property(nonatomic) _Bool needsClippingUpdate; // @synthesize needsClippingUpdate=_needsClippingUpdate;
@property(nonatomic) struct CGRect rightClippingRect; // @synthesize rightClippingRect=_rightClippingRect;
@property(nonatomic) struct CGRect middleClippingRect; // @synthesize middleClippingRect=_middleClippingRect;
@property(nonatomic) struct CGRect leftClippingRect; // @synthesize leftClippingRect=_leftClippingRect;
@property(nonatomic) _Bool needsAdMarkerPathsUpdate; // @synthesize needsAdMarkerPathsUpdate=_needsAdMarkerPathsUpdate;
@property(copy, nonatomic) NSArray *adMarkerPaths; // @synthesize adMarkerPaths=_adMarkerPaths;
@property(nonatomic) _Bool needsPathUpdate; // @synthesize needsPathUpdate=_needsPathUpdate;
@property(copy, nonatomic) UIBezierPath *roundedPath; // @synthesize roundedPath=_roundedPath;
@property(copy, nonatomic) UIBezierPath *rectangularPath; // @synthesize rectangularPath=_rectangularPath;
@property(copy, nonatomic) NSArray *adMarkerPositions; // @synthesize adMarkerPositions=_adMarkerPositions;
@property(nonatomic, getter=isFilled) _Bool filled; // @synthesize filled=_filled;
@property(nonatomic) double maxPlayheadPercentage; // @synthesize maxPlayheadPercentage=_maxPlayheadPercentage;
@property(nonatomic) double minPlayheadPercentage; // @synthesize minPlayheadPercentage=_minPlayheadPercentage;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setContentScaleFactor:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)_drawAdMarkersInRect:(struct CGRect)arg1;
- (void)_drawPath:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_setNeedsClippingUpdate;
- (void)_setNeedsAdMarkerPathsUpdate;
- (void)_setNeedsPathUpdate;
- (void)_updateClippingIfNeeded;
- (void)_updateAdMarkerPathsIfNeeded;
- (void)_updatePathIfNeeded;
- (void)_updatePathWithEndCapStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

