//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCDAsyncSocket, HTTPMessage, NSObject<OS_dispatch_queue>;

@interface HTTPUpgrade : NSObject
{
    NSObject<OS_dispatch_queue> *upgradeQueue;
    HTTPMessage *request;
    GCDAsyncSocket *asyncSocket;
    id delegate;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *upgradeQueue; // @synthesize upgradeQueue;
- (void).cxx_destruct;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)didClose;
- (void)didOpen;
- (id)httpResponse;
- (void)stop;
- (void)start;
- (void)setSocket:(id)arg1;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;

@end
