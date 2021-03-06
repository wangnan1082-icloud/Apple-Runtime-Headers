//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetCacheServicesExtensions/AssetCacheServicesManagerObserverProtocol-Protocol.h>

@class NSString;
@protocol AssetCacheServicesManagerEventsProtocol, AssetCacheServicesManagerEventsProtocol_Private, AssetCacheServicesManagerProtocol, OS_dispatch_queue, OS_os_log;

@interface AssetCacheServicesManager : NSObject <AssetCacheServicesManagerObserverProtocol>
{
    id <AssetCacheServicesManagerProtocol> _proxy;
    NSObject<OS_os_log> *_logHandle;
    id <AssetCacheServicesManagerEventsProtocol> _weakDelegate;
    id <AssetCacheServicesManagerEventsProtocol_Private> _weakPrivateDelegate;
    NSObject<OS_dispatch_queue> *_weakDelegateQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak NSObject<OS_dispatch_queue> *weakDelegateQueue; // @synthesize weakDelegateQueue=_weakDelegateQueue;
@property __weak id <AssetCacheServicesManagerEventsProtocol_Private> weakPrivateDelegate; // @synthesize weakPrivateDelegate=_weakPrivateDelegate;
@property __weak id <AssetCacheServicesManagerEventsProtocol> weakDelegate; // @synthesize weakDelegate=_weakDelegate;
@property(retain) NSObject<OS_os_log> *logHandle; // @synthesize logHandle=_logHandle;
@property(retain) id <AssetCacheServicesManagerProtocol> proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (id)_connectToManagerServiceWithCallback:(CDUnknownBlockType)arg1;
- (oneway void)notifyAboutUpdatedStatus:(id)arg1;
- (oneway void)notifyAboutCompletedDataMigrationWithError:(id)arg1;
- (oneway void)notifyAboutDataMigrationProgress:(double)arg1;
- (oneway void)notifyAboutDeactivationWithError:(id)arg1;
- (oneway void)notifyAboutActivationWithError:(id)arg1;
- (void)launchAfterDelay:(double)arg1;
- (id)initWithDelegate:(id)arg1 privateDelegate:(id)arg2 delegateQueue:(id)arg3;
- (id)makeDNSTXTRecordsForPublicRanges:(id)arg1 error:(id *)arg2;
- (void)setSettings:(id)arg1;
- (void)settings;
- (void)status;
- (void)flushCachePersonal:(BOOL)arg1 shared:(BOOL)arg2;
- (void)canActivate;
- (void)isActivated;
- (void)deactivate;
- (void)activate;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

