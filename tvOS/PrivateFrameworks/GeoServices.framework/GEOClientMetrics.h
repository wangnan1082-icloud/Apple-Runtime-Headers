//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOClientNetworkMetrics, PBUnknownFields;

@interface GEOClientMetrics : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOClientNetworkMetrics *_networkMetrics;
    int _responseSource;
    struct {
        unsigned int responseSource:1;
    } _has;
}

@property(retain, nonatomic) GEOClientNetworkMetrics *networkMetrics; // @synthesize networkMetrics=_networkMetrics;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasNetworkMetrics;
- (int)StringAsResponseSource:(id)arg1;
- (id)responseSourceAsString:(int)arg1;
@property(nonatomic) _Bool hasResponseSource;
@property(nonatomic) int responseSource; // @synthesize responseSource=_responseSource;

@end

