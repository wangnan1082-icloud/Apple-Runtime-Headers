//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedRock/NSObject-Protocol.h>

@class LROperation, NSError;

@protocol LROperationDelegate <NSObject>

@optional
- (void)repairOperationDidCancel:(LROperation *)arg1;
- (void)repairOperation:(LROperation *)arg1 didStopWithError:(NSError *)arg2;
- (void)repairOperationDidComplete:(LROperation *)arg1;
- (void)repairOperation:(LROperation *)arg1 didUpdateProgress:(long long)arg2 withTotal:(long long)arg3;
@end

