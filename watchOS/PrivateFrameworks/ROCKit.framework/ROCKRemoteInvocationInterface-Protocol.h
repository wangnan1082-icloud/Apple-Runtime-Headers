//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, ROCKSessionManager;
@protocol OS_xpc_object;

@protocol ROCKRemoteInvocationInterface
- (void)remoteInvocation:(NSObject<OS_xpc_object> *)arg1 sessionManager:(ROCKSessionManager *)arg2 invocationHandler:(void (^)(NSError *))arg3;
@end

