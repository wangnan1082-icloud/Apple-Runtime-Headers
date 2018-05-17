//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaRemote/MRAVOutputDevice.h>

#import "NSSecureCoding.h"

@class MRAVOutputDeviceSourceInfo, NSDictionary, _MRAVOutputDeviceDescriptorProtobuf;

@interface MRAVDistantOutputDevice : MRAVOutputDevice <NSSecureCoding>
{
    _MRAVOutputDeviceDescriptorProtobuf *_protobuf;
    MRAVOutputDeviceSourceInfo *_sourceInfo;
    NSDictionary *_modelSpecificInfo;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)sourceInfo;
- (BOOL)isVolumeControlAvailable;
- (float)volume;
- (BOOL)requiresAuthorization;
- (BOOL)supportsExternalScreen;
- (BOOL)isLocalDevice;
- (BOOL)hasBatteryLevel;
- (float)batteryLevel;
- (id)modelSpecificInfo;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (BOOL)isDeviceGroupable;
- (BOOL)isProxyGroupPlayer;
- (BOOL)isGroupable;
- (BOOL)isAirPlayReceiverSessionActive;
- (BOOL)groupContainsGroupLeader;
- (BOOL)isGroupLeader;
- (BOOL)supportsBufferedAirPlay;
- (BOOL)canRelayCommunicationChannel;
- (BOOL)isRemoteControllable;
- (BOOL)canAccessiCloudMusicLibrary;
- (BOOL)canAccessAppleMusic;
- (BOOL)canAccessRemoteAssets;
- (id)MACAddress;
- (id)logicalDeviceID;
- (id)groupID;
- (id)firmwareVersion;
- (id)modelID;
- (id)uid;
- (id)name;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSkeleton:(id)arg1;
- (id)initWithDescriptor:(id)arg1;

@end
