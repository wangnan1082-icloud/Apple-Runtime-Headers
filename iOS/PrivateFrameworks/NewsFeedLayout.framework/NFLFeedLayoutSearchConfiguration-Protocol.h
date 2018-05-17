//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NFCopying.h"
#import "NSObject.h"

@class NFLRankedLayoutRequest, NSArray, NSString;

@protocol NFLFeedLayoutSearchConfiguration <NSObject, NFCopying>
@property(readonly, nonatomic) NSArray *allRowTypes;
@property(readonly, nonatomic) unsigned long long preferredTileInfoBatchSize;
@property(nonatomic, getter=isShowingAccessoryText) _Bool showAccessoryText;
- (Class)rankedLayoutGenerationOperationClassForRequest:(NFLRankedLayoutRequest *)arg1;
- (double)transitionRankFromRowTypeToNone:(unsigned long long)arg1;
- (double)transitionRankFromRowType:(unsigned long long)arg1 toRowType:(unsigned long long)arg2;
- (NSArray *)nextRowTypeCandidatesForRowType:(unsigned long long)arg1;
- (double)transitionRankFromNoneToRowType:(unsigned long long)arg1;
- (CDStruct_bfc4548b)subBatchLayoutSeedForRowType:(unsigned long long)arg1 withTileInfos:(NSArray *)arg2;
- (Class)subBatchLayoutTilingOperationClassForRowType:(unsigned long long)arg1;
- (unsigned long long)numberOfTileInfosUsedByRowType:(unsigned long long)arg1;
- (NSString *)descriptionForRowType:(unsigned long long)arg1;
- (_Bool)supportsTileInfoType:(unsigned long long)arg1;

@optional
- (NSArray *)preferredOrderingOfTileInfos:(NSArray *)arg1;
- (_Bool)mayRowType:(unsigned long long)arg1 useTileInfos:(NSArray *)arg2 withPreferedContentSizeCategory:(NSString *)arg3;
@end
