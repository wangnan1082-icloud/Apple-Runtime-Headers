//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class CADisplayLink, NSMutableSet, _UIVelocityIntegrator;

@interface UITouchForceGestureRecognizer : UIGestureRecognizer
{
    CADisplayLink *_continuousEvaluationDisplayLink;
    NSMutableSet *_currentTouches;
    unsigned int _eventTouchCount;
    float _currentTouchForce;
    struct CGPoint _initialCentroidOfTouches;
    struct CGPoint _currentCentroidOfTouches;
    _UIVelocityIntegrator *_velocityIntegrator;
    _Bool _automaticallyIncreaseTouchForce;
    double _touchesBeganTimestamp;
    _Bool _steady;
    float _touchForce;
    float _minimumRequiredTouchForce;
    float _velocity;
    float _allowableMovement;
    unsigned int _maximumNumberOfTouches;
    float _automaticTouchForce;
    CDUnknownBlockType _configurationBlock;
    double _automaticTouchForceDuration;
}

+ (_Bool)_supportsTouchContinuation;
@property(copy, nonatomic) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(nonatomic) double automaticTouchForceDuration; // @synthesize automaticTouchForceDuration=_automaticTouchForceDuration;
@property(nonatomic) float automaticTouchForce; // @synthesize automaticTouchForce=_automaticTouchForce;
@property(nonatomic) unsigned int maximumNumberOfTouches; // @synthesize maximumNumberOfTouches=_maximumNumberOfTouches;
@property(nonatomic) float allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic, getter=isSteady) _Bool steady; // @synthesize steady=_steady;
@property(nonatomic) float velocity; // @synthesize velocity=_velocity;
@property(nonatomic) float minimumRequiredTouchForce; // @synthesize minimumRequiredTouchForce=_minimumRequiredTouchForce;
@property(nonatomic) float touchForce; // @synthesize touchForce=_touchForce;
- (void).cxx_destruct;
- (float)_evaluateAutomaticTouchForceForTimeInterval:(double)arg1 actualTouchForce:(float)arg2;
- (void)_endContinuousEvaluation;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (void)_beginForContinuousEvaluationForTouches:(id)arg1;
- (_Bool)_validateHysteresis;
- (_Bool)_hasExceededMaximumNumberOfTouches;
- (_Bool)_hasExceededAllowableMovement;
- (void)_updateTouchForce:(float)arg1;
- (void)_endIfNeeded:(_Bool)arg1;
- (void)_evaluateWithTouchForce:(float)arg1 centroidAtLocation:(struct CGPoint)arg2;
- (void)_evaluateTouches:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldReceiveTouch:(id)arg1 recognizerView:(id)arg2 touchView:(id)arg3;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end
