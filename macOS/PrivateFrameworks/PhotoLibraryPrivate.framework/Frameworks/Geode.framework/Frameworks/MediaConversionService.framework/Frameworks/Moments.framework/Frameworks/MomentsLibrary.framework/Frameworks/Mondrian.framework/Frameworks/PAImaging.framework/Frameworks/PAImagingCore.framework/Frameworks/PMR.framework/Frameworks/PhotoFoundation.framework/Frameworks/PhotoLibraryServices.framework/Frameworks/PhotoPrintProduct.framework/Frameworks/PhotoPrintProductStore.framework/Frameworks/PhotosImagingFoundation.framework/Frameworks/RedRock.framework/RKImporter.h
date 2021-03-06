//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RedRock/PFResourceAccessClient-Protocol.h>
#import <RedRock/PFResourceAccessClientShutdownConfirmation-Protocol.h>

@class LiRidList, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PFDispatchQueue, RKImportContext;
@protocol OS_dispatch_group;

@interface RKImporter : NSObject <PFResourceAccessClient, PFResourceAccessClientShutdownConfirmation>
{
    PFDispatchQueue *_batchQueue;
    PFDispatchQueue *_batchProcessingQueue;
    unsigned long long _enqueuedBatches;
    unsigned long long _enqueuedDerivatives;
    PFDispatchQueue *_enqueue;
    PFDispatchQueue *_derivativeQueue;
    NSObject<OS_dispatch_group> *_processingGroup;
    RKImportContext *_context;
    NSMutableSet *_masterFilePaths;
    NSMutableDictionary *_burstVersions;
    NSMutableDictionary *_groupedVersions;
    NSMutableArray *_freeSpaceRequests;
    NSMutableArray *_versionsToRender;
    NSMutableArray *_versionUuidsToAnalyze;
    NSMutableDictionary *_folderByFolderPath;
    NSMutableDictionary *_folderPathByUuid;
    NSMutableDictionary *_albumByAlbumPath;
    NSMutableArray *_createdBatchFolders;
    LiRidList *_importedVersionIds;
    NSMutableDictionary *_transactionUuidForContainerUuid;
    unsigned long long _copyMethod;
}

+ (void)dumpMetadataForData:(id)arg1;
+ (void)dumpImageData:(id)arg1;
+ (void)runContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long copyMethod; // @synthesize copyMethod=_copyMethod;
@property(retain, nonatomic) NSMutableDictionary *transactionUuidForContainerUuid; // @synthesize transactionUuidForContainerUuid=_transactionUuidForContainerUuid;
@property(retain, nonatomic) LiRidList *importedVersionIds; // @synthesize importedVersionIds=_importedVersionIds;
@property(retain, nonatomic) NSMutableArray *createdBatchFolders; // @synthesize createdBatchFolders=_createdBatchFolders;
@property(retain, nonatomic) NSMutableDictionary *albumByAlbumPath; // @synthesize albumByAlbumPath=_albumByAlbumPath;
@property(retain, nonatomic) NSMutableDictionary *folderPathByUuid; // @synthesize folderPathByUuid=_folderPathByUuid;
@property(retain, nonatomic) NSMutableDictionary *folderByFolderPath; // @synthesize folderByFolderPath=_folderByFolderPath;
@property(retain, nonatomic) NSMutableArray *versionUuidsToAnalyze; // @synthesize versionUuidsToAnalyze=_versionUuidsToAnalyze;
@property(retain, nonatomic) NSMutableArray *versionsToRender; // @synthesize versionsToRender=_versionsToRender;
@property(retain, nonatomic) NSMutableArray *freeSpaceRequests; // @synthesize freeSpaceRequests=_freeSpaceRequests;
@property(retain, nonatomic) NSMutableDictionary *groupedVersions; // @synthesize groupedVersions=_groupedVersions;
@property(retain, nonatomic) NSMutableDictionary *burstVersions; // @synthesize burstVersions=_burstVersions;
@property(retain, nonatomic) NSMutableSet *masterFilePaths; // @synthesize masterFilePaths=_masterFilePaths;
@property(retain, nonatomic) RKImportContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *processingGroup; // @synthesize processingGroup=_processingGroup;
@property(retain, nonatomic) PFDispatchQueue *derivativeQueue; // @synthesize derivativeQueue=_derivativeQueue;
@property(retain, nonatomic) PFDispatchQueue *enqueue; // @synthesize enqueue=_enqueue;
@property(nonatomic) unsigned long long enqueuedDerivatives; // @synthesize enqueuedDerivatives=_enqueuedDerivatives;
@property(nonatomic) unsigned long long enqueuedBatches; // @synthesize enqueuedBatches=_enqueuedBatches;
@property(retain, nonatomic) PFDispatchQueue *batchProcessingQueue; // @synthesize batchProcessingQueue=_batchProcessingQueue;
@property(retain, nonatomic) PFDispatchQueue *batchQueue; // @synthesize batchQueue=_batchQueue;
- (void).cxx_destruct;
- (id)clientId;
- (void)resourceWillShutdown:(id)arg1;
- (BOOL)resourceCanShutdown:(id)arg1;
- (id)alertDescriptionForMultipleTasks;
- (id)alertMessageForSingleTask;
- (id)alertTitleForSingleTask;
- (id)writeEmbeddedJPEGDataAsLargePreviewWithData:(id)arg1 forRecord:(id)arg2;
- (void)writePreviewForImportRecord:(id)arg1;
- (id)progressDescription:(id)arg1;
- (double)progress:(id)arg1;
- (void)endWork:(id)arg1;
- (void)endBatch:(id)arg1 context:(id)arg2 importRecord:(id)arg3;
- (id)ensureContainersExistForAlbumPath:(id)arg1 rootPath:(id)arg2 context:(id)arg3;
- (id)relativePathComponentsForAlbumPath:(id)arg1 fromRootPath:(id)arg2;
- (void)processAsset:(id)arg1 context:(id)arg2 batch:(id)arg3 atEnd:(CDUnknownBlockType)arg4;
- (void)beginWork:(id)arg1;
- (BOOL)handleErrorsForRecord:(id)arg1 context:(id)arg2 batch:(id)arg3 file:(char *)arg4 line:(int)arg5;
- (void)createVolumeIfNeededForContext:(id)arg1;
- (id)readOriginalData:(id)arg1 importRecord:(id)arg2;
- (void)generateFingerprintForMaster:(id)arg1 fromData:(id)arg2 timers:(id)arg3;
- (BOOL)checkForExistingLivePhotoCounterpartAndIfNecessaryPairMaster:(id)arg1 importRecord:(id)arg2;
- (void)validateSourceForAsset:(id)arg1 context:(id)arg2;
- (id)determineMasterPathForFileName:(id)arg1 versionName:(id)arg2 sourcePath:(id)arg3 importRecord:(id)arg4 context:(id)arg5;
- (id)makeUniquePathForFile:(id)arg1 inFolder:(id)arg2 error:(id *)arg3;
- (id)versionNameForAsset:(id)arg1 context:(id)arg2;
- (BOOL)isContextDone:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

