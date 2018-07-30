//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ROCKit/ROCKForwardingProxy.h>

#import "ROCKMemoizable.h"

@class NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface ROCKForwardingHybridProxy : ROCKForwardingProxy <ROCKMemoizable>
{
}

- (id)initWithSessionManager:(id)arg1 impersonatableProxyUUID:(id)arg2 instance:(id)arg3 protocols:(id)arg4 error:(id *)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *memoizableSerializerQueue;
@property(readonly) Class superclass;

@end
