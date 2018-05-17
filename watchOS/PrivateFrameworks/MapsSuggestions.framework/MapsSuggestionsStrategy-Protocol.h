//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MapsSuggestionsObject.h"

@class MapsSuggestionsEntry, MapsSuggestionsManager;

@protocol MapsSuggestionsStrategy <MapsSuggestionsObject>
@property(nonatomic) __weak MapsSuggestionsManager *manager;
- (void)clearData;
- (void)removeAllDedupers;
- (void)addDeduper:(id <MapsSuggestionsDeduper>)arg1;
- (void)removeAllImprovers;
- (void)addImprover:(id <MapsSuggestionsImprover>)arg1;
- (void)removeAllFilters;
- (void)removeFilter:(id <MapsSuggestionsFilter>)arg1;
- (void)addFilter:(id <MapsSuggestionsFilter>)arg1;
- (_Bool)shouldKeepEntry:(MapsSuggestionsEntry *)arg1;
- (struct NSArray *)topSuggestionsWithSourceEntries:(struct NSDictionary *)arg1 error:(id *)arg2;
@end
