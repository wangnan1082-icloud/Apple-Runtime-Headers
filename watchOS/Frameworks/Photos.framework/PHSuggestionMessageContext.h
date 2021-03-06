//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDateInterval, NSMutableDictionary;

@interface PHSuggestionMessageContext : NSObject
{
    NSArray *_messages;
    NSDateInterval *_dateInterval;
    unsigned int _numberOfParticipants;
    NSArray *_cnParticipants;
    NSArray *_phParticipants;
    NSMutableDictionary *_suggestionMatchingResultsBySuggestionIdentifier;
    NSArray *_resolvedParticipants;
    NSArray *_messageTokens;
}

@property(retain, nonatomic) NSArray *messageTokens; // @synthesize messageTokens=_messageTokens;
@property(retain, nonatomic) NSArray *resolvedParticipants; // @synthesize resolvedParticipants=_resolvedParticipants;
@property(readonly, nonatomic) NSMutableDictionary *suggestionMatchingResultsBySuggestionIdentifier; // @synthesize suggestionMatchingResultsBySuggestionIdentifier=_suggestionMatchingResultsBySuggestionIdentifier;
@property(readonly, nonatomic) NSArray *phParticipants; // @synthesize phParticipants=_phParticipants;
@property(readonly, nonatomic) NSArray *cnParticipants; // @synthesize cnParticipants=_cnParticipants;
@property(readonly, nonatomic) unsigned int numberOfParticipants; // @synthesize numberOfParticipants=_numberOfParticipants;
@property(readonly, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) NSArray *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (id)_mostRecentSuggestionFromSuggestions:(id)arg1;
- (id)confidentMatchSuggestionUsingStrategy:(unsigned int)arg1;
- (id)matchingResultWithSuggestion:(id)arg1;
- (void)matchWithSuggestions:(id)arg1;
- (id)_suggestionsMatchingType:(int)arg1;
- (id)detailedDescription;
- (id)description;
- (void)setPhParticipants:(id)arg1;
- (void)setCnParticipants:(id)arg1;
- (id)initWithMessages:(id)arg1 participantsFromPersons:(id)arg2;
- (id)initWithMessages:(id)arg1 participantsFromContacts:(id)arg2;
- (id)initWithMessages:(id)arg1;

@end

