//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/CSEndpointAnalyzer-Protocol.h>

@class CSAudioChunk, CSServerEndpointFeatures, NSDictionary, NSString;
@protocol CSEndpointAnalyzerDelegate;

@protocol CSEndpointAnalyzerImpl <CSEndpointAnalyzer>
@property(nonatomic) unsigned int activeChannel;
@property(readonly, nonatomic) _Bool canProcessCurrentRequest;
@property(nonatomic) __weak id <CSEndpointAnalyzerDelegate> delegate;
- (void)recordingStoppedForReason:(unsigned int)arg1;
- (void)processAudioSamplesAsynchronously:(CSAudioChunk *)arg1;
- (void)resetForNewRequestWithSampleRate:(unsigned int)arg1;

@optional
@property(readonly, nonatomic) double elapsedTimeWithNoSpeech;
@property(readonly, nonatomic) NSString *endpointerModelVersion;
- (void)handleVoiceTriggerWithActivationInfo:(NSDictionary *)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(void (^)(_Bool, NSArray *))arg2;
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (void)processServerEndpointFeatures:(CSServerEndpointFeatures *)arg1;
@end

