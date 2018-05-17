//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOClientACSuggestionEntry : PBCodable <NSCopying>
{
    double _contactRelevanceScore;
    double _fractionOfMatch;
    int _age;
    int _distanceToSuggestion;
    int _peopleSuggesterRank;
    int _serverEntryType;
    int _suggestionType;
    _Bool _matchedUsingAddress;
    _Bool _matchedUsingEventName;
    _Bool _matchedUsingLabel;
    _Bool _matchedUsingName;
    _Bool _matchedUsingOrganization;
    _Bool _shownToUser;
    struct {
        unsigned int contactRelevanceScore:1;
        unsigned int fractionOfMatch:1;
        unsigned int age:1;
        unsigned int distanceToSuggestion:1;
        unsigned int peopleSuggesterRank:1;
        unsigned int serverEntryType:1;
        unsigned int suggestionType:1;
        unsigned int matchedUsingAddress:1;
        unsigned int matchedUsingEventName:1;
        unsigned int matchedUsingLabel:1;
        unsigned int matchedUsingName:1;
        unsigned int matchedUsingOrganization:1;
        unsigned int shownToUser:1;
    } _has;
}

@property(nonatomic) int peopleSuggesterRank; // @synthesize peopleSuggesterRank=_peopleSuggesterRank;
@property(nonatomic) _Bool matchedUsingEventName; // @synthesize matchedUsingEventName=_matchedUsingEventName;
@property(nonatomic) _Bool matchedUsingLabel; // @synthesize matchedUsingLabel=_matchedUsingLabel;
@property(nonatomic) _Bool matchedUsingAddress; // @synthesize matchedUsingAddress=_matchedUsingAddress;
@property(nonatomic) _Bool matchedUsingOrganization; // @synthesize matchedUsingOrganization=_matchedUsingOrganization;
@property(nonatomic) _Bool matchedUsingName; // @synthesize matchedUsingName=_matchedUsingName;
@property(nonatomic) double contactRelevanceScore; // @synthesize contactRelevanceScore=_contactRelevanceScore;
@property(nonatomic) int distanceToSuggestion; // @synthesize distanceToSuggestion=_distanceToSuggestion;
@property(nonatomic) double fractionOfMatch; // @synthesize fractionOfMatch=_fractionOfMatch;
@property(nonatomic) _Bool shownToUser; // @synthesize shownToUser=_shownToUser;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsServerEntryType:(id)arg1;
- (id)serverEntryTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasServerEntryType;
@property(nonatomic) int serverEntryType; // @synthesize serverEntryType=_serverEntryType;
@property(nonatomic) _Bool hasAge;
@property(nonatomic) int age; // @synthesize age=_age;
@property(nonatomic) _Bool hasPeopleSuggesterRank;
@property(nonatomic) _Bool hasMatchedUsingEventName;
@property(nonatomic) _Bool hasMatchedUsingLabel;
@property(nonatomic) _Bool hasMatchedUsingAddress;
@property(nonatomic) _Bool hasMatchedUsingOrganization;
@property(nonatomic) _Bool hasMatchedUsingName;
@property(nonatomic) _Bool hasContactRelevanceScore;
@property(nonatomic) _Bool hasDistanceToSuggestion;
@property(nonatomic) _Bool hasFractionOfMatch;
@property(nonatomic) _Bool hasShownToUser;
- (int)StringAsSuggestionType:(id)arg1;
- (id)suggestionTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasSuggestionType;
@property(nonatomic) int suggestionType; // @synthesize suggestionType=_suggestionType;

@end
