//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface HMDBackingStoreLocal : HMFObject <HMFLogging>
{
    struct sqlite3 *context;
    void *sqlite3_cache;
    struct sqlite3_stmt *insertZone;
    struct sqlite3_stmt *deleteZone;
    struct sqlite3_stmt *selectZones;
    struct sqlite3_stmt *insertStore;
    struct sqlite3_stmt *selectStores;
    struct sqlite3_stmt *insertGroup;
    struct sqlite3_stmt *deleteGroup;
    struct sqlite3_stmt *selectGroups;
    struct sqlite3_stmt *updateGroupToken;
    struct sqlite3_stmt *updateGroupSubscription;
    struct sqlite3_stmt *insertShare;
    struct sqlite3_stmt *updateShareShare;
    struct sqlite3_stmt *updateShareUsers;
    struct sqlite3_stmt *deleteShare;
    struct sqlite3_stmt *selectShares;
    struct sqlite3_stmt *insertRecord;
    struct sqlite3_stmt *updateRecordSchema;
    struct sqlite3_stmt *selectRecordGroup;
    struct sqlite3_stmt *selectRecordUUID;
    struct sqlite3_stmt *selectRecordParentUUID;
    struct sqlite3_stmt *selectRecordParent;
    struct sqlite3_stmt *selectRecordName;
    struct sqlite3_stmt *selectRecordUUIDNoShare;
    struct sqlite3_stmt *selectRecordParentNoShare;
    struct sqlite3_stmt *selectRecordNameNoShare;
    struct sqlite3_stmt *selectRecords;
    struct sqlite3_stmt *selectStoreRecords;
    struct sqlite3_stmt *deleteRecord;
    struct sqlite3_stmt *flushPushedXact;
    struct sqlite3_stmt *insertLog;
    struct sqlite3_stmt *updateLogXactID;
    struct sqlite3_stmt *selectLog;
    struct sqlite3_stmt *selectAllLog;
    struct sqlite3_stmt *insertLogOptions;
    struct sqlite3_stmt *selectLogOptions;
    struct sqlite3_stmt *updateLog;
    struct sqlite3_stmt *deleteLog;
    struct sqlite3_stmt *commit;
    struct sqlite3_stmt *rollback;
    struct sqlite3_stmt *begin;
    NSString *_datastoreFile;
    NSMutableArray *_zoneCache;
    NSMutableDictionary *_storeCache;
}

+ (id)logCategory;
+ (void)cleanDatastoreFilesAt:(id)arg1 everything:(_Bool)arg2;
@property(retain, nonatomic) NSMutableDictionary *storeCache; // @synthesize storeCache=_storeCache;
@property(retain, nonatomic) NSMutableArray *zoneCache; // @synthesize zoneCache=_zoneCache;
@property(readonly, nonatomic) NSString *datastoreFile; // @synthesize datastoreFile=_datastoreFile;
- (void).cxx_destruct;
- (id)logIdentifier;
- (id)_deleteLog:(long long)arg1;
- (id)_updateLog:(long long)arg1 mask:(long long)arg2 set:(long long)arg3;
- (void)_selectAllLog:(CDUnknownBlockType)arg1;
- (id)_selectLogOptionsWithID:(long long)arg1;
- (id)_insertLogOptionsWithID:(long long)arg1 options:(id)arg2;
- (void)_selectLogWithRoot:(id)arg1 after:(long long)arg2 mask:(long long)arg3 compare:(long long)arg4 callback:(CDUnknownBlockType)arg5;
- (unsigned long long)_insertLogWithRoot:(id)arg1 transaction:(id)arg2 set:(long long)arg3 error:(id *)arg4;
- (void)_selectAllRecords:(CDUnknownBlockType)arg1;
- (void)_fetchRecordsWithGroupID:(long long)arg1 share:(long long)arg2 names:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)_fetchRecordsWithGroupID:(long long)arg1 share:(long long)arg2 parent:(id)arg3 type:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)_fetchRecordsWithGroupID:(long long)arg1 share:(long long)arg2 parentUuids:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)_fetchRecordWithUUID:(id)arg1 root:(id)arg2 error:(id *)arg3;
- (void)_fetchRecordsWithGroupID:(long long)arg1 share:(long long)arg2 uuids:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)_fetchRecordsWithGroupID:(long long)arg1 share:(long long)arg2 callback:(CDUnknownBlockType)arg3;
- (id)_deleteRecordWithGroupID:(long long)arg1 share:(long long)arg2 recordName:(id)arg3;
- (id)_updateRecordWithGroupID:(long long)arg1 share:(long long)arg2 store:(long long)arg3 name:(id)arg4 model:(id)arg5;
- (id)_updateRecordWithGroupID:(long long)arg1 share:(long long)arg2 store:(long long)arg3 record:(id)arg4;
- (id)_updateRecordWithGroupID:(long long)arg1 share:(long long)arg2 store:(long long)arg3 record:(id)arg4 data:(id)arg5 encoding:(long long)arg6;
- (id)_updateRecordWithGroupID:(long long)arg1 share:(long long)arg2 store:(long long)arg3 name:(id)arg4 record:(id)arg5 uuid:(id)arg6 parentUUID:(id)arg7 type:(id)arg8 data:(id)arg9 encoding:(long long)arg10 schema:(id)arg11;
- (id)_fetchSharesForGroup:(id)arg1 withError:(id *)arg2;
- (id)_updateShareGroupWithID:(long long)arg1 share:(id)arg2 users:(id)arg3;
- (id)_deleteShareWithID:(long long)arg1;
- (long long)_insertShareWithGroupID:(long long)arg1 root:(id)arg2 target:(id)arg3 error:(id *)arg4;
- (id)_fetchGroupsForZone:(id)arg1 withError:(id *)arg2;
- (id)_updateGroupWithID:(long long)arg1 subscription:(id)arg2;
- (id)_updateGroupWithID:(long long)arg1 serverChangeToken:(id)arg2;
- (id)_deleteGroupWithID:(long long)arg1;
- (long long)_insertGroupWithZoneID:(long long)arg1 root:(id)arg2 owner:(id)arg3 subscription:(id)arg4 error:(id *)arg5;
- (id)_fetchZonesWithError:(id *)arg1;
- (id)_deleteZoneWithID:(long long)arg1;
- (long long)_insertZoneWithName:(id)arg1 error:(id *)arg2;
- (id)_fillZoneCache;
- (unsigned long long)_fetchIDForStore:(id)arg1 error:(id *)arg2;
- (id)_fillStoreCache;
- (void)_rollback;
- (id)_commit;
- (id)_begin;
- (id)_instanceResources:(_Bool)arg1 migrate:(_Bool)arg2;
- (id)_updateRecordWithGroupID:(long long)arg1 share:(long long)arg2 name:(id)arg3 schema:(id)arg4;
- (void)_freeResources;
- (id)flush:(_Bool)arg1;
- (void)dealloc;
- (id)initWithDatastore:(id)arg1;
- (id)initWithDB:(id)arg1 migrate:(_Bool)arg2 error:(id *)arg3;
- (id)_createNewDatastore:(id)arg1;
- (id)_runSQLite3:(const char *)arg1 bind:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

