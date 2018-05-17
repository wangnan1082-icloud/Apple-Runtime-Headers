//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObservationSource.h"

#import "NSObserver.h"

@class CADisplayLink, NSObservation, NSSet, NSString, UIView, _UITouchesObservingGestureRecognizer;

@interface _UITouchForceObservable : NSObservationSource <NSObserver>
{
    UIView *_view;
    long long _observerCount;
    _UITouchesObservingGestureRecognizer *_gestureRecognizer;
    NSObservation *_touchesObservation;
    CADisplayLink *_continuousEvaluationDisplayLink;
    NSSet *_currentTouches;
    double _lastObservationTime;
}

- (void).cxx_destruct;
- (void)_cancelContinuousEvaluation;
- (void)_updateForContinuousEvaluation:(id)arg1;
- (id)_touchForceMessageForTouches:(id)arg1;
- (void)_didEndHavingAnyObservers;
- (void)_willBeginHavingAnyObservers;
- (void)removeObservation:(id)arg1;
- (id)addObserver:(id)arg1;
- (_Bool)_shouldFilterDueToSystemGesturesForTouches:(id)arg1;
- (double)_maximumPossibleForceForTouches:(id)arg1;
- (double)_timestampForTouches:(id)arg1;
- (double)_unclampedTouchForceForTouches:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
