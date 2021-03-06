//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BarcodeSupport/BCSDataProviderDelegate-Protocol.h>

@class BBDataProviderConnection, BBDataProviderProxy, BCSNFCDataProvider, BCSQRCodeDataProvider, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface BCSNotificationManager : NSObject <BCSDataProviderDelegate>
{
    BBDataProviderConnection *_bbConnection;
    BBDataProviderProxy *_qrCodeBBProxy;
    BCSQRCodeDataProvider *_qrCodeDataProvider;
    BBDataProviderProxy *_nfcBBProxy;
    BCSNFCDataProvider *_nfcDataProvider;
    NSMutableSet *_notifications;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (void)handleBulletinActionResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 sizeConstraints:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)withdrawNotificationsWithProcessID:(int)arg1 codeType:(long long)arg2;
- (id)_notificationWithIdentifier:(id)arg1;
- (void)scheduleNotification:(id)arg1 codeType:(long long)arg2;
- (id)_bbProxyForCodeType:(long long)arg1;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

