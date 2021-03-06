//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface HFTemperatureUnitCoordinator : NSObject
{
    _Bool _isCelsius;
    NSHashTable *_observers;
}

+ (id)sharedCoordinator;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) _Bool isCelsius; // @synthesize isCelsius=_isCelsius;
- (void).cxx_destruct;
- (void)_temperatureUnitDidChange;
- (void)_updateIsCelsiusNotifyingObservers:(_Bool)arg1;
- (void)setIsCelsius:(_Bool)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (id)init;

@end

