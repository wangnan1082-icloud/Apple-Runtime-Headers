//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface PKPaymentSessionHandle : NSObject
{
    NSObject<OS_dispatch_queue> *_internalSessionSerialQueue;
    id <NFSession> _sessionHandle;
}

- (void).cxx_destruct;
- (void)invalidateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateSession;
- (BOOL)isFirstInQueue;
- (id)initWithInternalSessionHandle:(id)arg1 targetQueue:(id)arg2;

@end
