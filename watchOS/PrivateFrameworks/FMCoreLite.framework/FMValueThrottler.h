//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface FMValueThrottler : NSObject
{
    id <FMScheduler> _updateScheduler;
    id _value;
    NSMutableSet *_observerBlocks;
    id <FMCancelable> _valueUpdateCancelationToken;
    double _throttleInterval;
}

@property(retain, nonatomic) id <FMCancelable> valueUpdateCancelationToken; // @synthesize valueUpdateCancelationToken=_valueUpdateCancelationToken;
@property(readonly, nonatomic) NSMutableSet *observerBlocks; // @synthesize observerBlocks=_observerBlocks;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id <FMScheduler> updateScheduler; // @synthesize updateScheduler=_updateScheduler;
@property(readonly, nonatomic) double throttleInterval; // @synthesize throttleInterval=_throttleInterval;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasPendingValueChange;
- (void)flushValueChanges;
- (id)observeValueChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)_notifyObserversOfValueUpdate;
- (void)_enqueueValueUpdateIfNecessary;
- (void)dealloc;
- (id)init;
- (id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2;
- (id)initWithThrottleInterval:(double)arg1;

@end
