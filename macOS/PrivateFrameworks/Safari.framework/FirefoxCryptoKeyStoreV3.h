//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FirefoxCryptoKeyStorage.h"

@class BerkeleyDatabase, NSData, NSString;

__attribute__((visibility("hidden")))
@interface FirefoxCryptoKeyStoreV3 : NSObject <FirefoxCryptoKeyStorage>
{
    BerkeleyDatabase *_database;
    BOOL _databasePassedSanityCheck;
    NSData *_passwordCheckData;
    NSData *_passwordCheckHeader;
    NSData *_passwordCheckEntrySalt;
    NSData *_passwordCheckPayload;
}

- (void).cxx_destruct;
- (id)_versionData;
- (id)_dataForKey:(id)arg1;
- (BOOL)_openDatabaseIfNeeded;
- (void)_resetDerivedData;
- (id)_passwordCheckHeader;
- (id)_passwordCheckData;
@property(readonly, copy, nonatomic) NSData *passwordCheckPayload;
@property(readonly, copy, nonatomic) NSData *passwordCheckEntrySalt;
@property(readonly, copy, nonatomic) NSData *globalSaltData;
@property(readonly, nonatomic) BOOL storesRawPrivateKey;
@property(readonly, nonatomic) BOOL canOpen;
- (id)encryptedPrivateKeyDataWithID:(id)arg1;
- (id)initWithStoreURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
