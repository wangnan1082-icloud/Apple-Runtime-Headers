//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentMessageHandler-Protocol.h>

@class NSString;
@protocol SXWebContentMessageHandler;

@interface SXWebContentWeakMessageHandler : NSObject <SXWebContentMessageHandler>
{
    id <SXWebContentMessageHandler> _messageHandler;
}

+ (id)handlerWithMessageHandler:(id)arg1;
@property(readonly, nonatomic) __weak id <SXWebContentMessageHandler> messageHandler; // @synthesize messageHandler=_messageHandler;
- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

