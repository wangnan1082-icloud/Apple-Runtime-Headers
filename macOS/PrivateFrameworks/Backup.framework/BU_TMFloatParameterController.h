//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction;

__attribute__((visibility("hidden")))
@interface BU_TMFloatParameterController : NSObject
{
    double _initialValue;
    double _targetValue;
    CAMediaTimingFunction *_mediaTimingFunction;
    double _startTime;
    double _targetTime;
}

+ (id)parameterControllerWithInitialValue:(double)arg1;
- (double)interpolatedValueAtTime:(double)arg1;
- (double)duration;
- (double)targetValue;
- (double)initialValue;
- (void)setTargetValue:(double)arg1 atTime:(double)arg2 withDuration:(double)arg3;
- (void)_setInitialValue:(double)arg1;
- (void)dealloc;
- (id)init;

@end

