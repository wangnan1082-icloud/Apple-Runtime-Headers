//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSServiceDelegate.h"

@class IDSService, NSObject<OS_dispatch_queue>, NSString;

@interface NNMKIDSConnectivityManager : NSObject <IDSServiceDelegate>
{
    _Bool _connected;
    id <NNMKIDSConnectivityObserver> _observer;
    unsigned int _connectivityState;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_executionQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) unsigned int connectivityState; // @synthesize connectivityState=_connectivityState;
@property(nonatomic) __weak id <NNMKIDSConnectivityObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (unsigned int)_connectivityState;
- (_Bool)_isConnected:(unsigned int)arg1;
- (void)_handleConnectionChange;
- (void)_handleConnectivityStateChange;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
