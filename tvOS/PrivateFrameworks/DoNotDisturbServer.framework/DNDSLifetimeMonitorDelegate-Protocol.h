//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class NSArray;
@protocol DNDSLifetimeMonitor;

@protocol DNDSLifetimeMonitorDelegate <NSObject>
- (void)lifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1 lifetimeDidExpireForAssertionUUIDs:(NSArray *)arg2;
- (void)activeAssertionsDidChangeForLifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1;
@end

