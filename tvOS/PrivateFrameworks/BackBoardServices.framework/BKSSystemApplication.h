//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSSystemApplicationClientDelegate.h"

@class BKSSystemApplicationClient, NSObject<OS_dispatch_queue>, NSString;

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    BKSSystemApplicationClient *_client;
    id <BKSSystemApplicationDelegate> _delegate;
    _Bool _waitForDataMigration;
    double _systemIdleSleepInterval;
}

@property(nonatomic) double systemIdleSleepInterval; // @synthesize systemIdleSleepInterval=_systemIdleSleepInterval;
@property(nonatomic) _Bool waitForDataMigration; // @synthesize waitForDataMigration=_waitForDataMigration;
@property(nonatomic) id <BKSSystemApplicationDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)clientIsAliveForWatchdog:(id)arg1;
- (void)sendActions:(id)arg1;
- (void)finishBooting;
- (void)restart;
- (void)start;
- (void)bootstrap;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
