//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/ICNFMCThrowingInvocationOperation.h>

@interface ICNFMCMainThreadInvocationOperation : ICNFMCThrowingInvocationOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)_finish;
- (BOOL)isFinished;
- (void)_setIsExecuting:(BOOL)arg1;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)main;
- (void)start;

@end
