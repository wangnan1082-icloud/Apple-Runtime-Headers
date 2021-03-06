//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SymptomEvaluator/AnalyticsEngineCore.h>

@class AppAnalytics, NSDate, NSMutableDictionary, NSMutableSet, NSObject, ObjectAnalytics, ProcessAnalytics, UsageAnalytics;
@protocol OS_dispatch_source;

@interface FlowAnalyticsEngine : AnalyticsEngineCore
{
    UsageAnalytics *uspace;
    ProcessAnalytics *pspace;
    AppAnalytics *aspace;
    NSMutableDictionary *processCache;
    NSMutableDictionary *appState;
    NSMutableDictionary *appCompactState;
    NSMutableDictionary *appPidState;
    BOOL foregroundActivity;
    _Bool trackingRequiredForBaseband;
    NSMutableDictionary *uuidProcessNameMap;
    NSMutableDictionary *pluginToBundleCache;
    NSMutableDictionary *uuidToBundleIDMap;
    NSMutableDictionary *audioBundleCache;
    NSMutableSet *pendingUnregisteredAppBundleIDs;
    NSMutableSet *pendingRegisteredAppBundleIDs;
    struct __NStatManager *nstatManager;
    unsigned int nstatManagerFlags;
    struct __NStatManager *nstatInterfaceManager;
    struct __NStatSource *nstatWifiSource;
    struct __NStatSource *nstatCellSource;
    CDUnknownBlockType nstatEventBlock;
    int cellularInterface;
    unsigned long long logStateHandle;
    NSObject<OS_dispatch_source> *siginfo;
    unsigned int pdpBitmap;
    CDUnknownBlockType dataUsageRefreshCompletionBlock;
    int dataUsageRefreshCompletionNumWaiting;
    NSDate *lastRefreshTimes[2];
    NSMutableDictionary *flowCache;
    NSMutableDictionary *flowInstant;
    id flowObserver;
    id relayReadyObserver;
    ObjectAnalytics *fspace;
    ObjectAnalytics *lfpspace;
    NSObject<OS_dispatch_source> *flushOldFlowRecordsTimer;
    unsigned long long usageCoalescingSpanSecs;
    unsigned long long usageWindowUnitsCount;
    BOOL thresholdedFlowCount;
    NSMutableDictionary *estAwdMetricsDict;
    _Bool _haveCalendar;
    _Bool _haveTypicalUsage;
    NSMutableDictionary *_flowWatchers;
}

+ (void)identifierForUUID:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)appsWithFlowsPassingTest:(CDUnknownBlockType)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (_Bool)refreshDataUsageWithCallback:(CDUnknownBlockType)arg1;
+ (id)foregroundAppKeys;
+ (void)checkForegroundStateForProcessWithUUID:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (BOOL)hasAnyForegroundApp;
+ (void)workspaceSaveWithCallback:(CDUnknownBlockType)arg1;
+ (id)queue;
@property(retain, nonatomic) NSMutableDictionary *flowWatchers; // @synthesize flowWatchers=_flowWatchers;
- (void).cxx_destruct;
- (void)identifierForUUID:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)identifierForUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetDataFor:(id)arg1 nameKind:(id)arg2;
- (id)getOption:(id)arg1;
- (id)setOption:(id)arg1;
- (void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3;
- (void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (int)_performQueryOnEntityFromInstantFlowCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id *)arg4;
- (BOOL)_bundleBackgroundAudioCapable:(id)arg1;
- (id)_attemptConvertingPluginNameToContainingAppName:(id)arg1;
- (id)_safePredFrom:(id)arg1 forEntity:(id)arg2;
- (int)_performQueryOnEntityFromProcCache:(id)arg1 target:(id)arg2 pred:(id)arg3 found:(id *)arg4;
- (int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id *)arg3 actions:(id)arg4 found:(id *)arg5;
- (void)performThresholdingOn:(id)arg1 forKey:(id)arg2 andValue:(id)arg3 connection:(id)arg4 createdBlock:(CDUnknownBlockType *)arg5 hitBlock:(CDUnknownBlockType)arg6 errorBlock:(CDUnknownBlockType)arg7;
- (void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(CDUnknownBlockType)arg7;
- (_Bool)handlesEntity:(id)arg1;
- (_Bool)_handlesFlowEntity:(id)arg1;
- (_Bool)_handlesProcEntity:(id)arg1;
- (void)_newFlowData:(id)arg1;
- (void)_pruneFlowHistory;
- (void)_archiveRecord:(id)arg1;
- (id)_parseEvent:(id)arg1 withGeneration:(id *)arg2;
- (id)_fetchFromFlowCacheWithName:(id)arg1;
- (id)_flowFetchForName:(id)arg1;
- (void)_removeOldFlowRecords;
- (_Bool)_isLiveFlowPerfinScope:(id)arg1 forTime:(id)arg2 andTag:(id)arg3;
- (void)_appsWithFlowsPassingTest:(CDUnknownBlockType)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_recentUsageForApps:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)_foregroundAppKeys;
- (void)_checkForegroundStateForProcessWithUUID:(id)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (BOOL)_hasAnyForegroundApp;
- (void)workspaceSaveWithCallback:(CDUnknownBlockType)arg1;
- (id)_uuidBundleIDMapLookup:(id)arg1;
- (void)_uuidBundleIDMapAddUUIDsForBundleID:(id)arg1;
- (void)_uuidBundleIDMapInit;
- (void)_foregroundAppStateInit;
- (void)_uuidBundleIDMapCleanup;
- (void)handleLaunchServicesApplicationUnregistration:(id)arg1;
- (void)handleLaunchServicesApplicationRegistration:(id)arg1;
- (void)stopObservingLaunchServices;
- (void)startObservingLaunchServices;
- (void)_uuidProcessNameMapPrune;
- (void)_uuidProcessNameMapAddUUID:(id)arg1 processName:(id)arg2;
- (void)_uuidProcessNameMapRemove:(id)arg1;
- (id)_uuidProcessNameMapLookup:(id)arg1 timestamp:(id)arg2;
- (void)_updateLiveUsage:(id)arg1 wifiIn:(long long)arg2 wifiOut:(long long)arg3 cellIn:(long long)arg4 cellOut:(long long)arg5 wiredIn:(long long)arg6 wiredOut:(long long)arg7 xIn:(long long)arg8 xOut:(long long)arg9 isJumboFlow:(BOOL)arg10 closing:(BOOL)arg11;
- (void)_applyCountsTo:(id)arg1 fromLiveUsage:(id)arg2 mustReset:(BOOL)arg3;
- (void)_liveUsagePackForProcess:(id)arg1;
- (id)_liveUsageFetchForProcess:(id)arg1;
- (_Bool)_isLiveUsageInRollingWindow:(id)arg1 forTime:(id)arg2;
- (_Bool)_isLiveUsageinScope:(id)arg1 forTime:(id)arg2;
- (void)_removeFromProcCache:(id)arg1;
- (void)_insertProcCache:(id)arg1 underName:(id)arg2;
- (id)_fetchFromProcCacheWithName:(id)arg1;
- (_Bool)_snapshot:(id)arg1 toBundleID:(id *)arg2 procName:(id *)arg3 delegateName:(id *)arg4;
- (_Bool)_processNameIsValid:(id)arg1;
- (id)_has1stPartyImpliedBundleNameBehavior:(id)arg1;
- (id)_processFetchForName:(id)arg1 bundle:(id)arg2 shouldFillMiss:(_Bool)arg3;
- (void)_removeInfoFromWorkspaceForProcess:(id)arg1;
- (void)_removeAllInfoForProcess:(id)arg1 withUUID:(id)arg2;
- (_Bool)_initializeLocalCache;
- (void)_dumpState;
- (struct __NStatSource *)_startMonitoringNetworkInterface:(int)arg1 usingThreshold:(unsigned long long)arg2;
- (void)_stopMonitoringNetworkInterfaceSource:(struct __NStatSource *)arg1;
- (_Bool)_shouldAcceptNStatSource:(struct __NStatSource *)arg1 withSnapshot:(id)arg2;
- (void)_saveAndUnloadSelectState;
- (void)_handleApplicationNotificationStateChangedForDisplayName:(id)arg1 UUID:(id)arg2 pid:(int)arg3 edgeMode:(_Bool)arg4;
- (void)_trimForegroundAppState;
- (_Bool)_appPidStateContainsUUID:(id)arg1;
- (void)_handleApplicationNotificationCompactForBundleName:(id)arg1 edgeMode:(_Bool)arg2;
- (double)_usageFingerprintForBundleName:(id)arg1;
- (void)_handleNetworkStatisticsData:(struct __NStatSource *)arg1 socketClosed:(_Bool)arg2;
- (void)_handleNetworkStatisticsSourceAdd:(struct __NStatSource *)arg1;
- (void)_checkCellExcessUsageActions:(unsigned long long)arg1 previous:(unsigned long long)arg2 snapshot:(id)arg3 socketClosed:(_Bool)arg4;
- (void)_generateFlowAnomalySymptom:(unsigned int)arg1 currentUsage:(unsigned long long)arg2 snapshot:(id)arg3;
- (void)_logExcessCellUsage:(long long)arg1 snapshot:(id)arg2 closed:(_Bool)arg3;
- (void)_reportThresholdedFlowCount:(unsigned long long)arg1;
- (void)_refreshDataUsageWithTriggerType:(int)arg1;
- (_Bool)_refreshDataUsageWithCallback:(CDUnknownBlockType)arg1;
- (void)_refreshDataUsageComplete;
- (void)_refreshDataUsageWithCallbackOnQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
@property _Bool haveTypicalUsage; // @synthesize haveTypicalUsage=_haveTypicalUsage;
@property _Bool haveCalendar; // @synthesize haveCalendar=_haveCalendar;
- (void)_startFlowMonitoring:(_Bool)arg1;
- (id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3;

@end

