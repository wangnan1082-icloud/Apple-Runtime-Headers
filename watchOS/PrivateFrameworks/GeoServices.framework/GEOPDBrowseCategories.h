//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrowseCategories : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_browseCategorys;
}

+ (Class)browseCategoryType;
@property(retain, nonatomic) NSMutableArray *browseCategorys; // @synthesize browseCategorys=_browseCategorys;
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
- (id)browseCategoryAtIndex:(unsigned int)arg1;
- (unsigned int)browseCategorysCount;
- (void)addBrowseCategory:(id)arg1;
- (void)clearBrowseCategorys;

@end

