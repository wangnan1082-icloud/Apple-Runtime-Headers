//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMFLogging.h"

@class BSPortDeathWatcher, CAContext, NSObject<OS_dispatch_queue>, NSString;

@interface HMDSnapshotCATransactionHandler : HMFObject <HMFLogging>
{
    CAContext *_snapshotContext;
    NSObject<OS_dispatch_queue> *_clientQueue;
    BSPortDeathWatcher *_backboardServicesWatcher;
}

+ (id)logCategory;
+ (id)sharedHandler;
@property(readonly, nonatomic) BSPortDeathWatcher *backboardServicesWatcher; // @synthesize backboardServicesWatcher=_backboardServicesWatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) CAContext *snapshotContext; // @synthesize snapshotContext=_snapshotContext;
- (void).cxx_destruct;
- (struct CGImage *)createSnapshotCGImageRef:(id)arg1;
- (void)_deleteSlot:(id)arg1 filePath:(id)arg2 snapshotCATransaction:(id)arg3;
- (void)deleteSlot:(id)arg1 filePath:(id)arg2;
- (id)_createSlot:(id)arg1 snapshotCATransaction:(id)arg2;
- (id)createSlot:(id)arg1;
- (void)_backboardServicesRelaunched;
- (void)_createSnapshotContext;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
