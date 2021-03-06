//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/AAUIDeviceToDeviceEncryptionHelperDelegate-Protocol.h>

@class NSString;

@interface PKPeerPaymentActivationFlowController : NSObject <AAUIDeviceToDeviceEncryptionHelperDelegate>
{
}

+ (id)_alertControllerForUpgradeSecurityDialogForViewController:(id)arg1 didRepairBlock:(CDUnknownBlockType)arg2 completeFlowBlock:(CDUnknownBlockType)arg3 deviceToDeviceEncryptionRepairHandler:(CDUnknownBlockType)arg4 showErrorAlertBlock:(CDUnknownBlockType)arg5;
+ (id)alertControllerForUpgradeSecurityDialogForViewController:(id)arg1 context:(long long)arg2 didRepairBlock:(CDUnknownBlockType)arg3 completeFlowBlock:(CDUnknownBlockType)arg4 showErrorAlertBlock:(CDUnknownBlockType)arg5;
+ (id)alertControllerForUpgradeSecurityDialogForViewController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 didRepairBlock:(CDUnknownBlockType)arg4 completeFlowBlock:(CDUnknownBlockType)arg5 showErrorAlertBlock:(CDUnknownBlockType)arg6;
- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

