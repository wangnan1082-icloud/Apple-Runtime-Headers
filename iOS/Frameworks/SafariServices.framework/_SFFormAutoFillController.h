//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFFormMetadataObserver.h"
#import "_SFAuthenticationClient.h"

@class NSMutableIndexSet, NSMutableSet, NSString, NSTimer, SFFormAutocompleteState, UIView<WBUFormAutoFillWebView>, WKWebView<WBUFormAutoFillWebView>, _SFAuthenticationContext, _SFAutoFillAuthenticationCache, _WKRemoteObjectInterface;

@interface _SFFormAutoFillController : NSObject <SFFormMetadataObserver, _SFAuthenticationClient>
{
    WKWebView<WBUFormAutoFillWebView> *_webView;
    id <SFFormAutoFillControllerDelegate> _delegate;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    id <SFFormAutoFiller> _autoFiller;
    _Bool _isCurrentlyAuthenticating;
    SFFormAutocompleteState *_state;
    NSTimer *_prefillTimer;
    NSMutableIndexSet *_uniqueIDsOfFormsThatWereAutoFilled;
    NSMutableSet *_uniqueIDsOfControlsThatWereAutoFilled;
    _Bool _metadataCorrectionsEnabled;
}

@property(nonatomic) _Bool metadataCorrectionsEnabled; // @synthesize metadataCorrectionsEnabled=_metadataCorrectionsEnabled;
- (void).cxx_destruct;
- (void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1;
- (void)_removeUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)_addUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 loadingIsDeferred:(_Bool)arg3;
- (void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
- (void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (void)authenticateForAutoFillOnPageLoad:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_authenticateForAutoFillForHighLevelDomain:(id)arg1 onPageLoad:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _SFAuthenticationContext *authenticationContext;
@property(readonly, nonatomic) _SFAutoFillAuthenticationCache *authenticationCache;
- (void)_didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(CDUnknownBlockType)arg3;
- (void)fieldFocusedWithInputSession:(id)arg1;
@property(readonly, nonatomic) UIView<WBUFormAutoFillWebView> *webView;
- (void)_autoFillLoginFormSynchronouslyAndClearMetadata:(id)arg1 inFrame:(id)arg2;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(CDUnknownBlockType)arg3;
- (void)setFormControls:(id)arg1 areAutoFilled:(_Bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 andFocusField:(id)arg4;
- (void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)autoFill;
- (void)prefillFormsSoonIfNeeded;
- (void)_prefillTimerFired:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
