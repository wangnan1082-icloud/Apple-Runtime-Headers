//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "SPApplicationRemoteProtocol.h"
#import "SPGizmoApplicationProtocol.h"

@class LSApplicationProxy, NSArray, NSDictionary, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, NSXPCListener, SPGizmoAudioFilePlayerServer, SPLongFormAudioServerConnection, SPRemoteInterface;

@interface SPCompanionConnection : NSObject <SPGizmoApplicationProtocol, SPApplicationRemoteProtocol, NSXPCListenerDelegate>
{
    _Bool _localConnection;
    _Bool _extensionDebugging;
    _Bool _inSuspendedLaunch;
    _Bool _appWorkoutActive;
    _Bool _appWaitingForSetValuesToUnblank;
    _Bool _invalidated;
    _Bool _knowsIfNative;
    _Bool _sendQueueSuspended;
    NSString *_serverIdentifier;
    NSString *_clientIdentifier;
    id <SPCompanionConnectionDelegate> _delegate;
    NSMutableArray *_appPerformAfterSetValues;
    SPRemoteInterface *_inProcessRemoteInterface;
    NSDictionary *_inProcessRemoteInterfaceDidBeginUsingResults;
    NSXPCConnection *_serverConnection;
    NSXPCListener *_appListener;
    NSXPCConnection *_extensionConnection;
    NSMutableArray *_pendingExtensionUseCalls;
    LSApplicationProxy *_appProxy;
    SPGizmoAudioFilePlayerServer *_audioFilePlayerServer;
    CDUnknownBlockType _nativeConnectionCompletion;
    NSObject<OS_dispatch_queue> *_sendQueue;
    unsigned int _sendQueueKeyValue;
    NSObject<OS_dispatch_queue> *_connectionCompletionQueue;
    SPLongFormAudioServerConnection *_longFormAudioServerConnection;
    unsigned int _timingTest_ApplicationSendSize;
    NSString *_timingTest_lastServerIdentifier;
    NSArray *_timingTest_lastClientIdentifier;
    NSObject<OS_dispatch_queue> *_timingTest_queue;
    double _timingTest_ApplicationSendTime;
    double _timingTest_ApplicationReceiveTime;
}

+ (id)extensionIdentifieForCompanionApplicationBundleIdentifier:(id)arg1;
+ (id)companionApplicationBundleIdentifierForExtensionIdentifier:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timingTest_queue; // @synthesize timingTest_queue=_timingTest_queue;
@property(retain, nonatomic) NSArray *timingTest_lastClientIdentifier; // @synthesize timingTest_lastClientIdentifier=_timingTest_lastClientIdentifier;
@property(retain, nonatomic) NSString *timingTest_lastServerIdentifier; // @synthesize timingTest_lastServerIdentifier=_timingTest_lastServerIdentifier;
@property(nonatomic) double timingTest_ApplicationReceiveTime; // @synthesize timingTest_ApplicationReceiveTime=_timingTest_ApplicationReceiveTime;
@property(nonatomic) unsigned int timingTest_ApplicationSendSize; // @synthesize timingTest_ApplicationSendSize=_timingTest_ApplicationSendSize;
@property(nonatomic) double timingTest_ApplicationSendTime; // @synthesize timingTest_ApplicationSendTime=_timingTest_ApplicationSendTime;
@property(retain, nonatomic) SPLongFormAudioServerConnection *longFormAudioServerConnection; // @synthesize longFormAudioServerConnection=_longFormAudioServerConnection;
@property(retain) NSObject<OS_dispatch_queue> *connectionCompletionQueue; // @synthesize connectionCompletionQueue=_connectionCompletionQueue;
@property _Bool sendQueueSuspended; // @synthesize sendQueueSuspended=_sendQueueSuspended;
@property(nonatomic) unsigned int sendQueueKeyValue; // @synthesize sendQueueKeyValue=_sendQueueKeyValue;
@property(retain) NSObject<OS_dispatch_queue> *sendQueue; // @synthesize sendQueue=_sendQueue;
@property(copy, nonatomic) CDUnknownBlockType nativeConnectionCompletion; // @synthesize nativeConnectionCompletion=_nativeConnectionCompletion;
@property(nonatomic) _Bool knowsIfNative; // @synthesize knowsIfNative=_knowsIfNative;
@property(retain, nonatomic) SPGizmoAudioFilePlayerServer *audioFilePlayerServer; // @synthesize audioFilePlayerServer=_audioFilePlayerServer;
@property(retain, nonatomic) LSApplicationProxy *appProxy; // @synthesize appProxy=_appProxy;
@property(retain, nonatomic) NSMutableArray *pendingExtensionUseCalls; // @synthesize pendingExtensionUseCalls=_pendingExtensionUseCalls;
@property(retain) NSXPCConnection *extensionConnection; // @synthesize extensionConnection=_extensionConnection;
@property _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain) NSXPCListener *appListener; // @synthesize appListener=_appListener;
@property(retain) NSXPCConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
@property(retain, nonatomic) NSDictionary *inProcessRemoteInterfaceDidBeginUsingResults; // @synthesize inProcessRemoteInterfaceDidBeginUsingResults=_inProcessRemoteInterfaceDidBeginUsingResults;
@property __weak SPRemoteInterface *inProcessRemoteInterface; // @synthesize inProcessRemoteInterface=_inProcessRemoteInterface;
@property(retain, nonatomic) NSMutableArray *appPerformAfterSetValues; // @synthesize appPerformAfterSetValues=_appPerformAfterSetValues;
@property _Bool appWaitingForSetValuesToUnblank; // @synthesize appWaitingForSetValuesToUnblank=_appWaitingForSetValuesToUnblank;
@property(readonly) _Bool appWorkoutActive; // @synthesize appWorkoutActive=_appWorkoutActive;
@property _Bool inSuspendedLaunch; // @synthesize inSuspendedLaunch=_inSuspendedLaunch;
@property(readonly, nonatomic, getter=isExtensionDebugging) _Bool extensionDebugging; // @synthesize extensionDebugging=_extensionDebugging;
@property(readonly, nonatomic, getter=isLocalConnection) _Bool localConnection; // @synthesize localConnection=_localConnection;
@property(nonatomic) __weak id <SPCompanionConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
- (void).cxx_destruct;
- (void)runTest:(id)arg1 options:(id)arg2;
- (void)interfaceViewController:(id)arg1 didReceiveAdditionalNotification:(id)arg2;
- (void)interfaceViewController:(id)arg1 fetchSuggestionsForActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3;
- (void)interfaceViewController:(id)arg1 fetchSuggestionsForActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3;
- (void)backgroundAudioPlaybackRequestedWithoutValidAudioRoute;
- (void)persistentSessionDidEnd:(unsigned int)arg1;
- (void)nativeComplicationRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)interfaceViewControllerReleaseBacklightAssertion:(id)arg1;
- (void)interfaceViewControllerRenewBacklightAssertion:(id)arg1;
- (void)interfaceViewControllerStartBacklightAssertion:(id)arg1 reason:(int)arg2;
- (void)updateCoreDuetSession:(id)arg1;
- (void)sendCacheRequest:(id)arg1;
- (void)sendCacheRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendCacheReply:(id)arg1;
- (void)getComplicationData;
- (void)sendComplicationDataClassName:(id)arg1;
- (void)performAfterAppSetValues:(CDUnknownBlockType)arg1;
- (void)endSuspendedLaunch;
- (void)cleanUpExpiredPageContextIDs:(id)arg1;
- (void)sendCompanionLogMessage:(id)arg1;
- (void)addAddPassesToPassLibrary:(id)arg1;
- (void)sendPassLibraryAddPassesFinished;
- (void)sendAudioRecorderControllerCompletionDidSave:(_Bool)arg1 error:(id)arg2;
- (void)sendMediaPlayerControllerCompletionDidPlayToEnd:(_Bool)arg1 endTime:(double)arg2 error:(id)arg3;
- (void)sendTextInputLanguage:(id)arg1;
- (void)sendTextInput:(id)arg1;
- (void)interfaceDidEndScrollingAnimation:(id)arg1;
- (void)interfaceOffsetDidScrollToBottom:(id)arg1;
- (void)interfaceOffsetDidScrollToTop:(id)arg1;
- (void)interfaceDidScrollToTop:(id)arg1;
- (void)interfaceViewController:(id)arg1 tappedActionWithUUID:(id)arg2;
- (void)interfaceViewController:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)interfaceViewController:(id)arg1 action:(id)arg2 value:(id)arg3;
- (void)appWithRootInterfaceViewControllers:(id)arg1 performActionForUserActivity:(id)arg2;
- (void)appWithRootInterfaceViewController:(id)arg1 performActionWithItemID:(id)arg2 forNotificationID:(id)arg3 userInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)interfaceViewControllerDidAppearAfterModalDismissal:(id)arg1;
- (void)interfaceViewControllerDidDisappearAfterModalPresentation:(id)arg1;
- (void)interfaceViewControllerWillDisappear:(id)arg1;
- (void)interfaceViewControllerDidAppear:(id)arg1;
- (void)interfaceViewControllerDeactivate:(id)arg1;
- (void)interfaceViewControllerActivate:(id)arg1;
- (void)interfaceViewControllerRelease:(id)arg1;
- (void)interfaceViewController:(id)arg1 createCompanionControllerClass:(id)arg2 properties:(id)arg3 initializationContextID:(id)arg4 info:(id)arg5 gestureDescriptions:(id)arg6;
- (void)addPassesData:(id)arg1;
- (void)retreiveTimingInfo:(int)arg1;
- (void)_saveReceiveTime;
- (void)_saveSendTimeAndSize:(unsigned int)arg1;
- (void)resetTimingInfo;
- (void)duetAppWillResignActive;
- (void)duetAppDidBecomeActive;
- (void)willDeactivateDataConnection;
- (void)didActivateDataConnection;
- (void)appDidEnterBackgroundWithVisibleViewControllerID:(id)arg1;
- (void)appWillEnterForegroundWithVisibleViewControllerID:(id)arg1;
- (void)appDidReceiveNotification:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)appReceiveContextData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)appHandleSerializedNSUserActivity:(id)arg1;
- (void)appBeginWorkout:(id)arg1;
- (void)appUpdateState:(int)arg1 suspendedUnderLock:(_Bool)arg2;
- (void)willDeactivateNotification;
- (void)didActivateNotification;
- (void)willDeactivate;
- (void)didActivate;
- (void)appDidResetContents;
- (void)didFinishLaunching:(_Bool)arg1;
- (void)sendPlistToNativeExtension:(id)arg1;
- (void)sendData:(id)arg1;
- (void)sendPlist:(id)arg1;
- (void)nativePluginCheck;
- (void)handlePlistDictionary:(id)arg1;
- (void)handleProtoPlist:(id)arg1;
- (void)sendNavigationReply:(id)arg1;
- (void)extensionDelegate:(id)arg1 handlesBGTasksDidChange:(_Bool)arg2;
- (void)extensionDidEndNotificationUICreation:(id)arg1;
- (void)extensionDidBeginNotificationUICreation:(id)arg1;
- (void)receivePushPagingScrollTableRow:(id)arg1 row:(int)arg2 seguesByRowName:(id)arg3 rowNamesAndContextIDs:(id)arg4;
- (void)receiveSetViewController:(id)arg1 values:(id)arg2;
- (void)receiveSetViewController:(id)arg1 key:(id)arg2 property:(id)arg3 value:(id)arg4;
- (void)receivePlistFromExtension:(id)arg1;
- (void)receiveAudioPlayerMessageData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)receiveData:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)receiveDataFromExtension:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)receiveDataFromExtension:(id)arg1;
- (void)receiveData:(id)arg1;
- (void)appBeginBackgroundUIUpdate;
- (void)setExtensionIsDebugging:(_Bool)arg1 isNative:(_Bool)arg2;
- (void)extensionGotUnknownControllerID:(id)arg1;
- (void)companionDaemonDidRestart;
- (void)gizmoDaemonDidTerminate;
- (void)extensionDidTerminate;
- (void)fetchConnectionIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)didFinishHandlingBackgroundSnapshotTask:(_Bool)arg1 glanceableUI:(_Bool)arg2 staleDate:(id)arg3 userInfoUUID:(id)arg4 error:(id)arg5 barTaskUUID:(id)arg6;
- (void)failedToHandleBackgroundTasks:(id)arg1 error:(id)arg2 barTaskUUID:(id)arg3;
- (void)didFinishHandlingBackgroundTask:(id)arg1 refreshSnapshot:(_Bool)arg2 error:(id)arg3 barTaskUUID:(id)arg4;
- (void)appHandleWatchTaskKeys:(id)arg1 reasonForSnapshot:(unsigned int)arg2 visibleVCID:(id)arg3 barTaskUUID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)interfaceViewController:(id)arg1 crownReplyData:(id)arg2;
- (void)interfaceViewController:(id)arg1 gestureReplyData:(id)arg2;
- (void)xpcInterfaceViewController:(id)arg1 setProperties:(id)arg2 forInterfaceObjectNamed:(id)arg3;
- (void)xpcInterfaceViewController:(id)arg1 crownData:(id)arg2;
- (void)xpcInterfaceViewController:(id)arg1 gestureData:(id)arg2;
- (void)performOnSendQueue:(CDUnknownBlockType)arg1 syncIfUnsuspended:(_Bool)arg2;
- (void)performOnSendQueue:(CDUnknownBlockType)arg1;
- (void)invalidateDirectExtensionConnection;
- (void)_invalidate;
- (_Bool)_resumeSendQueueIfSuspended;
- (void)invalidate;
- (void)dealloc;
- (id)extensionDirect;
- (void)useRemoteInterface:(CDUnknownBlockType)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_setupDirectExtensionXPCConnectionWithIdentifier:(id)arg1 clientIdentifier:(id)arg2;
- (_Bool)_setUpNativeApp:(_Bool *)arg1;
- (_Bool)setUpNativeAppWithServerIdentifer:(id)arg1 outIsWK1App:(_Bool *)arg2;
- (void)connectWithIdentifier:(id)arg1 enableImageCacheIfNotNative:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)connectWithIdentifier:(id)arg1 enableImageCacheIfNotNative:(_Bool)arg2;
- (void)connectWithIdentifier:(id)arg1;
- (id)init:(_Bool)arg1;
- (id)init;
- (id)initForNotificationUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
