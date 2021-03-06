//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselServices/CSLSWaterLockXPCClientDelegate-Protocol.h>

@class CSLSWaterLockXPCClient, NSString;
@protocol CSLSWaterLockDelegate, OS_dispatch_queue;

@interface CSLSWaterLock : NSObject <CSLSWaterLockXPCClientDelegate>
{
    CSLSWaterLockXPCClient *_xpcClient;
    id <CSLSWaterLockDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _locked;
    NSString *_identifier;
}

@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
- (void).cxx_destruct;
- (void)_notifyDelegate;
- (void)didUnlock;
- (void)didLock;
- (void)unlock;
- (void)lock;
- (id)init;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2 callbackQueue:(id)arg3;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

