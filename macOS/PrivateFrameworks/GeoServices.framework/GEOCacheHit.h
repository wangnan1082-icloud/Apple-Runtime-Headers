//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOCacheHit : PBCodable <NSCopying>
{
    unsigned int _bytes;
    unsigned int _count;
    int _requestorType;
    int _tileSourceType;
    struct {
        unsigned int bytes:1;
        unsigned int count:1;
        unsigned int requestorType:1;
        unsigned int tileSourceType:1;
    } _has;
}

@property(nonatomic) unsigned int bytes; // @synthesize bytes=_bytes;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasBytes;
@property(nonatomic) BOOL hasCount;
- (int)StringAsTileSourceType:(id)arg1;
- (id)tileSourceTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTileSourceType;
@property(nonatomic) int tileSourceType; // @synthesize tileSourceType=_tileSourceType;
- (int)StringAsRequestorType:(id)arg1;
- (id)requestorTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasRequestorType;
@property(nonatomic) int requestorType; // @synthesize requestorType=_requestorType;

@end

