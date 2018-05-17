//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCPrivateDataSyncManager.h"

@class CKRecordZoneID, NSArray, NSString, NTPBPrivateZoneSyncState;

@interface FCPrivateZoneSyncManager : NSObject <FCPrivateDataSyncManager>
{
    _Bool _requiresBatchedSync;
    CKRecordZoneID *_recordZoneID;
    id <FCPrivateZoneSyncManagerDelegate> _delegate;
    NSArray *_desiredKeys;
    NTPBPrivateZoneSyncState *_currentState;
}

@property(readonly, copy, nonatomic) NTPBPrivateZoneSyncState *currentState; // @synthesize currentState=_currentState;
@property(readonly, nonatomic) _Bool requiresBatchedSync; // @synthesize requiresBatchedSync=_requiresBatchedSync;
@property(readonly, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) __weak id <FCPrivateZoneSyncManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
- (void).cxx_destruct;
- (void)_stateDidChange;
- (void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isAwaitingFirstSync;
- (void)notifyObservers;
- (void)markAsDirty;
- (_Bool)isDirty;
- (id)init;
- (id)initWithRecordZoneID:(id)arg1 desiredKeys:(id)arg2 requiresBatchedSync:(_Bool)arg3 currentState:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
