//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentServiceProviderPurchasesRequest : PKPaymentWebServiceRequest
{
    NSString *_purchaseState;
    NSString *_serviceProviderIdentifier;
    NSString *_productIdentifier;
    NSString *_actionIdentifier;
    NSString *_countryCode;
}

@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
@property(copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
@property(copy, nonatomic) NSString *purchaseState; // @synthesize purchaseState=_purchaseState;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithPurchaseState:(id)arg1 serviceProviderIdentifier:(id)arg2 productIdentifier:(id)arg3 actionIdentifier:(id)arg4 serviceProviderCountryCode:(id)arg5;

@end

