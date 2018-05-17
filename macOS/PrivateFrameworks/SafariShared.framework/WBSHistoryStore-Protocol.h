//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSHistoryLoader.h"

@class NSArray, NSData, NSDate, NSSet, NSString, WBSHistoryItem, WBSHistoryTombstone, WBSHistoryVisit;

@protocol WBSHistoryStore <WBSHistoryLoader>
@property(readonly, nonatomic) BOOL isUsingInMemoryDatabase;
@property(nonatomic) BOOL pushNotificationsAreInitialized;
@property(nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle;
@property(copy, nonatomic) NSData *syncCircleSizeRetrievalThrottlerData;
@property(copy, nonatomic) NSData *fetchThrottlerData;
@property(copy, nonatomic) NSData *pushThrottlerData;
@property(nonatomic) double historyAgeLimit;
@property(nonatomic) __weak id <WBSHistoryStoreDelegate> delegate;
- (void)removeAllTestDriveVisitsWithCompletionHandler:(void (^)(void))arg1;
- (void)makePermanentAllTestDriveVisits;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(void (^)(void))arg2;
- (void)visitIdentifiersMatchingExistingVisits:(NSSet *)arg1 populateAssociatedVisits:(BOOL)arg2 completion:(void (^)(NSSet *))arg3;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(void (^)(NSSet *, NSSet *, long long, void (^)(BOOL)))arg2;
- (void)setServerChangeTokenData:(NSData *)arg1;
- (void)getServerChangeTokenDataWithCompletion:(void (^)(NSData *))arg1;
- (void)resetCloudHistoryDataWithCompletionHandler:(void (^)(void))arg1;
- (void)setLastSeenDate:(NSDate *)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (NSDate *)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(NSDate *)arg1;
- (void)replayAndAddTombstone:(WBSHistoryTombstone *)arg1;
- (void)getAllTombstonesWithCompletion:(void (^)(NSSet *))arg1;
- (void)addAutocompleteTrigger:(NSString *)arg1 forItem:(WBSHistoryItem *)arg2;
- (void)closeWithCompletionHandler:(void (^)(void))arg1;
- (void)performMaintenance:(void (^)(void))arg1;
- (void)clearHistoryVisitsAddedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 completionHandler:(void (^)(void))arg3;
- (void)clearHistoryWithCompletionHandler:(void (^)(void))arg1;
- (void)visitTitleWasUpdated:(WBSHistoryVisit *)arg1;
- (void)visitsWereModified:(NSArray *)arg1;
- (void)visitsWereAdded:(NSArray *)arg1;
- (void)itemWasReplaced:(WBSHistoryItem *)arg1 byItem:(WBSHistoryItem *)arg2;
- (void)itemsWereModified:(NSArray *)arg1 byUserInitiatedAction:(BOOL)arg2;
- (void)itemsWereAdded:(NSArray *)arg1 byUserInitiatedAction:(BOOL)arg2;
- (void)removePastHistoryVisitsForItem:(WBSHistoryItem *)arg1 completionHandler:(void (^)(void))arg2;
- (void)getVisitsCreatedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 completionHandler:(void (^)(NSSet *))arg3;
- (void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(NSSet *)arg1 items:(NSSet *)arg2 enumerationBlock:(void (^)(WBSHistoryVisit *))arg3;
- (void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(NSSet *)arg1 items:(NSSet *)arg2 enumerationBlock:(void (^)(WBSHistoryVisit *))arg3;
- (void)enumerateLastVisitForItemsOnDatabaseQueue:(NSSet *)arg1 ignoringVisits:(NSSet *)arg2 enumerationBlock:(void (^)(WBSHistoryItem *, WBSHistoryVisit *))arg3;
- (void)removeVisitsOnDatabaseQueue:(NSSet *)arg1;
- (void)removeItemsOnDatabaseQueue:(NSSet *)arg1;
- (void)addOrUpdateItemsOnDatabaseQueue:(NSSet *)arg1;
- (NSSet *)allVisitsForItemsOnDatabaseQueue:(NSSet *)arg1;
@end
