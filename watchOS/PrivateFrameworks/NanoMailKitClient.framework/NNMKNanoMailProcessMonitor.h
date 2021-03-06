//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitClient/NNMKNanoMailProcessMonitor-Protocol.h>

@class BKSApplicationStateMonitor, NSHashTable, NSString;

@interface NNMKNanoMailProcessMonitor : NSObject <NNMKNanoMailProcessMonitor>
{
    unsigned int _nanoMailApplicationState;
    BKSApplicationStateMonitor *_stateMonitor;
    NSHashTable *_observers;
}

+ (_Bool)isNanoMailInstalled;
+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) BKSApplicationStateMonitor *stateMonitor; // @synthesize stateMonitor=_stateMonitor;
@property(nonatomic) unsigned int nanoMailApplicationState; // @synthesize nanoMailApplicationState=_nanoMailApplicationState;
- (void).cxx_destruct;
- (unsigned int)_convertEnum:(unsigned int)arg1;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (_Bool)isNanoMailBackgroundTaskSuspended;
- (_Bool)isNanoMailRunningInForeground;
- (void)dealloc;
- (void)_setUpDistnotedEventHandler;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

