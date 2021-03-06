//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Moments/MTModelInstanceStoring-Protocol.h>

@class LiTransactionContext, NSMutableDictionary, NSSet, NSString;

@interface MTCachingModelInstanceStore : NSObject <MTModelInstanceStoring>
{
    NSMutableDictionary *_moments;
    NSMutableDictionary *_collections;
    NSMutableDictionary *_years;
    NSMutableDictionary *_versions;
    LiTransactionContext *_transactionContext;
}

- (void).cxx_destruct;
- (id)fetchYearForYearUuid:(id)arg1 inLibrary:(id)arg2;
- (id)fetchCollectionForCollectionUuid:(id)arg1 inLibrary:(id)arg2;
- (id)fetchMomentsForYearUuid:(id)arg1 inLibrary:(id)arg2;
- (id)fetchMomentsForCollectionUuid:(id)arg1 inLibrary:(id)arg2;
- (id)fetchMomentsForContainerUuid:(id)arg1 containerUuidKeyPath:(id)arg2 inLibrary:(id)arg3;
- (id)fetchMomentForMomentUuid:(id)arg1 inLibrary:(id)arg2;
- (id)fetchVersionsForMomentUuid:(id)arg1 inLibrary:(id)arg2;
- (void)removeModels:(id)arg1 fromCache:(id)arg2;
- (void)addModels:(id)arg1 toCache:(id)arg2 inserted:(BOOL)arg3;
- (void)clearAllVersions;
- (void)removeVersions:(id)arg1;
- (void)addVersions:(id)arg1 inserted:(BOOL)arg2;
- (id)allVersions;
- (id)versionForKey:(id)arg1;
- (void)clearAllYears;
- (void)removeYears:(id)arg1;
- (void)addYears:(id)arg1 inserted:(BOOL)arg2;
- (id)allYears;
- (id)yearForKey:(id)arg1;
- (void)clearAllCollections;
- (void)removeCollections:(id)arg1;
- (void)addCollections:(id)arg1 inserted:(BOOL)arg2;
- (id)allCollections;
- (id)collectionForKey:(id)arg1;
- (void)clearAllMoments;
- (void)removeMoments:(id)arg1;
- (void)addMoments:(id)arg1 inserted:(BOOL)arg2;
- (id)allMoments;
- (id)momentForKey:(id)arg1;
- (void)markDeletedModel:(id)arg1;
@property(readonly, nonatomic) NSSet *deletedModels;
@property(readonly, nonatomic) NSSet *updatedModels;
@property(readonly, nonatomic) NSSet *insertedModels;
@property(readonly, nonatomic) BOOL hasChanges;
@property(readonly, nonatomic) BOOL shouldCache;
- (BOOL)commitChangesWithError:(id *)arg1;
@property(readonly, copy) NSString *description;
- (void)clearAll;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

