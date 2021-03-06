//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBPluginBundleController-Protocol.h>
#import <SpringBoardUI/SBUIOptionalLegibility-Protocol.h>

@class SBLockScreenPluginAction, SBLockScreenPluginContext, SBLockScreenPluginPresentation, UIViewController;
@protocol SBLockScreenPluginAgent, SBLockScreenPluginAppearance, SBLockScreenPluginViewController;

@protocol SBLockScreenPluginController <SBPluginBundleController, SBUIOptionalLegibility>
@property(readonly, nonatomic) id <SBLockScreenPluginAppearance> pluginAppearance;
@property(readonly, nonatomic) UIViewController<SBLockScreenPluginViewController> *pluginViewController;
@property(readonly, nonatomic) long long pluginPriority;
@property(nonatomic) __weak id <SBLockScreenPluginAgent> pluginAgent;

@optional
@property(readonly, retain, nonatomic) SBLockScreenPluginAction *pluginUnlockAction;
- (void)updateForPresentation:(SBLockScreenPluginPresentation *)arg1;
- (_Bool)pluginHandleEvent:(long long)arg1;
- (void)pluginDidDeactivateWithContext:(SBLockScreenPluginContext *)arg1;
- (void)pluginWillActivateWithContext:(SBLockScreenPluginContext *)arg1;
@end

