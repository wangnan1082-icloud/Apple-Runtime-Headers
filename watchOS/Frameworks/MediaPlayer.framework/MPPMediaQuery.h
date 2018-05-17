//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface MPPMediaQuery : PBCodable <NSCopying>
{
    int _entityOrder;
    NSMutableArray *_filterPredicates;
    int _groupingType;
    NSMutableArray *_staticEntityIdentifiers;
    int _staticEntityType;
    _Bool _filteringDisabled;
    _Bool _includeNonLibraryEntities;
    struct {
        unsigned int entityOrder:1;
        unsigned int groupingType:1;
        unsigned int staticEntityType:1;
        unsigned int filteringDisabled:1;
        unsigned int includeNonLibraryEntities:1;
    } _has;
}

+ (Class)staticEntityIdentifiersType;
+ (Class)filterPredicatesType;
@property(nonatomic) _Bool includeNonLibraryEntities; // @synthesize includeNonLibraryEntities=_includeNonLibraryEntities;
@property(retain, nonatomic) NSMutableArray *staticEntityIdentifiers; // @synthesize staticEntityIdentifiers=_staticEntityIdentifiers;
@property(nonatomic) _Bool filteringDisabled; // @synthesize filteringDisabled=_filteringDisabled;
@property(retain, nonatomic) NSMutableArray *filterPredicates; // @synthesize filterPredicates=_filterPredicates;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIncludeNonLibraryEntities;
- (int)StringAsStaticEntityType:(id)arg1;
- (id)staticEntityTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasStaticEntityType;
@property(nonatomic) int staticEntityType; // @synthesize staticEntityType=_staticEntityType;
- (id)staticEntityIdentifiersAtIndex:(unsigned int)arg1;
- (unsigned int)staticEntityIdentifiersCount;
- (void)addStaticEntityIdentifiers:(id)arg1;
- (void)clearStaticEntityIdentifiers;
- (int)StringAsEntityOrder:(id)arg1;
- (id)entityOrderAsString:(int)arg1;
@property(nonatomic) _Bool hasEntityOrder;
@property(nonatomic) int entityOrder; // @synthesize entityOrder=_entityOrder;
@property(nonatomic) _Bool hasFilteringDisabled;
- (int)StringAsGroupingType:(id)arg1;
- (id)groupingTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupingType;
@property(nonatomic) int groupingType; // @synthesize groupingType=_groupingType;
- (id)filterPredicatesAtIndex:(unsigned int)arg1;
- (unsigned int)filterPredicatesCount;
- (void)addFilterPredicates:(id)arg1;
- (void)clearFilterPredicates;

@end
