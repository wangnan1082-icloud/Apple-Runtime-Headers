//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SMAutoLoaderSSL : NSObject
{
}

+ (id)keychainPath;
+ (struct OpaqueSecKeychainRef *)sessionKeychain;
+ (struct OpaqueSecCertificateRef *)generateSelfSignedCertificate:(id)arg1 forSSLServer:(BOOL)arg2;
+ (void)userRespondedToPasscode:(unsigned long long)arg1;
+ (BOOL)doSynchronousPairingWithPasscode:(unsigned long long)arg1;
+ (unsigned long long)passCodeFromServerKeyData:(id)arg1 clientKeyData:(id)arg2;
+ (BOOL)persistKeychainAndCertificates;
+ (void)persistKeychainAndCertificates:(BOOL)arg1;
+ (id)dataWithTxtRecordPublicKeyValues:(id)arg1;
+ (id)txtRecordPublicKeyValuesWithData:(id)arg1;
+ (id)publicKeyDataFromCertificate:(struct OpaqueSecCertificateRef *)arg1;
+ (id)publicKeyDataFromIdentity:(struct OpaqueSecIdentityRef *)arg1;
+ (void)deleteKeychain;
+ (void)unlockIdentityKeychain;
+ (id)identitiesMatchingPrefix:(id)arg1;
+ (struct OpaqueSecIdentityRef *)clientIdentity;
+ (struct OpaqueSecIdentityRef *)serverIdentity;

@end

