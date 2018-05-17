//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMDAccessoryBrowser, HMDCentralMessageDispatcher, HMDCloudManager, HMDHomeManager, HMDMessageFilterChain, HMDRemoteIdentityRegistry, HMDXpcServer, NSObject<OS_dispatch_queue>;

@interface HMDMainDriver : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHomeManager *_homeManager;
    HMDAccessoryBrowser *_accessoryBrowser;
    HMDXpcServer *_xpcServer;
    HMDCentralMessageDispatcher *_messageDispatcher;
    HMDCloudManager *_cloudDataSyncManager;
    HMDMessageFilterChain *_msgFilterChain;
    HMDRemoteIdentityRegistry *_identityRegistry;
}

+ (id)driver;
@property(retain, nonatomic) HMDRemoteIdentityRegistry *identityRegistry; // @synthesize identityRegistry=_identityRegistry;
@property(retain, nonatomic) HMDMessageFilterChain *msgFilterChain; // @synthesize msgFilterChain=_msgFilterChain;
@property(retain, nonatomic) HMDCloudManager *cloudDataSyncManager; // @synthesize cloudDataSyncManager=_cloudDataSyncManager;
@property(retain, nonatomic) HMDCentralMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) HMDXpcServer *xpcServer; // @synthesize xpcServer=_xpcServer;
@property(retain, nonatomic) HMDAccessoryBrowser *accessoryBrowser; // @synthesize accessoryBrowser=_accessoryBrowser;
@property(retain, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)start;
- (void)localeChanged;
- (void)logError:(id)arg1 component:(id)arg2;
- (void)initBackgroundTaskAgent;
- (void)executeBTAJob:(const char *)arg1 withXPCDict:(id)arg2;
- (id)init;

@end
