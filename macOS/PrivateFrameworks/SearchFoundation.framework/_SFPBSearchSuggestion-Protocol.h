//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBGraphicalFloat, _SFPBSearchSuggestion;

@protocol _SFPBSearchSuggestion <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) BOOL hasFbr;
@property(copy, nonatomic) NSString *fbr;
@property(readonly, nonatomic) BOOL hasPreviouslyEngaged;
@property(nonatomic) BOOL previouslyEngaged;
@property(readonly, nonatomic) BOOL hasBundleIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) BOOL hasTopicIdentifier;
@property(copy, nonatomic) NSString *topicIdentifier;
@property(copy, nonatomic) NSArray *duplicateSuggestions;
@property(readonly, nonatomic) BOOL hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) BOOL hasScore;
@property(retain, nonatomic) _SFPBGraphicalFloat *score;
@property(readonly, nonatomic) BOOL hasQuery;
@property(copy, nonatomic) NSString *query;
@property(readonly, nonatomic) BOOL hasSuggestion;
@property(copy, nonatomic) NSString *suggestion;
@property(readonly, nonatomic) BOOL hasIdentifier;
@property(copy, nonatomic) NSString *identifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBSearchSuggestion *)duplicateSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateSuggestionsCount;
- (void)addDuplicateSuggestions:(_SFPBSearchSuggestion *)arg1;
- (void)clearDuplicateSuggestions;
@end
