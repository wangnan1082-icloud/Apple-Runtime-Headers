//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOPDResultDetourInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _detourDistance;
    int _detourTime;
    unsigned int _distanceToPlace;
    unsigned int _timeToPlace;
    struct {
        unsigned int detourDistance:1;
        unsigned int detourTime:1;
        unsigned int distanceToPlace:1;
        unsigned int timeToPlace:1;
    } _has;
}

@property(nonatomic) unsigned int distanceToPlace; // @synthesize distanceToPlace=_distanceToPlace;
@property(nonatomic) int detourDistance; // @synthesize detourDistance=_detourDistance;
@property(nonatomic) unsigned int timeToPlace; // @synthesize timeToPlace=_timeToPlace;
@property(nonatomic) int detourTime; // @synthesize detourTime=_detourTime;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDistanceToPlace;
@property(nonatomic) _Bool hasDetourDistance;
@property(nonatomic) _Bool hasTimeToPlace;
@property(nonatomic) _Bool hasDetourTime;

@end

