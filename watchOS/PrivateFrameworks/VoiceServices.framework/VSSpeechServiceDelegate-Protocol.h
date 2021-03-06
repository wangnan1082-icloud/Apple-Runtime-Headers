//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceServices/NSObject-Protocol.h>

@class NSArray, NSError, NSString, VSInstrumentMetrics, VSSpeechRequest;

@protocol VSSpeechServiceDelegate <NSObject>
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(VSInstrumentMetrics *)arg1 error:(NSError *)arg2;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(_Bool)arg1 error:(NSError *)arg2;
- (oneway void)presynthesizedAudioRequestDidStart;
- (oneway void)synthesisRequest:(VSSpeechRequest *)arg1 didFinishWithInstrumentMetrics:(VSInstrumentMetrics *)arg2 error:(NSError *)arg3;
- (oneway void)synthesisRequest:(VSSpeechRequest *)arg1 didReceiveTimingInfo:(NSArray *)arg2;
- (oneway void)speechRequestDidReceiveTimingInfo:(NSArray *)arg1;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(VSInstrumentMetrics *)arg1;
- (oneway void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(NSString *)arg2 error:(NSError *)arg3;
- (oneway void)speechRequestMark:(long)arg1 didStartForRange:(struct _NSRange)arg2;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidStart;
@end

