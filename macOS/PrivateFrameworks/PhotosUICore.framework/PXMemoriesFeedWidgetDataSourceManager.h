//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXMemoriesFeedDataSourceManagerBase.h>

@interface PXMemoriesFeedWidgetDataSourceManager : PXMemoriesFeedDataSourceManagerBase
{
    unsigned long long _maxCount;
}

@property(nonatomic) unsigned long long maxCount; // @synthesize maxCount=_maxCount;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)_regenerateMemories;
- (id)_generateEntryFromMemories:(id)arg1;
- (void)generateAdditionalEntriesIfPossible;
- (void)startGeneratingMemories;
- (id)fetchOptions;
- (unsigned long long)_extendedMaxCount;

@end

