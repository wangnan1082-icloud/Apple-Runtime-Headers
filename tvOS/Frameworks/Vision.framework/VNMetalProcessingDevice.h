//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Vision/VNProcessingDevice.h>

__attribute__((visibility("hidden")))
@interface VNMetalProcessingDevice : VNProcessingDevice
{
    id <MTLDevice> _metalDevice;
}

+ (id)allDevices;
- (void).cxx_destruct;
- (int)espressoStorageType;
- (int)espressoEngine;
- (int)espressoDeviceID;
- (id)metalDevice;
- (_Bool)targetsGPU;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMetalDevice:(id)arg1;

@end
