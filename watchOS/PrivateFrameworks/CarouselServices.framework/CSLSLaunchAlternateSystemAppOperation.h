//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class BKSAlternateSystemApp, NSObject<OS_dispatch_queue>, NSObject<OS_os_activity>;

@interface CSLSLaunchAlternateSystemAppOperation : NSOperation
{
    _Bool _executing;
    _Bool _finished;
    NSObject<OS_dispatch_queue> *_queue;
    BKSAlternateSystemApp *_alternateSystemApp;
    NSObject<OS_os_activity> *_activity;
}

@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) BKSAlternateSystemApp *alternateSystemApp; // @synthesize alternateSystemApp=_alternateSystemApp;
- (void).cxx_destruct;
- (void)alternateSystemApp:(id)arg1 didFailToLaunchWithError:(id)arg2;
- (void)alternateSystemAppDidLaunch:(id)arg1;
- (void)complete;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)start;
- (id)initWithAlternateSystemApp:(id)arg1;

@end
