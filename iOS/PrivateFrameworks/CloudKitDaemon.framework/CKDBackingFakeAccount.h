//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDBackingAccount.h>

@class NSDictionary, NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface CKDBackingFakeAccount : CKDBackingAccount
{
    NSString *_dsid;
    NSString *_altDsid;
    NSString *_identifier;
    NSString *_primaryEmail;
    NSString *_password;
    NSDictionary *_accountBag;
    NSObject<OS_dispatch_queue> *_fakeAccountInfoQueue;
}

+ (id)fakeAccountWithEmail:(id)arg1 password:(id)arg2;
+ (Class)_platformBackingAccountClass;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fakeAccountInfoQueue; // @synthesize fakeAccountInfoQueue=_fakeAccountInfoQueue;
@property(retain, nonatomic) NSDictionary *accountBag; // @synthesize accountBag=_accountBag;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *primaryEmail; // @synthesize primaryEmail=_primaryEmail;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *altDsid; // @synthesize altDsid=_altDsid;
@property(retain, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (void).cxx_destruct;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateAccountPropertiesAndSaveAccountInStore:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)renewAuthTokenInStore:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)accountPropertiesForDataclass:(id)arg1;
- (_Bool)iCloudDriveAllowsCellularAccess;
- (_Bool)isFakeAccount;
- (_Bool)isDataclassEnabled:(id)arg1;
- (_Bool)canAuthWithCloudKit;
- (id)iCloudAuthTokenWithError:(id *)arg1;
- (id)cloudKitAuthTokenWithError:(id *)arg1;
- (id)username;
- (id)ckAccount;
- (void)dealloc;
- (id)_initFakeAccountWithEmail:(id)arg1 password:(id)arg2;
- (void)_checkAndLogIfAccountError;

@end
