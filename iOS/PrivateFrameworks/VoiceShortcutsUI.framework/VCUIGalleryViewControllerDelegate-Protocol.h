//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VCUICreateVoiceShortcutViewController, VCUIGalleryViewController;

@protocol VCUIGalleryViewControllerDelegate <NSObject>

@optional
- (void)galleryViewControllerDidFinish:(VCUIGalleryViewController *)arg1;
- (void)galleryViewControllerDidCancel:(VCUIGalleryViewController *)arg1;
- (void)galleryViewControllerDidEnterStateSiriUnavailable:(VCUIGalleryViewController *)arg1 withCreateVoiceShortcutViewController:(VCUICreateVoiceShortcutViewController *)arg2;
@end
