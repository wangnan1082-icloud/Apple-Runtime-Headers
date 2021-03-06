//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/WPDeviceScannerDelegate-Protocol.h>
#import <ClassroomKit/WPZoneTrackerDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString, WPDeviceScanner, WPZoneTracker;
@protocol CRKClassSessionBeaconBrowserDelegate;

@interface CRKClassSessionBeaconBrowser : NSObject <WPZoneTrackerDelegate, WPDeviceScannerDelegate>
{
    WPZoneTracker *mZoneTracker;
    WPDeviceScanner *mDeviceScanner;
    NSMutableSet *mScanningZones;
    long long mIncreasedScanRequestCount;
    BOOL _allowInvitationSessions;
    BOOL _isBrowsing;
    BOOL _isScanning;
    id <CRKClassSessionBeaconBrowserDelegate> _delegate;
    NSSet *_organizationUUIDs;
}

@property(nonatomic) BOOL isScanning; // @synthesize isScanning=_isScanning;
@property(nonatomic) BOOL isBrowsing; // @synthesize isBrowsing=_isBrowsing;
@property(nonatomic) BOOL allowInvitationSessions; // @synthesize allowInvitationSessions=_allowInvitationSessions;
@property(copy, nonatomic) NSSet *organizationUUIDs; // @synthesize organizationUUIDs=_organizationUUIDs;
@property(nonatomic) __weak id <CRKClassSessionBeaconBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)delegateDidFailWithError:(id)arg1;
- (void)delegateDidFindInvitationSessionWithEndpoint:(id)arg1;
- (void)delegateDidFindClassSession:(id)arg1 flags:(unsigned short)arg2;
- (void)scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)scanner:(id)arg1 foundRequestedDevices:(id)arg2;
- (void)deviceScannerDidUpdateState:(id)arg1;
- (void)scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3;
- (void)zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3;
- (void)zoneTracker:(id)arg1 exitedZone:(id)arg2;
- (void)zoneTracker:(id)arg1 enteredZone:(id)arg2;
- (void)zoneTrackerDidUpdateState:(id)arg1;
- (void)updateScanner;
- (void)increasedScanDurationElapsed;
- (void)stopScanningForDevicesInAllZones;
- (void)stopScanningForDevicesInZone:(id)arg1;
- (void)startScanningForDevicesInZone:(id)arg1;
- (void)startInitialScan;
- (void)updateZones;
- (id)organizationUUIDsMatchingZoneData:(id)arg1;
- (id)zoneDataForAdvertisementUUID:(id)arg1;
- (id)zoneDataForOrganizationUUID:(id)arg1;
- (id)stateDictionary;
- (void)increaseScanFrequencyForDuration:(double)arg1;
- (void)stopBrowsing;
- (void)startBrowsing;
- (void)setOrganizationUUID:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

