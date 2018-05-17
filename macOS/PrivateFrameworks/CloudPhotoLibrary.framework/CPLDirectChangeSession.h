//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import "CPLChangeSessionImplementation.h"

@class CPLResetReason, NSObject<OS_dispatch_queue>, NSString;

@interface CPLDirectChangeSession : CPLPlatformObject <CPLChangeSessionImplementation>
{
    NSObject<OS_dispatch_queue> *_lock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CPLResetReason *_tentativeReason;
    BOOL _beganClientWork;
    BOOL _tearedDown;
}

+ (id)selfCrashResetReason;
- (void).cxx_destruct;
- (void)discardTentativeResetReason;
- (void)registerTentativeResetReason;
- (BOOL)tearedDown;
- (void)dispatchCallback:(CDUnknownBlockType)arg1;
- (void)tearDownWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endClientWork;
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)processSessionContext:(id)arg1 inStore:(id)arg2 error:(id *)arg3;
- (void)beginClientWork;
- (id)clientWorkDescription;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
