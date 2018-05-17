//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class CNContact, PKPaymentApplication, PKRemoteDevice, PKRemotePaymentInstrument;

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem
{
}

+ (int)dataType;
- (_Bool)isValidWithError:(id *)arg1;
- (unsigned int)peerPaymentAccountState;
- (id)peerPaymentAccountBalance;
- (_Bool)hasAssociatedPeerPaymentAccount;
@property(readonly, nonatomic) _Bool requiresBillingAddress;
@property(readonly, nonatomic) CNContact *billingAddress;
@property(readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property(readonly, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property(readonly, nonatomic) PKRemoteDevice *remoteDevice;
- (id)errors;

@end
