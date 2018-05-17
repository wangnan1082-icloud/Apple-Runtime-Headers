//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLMomentRefreshable.h"

@class CLLocation, NSData, NSDate, NSObject<NSCopying>, NSString;

@protocol PLMomentAssetData <PLMomentRefreshable>
@property(readonly, retain, nonatomic) NSData *placeAnnotationData;
@property(nonatomic) _Bool shiftedLocationIsValid;
@property(retain, nonatomic) CLLocation *shiftedLocation;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property(nonatomic) _Bool reverseLocationDataIsValid;
@property(retain, nonatomic) NSData *reverseLocationData;
@property(retain, nonatomic) id <PLMomentData> moment;
@property(retain, nonatomic) NSDate *dateCreated;
@property(retain, nonatomic) CLLocation *location;
- (NSString *)globalUUID;
- (_Bool)isDeleted;
- (_Bool)visibilityStateIsEqualToState:(short)arg1;
- (long long)compareToAsset:(id <PLMomentAssetData>)arg1;

@optional
@property(retain, nonatomic) NSString *customCollectionUUID;
@property(retain, nonatomic) NSString *customCollectionName;
@property(retain, nonatomic) NSString *customMomentUUID;
@property(retain, nonatomic) NSString *customMomentName;
@property(readonly, retain, nonatomic) NSString *cloudAssetGUID;
@property(nonatomic) long long width;
@property(nonatomic) long long height;
@property(nonatomic) short kindSubtype;
@property(nonatomic) short kind;
@property(nonatomic) _Bool favorite;
@property(nonatomic) double duration;
@property(retain, nonatomic) NSDate *modificationDate;
@property(readonly, retain, nonatomic) NSString *uuid;
@end
