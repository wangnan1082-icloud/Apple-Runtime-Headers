//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface DADConnection : NSObject
{
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_muckingWithConn;
    NSObject<OS_dispatch_queue> *_muckingWithInFlightCollections;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;
    CDUnknownBlockType _statusReportBlock;
    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_inFlightCalendarAvailabilityRequests;
    NSMutableDictionary *_inFlightCalendarDirectorySearches;
    NSMutableDictionary *_inFlightShareRequests;
    NSMutableDictionary *_inFlightOofSettingsRequests;
    _Bool _registered;
}

+ (void)setShouldIgnoreAccountChanges;
+ (id)sharedConnection;
@property(nonatomic) _Bool registered; // @synthesize registered=_registered;
- (void).cxx_destruct;
- (void)_dispatchMessage:(id)arg1;
- (void)_registerForAppResumedNotification;
- (void)resetTimersAndWarnings;
- (void)_resetThrottleTimersForAccountId:(id)arg1;
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(_Bool)arg3;
- (void)dealloc;
- (id)_init;
- (id)init;
- (void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(CDUnknownBlockType)arg2;
- (void)_calendarDirectorySearchFinished:(id)arg1;
- (void)_calendarDirectorySearchReturnedResults:(id)arg1;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned int)arg4 resultsBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)_calendarAvailabilityRequestFinished:(id)arg1;
- (void)_calendarAvailabilityRequestReturnedResults:(id)arg1;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)isOofSettingsSupportedForAccountWithID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (_Bool)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (_Bool)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(_Bool)arg3;
- (id)activeSyncDeviceIdentifier;
- (void)fillOutCurrentEASTimeZoneInfo;
- (_Bool)registerForInterrogationWithBlock:(CDUnknownBlockType)arg1;
- (void)reallyRegisterForInterrogation;
- (id)statusReports;
- (_Bool)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;
- (void)reportSharedCalendarInviteAsJunkForCalendarWithID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)respondToSharedCalendarInvite:(int)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(CDUnknownBlockType)arg2;
- (void)handleURL:(id)arg1;
- (void)reportFolderItemsSyncSuccess:(_Bool)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned int)arg3 andAccountWithID:(id)arg4;
- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (void)asyncProcessMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (_Bool)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (void)cancelServerContactsSearch:(id)arg1;
- (_Bool)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2;
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3;
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2;
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2 isUserRequested:(_Bool)arg3;
- (_Bool)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(_Bool)arg3;
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3 isUserRequested:(_Bool)arg4;
- (_Bool)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(int)arg3 isUserRequested:(_Bool)arg4;
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(_Bool)arg3;
- (_Bool)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 requireChangedFolders:(_Bool)arg3 isUserRequested:(_Bool)arg4;
- (void)requestDaemonShutdown;
- (void)removeStoresForAccountWithID:(id)arg1;
- (void)_requestDaemonStopMonitoringAgents_Sync;
- (void)requestDaemonStartMonitoringAgents_Sync;
- (void)requestDaemonStopMonitoringAgents;
- (void)requestDaemonStartMonitoringAgents;
- (void)_requestDaemonChangeAgentMonitoringStatus:(_Bool)arg1 waitForReply:(_Bool)arg2;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (_Bool)requestPolicyUpdateForAccountID:(id)arg1;
- (_Bool)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (_Bool)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (_Bool)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (_Bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 persistent:(_Bool)arg3;
- (_Bool)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (void)_oofSettingsRequestsFinished:(id)arg1;
- (void)_shareResponseFinished:(id)arg1;
- (void)_downloadFinished:(id)arg1;
- (void)_downloadProgress:(id)arg1;
- (void)_getStatusReportsFromClient:(id)arg1;
- (void)_folderChangeFinished:(id)arg1;
- (void)_serverContactsSearchQueryFinished:(id)arg1;
- (void)_logDataAccessStatus:(id)arg1;
- (void)_foldersUpdated:(id)arg1;
- (void)_policyKeyChanged:(id)arg1;
- (id)decodedErrorFromData:(id)arg1;
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;
- (id)_connection;
- (void)_serverDiedWithReason:(id)arg1;
- (void)_tearDownInFlightObjects;

@end
