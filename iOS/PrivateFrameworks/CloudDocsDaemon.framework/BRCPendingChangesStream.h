//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCClientZone, BRCPQLConnection, CKServerChangeToken, NSError, NSURL;

__attribute__((visibility("hidden")))
@interface BRCPendingChangesStream : NSObject
{
    NSURL *_databaseURL;
    NSError *_error;
    BRCPQLConnection *_db;
    CKServerChangeToken *_startingChangeToken;
    BRCClientZone *_clientZone;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)saveError;
- (void)destroyDatabaseOnQueue:(_Bool)arg1;
- (void)destroyDatabase;
- (void)_destroyDatabase;
- (_Bool)saveEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareIDs:(id)arg3 serverChangeToken:(id)arg4 clientChangeToken:(long long)arg5 syncStatus:(long long)arg6;
- (long long)_recordTypeFromRecordID:(id)arg1 isShare:(_Bool)arg2 isDelete:(_Bool)arg3;
- (_Bool)enumerateRecordsOfType:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)fetchTokenState:(CDUnknownBlockType)arg1;
- (void)_openDB;
- (void)_createSchemaIfNecessary;
- (id)initWithServerZone:(id)arg1;
- (void)_dbBecameCorrupted;

@end
