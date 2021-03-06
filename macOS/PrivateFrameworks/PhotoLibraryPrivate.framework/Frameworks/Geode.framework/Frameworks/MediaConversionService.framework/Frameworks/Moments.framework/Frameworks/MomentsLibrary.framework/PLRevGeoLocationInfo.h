//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PLRevGeoCompoundNameInfo;
@protocol GEOMapItemPrivate;

@interface PLRevGeoLocationInfo : NSObject
{
    BOOL _isValid;
    BOOL _isHome;
    id <GEOMapItemPrivate> _geoMapItem;
    PLRevGeoCompoundNameInfo *_compoundNameInfo;
    PLRevGeoCompoundNameInfo *_compoundSecondaryNameInfo;
    NSString *_providerId;
    unsigned long long _providerVersion;
}

+ (unsigned long long)currentVersion;
+ (unsigned long long)qualityTypeForPointInCountryCode:(id)arg1 withDataProviderId:(id)arg2;
+ (CDUnknownBlockType)sortedNameAndAreaInfoComparatorWithHomeAtEnd:(BOOL)arg1;
+ (id)_namingOrderForAssetReverseGeoDescription;
+ (BOOL)isValidFromData:(id)arg1;
+ (id)_newRevGeoLocationInfoFromData:(id)arg1;
+ (id)newDataFromRevGeoLocationInfo:(id)arg1;
@property(nonatomic) unsigned long long providerVersion; // @synthesize providerVersion=_providerVersion;
@property(retain, nonatomic) NSString *providerId; // @synthesize providerId=_providerId;
@property(nonatomic) BOOL isHome; // @synthesize isHome=_isHome;
@property(retain, nonatomic) PLRevGeoCompoundNameInfo *compoundSecondaryNameInfo; // @synthesize compoundSecondaryNameInfo=_compoundSecondaryNameInfo;
@property(retain, nonatomic) PLRevGeoCompoundNameInfo *compoundNameInfo; // @synthesize compoundNameInfo=_compoundNameInfo;
@property(retain, nonatomic) id <GEOMapItemPrivate> geoMapItem; // @synthesize geoMapItem=_geoMapItem;
@property(readonly, nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
@property(readonly, copy, nonatomic) NSString *countryCode;
- (void)_addNameInfo:(id)arg1 inPlaceInfoMap:(id)arg2 totalPlaceCount:(long long *)arg3;
- (id)localizedDescription;
- (id)dataForInfo;
- (id)description;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end

