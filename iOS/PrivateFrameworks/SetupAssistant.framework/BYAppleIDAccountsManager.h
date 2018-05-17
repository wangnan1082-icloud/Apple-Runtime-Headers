//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AALoginPluginManager, AASetupAssistantService, AAStorableLoginContext;

@interface BYAppleIDAccountsManager : NSObject
{
    AALoginPluginManager *_appleIDLoginPluginManager;
    AAStorableLoginContext *_storedLoginContext;
    AASetupAssistantService *_aaService;
}

+ (id)sharedManager;
@property(retain, nonatomic, setter=setAAService:) AASetupAssistantService *aaService; // @synthesize aaService=_aaService;
- (void).cxx_destruct;
- (void)clearStoredLoginContext;
- (id)storedLoginContext;
- (void)performSilentICDPUpgrade;
- (void)runPostRestoreRenewCredentialsIfNeeded;
- (void)enableDataClassesForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loginDelegateAccountsWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 skipiTunes:(_Bool)arg4 onlyAppleIDPlugin:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;
- (id)initForDelegateBundleIDs:(id)arg1;

@end
