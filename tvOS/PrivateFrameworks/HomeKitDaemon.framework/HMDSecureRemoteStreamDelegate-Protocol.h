//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFMessageTransportDelegate.h"

@class HMDSecureRemoteStream, HMFMessage, NSError;

@protocol HMDSecureRemoteStreamDelegate <HMFMessageTransportDelegate>
- (void)secureRemoteStream:(HMDSecureRemoteStream *)arg1 receivedRequestToSendMessage:(HMFMessage *)arg2;

@optional
- (void)secureRemoteStream:(HMDSecureRemoteStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)secureRemoteStreamIsIdle:(HMDSecureRemoteStream *)arg1;
@end
