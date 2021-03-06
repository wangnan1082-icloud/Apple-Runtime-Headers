//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSURLSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface CUXMLRPCClient : NSObject <NSURLSessionDelegate>
{
    NSMutableDictionary *_tasks;
    struct LogCategory *_ucat;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 data:(id)arg2 error:(id)arg3 identifier:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)_requestURL:(id)arg1 methodName:(id)arg2 params:(id)arg3 httpHeaders:(id)arg4 identifier:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)requestURL:(id)arg1 methodName:(id)arg2 params:(id)arg3 httpHeaders:(id)arg4 identifier:(id *)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

