//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebGeolocationCoreLocationUpdateListener.h"
#import "_WKGeolocationCoreLocationProvider.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WKLegacyCoreLocationProvider : NSObject <_WKGeolocationCoreLocationProvider, WebGeolocationCoreLocationUpdateListener>
{
    id <_WKGeolocationCoreLocationListener> _listener;
    struct RetainPtr<WebGeolocationCoreLocationProvider> _provider;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetGeolocation;
- (void)errorOccurred:(id)arg1;
- (void)positionChanged:(struct GeolocationPosition *)arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
- (void)setEnableHighAccuracy:(_Bool)arg1;
- (void)stop;
- (void)start;
- (void)requestGeolocationAuthorization;
- (void)setListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
