//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CDDebug, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CDDXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    BOOL _hasValidConnection;
    // Error parsing type: Aq, name: _sequenceNumber
    NSString *_serviceName;
    CDDebug *_debug;
}

@property(readonly) CDDebug *debug; // @synthesize debug=_debug;
@property(readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void).cxx_destruct;
- (BOOL)establishConnection;
- (void)invalidateConnection;
- (void)cancelConnection;
- (id)connection;
- (void)dealloc;
- (id)makeStashWithId:(unsigned long long)arg1;
- (unsigned long long)sequenceNumber;
- (void)sendBarrier:(CDUnknownBlockType)arg1;
- (BOOL)sendMessageAsync:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (id)initWithMachServiceName:(id)arg1 dispatchQueue:(id)arg2;

@end

