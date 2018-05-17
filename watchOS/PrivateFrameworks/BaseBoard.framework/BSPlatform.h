//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BSPlatform : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool hasOrbCapability; // @dynamic hasOrbCapability;
@property(readonly, nonatomic) _Bool hasGasGauge; // @dynamic hasGasGauge;
@property(readonly, nonatomic, getter=isMultiCore) _Bool multiCore; // @dynamic multiCore;
@property(readonly, nonatomic, getter=isCarrierInstall) _Bool carrierInstall; // @dynamic carrierInstall;
@property(readonly, nonatomic, getter=isDeveloperInstall) _Bool developerInstall; // @dynamic developerInstall;
@property(readonly, nonatomic, getter=isInternalInstall) _Bool internalInstall; // @dynamic internalInstall;
@property(readonly, copy, nonatomic) NSString *uniqueDeviceIdentifier; // @dynamic uniqueDeviceIdentifier;
@property(readonly, copy, nonatomic) NSString *operatingSystemName; // @dynamic operatingSystemName;
@property(readonly, copy, nonatomic) NSString *localizedProductName; // @dynamic localizedProductName;
- (_Bool)_isD22Emulator;
@property(readonly, nonatomic) int homeButtonType; // @dynamic homeButtonType;
@property(readonly, nonatomic) int deviceClass; // @dynamic deviceClass;
@property(readonly, copy, nonatomic) NSString *productClass; // @dynamic productClass;
@property(readonly, copy, nonatomic) NSString *productHardwareModelName; // @dynamic productHardwareModelName;
@property(readonly, copy, nonatomic) NSString *productHardwareModel; // @dynamic productHardwareModel;
@property(readonly, copy, nonatomic) NSString *productType; // @dynamic productType;
@property(readonly, copy, nonatomic) NSString *productBuildVersion; // @dynamic productBuildVersion;
@property(readonly, copy, nonatomic) NSString *productVersion; // @dynamic productVersion;

@end
