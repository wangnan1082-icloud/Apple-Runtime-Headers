//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@interface HAPRelayActivationClient : HMFObject
{
    id <HAPRelayActivationClientDelegate> _delegate;
}

@property __weak id <HAPRelayActivationClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3;
- (void)requestChallenge;
- (void)close;
- (void)open;

@end
