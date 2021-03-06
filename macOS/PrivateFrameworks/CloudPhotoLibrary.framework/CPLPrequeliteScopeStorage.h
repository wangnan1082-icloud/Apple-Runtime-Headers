//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPrequeliteStorage.h>

#import <CloudPhotoLibrary/CPLEngineScopeStorageImplementation-Protocol.h>

@class CPLPrequeliteTodoVar, CPLPrequeliteVariable, CPLPrequeliteVariableGroup, NSMutableSet, NSString, _CPLPrequeliteScopeBase, _CPLPrequeliteScopeSyncState;

@interface CPLPrequeliteScopeStorage : CPLPrequeliteStorage <CPLEngineScopeStorageImplementation>
{
    CPLPrequeliteVariable *_nextIndexVar;
    CPLPrequeliteVariable *_scopeListSyncAnchorVar;
    NSMutableSet *_modifiedVariables;
    _CPLPrequeliteScopeBase *_base;
    CPLPrequeliteVariable *_flagsVar;
    CPLPrequeliteVariable *_disabledDateVar;
    CPLPrequeliteVariable *_deleteDateVar;
    CPLPrequeliteVariable *_libraryInfoVar;
    CPLPrequeliteVariable *_lastLibraryInfoUpdateVar;
    CPLPrequeliteVariable *_transportScopeVar;
    _CPLPrequeliteScopeSyncState *_syncState;
    CPLPrequeliteVariable *_estimatedSizeVar;
    CPLPrequeliteVariable *_estimatedAssetCountVar;
    CPLPrequeliteVariable *_initialSyncDateVar;
    CPLPrequeliteTodoVar *_pushToTransportTodoVar;
    CPLPrequeliteTodoVar *_pullFromTransportTodoVar;
    CPLPrequeliteTodoVar *_clientNeedsToPullTodoVar;
    CPLPrequeliteTodoVar *_updateTransportTodoVar;
    CPLPrequeliteVariableGroup *_all;
    CPLPrequeliteVariableGroup *_libraryStateGroup;
    Class _transportGroupClass;
    BOOL _noteEndOfResetIfNecessary;
}

+ (id)_supportedScopeTypesWithOptions:(unsigned long long)arg1;
+ (BOOL)_scopeType:(long long)arg1 supportsClientSyncWithOptions:(unsigned long long)arg2;
- (void).cxx_destruct;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (BOOL)bumpPullFromTransportExpirationIntervalWithError:(id *)arg1;
- (id)filterForExcludedScopeIdentifiers:(id)arg1;
- (id)filterForIncludedScopeIdentifiers:(id)arg1;
- (void)_getLocalIndexes:(id *)arg1 cloudIndexes:(id *)arg2 forScopeIdentifiers:(id)arg3;
- (void)_noteEndOfResetIfNecessary;
- (unsigned long long)estimatedAssetCountForScope:(id)arg1;
- (unsigned long long)estimatedSizeForScope:(id)arg1;
- (BOOL)storeEstimatedSize:(unsigned long long)arg1 estimatedAssetCount:(unsigned long long)arg2 forScope:(id)arg3 error:(id *)arg4;
- (BOOL)storeSupportedFeatureVersionInLastSync:(unsigned long long)arg1 forScope:(id)arg2 error:(id *)arg3;
- (unsigned long long)supportedFeatureVersionInLastSyncForScope:(id)arg1;
- (BOOL)hasFinishedAFullSyncForScope:(id)arg1;
- (id)initialSyncDateForScope:(id)arg1;
- (struct NSData *)initialSyncAnchorForScope:(id)arg1;
- (BOOL)setInitialSyncAnchor:(struct NSData *)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)setHasFetchedInitialSyncAnchor:(BOOL)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)hasScopeFetchedInitialSyncAnchor:(id)arg1;
- (BOOL)setClassNameOfRecordsForInitialQuery:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (id)classNameOfRecordsForInitialQueryForScope:(id)arg1;
- (BOOL)storeTransientSyncAnchor:(struct NSData *)arg1 forScope:(id)arg2 error:(id *)arg3;
- (struct NSData *)transientSyncAnchorForScope:(id)arg1;
- (BOOL)discardStagedSyncAnchorWithScopeFilter:(id)arg1 error:(id *)arg2;
- (BOOL)discardStagedSyncAnchorForScope:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL hasStagedSyncAnchors;
- (BOOL)hasStagedSyncAnchorForScope:(id)arg1;
- (BOOL)commitSyncAnchorForScope:(id)arg1 error:(id *)arg2;
- (void)_markFirstSyncOfPrimaryAsSuccessfulWithScope:(id)arg1;
- (BOOL)resetSyncAnchorForScope:(id)arg1 error:(id *)arg2;
- (BOOL)setSyncAnchor:(struct NSData *)arg1 forScope:(id)arg2 error:(id *)arg3;
- (struct NSData *)syncAnchorForScope:(id)arg1 isCommitted:(char *)arg2;
- (BOOL)setDidDropSomeRecordsForScope:(id)arg1 error:(id *)arg2;
- (BOOL)didDropSomeRecordsForScope:(id)arg1;
- (BOOL)storeDownloadTransportGroup:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (id)downloadTransportGroupForScope:(id)arg1;
- (BOOL)storeUploadTransportGroup:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (id)uploadTransportGroupForScope:(id)arg1;
- (BOOL)resetSyncStateForScope:(id)arg1 error:(id *)arg2;
- (void)_discardCachedValuesForGroup:(id)arg1;
- (BOOL)_storeTransportGroup:(id)arg1 inColumnVariable:(id)arg2 forScope:(id)arg3 error:(id *)arg4;
- (id)_transportGroupForColumnVariable:(id)arg1 forScope:(id)arg2;
- (Class)_transportGroupClass;
- (id)lastLibraryInfoUpdateDateForScope:(id)arg1;
- (BOOL)setLibraryInfo:(id)arg1 forScope:(id)arg2 libraryInfoHasBeenUpdated:(char *)arg3 error:(id *)arg4;
- (id)libraryInfoForScope:(id)arg1;
- (BOOL)setTransportScope:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (id)transportScopeForScope:(id)arg1;
- (BOOL)setScopeNeedsUpdateFromTransport:(id)arg1 error:(id *)arg2;
- (id)librarySateForScope:(id)arg1;
- (BOOL)setDeleteDate:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (id)deleteDateForScope:(id)arg1;
- (BOOL)setDisabledDate:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (id)disabledDateForScope:(id)arg1;
- (BOOL)updateFlags:(id)arg1 forScope:(id)arg2 error:(id *)arg3;
- (id)flagsForScope:(id)arg1;
- (id)_valueForColumnVariable:(id)arg1 scope:(id)arg2;
- (BOOL)_storeValue:(id)arg1 forColumnVariable:(id)arg2 scope:(id)arg3 error:(id *)arg4;
- (void)_cacheValue:(id)arg1 forColumnVariable:(id)arg2 scope:(id)arg3;
- (BOOL)storeScopeListSyncAnchor:(struct NSData *)arg1 error:(id *)arg2;
- (struct NSData *)scopeListSyncAnchor;
- (id)primaryScope;
- (id)validCloudIndexes;
- (id)validLocalIndexes;
- (id)scopeWithStableIndex:(long long)arg1;
- (id)scopeWithCloudIndex:(long long)arg1;
- (id)scopeWithLocalIndex:(long long)arg1;
- (id)scopeWithIdentifier:(id)arg1;
- (id)_scopeWithQuery:(id)arg1;
- (BOOL)bumpStableIndexForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)bumpCloudIndexForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)bumpLocalIndexForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (long long)_bumpIndexWithError:(id *)arg1;
- (BOOL)setScopeType:(long long)arg1 forScope:(id)arg2 error:(id *)arg3;
- (BOOL)deleteScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)addScopeWithIdentifier:(id)arg1 scopeType:(long long)arg2 error:(id *)arg3;
- (BOOL)doesScopeNeedToUpdateTransport:(id)arg1;
- (BOOL)setScope:(id)arg1 hasCompletedTransportUpdate:(long long)arg2 error:(id *)arg3;
- (long long)transportUpdateTaskForScope:(id)arg1;
- (BOOL)setScopeNeedsToUpdateTransport:(id)arg1 error:(id *)arg2;
- (BOOL)hasScopesNeedingToUpdateTransport;
- (id)enumeratorForScopesNeedingToUpdateTransport;
- (BOOL)doesScopeNeedToBePulledByClient:(id)arg1;
- (BOOL)setScopeNeedsToBePulledByClient:(id)arg1 error:(id *)arg2;
- (BOOL)setScope:(id)arg1 hasCompletedClientNeedsToPullTask:(long long)arg2 error:(id *)arg3;
- (long long)clientNeedsToPullTaskForScope:(id)arg1;
- (id)enumeratorForScopesNeedingToBePulledByClientWithMaximumCount:(unsigned long long)arg1;
- (BOOL)setPullFromTransportExpirationInterval:(double)arg1 scope:(id)arg2 error:(id *)arg3;
- (BOOL)doesScopeNeedToPullChangesFromTransport:(id)arg1;
- (BOOL)setScope:(id)arg1 hasCompletedPullFromTransportTask:(long long)arg2 error:(id *)arg3;
- (long long)pullFromTransportTaskForScope:(id)arg1;
- (BOOL)setAllScopesHasChangesToPullFromTransportWithError:(id *)arg1;
- (BOOL)setScopeHasChangesToPullFromTransport:(id)arg1 error:(id *)arg2;
- (BOOL)hasScopesNeedingToPullChangesFromTransport;
- (id)enumeratorForScopesNeedingToPullChangesFromTransport;
- (BOOL)doesScopeNeedToPushChangesToTransport:(id)arg1;
- (BOOL)setScope:(id)arg1 hasCompletedPushToTransportTask:(long long)arg2 error:(id *)arg3;
- (long long)pushToTransportTaskForScope:(id)arg1;
- (BOOL)setScopeHasChangesToPushToTransport:(id)arg1 error:(id *)arg2;
- (BOOL)hasScopesNeedingToPushChangesToTransport;
- (id)enumeratorForScopesNeedingToPushChangesToTransport;
- (BOOL)hasScopesNeedingToPushHighPriorityChangesToTransport;
- (id)enumeratorForScopesNeedingToPushHighPriorityChangesToTransport;
- (BOOL)forcePushToTransportForActiveScopesWithError:(id *)arg1;
- (BOOL)forceIdentifyUknownScopesWithError:(id *)arg1;
- (id)enumeratorForScopesNeedingUpdateFromTransport;
- (id)enumeratorForScopesIncludeInactive:(BOOL)arg1;
- (BOOL)_setScope:(id)arg1 hasCompletedTaskItem:(long long)arg2 task:(id)arg3 error:(id *)arg4;
- (long long)_taskItemForScope:(id)arg1 task:(id)arg2;
- (BOOL)_setScope:(id)arg1 hasTaskTodo:(id)arg2 error:(id *)arg3;
- (id)statusDictionary;
- (id)recordsDesignation;
- (BOOL)upgradeScopesWithNewLibraryOption:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)_transferValueFromVariable:(id)arg1 type:(id)arg2 ofStorage:(id)arg3 toColumnVariable:(id)arg4 transformer:(CDUnknownBlockType)arg5;
- (BOOL)initializeStorage;
- (BOOL)_createInitialPrimarySyncScope;
- (BOOL)_addScope:(id)arg1 error:(id *)arg2;
- (double)_minimalPullFromTranportExpirationInterval;
- (BOOL)_scopeTypeSupportClientSync:(long long)arg1;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

