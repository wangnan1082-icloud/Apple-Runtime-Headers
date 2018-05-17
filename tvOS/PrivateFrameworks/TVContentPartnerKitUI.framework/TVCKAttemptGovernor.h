//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface TVCKAttemptGovernor : NSObject
{
    id <TVCKAttemptGovernorDelegate> _delegate;
    unsigned long long _attemptCount;
    NSTimer *_retryTimer;
}

@property(nonatomic) __weak NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(nonatomic) __weak id <TVCKAttemptGovernorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attemptFailed;
- (void)attemptSucceeded;
- (void)_startTimerWithDelay:(double)arg1 tolerance:(double)arg2;
- (double)_toleranceForDelay:(double)arg1;
- (double)_delayForFailure:(unsigned long long)arg1;
- (double)_maxDelayForFailure:(unsigned long long)arg1;
- (double)_minDelayForFailure:(unsigned long long)arg1;
- (unsigned long long)_numberOfFailuresNeededToReachMaxDelay;
- (double)_maxDelay;
- (unsigned long long)_maxConsecutiveAttempts;
- (_Bool)_shouldAttemptAfterFailure:(unsigned long long)arg1;
- (unsigned long long)_incrementedAttemptCount;
- (void)_retryTimerFired:(id)arg1;
- (void)_beginAttempt;

@end
