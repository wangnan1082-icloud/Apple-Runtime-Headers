//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCControllerDirectionPad;

@protocol DigitizerValueChangedDelegate <NSObject>
@property(readonly) GCControllerDirectionPad *dpad;
- (void)digitizerTouchUp:(GCControllerDirectionPad *)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(_Bool)arg3;
- (void)digitizerTouchEvent:(GCControllerDirectionPad *)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(_Bool)arg5;
@end
