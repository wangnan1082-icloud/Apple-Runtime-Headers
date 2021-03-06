//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchZeroKeywordEntry : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _categoryIndexs;
    unsigned int _dayOfWeek;
    unsigned int _hourOfDay;
    struct {
        unsigned int dayOfWeek:1;
        unsigned int hourOfDay:1;
    } _has;
}

@property(nonatomic) unsigned int hourOfDay; // @synthesize hourOfDay=_hourOfDay;
@property(nonatomic) unsigned int dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
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
- (void)setCategoryIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)categoryIndexAtIndex:(unsigned long long)arg1;
- (void)addCategoryIndex:(unsigned int)arg1;
- (void)clearCategoryIndexs;
@property(readonly, nonatomic) unsigned int *categoryIndexs;
@property(readonly, nonatomic) unsigned long long categoryIndexsCount;
@property(nonatomic) BOOL hasHourOfDay;
@property(nonatomic) BOOL hasDayOfWeek;
- (void)dealloc;

@end

