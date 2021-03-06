//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLConnectionInternal.h>

#import <CFNetwork/NSURLConnectionRequired-Protocol.h>

@class NSString, NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired>
{
    int _cfConnLock;
    struct _CFURLConnection *_cfConn;
    struct _CFURLAuthChallenge *_currCFChallenge;
    NSURLAuthenticationChallenge *_currNSChallenge;
    struct __CFString *_fileName;
    _Bool _shouldSkipCancelOnRelease;
    long long _totalBytes;
    long long _expectedTotalBytes;
}

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)cleanupChallenges;
- (void)_setShouldSkipCancelOnRelease:(_Bool)arg1;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)cancel;
- (void)start;
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;
- (void)_invalidate;
- (void)_setDelegateQueue:(id)arg1;
- (void)dealloc;
- (void)_reportTimingDataToAWD;
- (id)_timingData;
- (struct _CFURLConnection *)_retainCFURLConnection;
- (struct _CFURLConnection *)_atomic_CFURLConnection;
- (struct _CFURLConnection *)_CFURLConnection;
- (id)initWithInfo:(const struct InternalInit *)arg1;
- (void)sendCFChallenge:(struct _CFURLAuthChallenge *)arg1 toSelector:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

