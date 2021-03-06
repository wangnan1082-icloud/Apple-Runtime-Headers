//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/BSDescriptionProviding-Protocol.h>

@class NSArray, NSString, UIImage, _SBAlertController;

@interface SBAlertItem : NSObject <BSDescriptionProviding>
{
    _SBAlertController *_alertController;
    NSArray *_allowedBundleIDs;
    NSString *_iconImagePath;
    UIImage *_iconImage;
    _Bool _didEverActivate;
    _Bool _didEverDeactivate;
    _Bool _ignoreIfAlreadyDisplaying;
    _Bool _didPlayPresentationSound;
    _Bool _allowInSetup;
    _Bool _pendInSetupIfNotAllowed;
    _Bool _pendWhileKeyBagLocked;
    _Bool _allowInCar;
    _Bool _allowMessageInCar;
    _Bool _presented;
    _Bool _ignoresQuietMode;
    _Bool _suppressForKeynote;
    UIImage *_headerImage;
    UIImage *_attachmentImage;
}

+ (void)activateAlertItem:(id)arg1;
+ (id)_alertItemsController;
@property(retain, nonatomic, setter=_setAttachmentImage:) UIImage *_attachmentImage; // @synthesize _attachmentImage;
@property(retain, nonatomic, setter=_setHeaderImage:) UIImage *_headerImage; // @synthesize _headerImage;
@property(nonatomic, getter=_isPresented, setter=_setPresented:) _Bool presented; // @synthesize presented=_presented;
@property(retain, nonatomic, getter=_iconImagePath) NSString *iconImagePath; // @synthesize iconImagePath=_iconImagePath;
@property(retain, nonatomic, setter=setIconImage:) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic, setter=_setIgnoresQuietMode:) _Bool _ignoresQuietMode; // @synthesize _ignoresQuietMode;
@property(nonatomic) _Bool allowMessageInCar; // @synthesize allowMessageInCar=_allowMessageInCar;
@property(nonatomic) _Bool allowInCar; // @synthesize allowInCar=_allowInCar;
@property(retain, nonatomic) NSArray *allowedBundleIDs; // @synthesize allowedBundleIDs=_allowedBundleIDs;
@property(nonatomic) _Bool pendWhileKeyBagLocked; // @synthesize pendWhileKeyBagLocked=_pendWhileKeyBagLocked;
@property(nonatomic) _Bool pendInSetupIfNotAllowed; // @synthesize pendInSetupIfNotAllowed=_pendInSetupIfNotAllowed;
@property(nonatomic) _Bool suppressForKeynote; // @synthesize suppressForKeynote=_suppressForKeynote;
@property(nonatomic) _Bool allowInSetup; // @synthesize allowInSetup=_allowInSetup;
@property(nonatomic) _Bool ignoreIfAlreadyDisplaying; // @synthesize ignoreIfAlreadyDisplaying=_ignoreIfAlreadyDisplaying;
- (void).cxx_destruct;
- (_Bool)dismissOnLock;
- (void)buttonDismissed;
- (void)dismiss:(int)arg1;
- (void)dismiss;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_publicDescription;
- (_Bool)_displayActionButtonOnLockScreen;
- (_Bool)_didEverActivate;
- (_Bool)_hasActiveKeyboardOnScreen;
- (void)_noteVolumeOrLockPressed;
- (id)_prepareNewAlertControllerWithLockedState:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)_clearAlertController;
- (id)_alertController;
- (void)_deactivationCompleted;
- (void)doCleanupAfterDeactivationAnimation;
- (_Bool)dismissesOverlaysOnLockScreen;
- (int)alertPriority;
- (_Bool)allowInLoginWindow;
- (_Bool)behavesSuperModally;
- (_Bool)forcesModalAlertAppearance;
- (void)didDeactivateForReason:(int)arg1;
- (void)willDeactivateForReason:(int)arg1;
- (void)deactivateForReason:(int)arg1;
- (void)deactivateForButton;
- (void)deactivate;
- (void)willRelockForButtonPress:(_Bool)arg1;
- (void)alertItemDidDisappear;
- (void)alertItemDidAppear;
- (void)didActivate;
- (void)willActivate;
- (void)didFailToActivate;
- (id)sound;
- (void)playPresentationSound;
- (_Bool)didPlayPresentationSound;
- (_Bool)reappearsAfterUnlock;
- (_Bool)reappearsAfterLock;
- (_Bool)unlocksScreen;
- (_Bool)undimsScreen;
- (_Bool)shouldShowInEmergencyCall;
- (_Bool)shouldShowInLockScreen;
- (_Bool)allowLockScreenDismissal;
- (_Bool)allowMenuButtonDismissal;
- (void)performUnlockAction;
- (id)shortLockLabel;
- (id)lockLabel;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)alertController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

