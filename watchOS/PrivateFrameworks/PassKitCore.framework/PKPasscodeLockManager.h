//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCProfileConnectionObserver.h"

@class MCProfileConnection, NSHashTable, NSObject<OS_dispatch_queue>, NSString;

@interface PKPasscodeLockManager : NSObject <MCProfileConnectionObserver>
{
    MCProfileConnection *_profileConnection;
    _Bool _isPasscodeSet;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSHashTable *_observers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) _Bool isPasscodeSet;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
