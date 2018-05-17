//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableSet, NSObject<OS_os_log>, NSSet;

@interface TVSBluetoothManager : NSObject
{
    NSLock *_lock;
    NSMutableArray *_allBTDevices;
    NSMutableSet *_observers;
    NSObject<OS_os_log> *_log;
    long long _scanningState;
    _Bool _discovering;
    _Bool _finishedSetup;
    NSSet *_connectedDevices;
    NSSet *_pairedDevices;
    NSSet *_discoveredDevices;
    id <TVSBluetoothManagerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <TVSBluetoothManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSSet *discoveredDevices; // @synthesize discoveredDevices=_discoveredDevices;
@property(copy, nonatomic) NSSet *pairedDevices; // @synthesize pairedDevices=_pairedDevices;
@property(copy, nonatomic) NSSet *connectedDevices; // @synthesize connectedDevices=_connectedDevices;
- (void).cxx_destruct;
- (void)_stopBluetoothDeviceDiscovery;
- (void)_startBluetoothDeviceDiscovery;
- (unsigned long long)_pairingDeviceCount;
- (void)_updateScanningStateIfNeeded;
- (void)_updateDevicesLists;
- (void)_removeBluetoothDevice:(id)arg1;
- (void)_addBluetoothDevice:(id)arg1;
- (_Bool)filterDeviceScan;
- (void)setFilterDeviceScan:(_Bool)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_bluetoothNotificationHandler:(id)arg1;
- (void)_bluetoothPowerStateChanged:(id)arg1;
- (void)_bluetoothPairingPINResultFailed:(id)arg1;
- (void)_bluetoothPairingPINResultSuccess:(id)arg1;
- (void)_bluetoothPairingPINRequest:(id)arg1;
- (void)_bluetoothDidUnpair:(id)arg1;
- (void)_bluetoothDisconnectFailed:(id)arg1;
- (void)_bluetoothDisconnectSuccess:(id)arg1;
- (void)_bluetoothConnectionFailed:(id)arg1;
- (void)_bluetoothConnectionSuccess:(id)arg1;
- (void)_bluetoothDeviceRemoved:(id)arg1;
- (void)_bluetoothAvailabilityChanged:(id)arg1;
- (void)_peripheralStateDidChangeNotification:(id)arg1;
- (void)_discoveredPeripheralsDidChangeNotification:(id)arg1;
- (void)stopScanning;
- (void)startScanning;
- (void)cancelPINPairing;
- (void)unpairDevice:(id)arg1;
- (void)disconnectDevice:(id)arg1;
- (void)connectDevice:(id)arg1;
- (void)removeScanObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addScanObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)__init;
- (void)_checkDeviceStatus;
- (id)bluetoothDeviceForBTLEPeripheral:(id)arg1;
- (id)bluetoothDeviceWithIdentifier:(id)arg1;
- (id)bluetoothDeviceForClassicBluetoothDevice:(id)arg1;

@end
