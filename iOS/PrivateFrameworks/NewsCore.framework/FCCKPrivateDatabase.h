//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKDatabase, FCCKPrivateDatabaseSchema, FCNetworkBehaviorMonitor, NSArray, NSData, NSDate, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface FCCKPrivateDatabase : NSObject
{
    _Bool _encryptionEnabled;
    _Bool _beganInitialStartUp;
    _Bool _finishedInitialStartUp;
    _Bool _activelyStartingUp;
    id <FCCKDatabaseEncryptionDelegate> _encryptionDelegate;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    NSData *_encryptionKey;
    NSData *_secureEncryptionKey;
    CKDatabase *_database;
    CKDatabase *_databaseWithZoneWidePCS;
    CKDatabase *_secureDatabase;
    NSArray *_containers;
    FCCKPrivateDatabaseSchema *_schema;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_serialOperationQueue;
    NSOperationQueue *_noPreflightOperationQueue;
    NSArray *_middleware;
    NSArray *_remainingStartUpMiddleware;
    NSArray *_operationMiddleware;
    NSArray *_recordMiddleware;
    NSObject<OS_dispatch_group> *_initialStartUpGroup;
    long long _startUpResult;
    unsigned long long _countOfFailedStartUpAttempts;
    NSDate *_dateOfLastFailedStartUpAttempt;
    NSArray *_zoneRestorationSources;
    NSArray *_zonePruningAssistants;
}

+ (CDUnknownBlockType)_privateDatabaseDeprecatedRecordTestBlock;
+ (id)privateDatabaseSchema;
+ (id)testingDatabaseWithCKDatabase:(id)arg1 middleware:(id)arg2 schema:(id)arg3 encryptionDelegate:(id)arg4;
+ (id)testingDatabaseWithCKDatabase:(id)arg1 middleware:(id)arg2 schema:(id)arg3;
+ (id)testingDatabaseWithCKDatabase:(id)arg1 middleware:(id)arg2;
+ (id)testingDatabase;
@property(readonly, nonatomic) NSArray *zonePruningAssistants; // @synthesize zonePruningAssistants=_zonePruningAssistants;
@property(readonly, nonatomic) NSArray *zoneRestorationSources; // @synthesize zoneRestorationSources=_zoneRestorationSources;
@property(retain, nonatomic) NSDate *dateOfLastFailedStartUpAttempt; // @synthesize dateOfLastFailedStartUpAttempt=_dateOfLastFailedStartUpAttempt;
@property(nonatomic) unsigned long long countOfFailedStartUpAttempts; // @synthesize countOfFailedStartUpAttempts=_countOfFailedStartUpAttempts;
@property(nonatomic) long long startUpResult; // @synthesize startUpResult=_startUpResult;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *initialStartUpGroup; // @synthesize initialStartUpGroup=_initialStartUpGroup;
@property(nonatomic) _Bool activelyStartingUp; // @synthesize activelyStartingUp=_activelyStartingUp;
@property(nonatomic) _Bool finishedInitialStartUp; // @synthesize finishedInitialStartUp=_finishedInitialStartUp;
@property(nonatomic) _Bool beganInitialStartUp; // @synthesize beganInitialStartUp=_beganInitialStartUp;
@property(retain, nonatomic) NSArray *recordMiddleware; // @synthesize recordMiddleware=_recordMiddleware;
@property(retain, nonatomic) NSArray *operationMiddleware; // @synthesize operationMiddleware=_operationMiddleware;
@property(retain, nonatomic) NSArray *remainingStartUpMiddleware; // @synthesize remainingStartUpMiddleware=_remainingStartUpMiddleware;
@property(retain, nonatomic) NSArray *middleware; // @synthesize middleware=_middleware;
@property(retain, nonatomic) NSOperationQueue *noPreflightOperationQueue; // @synthesize noPreflightOperationQueue=_noPreflightOperationQueue;
@property(retain, nonatomic) NSOperationQueue *serialOperationQueue; // @synthesize serialOperationQueue=_serialOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) FCCKPrivateDatabaseSchema *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSArray *containers; // @synthesize containers=_containers;
@property(readonly, nonatomic) CKDatabase *secureDatabase; // @synthesize secureDatabase=_secureDatabase;
@property(readonly, nonatomic) CKDatabase *databaseWithZoneWidePCS; // @synthesize databaseWithZoneWidePCS=_databaseWithZoneWidePCS;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(retain) NSData *secureEncryptionKey; // @synthesize secureEncryptionKey=_secureEncryptionKey;
@property(retain) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property(getter=isEncryptionEnabled) _Bool encryptionEnabled; // @synthesize encryptionEnabled=_encryptionEnabled;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(readonly, nonatomic) __weak id <FCCKDatabaseEncryptionDelegate> encryptionDelegate; // @synthesize encryptionDelegate=_encryptionDelegate;
- (void).cxx_destruct;
- (void)_possiblySimulateCrashForError:(id)arg1 message:(id)arg2;
- (void)reportFatalStartUpError:(id)arg1;
- (void)reportPostMigrationCleanupError:(id)arg1;
- (void)reportEncryptionMigrationError:(id)arg1;
- (void)reportRecoverableStartUpError:(id)arg1;
- (void)takeDatabaseOfflineDueToError:(id)arg1;
@property(readonly, nonatomic) NSArray *zoneIDsUsingSecureContainer;
- (void)_cancelOperation:(id)arg1;
- (id)_mapObjects:(id)arg1 withRecordMiddlewareBlock:(CDUnknownBlockType)arg2;
- (id)_serverToClientError:(id)arg1;
- (id)_serverToClientRecordType:(id)arg1 withRecordID:(id)arg2;
- (void)_validateClientZones:(id)arg1;
- (id)_mapZones:(id)arg1 toClient:(_Bool)arg2;
- (id)_serverToClientZone:(id)arg1;
- (void)_validateClientRecords:(id)arg1;
- (id)_mapRecords:(id)arg1 toClient:(_Bool)arg2;
- (id)_clientToServerRecord:(id)arg1;
- (id)_serverToClientRecord:(id)arg1;
- (id)_mapRecordZoneIDs:(id)arg1 toClient:(_Bool)arg2 expectUnknownZones:(_Bool)arg3;
- (id)_mapRecordZoneIDs:(id)arg1 toClient:(_Bool)arg2;
- (id)_serverToClientRecordZoneID:(id)arg1 expectUnknownZones:(_Bool)arg2;
- (id)_serverToClientRecordZoneID:(id)arg1;
- (id)_clientToServerRecordZoneID:(id)arg1;
- (id)_mapRecordIDs:(id)arg1 toClient:(_Bool)arg2;
- (id)_clientRecordID:(id)arg1;
- (id)_serverRecordID:(id)arg1;
- (id)_recordZoneIDsFromOperation:(id)arg1;
- (_Bool)_doesOperationRequireSecureContainer:(id)arg1;
- (_Bool)_doesOperationRequireZoneWidePCS:(id)arg1;
- (void)_preflightZoneIDsInModifyZonesOperation:(id)arg1;
- (void)_preflightZonesIDsInFetchZonesOperation:(id)arg1;
- (void)_preflightRecordsInFetchOperation:(id)arg1;
- (void)_preflightRecordsInDatabaseChangesOperation:(id)arg1;
- (void)_preflightRecordsInRecordZoneChangesOperation:(id)arg1;
- (void)_preflightRecordsInModifyOperation:(id)arg1;
- (void)_preflightOperation:(id)arg1;
- (void)_addCKOperation:(id)arg1 destination:(long long)arg2;
- (void)_finishStartUpWithError:(id)arg1;
- (void)_continueStartUp;
- (void)t_performStartUpWithCompletion:(CDUnknownBlockType)arg1;
- (void)_possiblyRetryStartUp;
- (void)_beginInitialStartUpIfNeeded;
- (void)addCKOperationNoPreflight:(id)arg1 destination:(long long)arg2;
- (void)addCKOperation:(id)arg1 destination:(long long)arg2;
- (void)enumerateActiveDestinationsWithOptions:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enumeratePayloadsWithRecordIDs:(id)arg1 records:(id)arg2 zoneIDs:(id)arg3 zones:(id)arg4 options:(long long)arg5 payloadHandler:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic, getter=isTemporarilySuspended) _Bool temporarilySuspended;
@property(readonly, nonatomic, getter=isOnline) _Bool online;
@property(readonly, nonatomic, getter=isStartingUp) _Bool startingUp;
- (void)fetchSecureDatabaseSupportedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)pruningAssistantForZoneName:(id)arg1;
- (void)registerZonePruningAssistants:(id)arg1;
- (void)registerZoneRestorationSources:(id)arg1;
- (id)_queueForOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1 secureContainerIdentifier:(id)arg2 productionEnvironment:(_Bool)arg3 encryptionDelegate:(id)arg4 networkBehaviorMonitor:(id)arg5 privateDataSyncingEnabled:(_Bool)arg6;
- (id)initWithContainers:(id)arg1 database:(id)arg2 databaseWithZoneWidePCS:(id)arg3 secureDatabase:(id)arg4 schema:(id)arg5 middleware:(id)arg6 encryptionDelegate:(id)arg7 networkBehaviorMonitor:(id)arg8;
- (void)fetchChangesForRecordZoneID:(id)arg1 changeToken:(id)arg2 desiredKeys:(id)arg3 fetchAllChanges:(_Bool)arg4 qualityOfService:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)fetchAllDatabaseChangesWithServerChangeToken:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
