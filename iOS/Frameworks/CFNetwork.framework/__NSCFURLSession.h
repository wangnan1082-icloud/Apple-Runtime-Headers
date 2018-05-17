//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/NSURLSession.h>

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSURLSessionConfiguration;

__attribute__((visibility("hidden")))
@interface __NSCFURLSession : NSURLSession
{
    NSOperationQueue *_delegateQueue;
    id <NSURLSessionDelegate> _delegate;
    NSString *_sessionDescription;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURLSessionConfiguration *_local_immutable_configuration;
    _Bool _invalid;
    _Bool _isSharedSession;
    NSString *_uuid;
    CDUnknownBlockType _connBlock;
    NSDictionary *_atsState;
    NSMutableDictionary *_altSvc;
    NSMutableSet *_h2BlacklistedHosts;
}

- (void)set_h2BlacklistedHosts:(id)arg1;
- (id)_h2BlacklistedHosts;
- (void)set_altSvc:(id)arg1;
- (id)_altSvc;
- (void)set_connBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_connBlock;
- (void)set_atsState:(id)arg1;
- (id)_atsState;
- (void)set_uuid:(id)arg1;
- (id)_uuid;
- (void)set_isSharedSession:(_Bool)arg1;
- (_Bool)_isSharedSession;
- (void)setInvalid:(_Bool)arg1;
- (_Bool)invalid;
- (void)set_local_immutable_configuration:(id)arg1;
- (id)_local_immutable_configuration;
- (void)setSessionDescription:(id)arg1;
- (id)sessionDescription;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegateQueue:(id)arg1;
- (id)delegateQueue;
@property(readonly, copy) NSDictionary *delegateOptions;
- (id)workQueue;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;

@end
