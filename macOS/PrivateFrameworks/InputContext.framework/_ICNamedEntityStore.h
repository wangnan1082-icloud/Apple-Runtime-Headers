//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet, _ICTransientLexicon;

@interface _ICNamedEntityStore : NSObject
{
    NSMutableOrderedSet *_recentNamedEntityQueue;
    _ICTransientLexicon *_wordLexicon;
    _ICTransientLexicon *_phraseLexicon;
    NSArray *_lexicons;
    CDUnknownBlockType _wordFilteringBlock;
    CDUnknownBlockType _filteringBlock;
}

+ (id)tokenize:(id)arg1;
+ (id)lexiconViews;
@property(retain, nonatomic) NSArray *lexicons; // @synthesize lexicons=_lexicons;
@property(copy, nonatomic) CDUnknownBlockType filteringBlock; // @synthesize filteringBlock=_filteringBlock;
- (void).cxx_destruct;
- (void)removeAllEntries;
- (void)reloadRecents;
- (void)addEntity:(id)arg1 isDurable:(BOOL)arg2;
- (BOOL)isValidNamedEntity:(id)arg1 explanation:(id *)arg2;
- (BOOL)areStringCharactersWhitelisted:(id)arg1;
- (struct USet *)exemplarSetForSupportedLocales;
- (void)updateQueue:(id)arg1 newEntity:(id)arg2;
- (void)removeEntry:(id)arg1 tokenizedNewEntity:(id)arg2;
- (void)addEntry:(id)arg1 tokenizedNewEntity:(id)arg2;
- (id)filterWord:(id)arg1;
- (BOOL)isFirstCandidateBetter:(id)arg1 than:(id)arg2;
- (id)init;

@end

