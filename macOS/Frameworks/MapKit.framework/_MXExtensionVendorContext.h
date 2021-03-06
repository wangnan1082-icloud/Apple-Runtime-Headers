//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/_MXExtensionContext.h>

#import <MapKit/_MXExtensionVendorContextType-Protocol.h>

@class NSString;
@protocol _MXExtensionResponseObserver;

@interface _MXExtensionVendorContext : _MXExtensionContext <_MXExtensionVendorContextType>
{
    id <_MXExtensionResponseObserver> _observer;
}

- (void).cxx_destruct;
- (id)_errorForVendor:(id)arg1 requestDispatcher:(id)arg2;
- (void)stopSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2;
- (void)startSendingUpdatesForRequest:(id)arg1 requestDispatcher:(id)arg2 toObserver:(id)arg3;
- (void)handleRequest:(id)arg1 requestDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

