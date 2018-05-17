//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class BLTBulletinDistributorSubscriberList, NSString, NSXPCListener;

@interface BLTPingSubscriberManager : NSObject <NSXPCListenerDelegate>
{
    BLTBulletinDistributorSubscriberList *_subscribers;
    NSXPCListener *_listener;
    id <BLTBulletinDistributorSubscriberDeviceDelegate> _deviceDelegate;
}

@property(retain, nonatomic) id <BLTBulletinDistributorSubscriberDeviceDelegate> deviceDelegate; // @synthesize deviceDelegate=_deviceDelegate;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) BLTBulletinDistributorSubscriberList *subscribers; // @synthesize subscribers=_subscribers;
- (void).cxx_destruct;
- (void)_loadPingSubscriberBundles:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithDeviceDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
