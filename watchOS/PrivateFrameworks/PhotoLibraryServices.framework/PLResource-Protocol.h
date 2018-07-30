//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLResourceIdentity.h"

@protocol PLResource <PLResourceIdentity>
@property(readonly, nonatomic) id <PLCodecIdentity> codecID;
@property(readonly, nonatomic) id <PLColorSpaceIdentity> colorSpaceID;
@property(readonly, nonatomic) int qualitySortValue;
@property(readonly, nonatomic) short remoteAvailabilityTarget;
@property(readonly, nonatomic) short remoteAvailability;
@property(readonly, nonatomic) short localAvailabilityTarget;
@property(readonly, nonatomic) short localAvailability;
@property(readonly, nonatomic) unsigned int recipeID;
@property(readonly, nonatomic) id <PLResourceDataStoreKey> dataStoreKey;
@property(readonly, nonatomic) long long dataStoreSubtype;
@property(readonly, nonatomic) id <PLResourceDataStore> dataStore;
@property(readonly, nonatomic) unsigned int cplType;
@property(readonly, copy, nonatomic) id <PLAssetID> assetID;
@property(readonly, nonatomic) long long orientedHeight;
@property(readonly, nonatomic) long long orientedWidth;
- (_Bool)isDerivative;
- (_Bool)isDefaultOrientation;
- (_Bool)isPrimaryUTI;
@end
