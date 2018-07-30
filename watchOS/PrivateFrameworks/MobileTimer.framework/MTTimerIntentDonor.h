//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTTimerObserver.h"

@class MTTimerStorage, NSMutableSet, NSString;

@interface MTTimerIntentDonor : NSObject <MTTimerObserver>
{
    MTTimerStorage *_storage;
    NSMutableSet *_donatedTimerIDs;
}

@property(readonly, nonatomic) NSMutableSet *donatedTimerIDs; // @synthesize donatedTimerIDs=_donatedTimerIDs;
@property(readonly, nonatomic) MTTimerStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)_donateCreateTimerIntent:(id)arg1;
- (void)nextTimerDidChange:(id)arg1;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
