//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSAlternateSystemAppDelegate.h"

@class BKSAlternateSystemApp, CSLSLaunchAlternateSystemAppOperation, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString;

@interface CSLSMigrationApp : NSObject <BKSAlternateSystemAppDelegate>
{
    BKSAlternateSystemApp *_alternateSystemApp;
    NSOperationQueue *_queue;
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    CSLSLaunchAlternateSystemAppOperation *_launchOperation;
    _Bool _isActive;
    _Bool _isTerminating;
}

@property _Bool isTerminating; // @synthesize isTerminating=_isTerminating;
@property _Bool isActive; // @synthesize isActive=_isActive;
- (void).cxx_destruct;
- (void)alternateSystemApp:(id)arg1 didFailToLaunchWithError:(id)arg2;
- (void)alternateSystemApp:(id)arg1 didTerminateWithSignal:(int)arg2;
- (void)alternateSystemApp:(id)arg1 didExitWithStatus:(int)arg2;
- (void)alternateSystemAppDidLaunch:(id)arg1;
- (void)terminateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
