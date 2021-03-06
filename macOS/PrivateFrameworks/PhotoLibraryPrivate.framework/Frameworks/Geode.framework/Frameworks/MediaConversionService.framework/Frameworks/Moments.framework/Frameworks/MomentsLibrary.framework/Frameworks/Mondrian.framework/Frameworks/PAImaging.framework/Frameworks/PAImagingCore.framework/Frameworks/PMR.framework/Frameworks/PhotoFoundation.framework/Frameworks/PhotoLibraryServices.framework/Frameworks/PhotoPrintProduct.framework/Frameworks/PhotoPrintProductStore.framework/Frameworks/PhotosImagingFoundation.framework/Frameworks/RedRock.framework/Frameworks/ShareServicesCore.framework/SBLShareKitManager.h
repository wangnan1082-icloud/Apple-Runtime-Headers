//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShareServicesCore/NSMenuDelegate-Protocol.h>
#import <ShareServicesCore/NSSharingServiceDelegate-Protocol.h>
#import <ShareServicesCore/NSSharingServicePickerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSSharingServicePicker, NSString, NSWindow, PFDispatchQueue, SBLShareKitSession;
@protocol SBLShareKitManagerDelegate, SBLShareKitManagerProgressDelegate, SBLShareKitManagerReconnectDelegate;

@interface SBLShareKitManager : NSObject <NSMenuDelegate, NSSharingServiceDelegate, NSSharingServicePickerDelegate>
{
    NSArray *_iCloudVersionsToShare;
    CDUnknownBlockType _iCloudServiceAction;
    NSSharingServicePicker *_sessionPicker;
    BOOL _isFullscreen;
    BOOL _needsSharingAlert;
    id <SBLShareKitManagerProgressDelegate> _progressDelegate;
    id <SBLShareKitManagerReconnectDelegate> _reconnectDelegate;
    id <SBLShareKitManagerDelegate> _delegate;
    PFDispatchQueue *_dispatchQueue;
    PFDispatchQueue *_dispatchQueueSerial;
    PFDispatchQueue *_dispatchQueueProviderReply;
    PFDispatchQueue *_dispatchQueueProviderWorker;
    NSWindow *_hostWindow;
    NSDictionary *_versionInfo;
    SBLShareKitSession *_session;
    NSString *_lastServiceSelected;
    NSString *_sharingAlertTitle;
    NSString *_sharingAlertMessage;
    NSString *_sharingAlertConfirmTitle;
    NSString *_sharingAlertCancelTitle;
}

+ (BOOL)canShareVersion:(id)arg1;
@property(copy) NSString *sharingAlertCancelTitle; // @synthesize sharingAlertCancelTitle=_sharingAlertCancelTitle;
@property(copy) NSString *sharingAlertConfirmTitle; // @synthesize sharingAlertConfirmTitle=_sharingAlertConfirmTitle;
@property(copy) NSString *sharingAlertMessage; // @synthesize sharingAlertMessage=_sharingAlertMessage;
@property(copy) NSString *sharingAlertTitle; // @synthesize sharingAlertTitle=_sharingAlertTitle;
@property BOOL needsSharingAlert; // @synthesize needsSharingAlert=_needsSharingAlert;
@property(retain) NSString *lastServiceSelected; // @synthesize lastServiceSelected=_lastServiceSelected;
@property BOOL isFullscreen; // @synthesize isFullscreen=_isFullscreen;
@property(retain) SBLShareKitSession *session; // @synthesize session=_session;
@property(readonly) NSDictionary *versionInfo; // @synthesize versionInfo=_versionInfo;
@property(readonly) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(readonly) PFDispatchQueue *dispatchQueueProviderWorker; // @synthesize dispatchQueueProviderWorker=_dispatchQueueProviderWorker;
@property(readonly) PFDispatchQueue *dispatchQueueProviderReply; // @synthesize dispatchQueueProviderReply=_dispatchQueueProviderReply;
@property(readonly) PFDispatchQueue *dispatchQueueSerial; // @synthesize dispatchQueueSerial=_dispatchQueueSerial;
@property(readonly) PFDispatchQueue *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property __weak id <SBLShareKitManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <SBLShareKitManagerReconnectDelegate> reconnectDelegate; // @synthesize reconnectDelegate=_reconnectDelegate;
@property __weak id <SBLShareKitManagerProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
- (void).cxx_destruct;
- (void)resetSession;
- (void)abort;
- (void)_presentSharingAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)_beginSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)sharingService:(id)arg1 shouldPrepareItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preflightItemProviders:(id)arg1;
- (void)_setDesktopPictureURL:(id)arg1 forDisplay:(long long)arg2 options:(id)arg3;
- (id)pathForDesktopImage:(long long)arg1;
- (id)setDesktopService;
- (id)iCloudService;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (void)sharingServicePicker:(id)arg1 didChooseSharingService:(id)arg2;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (void)menuDidClose:(id)arg1;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingItemsForVersions:(id)arg1 allowLocation:(BOOL)arg2;
- (id)filterServices:(id)arg1;
- (id)servicePickerForItems:(id)arg1;
- (BOOL)populateMenu:(id)arg1 forVersions:(id)arg2 sharingParams:(id)arg3;
- (void)_populateMenu:(id)arg1 forSharingParams:(id)arg2 shareableItems:(id)arg3;
- (BOOL)populateMenu:(id)arg1 forVersions:(id)arg2 sharingParams:(id)arg3 allowedLatency:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

