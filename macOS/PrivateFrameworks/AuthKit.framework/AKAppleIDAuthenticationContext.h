//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAppleIDAuthenticationLimitedUIProvider-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAnisetteData, AKDevice, NSArray, NSDictionary, NSNumber, NSSet, NSString, NSUUID;
@protocol AKAnisetteServiceProtocol, OS_dispatch_queue;

@interface AKAppleIDAuthenticationContext : NSObject <AKAppleIDAuthenticationLimitedUIProvider, NSSecureCoding>
{
    NSString *_generatedCode;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSString *_deviceClass;
    NSString *_deviceColor;
    NSString *_deviceEnclosureColor;
    struct __CFUserNotification *_activeSecondFactoryEntryPrompt;
    CDUnknownBlockType _secondFactoryEntryCompletion;
    NSObject<OS_dispatch_queue> *_secondFactorQueue;
    AKDevice *_proxiedDevice;
    AKDevice *_companionDevice;
    NSString *_interpolatedReason;
    unsigned long long _attemptIndex;
    BOOL _isProxyingForApp;
    BOOL _shouldSendIdentityTokenForRemoteUI;
    BOOL _shouldSendGrandSlamTokensForRemoteUI;
    BOOL _isPasswordEditable;
    BOOL _shouldSkipInitialReachabilityCheck;
    BOOL _shouldPreventInteractiveAuth;
    BOOL _shouldForceInteractiveAuth;
    BOOL _isUsernameEditable;
    BOOL _shouldAllowAppleIDCreation;
    BOOL _needsCredentialRecovery;
    BOOL _needsNewAppleID;
    BOOL _needsPasswordChange;
    BOOL _isTriggeredByNotification;
    BOOL _isEphemeral;
    BOOL _shouldOfferSecurityUpgrade;
    BOOL _needsRepair;
    BOOL _shouldPromptForPasswordOnly;
    BOOL _shouldUpdatePersistentServiceTokens;
    BOOL _shouldRequestRecoveryPET;
    BOOL _shouldRequestShortLivedToken;
    BOOL _shouldRequestConfigurationInfo;
    BOOL _supportsPiggybacking;
    BOOL _anticipateEscrowAttempt;
    BOOL _isFirstTimeLogin;
    BOOL _shouldSkipSettingsLaunchAlert;
    NSString *_proxiedAppBundleID;
    NSUUID *_identifier;
    NSString *_identityToken;
    NSString *_passwordPromptTitle;
    NSString *_proxiedAppName;
    NSString *_password;
    unsigned long long _capabilityForUIDisplay;
    NSString *_shortLivedToken;
    NSString *_message;
    NSString *_username;
    long long _serviceType;
    NSString *_reason;
    NSString *_defaultButtonString;
    long long _maximumLoginAttempts;
    NSArray *_serviceIdentifiers;
    NSString *_DSID;
    NSString *_altDSID;
    NSDictionary *_httpHeadersForRemoteUI;
    id _clientInfo;
    NSString *_title;
    NSString *_helpAnchor;
    NSString *_helpBook;
    unsigned long long _authenticationType;
    id <AKAnisetteServiceProtocol> _anisetteDataProvider;
    NSNumber *_isAppleIDLoginEnabled;
    NSNumber *_hasEmptyPassword;
    NSSet *_desiredInternalTokens;
    NSString *_securityUpgradeContext;
    AKAnisetteData *_proxiedDeviceAnisetteData;
    AKAnisetteData *_companionDeviceAnisetteData;
    NSString *_displayString;
    NSString *_displayTitle;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(retain) AKAnisetteData *companionDeviceAnisetteData; // @synthesize companionDeviceAnisetteData=_companionDeviceAnisetteData;
@property(retain) AKAnisetteData *proxiedDeviceAnisetteData; // @synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData;
@property(copy, nonatomic) NSString *securityUpgradeContext; // @synthesize securityUpgradeContext=_securityUpgradeContext;
@property BOOL shouldSkipSettingsLaunchAlert; // @synthesize shouldSkipSettingsLaunchAlert=_shouldSkipSettingsLaunchAlert;
@property(setter=setFirstTimeLogin:) BOOL isFirstTimeLogin; // @synthesize isFirstTimeLogin=_isFirstTimeLogin;
@property(copy) NSSet *desiredInternalTokens; // @synthesize desiredInternalTokens=_desiredInternalTokens;
@property BOOL anticipateEscrowAttempt; // @synthesize anticipateEscrowAttempt=_anticipateEscrowAttempt;
@property BOOL supportsPiggybacking; // @synthesize supportsPiggybacking=_supportsPiggybacking;
@property BOOL shouldRequestConfigurationInfo; // @synthesize shouldRequestConfigurationInfo=_shouldRequestConfigurationInfo;
@property BOOL shouldRequestShortLivedToken; // @synthesize shouldRequestShortLivedToken=_shouldRequestShortLivedToken;
@property BOOL shouldRequestRecoveryPET; // @synthesize shouldRequestRecoveryPET=_shouldRequestRecoveryPET;
@property(copy, setter=setHasEmptyPassword:) NSNumber *hasEmptyPassword; // @synthesize hasEmptyPassword=_hasEmptyPassword;
@property(copy, setter=setAppleIDLoginEnabled:) NSNumber *isAppleIDLoginEnabled; // @synthesize isAppleIDLoginEnabled=_isAppleIDLoginEnabled;
@property(retain) id <AKAnisetteServiceProtocol> anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
@property BOOL shouldUpdatePersistentServiceTokens; // @synthesize shouldUpdatePersistentServiceTokens=_shouldUpdatePersistentServiceTokens;
@property BOOL shouldPromptForPasswordOnly; // @synthesize shouldPromptForPasswordOnly=_shouldPromptForPasswordOnly;
@property unsigned long long authenticationType; // @synthesize authenticationType=_authenticationType;
@property(copy) NSString *helpBook; // @synthesize helpBook=_helpBook;
@property(copy) NSString *helpAnchor; // @synthesize helpAnchor=_helpAnchor;
@property(retain) NSString *title; // @synthesize title=_title;
@property BOOL needsRepair; // @synthesize needsRepair=_needsRepair;
@property BOOL shouldOfferSecurityUpgrade; // @synthesize shouldOfferSecurityUpgrade=_shouldOfferSecurityUpgrade;
@property(retain) id clientInfo; // @synthesize clientInfo=_clientInfo;
@property(copy) NSDictionary *httpHeadersForRemoteUI; // @synthesize httpHeadersForRemoteUI=_httpHeadersForRemoteUI;
@property(copy) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy) NSString *DSID; // @synthesize DSID=_DSID;
@property BOOL isEphemeral; // @synthesize isEphemeral=_isEphemeral;
@property(copy) NSArray *serviceIdentifiers; // @synthesize serviceIdentifiers=_serviceIdentifiers;
@property long long maximumLoginAttempts; // @synthesize maximumLoginAttempts=_maximumLoginAttempts;
@property(copy, nonatomic) NSString *defaultButtonString; // @synthesize defaultButtonString=_defaultButtonString;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property long long serviceType; // @synthesize serviceType=_serviceType;
@property(setter=setTriggeredByNotification:) BOOL isTriggeredByNotification; // @synthesize isTriggeredByNotification=_isTriggeredByNotification;
@property BOOL needsPasswordChange; // @synthesize needsPasswordChange=_needsPasswordChange;
@property BOOL needsNewAppleID; // @synthesize needsNewAppleID=_needsNewAppleID;
@property BOOL needsCredentialRecovery; // @synthesize needsCredentialRecovery=_needsCredentialRecovery;
@property BOOL shouldAllowAppleIDCreation; // @synthesize shouldAllowAppleIDCreation=_shouldAllowAppleIDCreation;
@property BOOL isUsernameEditable; // @synthesize isUsernameEditable=_isUsernameEditable;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property unsigned long long _attemptIndex; // @synthesize _attemptIndex;
@property(readonly) BOOL _shouldSkipInitialReachabilityCheck; // @synthesize _shouldSkipInitialReachabilityCheck;
@property(copy, nonatomic, setter=_setMessage:) NSString *_message; // @synthesize _message;
@property(copy, setter=_setShortLivedToken:) NSString *_shortLivedToken; // @synthesize _shortLivedToken;
@property BOOL _isPasswordEditable; // @synthesize _isPasswordEditable;
@property(copy, setter=_setPassword:) NSString *_password; // @synthesize _password;
@property(copy, setter=_setProxiedAppName:) NSString *_proxiedAppName; // @synthesize _proxiedAppName;
@property(copy) NSString *_passwordPromptTitle; // @synthesize _passwordPromptTitle;
@property BOOL _shouldSendGrandSlamTokensForRemoteUI; // @synthesize _shouldSendGrandSlamTokensForRemoteUI;
@property BOOL _shouldSendIdentityTokenForRemoteUI; // @synthesize _shouldSendIdentityTokenForRemoteUI;
@property(copy, setter=_setIdentityToken:) NSString *_identityToken; // @synthesize _identityToken;
@property(readonly) NSUUID *_identifier; // @synthesize _identifier;
@property(copy, setter=_setProxiedAppBundleID:) NSString *_proxiedAppBundleID; // @synthesize _proxiedAppBundleID;
@property(setter=_setProxyingForApp:) BOOL _isProxyingForApp; // @synthesize _isProxyingForApp;
- (void).cxx_destruct;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly) BOOL _requiresPasswordInput;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
@property(copy) AKDevice *companionDevice;
@property(copy) AKDevice *proxiedDevice;
@property(copy) NSString *serviceIdentifier;
@property(readonly) NSString *_interpolatedReasonWithBlame;
@property(readonly) NSString *_interpolatedReason;
@property BOOL shouldForceInteractiveAuth; // @synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth;
@property BOOL shouldPreventInteractiveAuth; // @synthesize shouldPreventInteractiveAuth=_shouldPreventInteractiveAuth;
@property(readonly) unsigned long long _capabilityForUIDisplay; // @synthesize _capabilityForUIDisplay;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (BOOL)_localUserHasEmptyPassword;
- (void)_updateWithValuesFromContext:(id)arg1;
- (id)_sanitizedCopy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)init;
- (id)authKitAccountForSilentServiceToken:(id *)arg1;
- (id)authKitAccount:(id *)arg1;
@property(copy) NSString *generatedCode;
@property(copy) NSString *deviceEnclosureColor;
@property(copy) NSString *deviceColor;
@property(copy) NSString *deviceClass;
@property(copy) NSNumber *longitude;
@property(copy) NSNumber *latitude;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

