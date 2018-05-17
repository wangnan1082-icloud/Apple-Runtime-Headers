//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HAPKeyStore.h"
#import "HMFDumpState.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface HAPSystemKeychainStore : HMFObject <HAPKeyStore, HMFDumpState>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_activeControllerIdentifier;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)systemStore;
@property(retain, nonatomic) NSString *activeControllerIdentifier; // @synthesize activeControllerIdentifier=_activeControllerIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (long)_deleteAllPeripheralIdentifiers;
- (_Bool)deleteAllPeripheralIdentifiers:(id *)arg1;
- (id)getPeripherialIdentifiersAndAccessoryNames;
- (long)_getPeripheralIdentifier:(id *)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned int *)arg3 resumeSessionID:(unsigned long long *)arg4;
- (id)readPeripheralIdentifierForAccessoryIdentifier:(id)arg1 protocolVersion:(unsigned int *)arg2 resumeSessionID:(unsigned long long *)arg3 error:(id *)arg4;
- (long)_deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1;
- (_Bool)deletePeripheralIdentifierForAccessoryIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)updatePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned int)arg3 previousVersion:(unsigned int *)arg4 resumeSessionID:(unsigned long long)arg5 error:(id *)arg6;
- (long)_savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned int)arg3 resumeSessionID:(unsigned long long)arg4;
- (_Bool)savePeripheralIdentifier:(id)arg1 forAccessoryIdentifier:(id)arg2 protocolVersion:(unsigned int)arg3 resumeSessionID:(unsigned long long)arg4 error:(id *)arg5;
- (long)_removeKeychainItem:(id)arg1 leaveTombstone:(_Bool)arg2;
- (long)_addKeychainItem:(id)arg1 logDuplicateItemError:(_Bool)arg2;
- (id)_getKeychainItemsForViewHint:(id)arg1 accessGroup:(id)arg2 type:(id)arg3 account:(id)arg4 shouldReturnData:(_Bool)arg5 error:(int *)arg6;
- (id)_getKeychainItemsForAccessGroup:(id)arg1 type:(id)arg2 account:(id)arg3 shouldReturnData:(_Bool)arg4 error:(int *)arg5;
- (void)_updateKeychainItemToInvisible:(id)arg1;
- (id)_auditAccessoryKeys:(id)arg1;
- (id)auditAccessoryKeys:(id)arg1;
- (long)_removeAccessoryKeyForName:(id)arg1;
- (_Bool)removeAllAccessoryKeys:(id *)arg1;
- (_Bool)removeAccessoryKeyForName:(id)arg1 error:(id *)arg2;
- (_Bool)registerAccessoryWithHomeKit:(id)arg1 error:(id *)arg2;
- (long)_savePublicKey:(id)arg1 forAccessoryName:(id)arg2;
- (_Bool)savePublicKey:(id)arg1 forAccessoryName:(id)arg2 error:(id *)arg3;
- (long)_getPublicKey:(id *)arg1 registeredWithHomeKit:(_Bool *)arg2 forAccessoryName:(id)arg3;
- (id)readPublicKeyForAccessoryName:(id)arg1 registeredWithHomeKit:(_Bool *)arg2 error:(id *)arg3;
- (long)_createMetadataSecretKey:(id *)arg1;
- (long)_getMetadataSecretKey:(id *)arg1;
- (_Bool)getMetadataSecretKey:(id *)arg1 error:(id *)arg2;
- (long)_removeControllerKeyPairForViewHint:(id)arg1 identifier:(id)arg2 leaveTombstone:(_Bool)arg3;
- (long)_removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(_Bool)arg2;
- (_Bool)removeControllerKeyPairForIdentifier:(id)arg1 leaveTombstone:(_Bool)arg2 error:(id *)arg3;
- (_Bool)getCurrentiCloudIdentifier:(id *)arg1 controllerPairingIdentifier:(id *)arg2 error:(id *)arg3;
- (long)_updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2;
- (_Bool)updateCurrentiCloudIdentifier:(id)arg1 controllerPairingIdentifier:(id)arg2 error:(id *)arg3;
- (long)_removeControllerKeyPairForViewHint:(id)arg1;
- (long)_removeControllerKeyPair;
- (_Bool)removeControllerKeyPairWithError:(id *)arg1;
@property(readonly, nonatomic) NSString *activeControllerPairingIdentifier;
- (_Bool)updateActiveControllerPairingIdentifier:(id)arg1;
- (long)_getAllAvailableControllerPublicKeys:(id *)arg1 secretKeys:(id *)arg2 userNames:(id *)arg3;
- (_Bool)getAllAvailableControllerPublicKeys:(id *)arg1 secretKeys:(id *)arg2 userNames:(id *)arg3 error:(id *)arg4;
- (_Bool)deserializeKeyPair:(id)arg1 publicKey:(id *)arg2 secretKey:(id *)arg3 error:(id *)arg4;
- (long)_saveKeyPair:(id)arg1 username:(id)arg2 syncable:(_Bool)arg3 viewHint:(id)arg4;
- (_Bool)saveKeyPair:(id)arg1 username:(id)arg2 syncable:(_Bool)arg3 error:(id *)arg4;
- (long)_createControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4;
- (_Bool)saveLocalPairingIdentity:(id)arg1 syncable:(_Bool)arg2 error:(id *)arg3;
- (id)_getControllerKeychainItemForViewHint:(id)arg1 error:(int *)arg2;
- (id)_getControllerKeychainItemError:(int *)arg1;
- (long)_getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4;
- (_Bool)getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 keyPair:(id *)arg3 username:(id *)arg4 allowCreation:(_Bool)arg5 error:(id *)arg6;
- (_Bool)getControllerPublicKey:(id *)arg1 secretKey:(id *)arg2 username:(id *)arg3 allowCreation:(_Bool)arg4 error:(id *)arg5;
- (id)_getLocalPairingIdentityAllowingCreation:(_Bool)arg1 error:(id *)arg2;
- (id)getOrCreateLocalPairingIdentity:(id *)arg1;
- (id)getLocalPairingIdentity:(id *)arg1;
- (void)ensureV0ControllerKeyExists;
- (id)dumpState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
