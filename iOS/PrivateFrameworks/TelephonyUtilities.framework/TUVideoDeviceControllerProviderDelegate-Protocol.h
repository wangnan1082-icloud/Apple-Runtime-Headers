//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AVConferencePreviewClientDelegate.h"

@class NSError, NSString, VideoAttributes;

@protocol TUVideoDeviceControllerProviderDelegate <AVConferencePreviewClientDelegate>
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(NSString *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didReceiveErrorFromCameraUniqueID:(NSString *)arg2 error:(NSError *)arg3;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 didChangeLocalVideoAttributes:(VideoAttributes *)arg2;
- (void)provider:(id <TUVideoDeviceControllerProvider>)arg1 cameraDidBecomeAvailableForUniqueID:(NSString *)arg2;
- (void)captureDevicesChangedForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didStopPreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
- (void)didStartPreviewForProvider:(id <TUVideoDeviceControllerProvider>)arg1;
@end
