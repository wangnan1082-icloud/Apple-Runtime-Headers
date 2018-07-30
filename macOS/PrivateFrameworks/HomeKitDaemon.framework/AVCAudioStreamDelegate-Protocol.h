//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVCAudioStream, NSArray, NSData, NSError;

@protocol AVCAudioStreamDelegate <NSObject>
- (void)stream:(AVCAudioStream *)arg1 didStart:(BOOL)arg2 error:(NSError *)arg3;

@optional
- (void)stream:(AVCAudioStream *)arg1 updateOutputFrequencyLevel:(NSData *)arg2;
- (void)stream:(AVCAudioStream *)arg1 updateInputFrequencyLevel:(NSData *)arg2;
- (void)streamDidServerDie:(AVCAudioStream *)arg1;
- (void)stream:(AVCAudioStream *)arg1 didReceiveRTCPPackets:(NSArray *)arg2;
- (void)stream:(AVCAudioStream *)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)streamDidRTCPTimeOut:(AVCAudioStream *)arg1;
- (void)streamDidRTPTimeOut:(AVCAudioStream *)arg1;
- (void)stream:(AVCAudioStream *)arg1 didStartSynchronizer:(BOOL)arg2 error:(NSError *)arg3;
- (void)stream:(AVCAudioStream *)arg1 didResume:(BOOL)arg2 error:(NSError *)arg3;
- (void)stream:(AVCAudioStream *)arg1 didPause:(BOOL)arg2 error:(NSError *)arg3;
- (void)streamDidStop:(AVCAudioStream *)arg1;
@end
