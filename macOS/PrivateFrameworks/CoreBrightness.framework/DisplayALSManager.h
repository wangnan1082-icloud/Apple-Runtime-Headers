//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AmbientLightSensorStats, NSObject<OS_dispatch_queue>, NSObject<OS_os_log>;

@interface DisplayALSManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct ALSStruct _als;
    struct DisplayStruct _display;
    struct __CFString *_IOPMDynamicStoreSettingsKey;
    struct __SCDynamicStore *_SCDynamicStore;
    struct {
        long long _field1;
        void *_field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
    } *_SCDynamicStoreContext;
    int _currentReducedBrightnessSetting;
    AmbientLightSensorStats *_alsStats;
    unsigned int _powerNotifierRootIOKitPort;
    struct IONotificationPort *_powerNotifierPortRef;
    unsigned int _powerNotifierObject;
    _Bool _removedMagSafeOnSleep;
    NSObject<OS_os_log> *_logHandle;
}

- (void)forceUpdate:(unsigned int)arg1;
- (void)preferencesChanged:(id)arg1;
- (void)savePreferences;
- (_Bool)loadPreferences;
- (void)startALSIdleTimer;
- (void)setPerceptualBrightnessWithFade:(float)arg1 length:(float)arg2;
- (void)handleALSUpdate:(float)arg1;
- (void)forceUpdateDynamicSlider;
- (BOOL)updateDynamicSlider:(float)arg1;
- (BOOL)updateDynamicSliderWithLux:(float)arg1 force:(BOOL)arg2;
- (BOOL)updateDynamicSliderState:(BOOL)arg1 battery:(BOOL)arg2;
- (void)setDynamicSliderWithFade:(float)arg1 length:(float)arg2;
- (void)stopDynamicSliderFade;
- (float)linearBrightnessForLux:(float)arg1;
- (float)linearBrightness;
- (void)setMagsafeBrightnessLevel:(int)arg1;
- (int)magsafeBrightnessLevel;
- (void)magsafeStateChanged:(id)arg1;
- (void)setInitialMagsafeState;
- (void)unregisterSleepWakeNotifications;
- (void)registerSleepWakeNotifications;
- (void)stopMagsafeMonitoring;
- (void)startMagsafeMonitoring;
- (void)unregisterForSystemNotifications;
- (void)registerForSystemNotifications;
- (void)updateDynamicThreshold;
- (void)updateALSParameters;
- (float)getAdjustedMinLinearBrightness;
- (float)getAdjustedMaxLinearBrightness;
- (int)setAdjustedLinearBrightness:(float)arg1;
- (int)getAdjustedLinearBrightness:(float *)arg1;
- (void)stop;
- (_Bool)start;
- (void)stopFade;
- (void)commitUserBrightnessChange;
- (void)userBrightnessChanged;
- (_Bool)cacheDisplayAlgorithmParameters;
- (void)setQueue:(id)arg1;
- (void)dealloc;
- (id)initWithDisplayModule:(id)arg1;

@end
