//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCUIEditVoiceShortcutViewController, VCVoiceShortcut;

@protocol VCUIEditVoiceShortcutViewControllerDelegate <NSObject>

@optional
- (void)editVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(VCUIEditVoiceShortcutViewController *)arg1;
- (void)editVoiceShortcutViewController:(VCUIEditVoiceShortcutViewController *)arg1 didDeleteVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)editVoiceShortcutViewController:(VCUIEditVoiceShortcutViewController *)arg1 didSaveWithUpdatedVoiceShortcut:(VCVoiceShortcut *)arg2;
- (void)editVoiceShortcutViewControllerDidCancel:(VCUIEditVoiceShortcutViewController *)arg1;
@end
