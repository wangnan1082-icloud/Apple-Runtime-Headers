//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSSavePanel, NSTextField;

__attribute__((visibility("hidden")))
@interface NSNavNewFolderController : NSWindowController
{
    NSSavePanel *_savePanel;
    NSTextField *_folderNameField;
    NSTextField *_errorMessage;
    NSButton *_cancelButton;
    NSButton *_okButton;
}

- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (id)runModalForSavePanel:(id)arg1;
- (BOOL)isRunning;
- (id)_defaultNewFolderName;
- (void)controlTextDidChange:(id)arg1;
- (void)_updateOkButtonEnabledStateAndErrorMessage;
- (id)_folderPath;
- (id)init;

@end

