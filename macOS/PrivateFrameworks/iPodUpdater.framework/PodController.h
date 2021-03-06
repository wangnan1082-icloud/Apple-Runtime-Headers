//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DeviceHotpluggingNotifications, NSMutableArray, NSTimer;

__attribute__((visibility("hidden")))
@interface PodController : NSObject
{
    NSMutableArray *_pods;
    struct __DASession *_daSession;
    NSMutableArray *_servicesToProcessLater;
    NSTimer *_serviceProcessTimer;
    DeviceHotpluggingNotifications *_deviceNotifications;
    struct _opaque_pthread_mutex_t _handleNewDeviceLock;
}

+ (id)defaultController;
- (BOOL)waitForPodService:(unsigned int)arg1;
- (BOOL)waitForPlugin:(unsigned int)arg1;
- (BOOL)device:(unsigned int)arg1 hasProperty:(id)arg2 equalTo:(id)arg3;
- (BOOL)isN98Pod:(unsigned short)arg1;
- (BOOL)isFlashPod:(unsigned short)arg1;
- (BOOL)isFlashPodOverSCSI:(id)arg1;
- (BOOL)isDevicePod:(unsigned int)arg1;
- (void)diskDisappeared:(struct __DADisk *)arg1;
- (void)diskAppeared;
- (id)podWithService:(unsigned int)arg1;
- (BOOL)isSCSIDevice:(id)arg1;
- (BOOL)isSCSIDeviceConnectedOverUSB:(unsigned int)arg1;
- (unsigned short)productIDFromProperties:(id)arg1 andService:(unsigned int)arg2;
- (struct IOUSBDeviceStruct **)deviceInterfaceForService:(unsigned int)arg1;
- (int)determineUpdateMethod:(unsigned int)arg1;
- (int)deviceAppearedHandler:(unsigned int)arg1;
- (id)makePodFromService:(unsigned int)arg1;
- (id)pods;
- (void)removePod:(id)arg1;
- (id)podWithGUID:(unsigned short *)arg1;
- (void)logPods:(id)arg1;
- (id)podsWithBSDPath:(id)arg1;
- (id)podWithBSDPath:(id)arg1;
- (id)podInRecoveryMode;
- (void)checkForPodsInRecoveryMode;
- (void)setupDiskArbitration;
- (void)dealloc;
- (id)init;

@end

