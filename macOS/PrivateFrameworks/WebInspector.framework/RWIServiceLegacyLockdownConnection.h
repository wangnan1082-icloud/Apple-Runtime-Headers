//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/RWIServiceLockdownConnection.h>

@class NSThread;

__attribute__((visibility("hidden")))
@interface RWIServiceLegacyLockdownConnection : RWIServiceLockdownConnection
{
    NSThread *_readThread;
}

- (void)sendMessage:(id)arg1;
- (void)readFromLockdownService;
- (void)stopReadingFromLockdown;
- (void)startReadingFromLockdown;

@end

