//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/EARPSRAudioProcessorDelegate-Protocol.h>

@class EARPSRAudioProcessor, NSString;
@protocol CSSpIdSpeakerVectorGeneratorDelegate, OS_dispatch_queue;

@interface CSSpIdSpeakerVectorGenerator : NSObject <EARPSRAudioProcessorDelegate>
{
    unsigned long long _spIdType;
    NSString *_spIdTypeStr;
    id <CSSpIdSpeakerVectorGeneratorDelegate> _delegate;
    EARPSRAudioProcessor *_psrAudioProcessor;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) EARPSRAudioProcessor *psrAudioProcessor; // @synthesize psrAudioProcessor=_psrAudioProcessor;
@property(nonatomic) __weak id <CSSpIdSpeakerVectorGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *spIdTypeStr; // @synthesize spIdTypeStr=_spIdTypeStr;
@property(nonatomic) unsigned long long spIdType; // @synthesize spIdType=_spIdType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)psrAudioProcessor:(id)arg1 finishedWithFinalSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (void)psrAudioProcessor:(id)arg1 hasSpeakerVector:(id)arg2 speakerVectorSize:(unsigned long long)arg3 processedAudioDurationMs:(unsigned long long)arg4;
- (BOOL)_isSpeakerVectorValid:(id)arg1 speakerVectorSize:(unsigned long long)arg2 fromPsrAudioProcessor:(id)arg3;
- (void)endAudio;
- (void)processAudioData:(id)arg1;
- (void)dealloc;
- (id)initWithCSSpIdType:(unsigned long long)arg1 withSysConfigFilepath:(id)arg2 sysConfigRoot:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

