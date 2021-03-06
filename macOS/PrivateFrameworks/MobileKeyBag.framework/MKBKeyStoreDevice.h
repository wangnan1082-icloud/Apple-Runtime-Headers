//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MKBKeyStoreDevice : NSObject
{
}

+ (id)sharedService;
- (id)listAllUserSessionIDSWithReturnedError:(id *)arg1;
- (_Bool)unloadUserSession:(id)arg1 withreturnedError:(id *)arg2;
- (_Bool)removeUserSession:(id)arg1 withreturnedError:(id *)arg2;
- (id)migrateUserSession:(id)arg1 fromPath:(id)arg2 withSecret:(id)arg3 withOpaqueData:(id)arg4 withreturnedError:(id *)arg5;
- (id)createUserSession:(id)arg1 withSecret:(id)arg2 withOpaqueData:(id)arg3 withreturnedError:(id *)arg4;
- (id)loadUserSession:(id)arg1 withSecret:(id)arg2 withreturnedError:(id *)arg3;
- (int)Event:(int)arg1;
- (int)migrateFS;
- (int)isKeyRollingWithKeyStatus:(int *)arg1;
- (int)stashVerifywithValidity:(int *)arg1;
- (id)stashLoad;
- (int)stashDestroy;
- (int)stashCommit;
- (id)getPolicyStatus:(id)arg1 withUUID:(id)arg2 withreturnedError:(id *)arg3;
- (int)bindToKEK:(id)arg1 withUID:(unsigned int)arg2 withHandle:(int)arg3;
- (int)setUserUUID:(id)arg1 withUID:(unsigned int)arg2 withUUID:(id)arg3 withHandle:(int)arg4;
- (int)stashCreateWithSecret:(id)arg1 withMode:(int)arg2;
- (_Bool)getDeviceLockStateForUser:(int)arg1 extendedState:(_Bool)arg2 withLockStateInfo:(int *)arg3;
- (id)getLockStateForUser:(int)arg1;
- (int)passcodeUnlockFailed;
- (int)passcodeUnlockSuccess;
- (int)passcodeUnlockStart;
- (int)stopBackupSession;
- (int)startBackupSession;
- (int)registerOTABackup:(id)arg1 withSecret:(id)arg2;
- (int)ChangeSystemSecretWithEscrow:(id)arg1 FromOldPasscode:(id)arg2 ToNew:(id)arg3 withOpaqueDats:(id)arg4 withKeepState:(int)arg5;
- (id)getBackupkeyForInodeOrCryptoID:(unsigned long long)arg1 withreturnValue:(int *)arg2;
- (id)copySytemSecretBlob;
- (int)changeClassKeysGenerationWithSecret:(id)arg1 withGenerationOption:(int)arg2;
- (int)changeSystemSecretFromOldPasscode:(id)arg1 ToNew:(id)arg2 withOpaqueData:(id)arg3;
- (id)getFileHandleForData:(id)arg1;
- (id)_CreateMKBServerConnection;

@end

