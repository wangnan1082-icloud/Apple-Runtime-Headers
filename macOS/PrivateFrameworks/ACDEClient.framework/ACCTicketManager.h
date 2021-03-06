//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ACDEClient/ACCTicketManagerProtocol-Protocol.h>

@class NSString;
@protocol ACCSSOTGTStoragePolicy;

@interface ACCTicketManager : NSObject <ACCTicketManagerProtocol>
{
    Class _ssoTokenClass;
    Class _authContextClass;
}

@property(retain, nonatomic) Class ssoTokenClass; // @synthesize ssoTokenClass=_ssoTokenClass;
@property(retain, nonatomic) Class authContextClass; // @synthesize authContextClass=_authContextClass;
- (id)tokenDataHMACForRandomKey:(id)arg1 sourceTokenData:(id)arg2;
- (id)encryptionKeyWithRandomKey:(id)arg1;
- (void)updateContextWithClientSecretIfAny:(id)arg1;
- (id)deviceIdentifier;
- (id)twoSVCreateDateForPrincipal:(id)arg1;
- (id)twoSVSecretForPrincipal:(id)arg1;
- (id)twoSVPersonIDForPrincipal:(id)arg1;
- (void)tokenDidReceive2SVSecret:(id)arg1;
- (id)serviceTicketPrefix;
- (id)serviceTicketStringWithRequest:(id)arg1 ssoToken:(id)arg2;
- (id)changePasswordContextWithRequest:(id)arg1 oldPassword:(id)arg2 newPassword:(id)arg3;
- (id)fetchSSOTokenForPrincipal:(id)arg1 agedLessThan:(double)arg2;
- (id)fetchSSOTokenForPrincipal:(id)arg1;
- (BOOL)storeSSOToken:(id)arg1;
- (id)createSSOTokenWithContent:(id)arg1 context:(id)arg2;
- (void)prepareTokenFor2SV:(id)arg1 withVerificationCode:(id)arg2 tgtInfo:(id)arg3;
- (id)prepareToken:(id)arg1 withTGTInfo:(id)arg2;
- (id)tokenVersion;
- (unsigned long long)clientID;
- (id)identifier;
- (void)updateContextEncryptionHash:(id)arg1 withKeyCode:(id)arg2;
- (id)authContextWithRequest:(id)arg1 sessionToken:(id)arg2;
- (id)authContextWithRequest:(id)arg1 keyCode:(id)arg2 authenticationType:(id)arg3;
- (id)authContextWithRequest:(id)arg1;
- (id)envelopEncryptedSourceToken:(id)arg1 dsKeyVersion:(id)arg2 encryptedRandomKey:(id)arg3 initializationVector:(id)arg4 tokenDataHMAC:(id)arg5 tokenVersion:(id)arg6;
- (id)decryptEncryptedContent:(id)arg1 withHmac:(id)arg2 context:(id)arg3;
- (id)encryptSourceTokenWithSourceTokenData:(id)arg1 encryptionKey:(id)arg2 initializationVector:(id)arg3;
- (id)envelopeWithContext:(id)arg1 publicKey:(struct OpaqueSecKeyRef *)arg2;
- (id)envelopeWithContext:(id)arg1;
- (id)createNonceString;
- (id)certificateLabelForRealm:(id)arg1;
- (id)publicKeyVersionForRealm:(id)arg1;
- (id)defaultPublicKeyVersionForRealm:(id)arg1;
- (struct OpaqueSecCertificateRef *)defaultPublicKeyCertificateForRealm:(id)arg1;
- (void)setPublickKeyVersion:(id)arg1 label:(id)arg2 forRealm:(id)arg3;
- (id)setPublicKeyWithCertificate:(struct OpaqueSecCertificateRef *)arg1 version:(id)arg2 forRealm:(id)arg3;
- (BOOL)hasValidPublicKeyForRealm:(id)arg1;
- (struct OpaqueSecKeyRef *)publicKeyForRealm:(id)arg1;
- (struct OpaqueSecCertificateRef *)certificateForRealm:(id)arg1;
- (void)uninstallPublicKeyForRealm:(id)arg1;
- (BOOL)installCertificateWithString:(id)arg1 version:(id)arg2 forRealm:(id)arg3;
- (struct OpaqueSecCertificateRef *)certificateFromString:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) id <ACCSSOTGTStoragePolicy> tgtStoragePolicy;
- (id)certificateStoragePolicy;
- (id)cryptograph;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

