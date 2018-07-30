//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariServices/_SFPasswordViewController.h>

#import "SFExternalPasswordCredentialRemoteViewControllerDelegate.h"

@class NSString, SFExternalPasswordCredentialRemoteViewController, SFQueueingServiceViewControllerProxy<SFExternalPasswordCredentialServiceViewControllerProtocol>;

@interface _SFExternalPasswordCredentialViewController : _SFPasswordViewController <SFExternalPasswordCredentialRemoteViewControllerDelegate>
{
    SFExternalPasswordCredentialRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFExternalPasswordCredentialServiceViewControllerProtocol> *_serviceProxy;
}

- (void).cxx_destruct;
- (id)_connectToServiceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setUpServiceProxyIfNeeded;
- (id)_remoteViewController;
- (void)presentExternalPasswordCredentialRemoteViewController:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)init;
- (void)autoFillWithExternalCredential:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <_SFExternalPasswordCredentialViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
