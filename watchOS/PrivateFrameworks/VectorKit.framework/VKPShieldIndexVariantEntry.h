//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPShieldIndexVariantEntry : PBCodable <NSCopying>
{
    NSMutableArray *_entries;
    NSMutableArray *_textEntries;
    int _variantType;
    struct {
        unsigned int variantType:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *textEntries; // @synthesize textEntries=_textEntries;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)textEntriesAtIndex:(unsigned int)arg1;
- (unsigned int)textEntriesCount;
- (void)addTextEntries:(id)arg1;
- (void)clearTextEntries;
- (id)entriesAtIndex:(unsigned int)arg1;
- (unsigned int)entriesCount;
- (void)addEntries:(id)arg1;
- (void)clearEntries;
@property(nonatomic) _Bool hasVariantType;
@property(nonatomic) int variantType; // @synthesize variantType=_variantType;
- (void)dealloc;

@end
