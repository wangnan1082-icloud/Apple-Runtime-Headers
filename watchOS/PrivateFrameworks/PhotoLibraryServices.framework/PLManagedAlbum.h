//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/_PLManagedAlbum.h>

#import <PhotoLibraryServices/PLCloudDeletable-Protocol.h>
#import <PhotoLibraryServices/PLSearchableAssetCollection-Protocol.h>
#import <PhotoLibraryServices/PLUserEditableAlbumProtocol-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PLManagedAlbum : _PLManagedAlbum <PLSearchableAssetCollection, PLUserEditableAlbumProtocol, PLCloudDeletable>
{
    _Bool _albumShouldBeAutomaticallyDeleted;
    _Bool _needsPersistenceUpdate;
}

+ (void)clearAssetOrderByAbumUUIDs;
+ (id)assetOrderByAbumUUIDs;
+ (id)pathToAssetAlbumOrderStructure;
+ (id)keyPathsForValuesAffectingVideosCount;
+ (id)keyPathsForValuesAffectingPhotosCount;
+ (id)keyPathsForValuesAffectingApproximateCount;
+ (id)validKindsForPersistence;
+ (id)cloudUUIDKeyForDeletion;
+ (int)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)childKeyForOrdering;
+ (id)albumSupportsAssetOrderKeysPredicate;
+ (id)searchIndexAllowedPredicate;
+ (id)baseSearchIndexPredicate;
@property(nonatomic) _Bool needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
@property(nonatomic) _Bool albumShouldBeAutomaticallyDeleted; // @synthesize albumShouldBeAutomaticallyDeleted=_albumShouldBeAutomaticallyDeleted;
- (void)refreshAssets;
- (id)filteredIndexesForPredicate:(id)arg1;
- (void)addAssetUsingiTunesAlbumOrder:(id)arg1;
- (void)sortAssetsUsingiTunesAlbumOrder;
- (id)_assetOrderByAssetUUID;
- (id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2;
- (void)removePersistedFileSystemData;
- (void)persistMetadataToFileSystem;
- (void)recalculateCachedCounts;
- (void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2;
- (void)removeAssetsAtIndexes:(id)arg1;
- (void)insertAssets:(id)arg1 atIndexes:(id)arg2;
@property(readonly, nonatomic) unsigned int videosCount;
@property(readonly, nonatomic) unsigned int photosCount;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) unsigned int assetsCount;
@property(readonly, nonatomic) unsigned int approximateCount;
- (unsigned int)_albumStandInCount;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (id)_keysToBeObserved;
- (void)_updateKeyAssetsIfNeeded:(id)arg1;
- (void)updateKeyAssetsIfNeeded;
- (id)_expectedKeyAssets:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeInternalUserEditableAssetsAtIndexes:(id)arg1;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4;
- (void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2;
- (id)internalUserEditableAssetsAtIndexes:(id)arg1;
- (void)getInternalUserEditableAssets:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectInInternalUserEditableAssetsAtIndex:(unsigned int)arg1;
- (unsigned int)indexInInternalUserEditableAssetsOfObject:(id)arg1;
- (unsigned int)countOfInternalUserEditableAssets;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *userEditableAssets;
- (void)didSave;
- (void)willSave;
- (_Bool)isValidKindForPersistence;
@property(readonly, copy) NSString *cloudUUIDForDeletion;
@property(readonly) int cloudDeletionType;
- (void)prepareForDeletion;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
- (id)childKeyForOrdering;
- (_Bool)supportsAssetOrderKeys;
- (_Bool)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1;
- (_Bool)canPerformEditOperation:(unsigned int)arg1;
- (id)descriptionOfAssetOrderValues;
- (id)assetUUIDsForPreviewWithCount:(unsigned int)arg1;
- (unsigned int)searchIndexCategory;
- (id)searchIndexContents;
@property(readonly, nonatomic) NSDate *keyAssetCreationDate;
@property(readonly, nonatomic) NSString *keyAssetUUID;
@property(readonly, nonatomic) unsigned int numberOfAssets;
@property(readonly, nonatomic) NSDate *searchableEndDate;
@property(readonly, nonatomic) NSDate *searchableStartDate;
@property(readonly, nonatomic) NSString *subtitle;

// Remaining properties
@property(retain, nonatomic) NSSet *assetOrders; // @dynamic assetOrders;
@property(retain, nonatomic) NSOrderedSet *assets; // @dynamic assets;
@property(nonatomic) unsigned int batchSize;
@property(readonly, nonatomic) _Bool canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) _Bool canShowAvalancheStacks;
@property(readonly, nonatomic) _Bool canShowComments;
@property(nonatomic) short cloudDeleteState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSDate *endDate;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(nonatomic) _Bool hasUnseenContentBoolValue;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) NSString *importSessionID;
@property(readonly, nonatomic) _Bool isCameraAlbum;
@property(readonly, nonatomic) _Bool isCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isFamilyCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) _Bool isInTrash;
@property(readonly, nonatomic) _Bool isLibrary;
@property(readonly, nonatomic) _Bool isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isPanoramasAlbum;
@property(readonly, nonatomic) _Bool isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isRecentlyAddedAlbum;
@property(readonly, nonatomic) _Bool isStandInAlbum;
@property(readonly, nonatomic) _Bool isUserLibraryAlbum;
@property(retain, nonatomic) PLManagedAsset *keyAsset;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) int kindValue;
@property(readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, copy, nonatomic) NSString *name;
@property(nonatomic) int pendingItemsCount;
@property(nonatomic) int pendingItemsType;
@property(readonly, retain, nonatomic) UIImage *posterImage;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property(readonly, nonatomic) _Bool shouldDeleteWhenEmpty;
@property(retain, nonatomic) NSDictionary *slideshowSettings;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
@property(readonly, retain, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property(readonly, retain, nonatomic) NSString *title;
@property(readonly, retain, nonatomic) NSString *uuid;

@end

