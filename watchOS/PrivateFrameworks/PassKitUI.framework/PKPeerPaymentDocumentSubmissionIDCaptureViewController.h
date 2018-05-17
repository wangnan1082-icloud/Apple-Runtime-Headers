//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKPeerPaymentDocumentSubmissionControllerDelegate.h"
#import "PKPeerPaymentDocumentSubmissionViewControllerResponder.h"

@class NSString, NSTimer, PKCameraCaptureInstructionView, PKPeerPaymentDocumentSubmissionController, UIBarButtonItem, UIView;

@interface PKPeerPaymentDocumentSubmissionIDCaptureViewController : UIViewController <PKPeerPaymentDocumentSubmissionControllerDelegate, PKPeerPaymentDocumentSubmissionViewControllerResponder>
{
    PKPeerPaymentDocumentSubmissionController *_captureController;
    PKCameraCaptureInstructionView *_cameraInstructionView;
    UIView *_cameraView;
    _Bool _reachedTimeout;
    NSTimer *_timerTryAgain;
    UIBarButtonItem *_buttonCancel;
    int _context;
}

- (void).cxx_destruct;
- (void)captureController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(_Bool)arg2;
- (void)captureController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(_Bool)arg3;
- (void)captureController:(id)arg1 didChangeStateTo:(int)arg2;
- (void)updateUIWithState:(int)arg1;
- (void)cancel;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithController:(id)arg1 context:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
