//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView;

@interface CMKPanoramaArrowView : UIView
{
    UIImageView *_arrowHead;
    UIView *_arrowTail;
    CAShapeLayer *_arrowTailPiecesLayer;
    struct CGPath *_currentTailPiecesPath;
    struct CGRect _arrowTailRect;
    float _currentNormalizedSpeed;
    float _tailBiggestDelta;
    float _tailBigDelta;
    float _tailMediumDelta;
    float _tailSmallDelta;
}

- (void).cxx_destruct;
- (void)animateArrowSpeedWithNormalizedSpeed:(float)arg1 duration:(double)arg2;
- (void)resetArrow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_updateTailWithAnimationDuration:(double)arg1;
- (struct CGPath *)_newTailPiecesPathOfWidth:(float *)arg1;

@end

