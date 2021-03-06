//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CTNetwork, CTServiceDescriptor, CTXPCServiceSubscriptionContext, NSDictionary, NSString;

@protocol CTXPCServiceRegistrationInterface
- (void)getPublicSignalStrength:(CTServiceDescriptor *)arg1 completion:(void (^)(CTSignalStrengthInfo *, NSError *))arg2;
- (void)getDataMode:(CTServiceDescriptor *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)isNetworkReselectionNeeded:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)copyNetworkSelectionInfo:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTNetworkSelectionInfo *, NSError *))arg2;
- (void)copyNetworkSelectionState:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyNetworkSelectionMode:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)isNetworkSelectionMenuAvailable:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)copyNetworkSelection:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTNetwork *, NSError *))arg2;
- (void)selectNetwork:(CTXPCServiceSubscriptionContext *)arg1 network:(CTNetwork *)arg2 completion:(void (^)(NSError *))arg3;
- (void)automaticallySelectNetwork:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)copyNetworkList:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTNetworkList *, NSError *))arg2;
- (void)fetchNetworkList:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSError *))arg2;
- (void)getSupportedDataRates:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTSupportedMaxDataRates *, NSError *))arg2;
- (void)getMaxDataRate:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)setMaxDataRate:(CTXPCServiceSubscriptionContext *)arg1 rate:(long long)arg2 completion:(void (^)(NSError *))arg3;
- (void)copyRegistrationIMSTransportInfo:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTIMSRegistrationTransportInfo *, NSError *))arg2;
- (void)getIMSRegistrationStatus:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTIMSRegistrationStatus *, NSError *))arg2;
- (void)copyRegistrationAgentStatus:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, _Bool, NSError *))arg2;
- (void)copyRejectCauseCode:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)getEnhancedVoiceLinkQualityMetric:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTEnhancedLinkQualityMetric *, NSError *))arg2;
- (void)getVoiceLinkQualityMetric:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTVoiceLinkQualityMetric *, NSError *))arg2;
- (void)getSignalStrengthInfo:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTSignalStrengthInfo *, NSError *))arg2;
- (void)setBandInfo:(CTXPCServiceSubscriptionContext *)arg1 bands:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)copyBandInfo:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setRatSelection:(CTXPCServiceSubscriptionContext *)arg1 selection:(NSString *)arg2 preferred:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (void)getRatSelection:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)copyAbbreviatedOperatorName:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyWirelessTechnology:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyRadioAccessTechnology:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyLocalizedOperatorName:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyOperatorName:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyIsDataAttached:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)copyIsInHomeCountry:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)copyMobileNetworkCode:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyLastKnownMobileCountryCode:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyMobileCountryCode:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyServingPlmn:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyRegistrationDisplayStatus:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(CTRegistrationDisplayStatus *, NSError *))arg2;
- (void)copyRegistrationStatus:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end

