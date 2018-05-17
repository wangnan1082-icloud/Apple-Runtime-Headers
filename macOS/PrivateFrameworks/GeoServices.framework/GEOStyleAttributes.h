//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, PBUnknownFields;

@interface GEOStyleAttributes : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _customIconId;
    NSMutableArray *_attributes;
    struct {
        unsigned int customIconId:1;
    } _has;
}

+ (Class)attributeType;
+ (id)attributesForTransitSystem:(id)arg1;
+ (id)attributesForTransitLine:(id)arg1;
@property(nonatomic) unsigned long long customIconId; // @synthesize customIconId=_customIconId;
@property(retain, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
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
@property(nonatomic) BOOL hasCustomIconId;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributesCount;
- (void)addAttribute:(id)arg1;
- (void)clearAttributes;
- (id)initWithGEOFeatureStyleAttributes:(id)arg1;

@end
