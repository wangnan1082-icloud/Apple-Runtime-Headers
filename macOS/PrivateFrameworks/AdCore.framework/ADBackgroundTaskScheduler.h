//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@interface ADBackgroundTaskScheduler : ADSingleton
{
}

+ (void)unregisterTaskDelegate:(id)arg1;
+ (void)registerTaskDelegate:(id)arg1 forRequestID:(id)arg2;
+ (id)sharedInstance;
- (void)checkOnTask:(id)arg1;
- (void)cancelBackgroundTask:(id)arg1;
- (void)addBackgroundTask:(id)arg1;
- (void)handleXPCActivity:(id)arg1 withID:(id)arg2;
- (id)init;

@end

