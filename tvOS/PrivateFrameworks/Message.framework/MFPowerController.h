//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFDiagnosticsGenerator-Protocol.h>

@class NSCountedSet, NSString;
@protocol MFCancelable, OS_dispatch_queue;

@interface MFPowerController : NSObject <MFDiagnosticsGenerator>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_powerQueue;
    int _pluggedIn;
    int _powerToken;
    NSCountedSet *_identifiers;
    id <MFCancelable> _appStateCancelable;
    _Bool _isForeground;
}

+ (void)powerlog:(id)arg1 eventData:(id)arg2;
+ (id)sharedInstance;
- (id)copyDiagnosticInformation;
- (void)recordDuetEventForAccount:(id)arg1 event:(id)arg2;
- (void)_deleteDuetAttributesForAccountWithUniqueId:(id)arg1;
- (id)duetIdentifier;
- (void)_initDuet;
- (id)powerObservable;
- (void)_applicationForegroundStateChanged:(_Bool)arg1;
- (void)releaseAssertionWithIdentifier:(id)arg1;
- (void)retainAssertionWithIdentifier:(id)arg1 withAccount:(id)arg2;
- (void)retainAssertionWithIdentifier:(id)arg1;
- (void)_releaseAssertion_nts;
- (void)_retainAssertion_nts;
- (void)_setupAssertionTimer:(double)arg1;
- (double)_assertionTimeout;
@property(readonly, getter=isBatterySaverModeEnabled) _Bool batterySaverModeEnabled;
- (void)_lowPowerModeChangedNotification:(id)arg1;
- (void)startListeningForBatterySaverNotifications;
@property(readonly, getter=isHoldingAssertion) _Bool holdingAssertion;
@property(readonly, getter=isPluggedIn) _Bool pluggedIn;
- (void)_setPluggedIn:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

