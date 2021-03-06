//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SystemMigration/SMSystem_Daemon_Network.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_Windows : SMSystem_Daemon_Network
{
    BOOL sizingIsCancelled;
    BOOL hasSystemProfile;
    NSDictionary *versionDictionary;
    NSString *driveLetter;
    NSArray *components;
    NSArray *allUsers;
    NSObject<OS_dispatch_queue> *_systemProfileQueue;
    NSMutableDictionary *_componentDictionary;
}

+ (id)modelIcon;
@property(retain) NSMutableDictionary *componentDictionary; // @synthesize componentDictionary=_componentDictionary;
@property(retain) NSObject<OS_dispatch_queue> *systemProfileQueue; // @synthesize systemProfileQueue=_systemProfileQueue;
@property(retain, nonatomic) NSArray *allUsers; // @synthesize allUsers;
@property(retain, nonatomic) NSArray *components; // @synthesize components;
@property(retain) NSString *driveLetter; // @synthesize driveLetter;
@property(retain, nonatomic) NSDictionary *versionDictionary; // @synthesize versionDictionary;
@property BOOL hasSystemProfile; // @synthesize hasSystemProfile;
@property BOOL sizingIsCancelled; // @synthesize sizingIsCancelled;
- (void).cxx_destruct;
- (void)dumpRemoteLog;
- (id)componentWithName:(id)arg1 forUser:(id)arg2;
- (void)cancelSizing;
- (void)sizeOfComponent:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (id)componentForIdentifier:(id)arg1;
- (id)sizeForComponentsWithIdentifiers:(id)arg1;
- (id)sizeForComponentWithIdentifier:(id)arg1;
- (void)sizeComponent:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (void)sizeAllUsersIncludingVaultUsers:(BOOL)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (void)prepareIncompatibleApplicationsList;
- (void)sourceConnectionChanged;
- (BOOL)shouldSwitchToAccessPoint;
- (id)filesystemEnumerator;
- (BOOL)disallowsIPV6;
- (Class)networkProxyClass;
- (BOOL)connectSession;
- (void)addComponentsToDictionary:(id)arg1;
- (id)copier;
- (void)updateSystemProfile;
- (id)productVersion;
- (id)systemVersion;
- (void)evaluateServerType;
- (unsigned long long)systemType;
- (id)volumeIcon;
- (BOOL)isDefaultEffaceable;
- (id)createFileManager;
- (id)initWithSession:(id)arg1 name:(id)arg2 txtRecord:(id)arg3;

@end

