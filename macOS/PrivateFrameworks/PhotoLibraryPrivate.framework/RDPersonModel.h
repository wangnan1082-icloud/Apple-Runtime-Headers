//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDModel.h>

@class NSData, NSString, RDPersonTable;

@interface RDPersonModel : RDModel
{
}

+ (Class)tableClass;
+ (id)localIdentifierCode;
@property(copy, nonatomic) NSString *pendingMergeTargetPersonCloudIdentifier;
@property(nonatomic) long long mergeTargetPersonId;
@property(nonatomic) long long verifiedType;
@property(copy, nonatomic) NSData *contactMatchingDictionaryAsData;
@property(copy, nonatomic) NSString *displayName;
@property(nonatomic) long long faceCount;
@property(nonatomic) long long associatedClusterId;
@property(nonatomic) BOOL isVerified;
@property(nonatomic) BOOL isInPersonNamingModel;
@property(nonatomic) BOOL isCloudQuarantined;
@property(copy, nonatomic) NSString *cloudIdentifier;
@property(nonatomic) BOOL hasBeenSynced;
@property(nonatomic) long long cloudLibraryState;
@property(copy, nonatomic) NSString *personUri;
@property(nonatomic) long long representativeFaceId;
@property(nonatomic) long long personType;
@property(nonatomic) long long manualOrder;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) RDPersonTable *table;

@end

