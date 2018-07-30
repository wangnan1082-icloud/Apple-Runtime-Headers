//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MapsSuggestionsObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSXPCConnection;

@interface MapsSuggestionsDonater : NSObject <MapsSuggestionsObject>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_closeTimer;
}

- (void).cxx_destruct;
- (void)_unscheduleCloseConnection;
- (void)_scheduleCloseConnection;
- (void)_initCloseTimerIfNecessary;
- (void)_closeConnection;
- (_Bool)_openConnectionIfNecessary;
@property(readonly, nonatomic) NSString *uniqueName;
- (_Bool)donateETA:(id)arg1 entry:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
