//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOURLSerializable-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOStructuredAddress, NSMutableArray, NSString, PBUnknownFields;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_formattedAddressLines;
    int _formattedAddressType;
    GEOStructuredAddress *_structuredAddress;
    struct {
        unsigned int formattedAddressType:1;
    } _has;
}

+ (Class)formattedAddressLineType;
+ (id)geoAddressForPlaceData:(id)arg1;
@property(retain, nonatomic) GEOStructuredAddress *structuredAddress; // @synthesize structuredAddress=_structuredAddress;
@property(retain, nonatomic) NSMutableArray *formattedAddressLines; // @synthesize formattedAddressLines=_formattedAddressLines;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (int)StringAsFormattedAddressType:(id)arg1;
- (id)formattedAddressTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFormattedAddressType;
@property(nonatomic) int formattedAddressType; // @synthesize formattedAddressType=_formattedAddressType;
@property(readonly, nonatomic) BOOL hasStructuredAddress;
- (id)formattedAddressLineAtIndex:(unsigned long long)arg1;
- (unsigned long long)formattedAddressLinesCount;
- (void)addFormattedAddressLine:(id)arg1;
- (void)clearFormattedAddressLines;
- (BOOL)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)urlRepresentation;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)bestName;
- (id)addressDictionary;
- (id)initWithAddressDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

