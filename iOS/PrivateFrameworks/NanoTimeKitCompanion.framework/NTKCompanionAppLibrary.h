//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/LSApplicationWorkspaceObserverProtocol-Protocol.h>
#import <NanoTimeKitCompanion/NTKCompanionAppDelegate-Protocol.h>

@class NRDevice, NSArray, NSHashTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface NTKCompanionAppLibrary : NSObject <NTKCompanionAppDelegate, LSApplicationWorkspaceObserverProtocol>
{
    NSArray *_firstPartyApps;
    NSMutableArray *_allApps;
    NSMutableArray *_thirdPartyApps;
    NSHashTable *_changeObservers;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_updateProcessingQueue;
    NSObject<OS_dispatch_queue> *_observerCallbackQueue;
    NRDevice *_device;
}

+ (id)sharedAppLibrary;
@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerCallbackQueue; // @synthesize observerCallbackQueue=_observerCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateProcessingQueue; // @synthesize updateProcessingQueue=_updateProcessingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSHashTable *changeObservers; // @synthesize changeObservers=_changeObservers;
@property(retain, nonatomic) NSMutableArray *thirdPartyApps; // @synthesize thirdPartyApps=_thirdPartyApps;
@property(retain, nonatomic) NSMutableArray *allApps; // @synthesize allApps=_allApps;
@property(retain, nonatomic) NSArray *firstPartyApps; // @synthesize firstPartyApps=_firstPartyApps;
- (void).cxx_destruct;
- (void)_queue_loadApps;
- (void)_loadThirdPartyApps;
- (void)_loadApps;
- (void)_notifyAppIconUpdated:(id)arg1;
- (void)_notifyAppRemoved:(id)arg1;
- (void)_notifyAppUpdated:(id)arg1;
- (void)_notifyAppAdded:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)companionAppUpdatedIcon:(id)arg1;
- (void)companionAppWasUpdated:(id)arg1;
- (void)applicationStateDidChange:(id)arg1;
- (void)_activeDeviceChanged;
- (void)_load;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

