//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFSafariViewControllerDelegate.h"

@class NSURL, SFSafariViewController;

@protocol SFSafariViewControllerDelegateInternal <SFSafariViewControllerDelegate>

@optional
- (void)safariViewController:(SFSafariViewController *)arg1 hostApplicationOpenURL:(NSURL *)arg2;
- (void)safariViewController:(SFSafariViewController *)arg1 didDecideCookieSharingForURL:(NSURL *)arg2 shouldCancel:(_Bool)arg3;
@end
