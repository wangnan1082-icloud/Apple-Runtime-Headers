//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (DefaultObservationImplementations)
- (void)_receiveBox:(id)arg1;
- (void)removeObservation:(id)arg1;
- (id)addObserver:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)receiveObservedError:(id)arg1;
- (_Bool)_isToManyChangeInformation;
- (id *)_observerStorage;
- (id)addObservationTransformer:(CDUnknownBlockType)arg1;
- (id)addObserverBlock:(CDUnknownBlockType)arg1;
- (id)addChainedObservers:(id)arg1;
- (void)finishObserving;
@end
