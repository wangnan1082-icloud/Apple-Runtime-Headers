//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class GEOMapItemStorage;

@interface GEORouteHypothesisRequest : PBRequest <NSCopying>
{
    double _arrivalDate;
    double _expirationDate;
    GEOMapItemStorage *_destinationLocation;
    int _transportType;
    struct {
        unsigned int arrivalDate:1;
        unsigned int expirationDate:1;
        unsigned int transportType:1;
    } _has;
}

@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) GEOMapItemStorage *destinationLocation; // @synthesize destinationLocation=_destinationLocation;
@property(nonatomic) double arrivalDate; // @synthesize arrivalDate=_arrivalDate;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasExpirationDate;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) _Bool hasDestinationLocation;
@property(nonatomic) _Bool hasArrivalDate;

@end
