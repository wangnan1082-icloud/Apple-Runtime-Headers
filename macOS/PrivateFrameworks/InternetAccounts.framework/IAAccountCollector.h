//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface IAAccountCollector : NSObject
{
    NSXPCConnection *_connection;
    id <IAXPCProtocol> _agent;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

+ (id)shared;
- (void).cxx_destruct;
- (id)parentGoogleAccountForChildAccountWithUID:(id)arg1;
- (void)writeDiagnostics;
- (void)configureAccountUID:(id)arg1 pluginID:(id)arg2;
- (void)cancelSetupForAccount:(id)arg1 pluginID:(id)arg2;
- (void)continueSetupInAppForPluginID:(id)arg1 settings:(id)arg2;
- (void)authenticateAccountUID:(id)arg1 credential:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)copyContactsRecordsAndDeleteAccountUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)dumpDataPluginNotificationHistory;
- (void)reset;
- (id)topLevelAccounts_sync;
- (id)aListPluginIDForSettings:(id)arg1;
- (id)propertiesForPluginID:(id)arg1;
- (id)imageForPluginID:(id)arg1;
- (id)imageForAccountUID:(id)arg1;
- (id)imageForAccountUID:(id)arg1 pluginID:(id)arg2;
- (id)addAccount_sync:(id)arg1;
- (id)deleteAccountWithUID_sync:(id)arg1;
- (void)deactivateAccountUID:(id)arg1;
- (void)activateAccountUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)activateAccountUID:(id)arg1;
- (void)account:(id)arg1 didChangeWithType:(int)arg2 oldAccount:(id)arg3;
- (void)addACAccountProperties:(id)arg1 forUID:(id)arg2;
- (void)updateAccountWithUID:(id)arg1 withSettings:(id)arg2;
- (void)removeAccountWithUID:(id)arg1 deleteFromPlugin:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)removeAccountWithUID:(id)arg1 deleteFromDataSource:(BOOL)arg2 reply:(CDUnknownBlockType)arg3;
- (void)addAccount:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)cacheAccounts;
- (id)descriptionForAccount:(id)arg1;
- (void)descriptionForAccount:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)accountsWithLoginName_sync:(id)arg1 service:(id)arg2 provider:(id)arg3 attributes:(id)arg4;
- (id)accountWithUID_sync:(id)arg1;
- (void)accountsWithLoginName:(id)arg1 service:(id)arg2 provider:(id)arg3 attributes:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)accountWithUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)topLevelAccountsForProvider:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)allAccountsWithReply:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
