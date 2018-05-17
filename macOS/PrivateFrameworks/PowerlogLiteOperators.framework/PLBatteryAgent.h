//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class NSDictionary, NSMutableArray, NSNumber, NSString, PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition, PLIOKitOperatorComposition, PLMonotonicTimer, PLSemaphore, PLTimer, PLXPCResponderOperatorComposition;

@interface PLBatteryAgent : PLAgent
{
    BOOL _allowGasGaugeRead;
    BOOL _deviceIsPluggedIn;
    BOOL _isEABatteryConnected;
    _Bool _isPingPongCharging;
    _Bool _isFirstTimeCheckingPingPong;
    int _gasGaugeConsecutiveEmptyEntriesCount;
    int _presentMaxRa;
    int _lifetimeMaxRa;
    int _priIOAccessoryPowerMode;
    PLIOKitOperatorComposition *_iokit;
    PLIOKitOperatorComposition *_ioAccessoryManager;
    PLEntryNotificationOperatorComposition *_canSleepEntryNotifications;
    PLSemaphore *_canSleepSemaphore;
    PLEntryNotificationOperatorComposition *_wakeEntryNotifications;
    PLTimer *_gasGaugeTimer;
    double _batteryLevelPercent;
    double _rawBatteryVoltageVolt;
    NSDictionary *_lastITMiscStatus;
    PLTimer *_EABatteryTimer;
    PLMonotonicTimer *_significantBatteryChangeTimer;
    NSString *_entryKeyEABattery;
    NSString *_entryKeyEAPencilStats;
    double _EAEnergyDrained;
    NSNumber *_lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
    PLXPCResponderOperatorComposition *_batteryInfoResponder;
    PLXPCResponderOperatorComposition *_batteryTemperatureResponder;
    PLXPCResponderOperatorComposition *_batteryDischargeCurrentResponder;
    PLXPCResponderOperatorComposition *_batteryRBATTResponder;
    PLXPCResponderOperatorComposition *_batteryShutdownDataResponder;
    NSMutableArray *_trackedAccessories;
    PLCFNotificationOperatorComposition *_batteryUILoggingNotification;
    PLCFNotificationOperatorComposition *_batteryUILoggingNotification0;
    PLCFNotificationOperatorComposition *_batteryUILoggingNotificationxy;
}

+ (id)defaults;
+ (id)entryEventBackwardDefinitionEABattery;
+ (id)entryEventBackwardDefinitionBatteryUI;
+ (id)entryEventBackwardDefinitionBattery;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitionLightningConnectorStatus;
+ (id)entryEventForwardDefinitionEAPencil;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitionBatteryUILogging;
+ (id)entryEventPointDefinitionBatteryShutdown;
+ (id)entryEventPointDefinitionEAPencil;
+ (id)entryEventPointDefinitionGasGaugeReconnect;
+ (id)entryEventPointDefinitions;
+ (id)entryEventNoneDefinitionBatteryConfig;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitionGasGauge;
+ (id)entryEventIntervalDefinitions;
+ (void)load;
@property(retain) PLCFNotificationOperatorComposition *batteryUILoggingNotificationxy; // @synthesize batteryUILoggingNotificationxy=_batteryUILoggingNotificationxy;
@property(retain) PLCFNotificationOperatorComposition *batteryUILoggingNotification0; // @synthesize batteryUILoggingNotification0=_batteryUILoggingNotification0;
@property(retain) PLCFNotificationOperatorComposition *batteryUILoggingNotification; // @synthesize batteryUILoggingNotification=_batteryUILoggingNotification;
@property _Bool isFirstTimeCheckingPingPong; // @synthesize isFirstTimeCheckingPingPong=_isFirstTimeCheckingPingPong;
@property _Bool isPingPongCharging; // @synthesize isPingPongCharging=_isPingPongCharging;
@property int priIOAccessoryPowerMode; // @synthesize priIOAccessoryPowerMode=_priIOAccessoryPowerMode;
@property(retain) NSMutableArray *trackedAccessories; // @synthesize trackedAccessories=_trackedAccessories;
@property(retain) PLXPCResponderOperatorComposition *batteryShutdownDataResponder; // @synthesize batteryShutdownDataResponder=_batteryShutdownDataResponder;
@property(retain) PLXPCResponderOperatorComposition *batteryRBATTResponder; // @synthesize batteryRBATTResponder=_batteryRBATTResponder;
@property(retain) PLXPCResponderOperatorComposition *batteryDischargeCurrentResponder; // @synthesize batteryDischargeCurrentResponder=_batteryDischargeCurrentResponder;
@property(retain) PLXPCResponderOperatorComposition *batteryTemperatureResponder; // @synthesize batteryTemperatureResponder=_batteryTemperatureResponder;
@property(retain) PLXPCResponderOperatorComposition *batteryInfoResponder; // @synthesize batteryInfoResponder=_batteryInfoResponder;
@property(retain) NSNumber *lastkIOPSAppleBatteryCaseCumulativeCurrentKey; // @synthesize lastkIOPSAppleBatteryCaseCumulativeCurrentKey=_lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
@property double EAEnergyDrained; // @synthesize EAEnergyDrained=_EAEnergyDrained;
@property(readonly) NSString *entryKeyEAPencilStats; // @synthesize entryKeyEAPencilStats=_entryKeyEAPencilStats;
@property(readonly) NSString *entryKeyEABattery; // @synthesize entryKeyEABattery=_entryKeyEABattery;
@property(retain) PLMonotonicTimer *significantBatteryChangeTimer; // @synthesize significantBatteryChangeTimer=_significantBatteryChangeTimer;
@property(retain) PLTimer *EABatteryTimer; // @synthesize EABatteryTimer=_EABatteryTimer;
@property BOOL isEABatteryConnected; // @synthesize isEABatteryConnected=_isEABatteryConnected;
@property(retain) NSDictionary *lastITMiscStatus; // @synthesize lastITMiscStatus=_lastITMiscStatus;
@property int lifetimeMaxRa; // @synthesize lifetimeMaxRa=_lifetimeMaxRa;
@property int presentMaxRa; // @synthesize presentMaxRa=_presentMaxRa;
@property double rawBatteryVoltageVolt; // @synthesize rawBatteryVoltageVolt=_rawBatteryVoltageVolt;
@property double batteryLevelPercent; // @synthesize batteryLevelPercent=_batteryLevelPercent;
@property BOOL deviceIsPluggedIn; // @synthesize deviceIsPluggedIn=_deviceIsPluggedIn;
@property BOOL allowGasGaugeRead; // @synthesize allowGasGaugeRead=_allowGasGaugeRead;
@property int gasGaugeConsecutiveEmptyEntriesCount; // @synthesize gasGaugeConsecutiveEmptyEntriesCount=_gasGaugeConsecutiveEmptyEntriesCount;
@property(retain) PLTimer *gasGaugeTimer; // @synthesize gasGaugeTimer=_gasGaugeTimer;
@property(readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications; // @synthesize wakeEntryNotifications=_wakeEntryNotifications;
@property(retain) PLSemaphore *canSleepSemaphore; // @synthesize canSleepSemaphore=_canSleepSemaphore;
@property(readonly) PLEntryNotificationOperatorComposition *canSleepEntryNotifications; // @synthesize canSleepEntryNotifications=_canSleepEntryNotifications;
@property(readonly) PLIOKitOperatorComposition *ioAccessoryManager; // @synthesize ioAccessoryManager=_ioAccessoryManager;
@property(readonly) PLIOKitOperatorComposition *iokit; // @synthesize iokit=_iokit;
- (void).cxx_destruct;
- (void)logEventNoneBatteryConfigWithRawData:(id)arg1;
- (void)logEventPointBatteryShutdown;
- (void)logBatteryConfigToAggd:(id)arg1;
- (void)logBatteryShutdownToAggd:(id)arg1;
- (void)setAggdIntegerValueFromEntry:(id)arg1 forKey:(id)arg2 withPrefix:(id)arg3;
- (_Bool)clearBatteryShutdownData;
- (id)getBatteryShutdownData;
- (id)parseITMiscStatusCounters:(id)arg1;
- (id)presentMaxRaFromRawData:(id)arg1;
- (id)parseRawRaTableData:(id)arg1;
- (id)batteryEEEECode:(id)arg1;
- (id)weekOfManufacture:(id)arg1;
- (id)parseBatterySerialNumber:(id)arg1;
- (BOOL)isOriginalBattery;
- (id)lowBatteryLogString;
- (id)lowBatteryLogPath;
- (int)batteryLifetimeUPOCount;
- (id)logEventBackwardBatteryWithRawData:(id)arg1;
- (void)logEventBackwardBattery;
- (void)logEventIntervalGasGauge;
- (void)fakeLogEntry:(id)arg1;
- (void)log;
- (void)dealloc;
- (id)init;

@end
