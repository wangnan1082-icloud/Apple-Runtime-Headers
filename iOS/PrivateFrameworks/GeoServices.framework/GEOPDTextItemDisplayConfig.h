//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextItemDisplayConfig : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _maxItemsPerRow;
    unsigned int _maxRowCount;
    struct {
        unsigned int maxItemsPerRow:1;
        unsigned int maxRowCount:1;
    } _has;
}

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
@property(nonatomic) _Bool hasMaxRowCount;
@property(nonatomic) unsigned int maxRowCount; // @synthesize maxRowCount=_maxRowCount;
@property(nonatomic) _Bool hasMaxItemsPerRow;
@property(nonatomic) unsigned int maxItemsPerRow; // @synthesize maxItemsPerRow=_maxItemsPerRow;

@end

