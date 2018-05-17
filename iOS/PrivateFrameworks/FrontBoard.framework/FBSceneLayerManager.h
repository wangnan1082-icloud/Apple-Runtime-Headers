//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDescriptionProviding.h"

@class NSHashTable, NSMutableOrderedSet, NSOrderedSet, NSString;

@interface FBSceneLayerManager : NSObject <BSDescriptionProviding>
{
    NSHashTable *_observers;
    NSMutableOrderedSet *_orderedLayers;
    NSString *_identifier;
}

@property(readonly, retain, nonatomic) NSOrderedSet *layers; // @synthesize layers=_orderedLayers;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_observer_didRepositionLayer:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)_observer_didStopTrackingLayers;
- (void)_observer_willStartTrackingLayers;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)layerWithContextID:(unsigned int)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeLayer:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
