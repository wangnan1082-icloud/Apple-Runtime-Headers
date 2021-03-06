//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface AFAccessibilityObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct AccessibilityPreferences _preferences;
    NSHashTable *_listeners;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
- (void)_updateVibrationDisabledPreference;
- (void)_updateVoiceOverTouchEnabledPreference;
- (void)vibrationDisabledPreferenceDidChange:(id)arg1;
- (void)voiceOverTouchEnabledPreferenceDidChange:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
@property(readonly, nonatomic) _Bool isVibrationDisabled;
@property(readonly, nonatomic) _Bool isVoiceOverTouchEnabled;
- (id)init;

@end

