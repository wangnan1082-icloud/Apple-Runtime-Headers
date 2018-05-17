//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSHistoryLoaderDelegate.h"

@class NSArray, WBSHistoryDeletionPlan;

@protocol WBSHistoryStoreDelegate <WBSHistoryLoaderDelegate>
- (void)historyStoreWasCleared:(id <WBSHistoryStore>)arg1;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveVisits:(NSArray *)arg2;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didRemoveItems:(NSArray *)arg2;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id <WBSHistoryStore>)arg1;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id <WBSHistoryStore>)arg1;
- (void)historyStore:(id <WBSHistoryStore>)arg1 didPrepareToDeleteWithDeletionPlan:(WBSHistoryDeletionPlan *)arg2;

@optional
- (BOOL)historyStoreShouldScheduleMaintenance:(id <WBSHistoryStore>)arg1;
@end
