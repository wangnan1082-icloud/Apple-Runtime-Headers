//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface MPIdentifierSet : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_globalPlaylistID;
    NSArray *_formerStoreAdamIDs;
    NSString *_socialProfileID;
    NSString *_cloudUniversalLibraryID;
    NSString *_storeCloudAlbumID;
    NSString *_storeRecommendationID;
    NSString *_radioStationStringID;
    NSString *_radioStationHash;
    NSString *_contentItemID;
    NSString *_lyricsID;
    NSString *_vendorID;
    NSString *_informalMediaClipID;
    NSString *_informalStaticAssetID;
    long long _deviceLibraryPersistentID;
    long long _homeSharingLibraryID;
    long long _syncID;
    long long _storeAdamID;
    unsigned long long _storeCloudID;
    long long _storePurchasedAdamID;
    long long _storeSubscriptionAdamID;
    long long _radioStationID;
}

+ (_Bool)supportsSecureCoding;
+ (id)emptyIdentifierSet;
@property(copy, nonatomic) NSString *informalStaticAssetID; // @synthesize informalStaticAssetID=_informalStaticAssetID;
@property(copy, nonatomic) NSString *informalMediaClipID; // @synthesize informalMediaClipID=_informalMediaClipID;
@property(copy, nonatomic) NSString *vendorID; // @synthesize vendorID=_vendorID;
@property(copy, nonatomic) NSString *lyricsID; // @synthesize lyricsID=_lyricsID;
@property(copy, nonatomic) NSString *contentItemID; // @synthesize contentItemID=_contentItemID;
@property(nonatomic) long long radioStationID; // @synthesize radioStationID=_radioStationID;
@property(copy, nonatomic) NSString *radioStationHash; // @synthesize radioStationHash=_radioStationHash;
@property(copy, nonatomic) NSString *radioStationStringID; // @synthesize radioStationStringID=_radioStationStringID;
@property(nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(nonatomic) long long storePurchasedAdamID; // @synthesize storePurchasedAdamID=_storePurchasedAdamID;
@property(copy, nonatomic) NSString *storeRecommendationID; // @synthesize storeRecommendationID=_storeRecommendationID;
@property(copy, nonatomic) NSString *storeCloudAlbumID; // @synthesize storeCloudAlbumID=_storeCloudAlbumID;
@property(copy, nonatomic) NSString *cloudUniversalLibraryID; // @synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID;
@property(nonatomic) unsigned long long storeCloudID; // @synthesize storeCloudID=_storeCloudID;
@property(copy, nonatomic) NSString *socialProfileID; // @synthesize socialProfileID=_socialProfileID;
@property(copy, nonatomic) NSArray *formerStoreAdamIDs; // @synthesize formerStoreAdamIDs=_formerStoreAdamIDs;
@property(nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
@property(copy, nonatomic) NSString *globalPlaylistID; // @synthesize globalPlaylistID=_globalPlaylistID;
@property(nonatomic) long long syncID; // @synthesize syncID=_syncID;
@property(nonatomic) long long homeSharingLibraryID; // @synthesize homeSharingLibraryID=_homeSharingLibraryID;
@property(nonatomic) long long deviceLibraryPersistentID; // @synthesize deviceLibraryPersistentID=_deviceLibraryPersistentID;
- (void).cxx_destruct;
- (id)identifierDescriptions;
- (_Bool)hasCommonIdentifierWithIdentifierSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
@property(readonly, nonatomic) NSString *humanDescription;
- (id)description;
- (id)copyWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

