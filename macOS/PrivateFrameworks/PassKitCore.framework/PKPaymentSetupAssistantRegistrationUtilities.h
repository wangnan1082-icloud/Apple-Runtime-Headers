//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PKPaymentSetupAssistantRegistrationUtilities : NSObject
{
}

+ (void)_macPreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)_peerPaymentCredentialFromPeerPaymentWebService:(id)arg1;
+ (id)_bridgeContextDefaultLocalCredential;
+ (void)_handlePreflightFinishedWithSuccess:(BOOL)arg1 paymentCredentials:(id)arg2 provisioningController:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)_bridgePreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)_phonePreflight:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)preflightPaymentSetupProvisioningController:(id)arg1 forSetupAssistant:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (BOOL)_macNeedsToRun:(unsigned long long *)arg1;
+ (BOOL)_bridgeNeedsToRun:(unsigned long long *)arg1;
+ (BOOL)_phoneNeedsToRun:(unsigned long long *)arg1;
+ (BOOL)setupAssistantNeedsToRun:(unsigned long long)arg1 returningRequirements:(unsigned long long *)arg2;

@end
