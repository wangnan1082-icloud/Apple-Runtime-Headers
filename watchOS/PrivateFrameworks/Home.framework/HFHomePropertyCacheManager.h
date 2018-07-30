//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HFAccessoryObserver.h"
#import "HFHomeManagerObserver.h"
#import "HFHomeObserver.h"

@class NSMutableDictionary, NSString;

@interface HFHomePropertyCacheManager : NSObject <HFHomeObserver, HFHomeManagerObserver, HFAccessoryObserver>
{
    NSMutableDictionary *_objectCaches;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *objectCaches; // @synthesize objectCaches=_objectCaches;
- (void).cxx_destruct;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)accessoryDidUpdateServices:(id)arg1;
- (id)valueForObject:(id)arg1 key:(id)arg2 invalidationReasons:(unsigned int)arg3 recalculationBlock:(CDUnknownBlockType)arg4;
- (void)_clearCachedValues;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
