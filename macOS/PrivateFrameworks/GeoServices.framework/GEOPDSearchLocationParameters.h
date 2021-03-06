//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDTransportHint, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchLocationParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _searchLocationParametersType;
    GEOPDTransportHint *_searchTransportHint;
    struct {
        unsigned int searchLocationParametersType:1;
    } _has;
}

@property(retain, nonatomic) GEOPDTransportHint *searchTransportHint; // @synthesize searchTransportHint=_searchTransportHint;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSearchTransportHint;
- (int)StringAsSearchLocationParametersType:(id)arg1;
- (id)searchLocationParametersTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchLocationParametersType;
@property(nonatomic) int searchLocationParametersType; // @synthesize searchLocationParametersType=_searchLocationParametersType;

@end

