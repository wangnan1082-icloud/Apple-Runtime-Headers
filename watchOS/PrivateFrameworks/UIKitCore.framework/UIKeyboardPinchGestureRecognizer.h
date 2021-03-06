//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMutableDictionary, NSMutableSet;
@protocol UIKeyboardPinchGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardPinchGestureRecognizer : UIGestureRecognizer
{
    id <UIKeyboardPinchGestureRecognizerDelegate> _pinchDelegate;
    _Bool _pinchDetected;
    float _initialPinchSeparation;
    float _pinchSeparationValues[4];
    NSMutableSet *_activeTouches;
    NSMutableDictionary *_initialTouchPoints;
}

@property(readonly, nonatomic) float initialPinchSeparation; // @synthesize initialPinchSeparation=_initialPinchSeparation;
@property(readonly, nonatomic) _Bool pinchDetected; // @synthesize pinchDetected=_pinchDetected;
@property(nonatomic) id <UIKeyboardPinchGestureRecognizerDelegate> pinchDelegate; // @synthesize pinchDelegate=_pinchDelegate;
- (float)finalProgressForInitialProgress:(float)arg1;
- (void)interpretTouchesForSplit;
- (void)resetPinchCalculations;
- (void)reset;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

