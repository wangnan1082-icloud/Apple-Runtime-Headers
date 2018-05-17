//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMAccessorySettingsDelegate.h"
#import "NAIdentifiable.h"

@class HMAccessorySetting, HMAccessorySettings, NADeallocationSentinel, NSString;

@interface _HFSettingsObserverTuple : NSObject <HMAccessorySettingsDelegate, NAIdentifiable>
{
    HMAccessorySettings *_settings;
    HMAccessorySetting *_setting;
    id <HFAccessorySettingsObserver> _observer;
    id <_HFSettingsObserverTupleOwning> _owner;
    NADeallocationSentinel *_observerDeallocationSentinel;
}

+ (id)na_identity;
+ (id)tupleForSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4;
@property(retain, nonatomic) NADeallocationSentinel *observerDeallocationSentinel; // @synthesize observerDeallocationSentinel=_observerDeallocationSentinel;
@property(nonatomic) __weak id <_HFSettingsObserverTupleOwning> owner; // @synthesize owner=_owner;
@property(nonatomic) __weak id <HFAccessorySettingsObserver> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) HMAccessorySetting *setting; // @synthesize setting=_setting;
@property(retain, nonatomic) HMAccessorySettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)_accessorySettingReflectionStateDidUpdate:(id)arg1;
- (void)_accessorySettingDidUpdate:(id)arg1;
- (void)settingsDidUpdate:(id)arg1;
- (void)settingsWillUpdate:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)initWithSettings:(id)arg1 setting:(id)arg2 observer:(id)arg3 owner:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
