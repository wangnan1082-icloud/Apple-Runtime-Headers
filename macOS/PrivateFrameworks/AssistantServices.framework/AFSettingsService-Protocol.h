//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFAudioPlaybackRequest, AFRequestInfo, AFVoiceInfo, NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol AFSettingsService <NSObject>
- (oneway void)getDevicesWithAvailablePHSAssetsForLanguage:(NSString *)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)disableAndDeleteCloudSyncWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)fetchExperimentContextWithCompletion:(void (^)(AFExperimentContext *, NSError *))arg1;
- (oneway void)fetchExperimentConfigurationsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)sendMetricsToServerWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)resetAnalyticsStoreWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)purgeAnalyticsStoreWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)fetchEventRecordsFromAnalyticsStoreAtPath:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)setDESPolicyCDNOverride:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)disableDESWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)setDESLotteryWinOverrideEnabled:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)setDESRecordingAlwaysIsEnabled:(BOOL)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)runLiveAdaptationRecipeEvaluationWithBaseURL:(NSURL *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)runAdaptationRecipeEvaluation:(NSDictionary *)arg1 language:(NSString *)arg2 completion:(void (^)(NSArray *, NSArray *))arg3;
- (oneway void)getSupplementalLanguagesForProduct:(NSString *)arg1 forBuildVersion:(NSString *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)getSupplementalLanguageDictionaryForProduct:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)getSupplementalLanguagesModificationDate:(void (^)(NSDate *, NSError *))arg1;
- (oneway void)getSupplementalLanguagesDictionary:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)setSupplementalLanguages:(NSArray *)arg1 forProduct:(NSString *)arg2 forBuildVersion:(NSString *)arg3 completion:(void (^)(NSError *))arg4;
- (oneway void)setSupplementalLanguageDictionary:(NSDictionary *)arg1 forProduct:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)stopAllAudioPlaybackRequests:(BOOL)arg1;
- (oneway void)stopAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1 immediately:(BOOL)arg2;
- (oneway void)startAudioPlaybackRequest:(AFAudioPlaybackRequest *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)getPeerIdentifiers:(void (^)(NSArray *))arg1;
- (oneway void)startRemoteRequest:(AFRequestInfo *)arg1 onPeer:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (oneway void)startUIRequestWithSpeechAudioFileURL:(NSURL *)arg1;
- (oneway void)startUIRequestWithText:(NSString *)arg1;
- (oneway void)setOfflineDictationProfileOverridePath:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)createOfflineSpeechProfileWithLanguage:(NSString *)arg1 JSONData:(NSData *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (oneway void)updateOfflineSpeechProfileWithLanguage:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)getOfflineDictationStatusWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
- (oneway void)setLanguage:(NSString *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)setOutputVoice:(AFVoiceInfo *)arg1 withCompletion:(void (^)(void))arg2;
- (oneway void)getAvailableVoicesIncludingAssetInfo:(BOOL)arg1 completion:(void (^)(NSArray *))arg2;
- (oneway void)_runServiceMaintenance;
- (oneway void)_startDeepSyncVerificationForKeys:(NSArray *)arg1;
- (void)_setSyncVerificationNeededAndFullReportNeeded:(BOOL)arg1 shouldPostNotification:(BOOL)arg2 completion:(void (^)(NSArray *))arg3;
- (oneway void)_fetchPeerData:(void (^)(void))arg1;
- (oneway void)_syncDataWithAnchorKeys:(NSArray *)arg1 forceReset:(BOOL)arg2 reason:(NSString *)arg3 reply:(void (^)(NSArray *))arg4;
- (oneway void)_clearSyncNeededForKey:(NSString *)arg1;
- (oneway void)_setSyncNeededForReason:(NSString *)arg1;
- (oneway void)barrierWithReply:(void (^)(void))arg1;
- (oneway void)_killDaemon;
- (oneway void)setDictationEnabled:(BOOL)arg1;
- (oneway void)setAssistantEnabled:(BOOL)arg1;
- (oneway void)setActiveAccountIdentifier:(NSString *)arg1;
- (oneway void)deleteAccountWithIdentifier:(NSString *)arg1;
- (oneway void)saveAccountWithMessageDictionary:(NSDictionary *)arg1 setActive:(BOOL)arg2;
- (oneway void)retrieveAccountMessageDictionariesWithReply:(void (^)(NSArray *))arg1;
- (oneway void)fetchSupportedLanguagesWithReply:(void (^)(NSArray *, NSError *))arg1;
@end
