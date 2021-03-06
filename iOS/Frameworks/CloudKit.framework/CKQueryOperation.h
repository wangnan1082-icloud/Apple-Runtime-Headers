//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class CKQuery, CKQueryCursor, CKRecordZoneID, NSArray, NSDictionary;

@interface CKQueryOperation : CKDatabaseOperation
{
    _Bool _shouldFetchAssetContent;
    _Bool _fetchAllResults;
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _queryCompletionBlock;
    CDUnknownBlockType _queryCursorFetchedBlock;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    CKRecordZoneID *_zoneID;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    CKQueryCursor *_resultsCursor;
    NSDictionary *_assetTransferOptionsByKey;
}

@property(retain, nonatomic) NSDictionary *assetTransferOptionsByKey; // @synthesize assetTransferOptionsByKey=_assetTransferOptionsByKey;
@property(nonatomic) _Bool fetchAllResults; // @synthesize fetchAllResults=_fetchAllResults;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) CKQueryCursor *resultsCursor; // @synthesize resultsCursor=_resultsCursor;
@property(copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(copy, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(copy, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property(copy, nonatomic) CKQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
@property(copy, nonatomic) CDUnknownBlockType queryCursorFetchedBlock; // @synthesize queryCursorFetchedBlock=_queryCursorFetchedBlock;
@property(copy, nonatomic) CDUnknownBlockType queryCompletionBlock; // @synthesize queryCompletionBlock=_queryCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
- (id)initWithCursor:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (id)init;

@end

