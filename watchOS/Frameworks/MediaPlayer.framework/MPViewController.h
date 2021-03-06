//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/MPAVControllerNode-Protocol.h>
#import <MediaPlayer/MPControllerProtocol-Protocol.h>

@class MPAVController, MPAVItem, NSString, UIView;

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode>
{
    id _delegate;
    int _interfaceOrientation;
    MPAVItem *_item;
    MPAVController *_player;
    unsigned int _appearing:1;
    unsigned int _observesApplicationSuspendResumeEventsOnly:1;
    unsigned int _showOverlayWhileAppearingDisabled:1;
    _Bool _registeredForPlayerNotifications;
    int _playerLockedCount;
    _Bool _idleTimerDisabled;
}

@property(nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) _Bool idleTimerDisabled; // @synthesize idleTimerDisabled=_idleTimerDisabled;
@property(nonatomic) _Bool registeredForPlayerNotifications; // @synthesize registeredForPlayerNotifications=_registeredForPlayerNotifications;
@property(nonatomic) int orientation; // @synthesize orientation=_interfaceOrientation;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_canReloadView;
- (void)removeChildViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setView:(id)arg1;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)setOrientation:(int)arg1 animate:(_Bool)arg2;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)unlockPlayer;
- (void)lockPlayer;
- (void)setAppearing:(_Bool)arg1;
- (void)willChangeToInterfaceOrientation:(int)arg1;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
@property(nonatomic) _Bool observesApplicationSuspendResumeEventsOnly;
- (void)applicationResumed;
- (void)applicationDidResumeEventsOnly;
- (void)applicationDidSuspendEventsOnly;
- (void)stopTicking;
- (void)startTicking;
- (_Bool)isAppearing;
- (void)endIgnoringChangeTypes:(unsigned int)arg1;
- (int)displayableInterfaceOrientationForInterfaceOrientation:(int)arg1;
- (void)didChangeToInterfaceOrientation:(int)arg1;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1;
- (void)beginTransitionOverlayHidding;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (_Bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (void)beginIgnoringChangeTypes:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) UIView *view;

@end

