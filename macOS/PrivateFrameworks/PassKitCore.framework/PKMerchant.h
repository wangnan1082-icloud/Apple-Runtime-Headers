//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "PKCloudStoreCoding.h"

@class CLLocation, CNPostalAddress, NSString, NSURL;

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    int _resultProviderIdentifier;
    NSString *_displayName;
    unsigned long long _mapsIdentifier;
    long long _industryCode;
    NSString *_industryCategory;
    NSString *_name;
    NSString *_mapsName;
    NSString *_rawName;
    NSString *_phoneNumber;
    NSURL *_url;
    double _locationLatitude;
    double _locationLongitude;
    CNPostalAddress *_postalAddress;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(copy, nonatomic, setter=setURL:) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *rawName; // @synthesize rawName=_rawName;
@property(copy, nonatomic) NSString *mapsName; // @synthesize mapsName=_mapsName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *industryCategory; // @synthesize industryCategory=_industryCategory;
@property(nonatomic) long long industryCode; // @synthesize industryCode=_industryCode;
@property(nonatomic) int resultProviderIdentifier; // @synthesize resultProviderIdentifier=_resultProviderIdentifier;
@property(nonatomic) unsigned long long mapsIdentifier; // @synthesize mapsIdentifier=_mapsIdentifier;
- (void).cxx_destruct;
- (id)_jsonEncodedPostalAddressString;
- (void)_regenerateDisplayName;
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) CLLocation *location;
- (id)jsonDictionaryRepresentation;
- (id)description;
- (BOOL)hasCloudArchivableDeviceData;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)arg1;
- (BOOL)isEqualToMerchant:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)recordTypesAndNames;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
