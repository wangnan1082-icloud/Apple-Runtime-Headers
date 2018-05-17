//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NTKUpNextLoggable.h"

@class NSArray, NSHashTable, NSObject<OS_dispatch_queue>, NSString, NTKRelevanceProviderEnvironment, NTKUpNextPriorityQueue, NTKUpNextTimer;

@interface NTKRelevanceProviderManager : NSObject <NTKUpNextLoggable>
{
    NTKRelevanceProviderEnvironment *_environment;
    NSHashTable *_providers;
    NTKUpNextPriorityQueue *_scheduledUpdates;
    NTKUpNextTimer *_updateTimer;
    _Bool _dataStoresOpened;
    NSObject<OS_dispatch_queue> *_relevanceQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_loggingHeader;
}

+ (_Bool)supportsHistoricProviders;
+ (_Bool)_supportsHistoricProviders;
+ (_Bool)_requiresLocationServices;
+ (_Bool)_wantsDelayedUpdate;
+ (id)_dependencyClasses;
+ (_Bool)_mlFeatureIsFlag;
+ (unsigned int)_mlFeatureType;
+ (Class)_relevanceProviderClass;
+ (id)providerManagerClasses;
- (void).cxx_destruct;
- (id)loggedState;
- (id)logName;
- (void)_loadLoggingHeader;
- (void)_prepareForUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_resetTimer;
- (void)_queue_performPendingUpdatesAndScheduleTimerIfNeeded;
- (void)_performUpdate:(id)arg1;
- (void)_removeAllPendingUpdates;
- (void)_scheduleUpdate:(id)arg1;
- (void)_handleSignificantTimeChange;
- (void)pause;
- (void)resume;
- (void)_enumerateProviders:(CDUnknownBlockType)arg1;
- (void)_prepareForUpdate;
- (void)_removeProvider:(id)arg1;
- (void)_addedProvider:(id)arg1;
- (id)_manager_queue;
- (_Bool)_dataSourcesOpened;
- (void)_closeDataStoresAndObserveChanges;
- (void)_openDataStoresAndObserveChanges;
@property(readonly) unsigned int hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_isValidProvider:(id)arg1;
@property(nonatomic) __weak NTKRelevanceProviderEnvironment *environment;
- (void)relevanceForHistoricProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isProviderHistoric:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *allProviders;
- (void)relevanceForProvider:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)containsProvider:(id)arg1;
- (void)removeProvider:(id)arg1;
- (void)addProvider:(id)arg1;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (_Bool)_isHistoricProvider:(id)arg1;
- (float)_relevanceForProvider:(id)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
