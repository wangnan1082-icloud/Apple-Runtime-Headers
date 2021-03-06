//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKCharacteristicType, HKDocumentType, HKObjectType, HKQuantityType, HKTaskConfiguration, HKUnit, NSArray, NSDate, NSDictionary, NSError, NSNumber, NSSet, NSString, NSURL, NSUUID, _HKDeepBreathingSessionConfiguration, _HKFilter;

@protocol HDHealthStoreServerInterface <NSObject>
- (void)remote_containerAppExtensionEntitlementsWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_setDaemonPreferenceValue:(id)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_fetchDaemonPreferenceForKey:(NSString *)arg1 completion:(void (^)(id, NSError *))arg2;
- (void)remote_splitTotalCalories:(double)arg1 timeInterval:(double)arg2 withCompletion:(void (^)(double, NSError *))arg3;
- (void)remote_weeklySummaryInfoForDate:(NSDate *)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)remote_fetchUnitPreferencesForTypes:(NSSet *)arg1 withCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)remote_setPreferredUnit:(HKUnit *)arg1 forType:(HKQuantityType *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_submitMetricsIgnoringAnchor:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_performMigrationWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_obliterateHealthDataWithOptions:(unsigned int)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_getHealthDirectorySizeInBytesWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)remote_setServerURL:(NSURL *)arg1 forAssetType:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_fetchServerURLForAssetType:(NSString *)arg1 completion:(void (^)(NSURL *, NSError *))arg2;
- (void)remote_getHealthLiteValueForKey:(NSString *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)remote_setHealthLiteValue:(NSNumber *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_removeDefaultForKey:(NSString *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setDefaultValue:(id)arg1 forKey:(NSString *)arg2 withCompletion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_getDefaultForKey:(NSString *)arg1 withHandler:(void (^)(id, NSError *))arg2;
- (void)remote_setCharacteristic:(id)arg1 forDataType:(HKCharacteristicType *)arg2 handler:(void (^)(_Bool, NSError *))arg3;
- (void)remote_fetchCharacteristicWithDataType:(HKObjectType *)arg1 handler:(void (^)(id, NSError *))arg2;
- (void)remote_invalidateActivityAlertSuppressionForIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_suppressActivityAlertsForIdentifier:(NSString *)arg1 suppressionReason:(int)arg2 timeoutUntilDate:(NSDate *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_deleteObjectsWithUUIDs:(NSArray *)arg1 options:(unsigned int)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_deleteSourceWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_deleteAllSamplesWithTypes:(NSArray *)arg1 sourceBundleIdentifier:(NSString *)arg2 options:(unsigned int)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_fetchDevicesMatchingProperty:(NSString *)arg1 values:(NSSet *)arg2 completion:(void (^)(NSSet *, NSError *))arg3;
- (void)remote_updateOrderedSources:(NSArray *)arg1 forObjectType:(HKObjectType *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_orderedSourcesForObjectType:(HKObjectType *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_allSourcesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_addSourceWithBundleIdentifier:(NSString *)arg1 name:(NSString *)arg2 completion:(void (^)(HKSource *, NSError *))arg3;
- (void)remote_hasSourceWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_hasSampleWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_closeTransactionWithDataType:(HKObjectType *)arg1 anchor:(NSNumber *)arg2 ackTime:(NSNumber *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_setBackgroundDeliveryFrequency:(int)arg1 forDataType:(HKObjectType *)arg2 handler:(void (^)(_Bool, NSError *))arg3;
- (void)remote_clientResumedWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_clientWillSuspendWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)_remote_attachDeepBreathingSessionServerWithClient:(id)arg1 sessionConfiguration:(_HKDeepBreathingSessionConfiguration *)arg2 handler:(void (^)(id <HDDeepBreathingSessionServer>, _Bool, NSError *))arg3;
- (void)_remote_associateSampleUUIDs:(NSArray *)arg1 withSampleUUID:(NSUUID *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_deleteDataObjectsOfType:(HKObjectType *)arg1 matchingFilter:(_HKFilter *)arg2 options:(unsigned int)arg3 handler:(void (^)(_Bool, unsigned int, NSError *))arg4;
- (void)remote_deleteDataObjects:(NSArray *)arg1 options:(unsigned int)arg2 handler:(void (^)(_Bool, NSError *))arg3;
- (void)remote_saveDataObjects:(NSArray *)arg1 handler:(void (^)(_Bool, NSError *))arg2;
- (void)remote_saveDataObjects:(NSArray *)arg1 transactionIdentifier:(NSUUID *)arg2 final:(_Bool)arg3 handler:(void (^)(NSUUID *, _Bool, NSError *))arg4;
- (void)remote_resetObjectAuthorizationStatusForObjects:(NSArray *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_resetObjectAuthorizationStatusForBundleIdentifier:(NSString *)arg1 objectType:(HKObjectType *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_setObjectAuthorizationStatuses:(NSDictionary *)arg1 forBundleIdentifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_endAuthorizationDelegateTransactionWithSessionIdentifier:(NSUUID *)arg1 error:(NSError *)arg2;
- (void)remote_beginAuthorizationDelegateTransactionWithSessionIdentifier:(NSUUID *)arg1 handler:(void (^)(HKSource *, NSError *))arg2;
- (void)remote_resetAuthorizationStatusForBundleIdentifier:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_setRequestedAuthorizationForBundleIdentifier:(NSString *)arg1 shareTypes:(NSSet *)arg2 readTypes:(NSSet *)arg3 prompt:(_Bool)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)remote_setAuthorizationStatuses:(NSDictionary *)arg1 authorizationModes:(NSDictionary *)arg2 forBundleIdentifier:(NSString *)arg3 options:(unsigned int)arg4 completion:(void (^)(_Bool, NSError *))arg5;
- (void)remote_allObjectAuthorizationRecordsForSampleWithUUID:(NSUUID *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)remote_retrieveAllAuthorizationRecordsForDocumentType:(HKDocumentType *)arg1 bundleIdentifier:(NSString *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)remote_allSourcesRequestingTypes:(NSSet *)arg1 completion:(void (^)(NSSet *, NSError *))arg2;
- (void)remote_allAuthorizationRecordsForType:(HKObjectType *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)remote_allAuthorizationRecordsForBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)remote_handleAuthorizationForExtensionWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_requestAuthorizationToShareTypes:(NSSet *)arg1 readTypes:(NSSet *)arg2 shouldPrompt:(_Bool)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)remote_getRequestStatusForAuthorizationToShareTypes:(NSSet *)arg1 readTypes:(NSSet *)arg2 completion:(void (^)(int, NSError *))arg3;
- (void)remote_authorizationStatusForType:(HKObjectType *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)remote_getIsFeatureSetAvailable:(unsigned int)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchDisplayNameWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(NSString *)arg1 completion:(void (^)(NSXPCListenerEndpoint *, NSError *))arg2;
- (void)remote_createTaskServerForIdentifier:(NSString *)arg1 taskUUID:(NSUUID *)arg2 configuration:(HKTaskConfiguration *)arg3 completion:(void (^)(NSXPCListenerEndpoint *, NSError *))arg4;
- (void)remote_proxyForWorkoutServerWithCompletion:(void (^)(HDWorkoutServer *, NSError *))arg1;
- (void)remote_proxyForUtilityServerWithCompletion:(void (^)(HDUtilityServer *, NSError *))arg1;
- (void)remote_proxyForStaticSyncServerWithCompletion:(void (^)(HDStaticSyncServer *, NSError *))arg1;
- (void)remote_proxyForQueryControlServerWithCompletion:(void (^)(HDQueryControlServer *, NSError *))arg1;
- (void)remote_proxyForProfileServerWithCompletion:(void (^)(HDProfileServer *, NSError *))arg1;
- (void)remote_proxyForNotificationServerWithCompletion:(void (^)(HDNotificationServer *, NSError *))arg1;
- (void)remote_proxyForNanoSyncServerWithCompletion:(void (^)(HDNanoSyncServer *, NSError *))arg1;
- (void)remote_proxyForMedicalIDServerWithCompletion:(void (^)(HDMedicalIDServer *, NSError *))arg1;
- (void)remote_proxyForHealthServicesServerWithCompletion:(void (^)(HDHealthServicesServer *, NSError *))arg1;
- (void)remote_proxyForCloudSyncServerWithCompletion:(void (^)(HDCloudSyncServer *, NSError *))arg1;
@end

