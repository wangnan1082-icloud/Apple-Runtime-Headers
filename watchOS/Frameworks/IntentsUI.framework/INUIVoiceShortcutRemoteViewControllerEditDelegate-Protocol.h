//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSUUID, VCVoiceShortcut;

@protocol INUIVoiceShortcutRemoteViewControllerEditDelegate <NSObject>
- (void)remoteViewControllerEditDidCancel;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(NSUUID *)arg1;
- (void)remoteViewControllerDidEditVoiceShortcut:(VCVoiceShortcut *)arg1 error:(NSError *)arg2;
@end
