//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselServices/CSLSDockAllowLaunchAssertionService-Protocol.h>

@class NSString, NSXPCConnection;

@interface CSLSDockAllowLaunchAssertionConnection : NSObject <CSLSDockAllowLaunchAssertionService>
{
    NSXPCConnection *_connection;
}

+ (id)log;
+ (id)serviceName;
+ (id)sharedConnection;
- (void).cxx_destruct;
- (void)connect:(CDUnknownBlockType)arg1;
- (void)releaseDockLaunchAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)takeDockLaunchAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_synchronousRemoteObjectProxy;
- (id)_remoteObjectProxy;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

