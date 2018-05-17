//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DevicePINControllerDelegate.h"

@class AAUICDPHelper, NSString, PSSetupController;

@interface AAUIPasscodeValidateController : NSObject <DevicePINControllerDelegate>
{
    AAUICDPHelper *_helper;
    PSSetupController *_navController;
    CDUnknownBlockType __passcodeValidationCompletion;
}

+ (id)stingrayControllerWithPresenter:(id)arg1 forceInline:(_Bool)arg2;
+ (id)stingrayControllerWithPresenter:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType _passcodeValidationCompletion; // @synthesize _passcodeValidationCompletion=__passcodeValidationCompletion;
- (void).cxx_destruct;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2;
- (void)didCancelEnteringPIN;
- (void)dismissFlowWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)didAcceptEnteredPIN;
- (id)_specifierForMode:(int)arg1;
- (void)_setupNavController;
- (id)_presentingViewController;
- (void)_showPasscodePromptWithMode:(int)arg1;
- (void)validateStingrayPasscodeStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
