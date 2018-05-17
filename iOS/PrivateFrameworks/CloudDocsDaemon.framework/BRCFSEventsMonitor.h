//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BRCModule.h"
#import "BRCSuspendable.h"

@class BRCAccountSession, BRCFSEventsPersistedState, BRCFairSource, BRCRelativePath, BRCVolume, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSString, PQLConnection;

@interface BRCFSEventsMonitor : NSObject <BRCModule, BRCSuspendable>
{
    BRCAccountSession *_session;
    NSString *_name;
    // Error parsing type: Ai, name: _suspendCount
    // Error parsing type: Ai, name: _resetCount
    BRCFSEventsPersistedState *_persistedState;
    NSString *_devicePath;
    NSString *_rootPathRelativeToDevice;
    NSObject<OS_dispatch_source> *_rootVnodeWatcher;
    struct __FSEventStream *_stream;
    NSObject<OS_dispatch_queue> *_streamQueue;
    NSObject<OS_dispatch_source> *_historicalEventSource;
    NSObject<OS_dispatch_queue> *_processQueue;
    BRCFairSource *_fseventsProcessSource;
    NSMutableArray *_fseventsToProcess;
    unsigned long long _maxFSEventQueueSize;
    unsigned long long _fseventProcessBatchSize;
    _Bool _hasMarkSelf;
    BRCFSEventsPersistedState *_rendezVous;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    _Bool _drainEvents;
    BRCVolume *_volume;
    _Bool _isCancelled;
    BRCRelativePath *_root;
    id <BRCFSEventsDelegate> _delegate;
    PQLConnection *_db;
}

@property(retain, nonatomic, setter=setDB:) PQLConnection *db; // @synthesize db=_db;
@property __weak id <BRCFSEventsDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) BRCRelativePath *root; // @synthesize root=_root;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
- (void).cxx_destruct;
- (void)cancel;
- (void)_cancel;
- (void)resume;
- (void)suspend;
- (void)resetWithReason:(id)arg1;
- (void)close;
- (void)_close;
- (void)flushStream;
- (void)stopWatcher;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAccountSession:(id)arg1 name:(id)arg2;
- (id)initWithAccountSession:(id)arg1;
- (void)fseventOnRootWithEventID:(unsigned long long)arg1 andReason:(id)arg2;
- (void)fseventAtPath:(id)arg1 withFlags:(unsigned int)arg2 andID:(unsigned long long)arg3 eventIndex:(unsigned int)arg4 eventCount:(unsigned int)arg5 initialScan:(_Bool)arg6;
- (void)processFseventBatch;
- (void)queueEvents:(id)arg1 markSelfEncountered:(_Bool)arg2;
- (_Bool)_queueEvents:(id)arg1 markSelfEncountered:(_Bool)arg2;
- (void)_updatePersistedStateWithState:(id)arg1;
- (void)didProcessEventID:(unsigned long long)arg1;
- (void)signalAfterCurrentFSEvent:(id)arg1;
- (_Bool)openWithRoot:(id)arg1 isImmutableRoot:(_Bool)arg2 volume:(id)arg3 error:(id *)arg4;
- (_Bool)openWithRoot:(id)arg1 volume:(id)arg2 error:(id *)arg3;
- (_Bool)setUpStreamSynchronously:(_Bool)arg1 reason:(id)arg2 error:(id *)arg3;
- (_Bool)setUpRoot:(id)arg1 isImmutableRoot:(_Bool)arg2 volume:(id)arg3 error:(id *)arg4;
@property(readonly, nonatomic) _Bool volumeIsCaseSensitive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
