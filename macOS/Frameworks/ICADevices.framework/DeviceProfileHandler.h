//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DeviceProfileHandler : NSObject
{
    NSString *_name;
    struct __CFUUID *_deviceID;
    NSString *_deviceClass;
    NSString *_languageMode;
    BOOL _isCamera;
}

- (BOOL)registerDeviceInfoPlistProfiles:(id)arg1 deviceNames:(id)arg2;
- (id)modesByExpandingWildcard:(id)arg1;
- (id)defaultPathForMode:(id)arg1;
- (void)addScannerFactoryProfiles:(id)arg1;
- (void)addCameraFactoryProfiles:(id)arg1;
- (id)profileIDStringFromMode:(id)arg1;
- (id)getProfileURLForMode:(id)arg1;
- (void)unregisterColorSyncDevice;
- (void)registerColorSyncDeviceWithName:(id)arg1 profiles:(id)arg2 deviceInfoPlistDeviceName:(id)arg3 persistentID:(struct __CFUUID *)arg4;
- (void)dealloc;
- (id)init;

@end
