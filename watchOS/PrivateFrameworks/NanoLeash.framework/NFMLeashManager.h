//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CBCentralManagerDelegate.h"
#import "CBPeripheralDelegate.h"
#import "CBScalablePipeManagerDelegate.h"

@class CBCentralManager, CBPeripheral, CBScalablePipe, CBScalablePipeManager, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface NFMLeashManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate, CBScalablePipeManagerDelegate>
{
    CDUnknownBlockType _proximityChangeHandler;
    NSObject<OS_dispatch_queue> *_centralQueue;
    _Bool _testMode;
    _Bool _connected;
    _Bool _needsToScanForPeripheral;
    int _leashMode;
    NSString *_serviceUUID;
    NSString *_leashIdentifier;
    CBScalablePipeManager *_pipeManager;
    CBScalablePipe *_pipe;
    CBCentralManager *_centralManager;
    CBPeripheral *_peripheral;
    CBPeripheral *_discoveredPeripheral;
    int _centralPhase;
    id <NFMLLeashBreakDelegate> _leashDelegate;
    NSObject<OS_dispatch_source> *_leashDispatchSourceTimer;
    NSObject<OS_dispatch_queue> *_externalQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalQueue; // @synthesize externalQueue=_externalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *leashDispatchSourceTimer; // @synthesize leashDispatchSourceTimer=_leashDispatchSourceTimer;
@property(nonatomic) __weak id <NFMLLeashBreakDelegate> leashDelegate; // @synthesize leashDelegate=_leashDelegate;
@property(nonatomic) _Bool needsToScanForPeripheral; // @synthesize needsToScanForPeripheral=_needsToScanForPeripheral;
@property(nonatomic) int centralPhase; // @synthesize centralPhase=_centralPhase;
@property(retain, nonatomic) CBPeripheral *discoveredPeripheral; // @synthesize discoveredPeripheral=_discoveredPeripheral;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) CBScalablePipe *pipe; // @synthesize pipe=_pipe;
@property(retain, nonatomic) CBScalablePipeManager *pipeManager; // @synthesize pipeManager=_pipeManager;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) _Bool testMode; // @synthesize testMode=_testMode;
@property(copy, nonatomic) NSString *leashIdentifier; // @synthesize leashIdentifier=_leashIdentifier;
@property(copy, nonatomic) NSString *serviceUUID; // @synthesize serviceUUID=_serviceUUID;
@property(nonatomic) int leashMode; // @synthesize leashMode=_leashMode;
- (void).cxx_destruct;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)connect;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2;
- (void)update:(id)arg1;
- (void)setProximityChangeHandler:(CDUnknownBlockType)arg1;
- (void)stopMonitoringLeash;
- (void)beginMonitoringLeash;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)dealloc;
- (void)leashTest;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
