//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVHapticEvent : NSObject
{
    double _time;
    double _duration;
    _Bool _isParameter;
    union {
        unsigned int _eventType;
        unsigned int _paramType;
    } _u;
    struct AVHapticPlayerFixedParameter _fixedParams[5];
    int _fixedParamCount;
    float _value;
}

+ (id)eventWithParameter:(unsigned int)arg1 value:(float)arg2 time:(double)arg3;
+ (id)eventWithEventType:(unsigned int)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter *)arg3 count:(int)arg4 duration:(double)arg5;
+ (id)eventWithEventType:(unsigned int)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter *)arg3 count:(int)arg4;
+ (id)eventWithEventType:(unsigned int)arg1 time:(double)arg2 duration:(double)arg3;
+ (id)eventWithEventType:(unsigned int)arg1 time:(double)arg2;
@property(readonly) int fixedParamCount; // @synthesize fixedParamCount=_fixedParamCount;
@property(readonly) float value; // @synthesize value=_value;
@property(readonly) _Bool isParameter; // @synthesize isParameter=_isParameter;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) double time; // @synthesize time=_time;
@property(readonly) struct AVHapticPlayerFixedParameter *fixedParams; // @dynamic fixedParams;
@property(readonly) unsigned int paramType; // @dynamic paramType;
@property(readonly) unsigned int eventType; // @dynamic eventType;
- (id)initWithParameter:(unsigned int)arg1 value:(float)arg2 time:(double)arg3;
- (id)initWithEventType:(unsigned int)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter *)arg3 count:(int)arg4 duration:(double)arg5;
- (id)initWithEventType:(unsigned int)arg1 time:(double)arg2 duration:(double)arg3;

@end

