//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMFHTTPClientConnection, HMFHTTPServer, NSError;

@protocol HMFHTTPServerDelegate <NSObject>
- (void)server:(HMFHTTPServer *)arg1 didCloseConnection:(HMFHTTPClientConnection *)arg2;
- (void)server:(HMFHTTPServer *)arg1 didOpenConnection:(HMFHTTPClientConnection *)arg2;
- (BOOL)server:(HMFHTTPServer *)arg1 shouldAcceptConnection:(HMFHTTPClientConnection *)arg2;
- (void)server:(HMFHTTPServer *)arg1 didStopWithError:(NSError *)arg2;
@end

