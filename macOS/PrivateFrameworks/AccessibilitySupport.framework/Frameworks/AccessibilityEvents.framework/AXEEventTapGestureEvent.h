//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityEvents/NSCopying-Protocol.h>

@interface AXEEventTapGestureEvent : NSObject <NSCopying>
{
    BOOL _isGestureEvent;
    BOOL _isDockControl;
    BOOL _isFluidTouchGesture;
}

+ (id)gestureEventFromCGEvent:(struct __CGEvent *)arg1;
@property(readonly, nonatomic) BOOL isFluidTouchGesture; // @synthesize isFluidTouchGesture=_isFluidTouchGesture;
@property(readonly, nonatomic) BOOL isDockControl; // @synthesize isDockControl=_isDockControl;
@property(readonly, nonatomic) BOOL isGestureEvent; // @synthesize isGestureEvent=_isGestureEvent;
- (id)description;
- (id)_initAsGestureEvent:(BOOL)arg1 dockControl:(BOOL)arg2 fluidTouchGesture:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

