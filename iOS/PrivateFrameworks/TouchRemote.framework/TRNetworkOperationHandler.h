//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TROperationHandler.h"

@class NSString;

@interface TRNetworkOperationHandler : NSObject <TROperationHandler>
{
    CDUnknownBlockType _joinNetworkHandler;
}

@property(copy, nonatomic) CDUnknownBlockType joinNetworkHandler; // @synthesize joinNetworkHandler=_joinNetworkHandler;
- (void).cxx_destruct;
- (void)_handleNetworkRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;
- (void)registerMessageHandlersForSession:(id)arg1;
- (id)initWithJoinNetworkHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
