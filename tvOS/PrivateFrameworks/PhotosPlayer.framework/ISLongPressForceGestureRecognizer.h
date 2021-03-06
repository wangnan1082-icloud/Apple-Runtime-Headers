//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSMutableSet;

@interface ISLongPressForceGestureRecognizer : UILongPressGestureRecognizer
{
    NSMutableSet *_trackingTouches;
    _Bool _longPressDidBeginForCurrentTouch;
    double _minimumPressure;
    double _maximumPressure;
    double _is_force;
}

@property(readonly, nonatomic) double is_force; // @synthesize is_force=_is_force;
@property(nonatomic) double maximumPressure; // @synthesize maximumPressure=_maximumPressure;
@property(nonatomic) double minimumPressure; // @synthesize minimumPressure=_minimumPressure;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_updateForce;
- (void)setState:(long long)arg1;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

