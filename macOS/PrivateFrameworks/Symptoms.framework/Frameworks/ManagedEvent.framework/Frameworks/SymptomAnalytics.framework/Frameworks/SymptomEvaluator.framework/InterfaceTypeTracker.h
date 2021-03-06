//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, TrackerPolicy;
@protocol flowDispositionObserver;

@interface InterfaceTypeTracker : NSObject
{
    NSArray *_alwaysNote;
    NSArray *_neverNote;
    NSArray *_daemonCheck;
    NSMutableDictionary *_trackerCache;
    long long _interfaceType;
    id <flowDispositionObserver> _observer;
    TrackerPolicy *_defaultPolicy;
}

@property(retain) TrackerPolicy *defaultPolicy; // @synthesize defaultPolicy=_defaultPolicy;
@property(retain) id <flowDispositionObserver> observer; // @synthesize observer=_observer;
@property long long interfaceType; // @synthesize interfaceType=_interfaceType;
@property(retain) NSMutableDictionary *trackerCache; // @synthesize trackerCache=_trackerCache;
@property(retain) NSArray *daemonCheck; // @synthesize daemonCheck=_daemonCheck;
@property(retain) NSArray *neverNote; // @synthesize neverNote=_neverNote;
@property(retain) NSArray *alwaysNote; // @synthesize alwaysNote=_alwaysNote;
- (void).cxx_destruct;
- (void)configurePolicies:(id)arg1;
- (void)getNetworkActivity:(CDUnknownBlockType)arg1;
- (void)noteFlow:(id)arg1 withOwner:(id)arg2 isADaemon:(BOOL)arg3;
- (void)noteFlow:(id)arg1 withDelegatee:(id)arg2;
- (void)removeLinkages:(id)arg1;
- (void)_trackerCachePrune;
- (void)_dumpState;
- (id)infoDir;
- (id)description;
- (void)dealloc;
- (id)init;

@end

