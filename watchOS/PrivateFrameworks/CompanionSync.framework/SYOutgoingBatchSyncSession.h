//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CompanionSync/SYSession.h>

@class NSMutableIndexSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<OS_os_activity>, _SYCountedSemaphore, _SYMessageTimerTable;

__attribute__((visibility("hidden")))
@interface SYOutgoingBatchSyncSession : SYSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;
    NSObject<OS_dispatch_source> *_sessionTimer;
    unsigned long long _batchIndex;
    NSMutableIndexSet *_ackedBatchIndices;
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;
    _SYCountedSemaphore *_changeConcurrencySemaphore;
    NSObject<OS_os_activity> *_changeWaitActivity;
    NSObject<OS_os_activity> *_sessionActivity;
    int _state;
    _Bool _errorIsLocal;
    _Bool _hasSentEnd;
    _SYMessageTimerTable *_timers;
    double _sessionStartTime;
    _Bool _canRestart;
    _Bool _canRollback;
    _Bool _cancelled;
}

- (_Bool)wasCancelled;
- (void)setCanRollback:(_Bool)arg1;
- (_Bool)canRollback;
- (void)setCanRestart:(_Bool)arg1;
- (_Bool)canRestart;
- (void).cxx_destruct;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (_Bool)_handleBatchSyncEndResponse:(id)arg1 error:(id *)arg2;
- (_Bool)_handleBatchAck:(id)arg1 error:(id *)arg2;
- (void)cancelWithError:(id)arg1;
- (void)start:(CDUnknownBlockType)arg1;
- (void)_installStateListener;
- (void)_setMessageTimerForSeqno:(unsigned long long)arg1;
- (void)_installTimers;
- (void)_processNextState;
- (void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2;
- (void)_sessionComplete;
- (void)_notifySessionComplete;
- (void)_sendSyncStart;
- (void)_sendSyncRestart;
- (void)_sendSyncCancelled;
- (void)_sendSyncCompleteAndRunBlock:(CDUnknownBlockType)arg1;
- (void)_sendSyncBatch:(id)arg1 nextState:(int)arg2;
- (void)_fetchNextBatch;
- (void)_waitForMessageWindow;
- (void)_setupChangeConcurrency;
- (double)remainingSessionTime;
- (unsigned int)protocolVersion;
- (_Bool)isSending;
- (_Bool)isResetSync;
- (void)_setStateQuietly:(int)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (id)initWithService:(id)arg1;

@end
