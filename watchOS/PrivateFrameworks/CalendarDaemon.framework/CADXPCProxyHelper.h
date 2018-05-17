//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CADDatabaseInitializationOptions, NSXPCConnection, Protocol;

@interface CADXPCProxyHelper : NSObject
{
    NSXPCConnection *_connection;
    Protocol *_protocol;
    _Bool _synchronous;
    CADDatabaseInitializationOptions *_initializationOptions;
}

@property(retain) CADDatabaseInitializationOptions *initializationOptions; // @synthesize initializationOptions=_initializationOptions;
- (void).cxx_destruct;
- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(id)arg3;
- (int)replyBlockArgumentIndex:(id)arg1;
- (id)_getReplyBlockFromInvocation:(id)arg1;
- (id)_replaceReplyBlockInInvocation:(id)arg1 retryingAfterInitializationWithContextHolder:(id)arg2;
- (_Bool)_shouldResendInitializationOptionsForInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithXPCConnection:(id)arg1 protocol:(id)arg2 synchronous:(_Bool)arg3;

@end
