//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol SPRemoteNotificationViewService;

@protocol SPRemoteNotificationViewHost
@property(readonly, copy, nonatomic) NSString *hostID;
- (void)localServiceViewDidAppear;
- (void)didShowStaticPresentation;
- (void)didShowRemoteView;
- (void)ensureConnectionWithCompletion:(void (^)(SPExtensionConnection *, _Bool))arg1;
- (void)requestSnapshotFromRemoteService;
- (void)setViewControllerNeedsResize;
- (void)service:(NSString *)arg1 updateUserActivity:(NSString *)arg2;
- (void)service:(NSString *)arg1 launchAppWithActionID:(NSString *)arg2;
- (void)serviceRequestsDismissal:(NSString *)arg1;
- (void)setActiveService:(id <SPRemoteNotificationViewService>)arg1 remote:(_Bool)arg2 withIntrinsicContentSize:(struct CGSize)arg3 wantsHeaderBlur:(_Bool)arg4 controllerIdentifier:(NSString *)arg5 readyToPresent:(_Bool)arg6;
@end

