//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCConnection;

@interface CLLocationInternalClient_CoreMotion : NSObject
{
    NSXPCConnection *_connection;
}

+ (id)sharedServiceClient;
- (unsigned char)timeSyncMachTimeStamp:(unsigned long long *)arg1 oscarTimeStamp:(unsigned long long *)arg2;
- (unsigned char)gyroCalibrationDatabaseSupportsMiniCalibration:(int *)arg1;
- (unsigned char)setBackgroundIndicatorForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 enabled:(unsigned char)arg3;
- (unsigned char)setAuthorizationStatusByType:(int)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;
- (const struct __CFArray *)copyActivityAlarms;
- (int)getStatusBarIconState;
- (unsigned char)getStatusBarIconEnabled:(_Bool *)arg1 forEntityClass:(unsigned int)arg2;
- (unsigned char)setStatusBarIconEnabled:(_Bool)arg1 forEntityClass:(unsigned int)arg2;
- (unsigned char)copyLastLog;
- (void)setMapMatchingRouteHint:(unsigned long long *)arg1 count:(int)arg2;
- (unsigned char)getLocationForBundleID:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2 dynamicAccuracyReductionEnabled:(unsigned char)arg3 allowsAlteredAccessoryLocations:(unsigned char)arg4 location:(CDStruct_b79ad89f *)arg5;
- (const struct __CFDictionary *)copyMonitoredRegionsForBundleIdentifier:(const struct __CFString *)arg1 orBundlePath:(const struct __CFString *)arg2;
- (unsigned char)dumpLogs:(const struct __CFString *)arg1;
- (unsigned char)displayStatistics;
- (unsigned char)shutdownDaemon;
- (unsigned char)performMigration;
- (unsigned char)getAuthorizationStatusForService:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3 serviceMask:(unsigned int)arg4;
- (unsigned char)getAuthorizationStatus:(int *)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;
- (unsigned char)getGestureServiceEnabled:(char *)arg1;
- (void)setGestureServiceEnabled:(unsigned char)arg1;
- (unsigned char)getLocationServicesEnabled:(char *)arg1;
- (void)setLocationServicesEnabled:(unsigned char)arg1;
- (unsigned char)pingDaemon;
- (unsigned char)getPrivateMode;
- (void)setPrivateMode:(unsigned char)arg1;
- (id)timeZoneAtLocation:(id)arg1;
- (const void *)getLocationDefaultForKey:(const struct __CFString *)arg1;
- (void)setLocationDefaultForKey:(const struct __CFString *)arg1 value:(const void *)arg2;
- (const struct __CFArray *)copyTechnologiesInUse;
- (const struct __CFDictionary *)copyAppsUsingLocation;
- (unsigned char)clearLocationAuthorizations;
- (unsigned char)setAuthorizationStatus:(unsigned char)arg1 forBundleID:(const struct __CFString *)arg2 orBundlePath:(const struct __CFString *)arg3;
- (id)synchronousRemoteObject;

@end
