//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPanel.h"

@class NSButton, NSImageView, NSTextField;

@interface DRSetupPanel : NSPanel
{
    NSButton *_ok;
    NSButton *_cancel;
    NSButton *_eject;
    NSTextField *_userMessage;
    NSImageView *_icon;
    id _deviceChooser;
    id _sp_privateStorage;
    void *_reservedSetupPanel[2];
}

+ (void)initialize;
- (BOOL)canBecomeMainWindow;
- (void)_mediaStateDidChange:(id)arg1;
- (BOOL)delegateRespondsToDetermineSuitable;
- (BOOL)delegateRespondsToDeviceCouldBeTarget;
- (void)setupForDisplay;
- (BOOL)mediaStateChanged:(id)arg1;
- (void)deviceSelectionChanged:(id)arg1;
- (void)_deviceChooserAction:(id)arg1;
- (void)close:(id)arg1;
- (void)open:(id)arg1;
- (void)eject:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (void)_savePanelUserDefaults;
- (void)setIcon:(id)arg1;
- (void)setUserMessage:(id)arg1;
- (void)setDeviceChooser:(id)arg1;
- (void)setEject:(id)arg1;
- (void)setCancel:(id)arg1;
- (void)setOk:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)beginSetupSheetForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4;
- (void)_didEndSetupSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (long long)runSetupPanel;
- (void)dealloc;
- (void)setDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithNibName:(id)arg1;

@end
