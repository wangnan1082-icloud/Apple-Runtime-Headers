//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDisplayLayoutObserver.h"

@class NSString;

@interface HDWatchAppStateMonitor : NSObject <FBSDisplayLayoutObserver>
{
    _Bool _appIsActive;
    id <HDWatchAppStateMonitorDelegate> _delegate;
    NSString *_bundleIdentifier;
}

+ (void)launchWorkoutAppIfNeededWithFitnessMachineSessionUUID:(id)arg1;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <HDWatchAppStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool appIsActive; // @synthesize appIsActive=_appIsActive;
- (void).cxx_destruct;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithFirstPartyWorkoutApp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
