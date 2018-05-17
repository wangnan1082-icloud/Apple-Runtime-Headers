//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPassbookSettingsDataSource.h"

@class NSString, PKPassLibraryDefaultDataProvider, PKPassbookPeerPaymentSettingsDefaultBehavior, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults;

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource>
{
    PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentOptionsDefaults *_options;
    PKPassbookPeerPaymentSettingsDefaultBehavior *_peerPaymentDefaultBehavior;
}

- (void).cxx_destruct;
- (_Bool)secureElementIsProductionSigned;
- (id)deviceName;
- (_Bool)supportsCredentialType:(int)arg1;
- (_Bool)hasFelicaSecureElement;
- (id)peerPaymentDataSource;
- (id)peerPaymentDelegate;
- (_Bool)canRegisterForPeerPayment;
- (id)setupBrowsableProductTypesForDevice;
- (id)setupFeaturedNetworksForDevice;
- (id)secureElementID;
- (id)optionsDelegate;
- (id)paymentDataProvider;
- (id)passLibraryDataProvider;
- (id)setupDelegate;
- (_Bool)deviceSupportsInAppPayments;
- (_Bool)deviceInRestrictedMode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
