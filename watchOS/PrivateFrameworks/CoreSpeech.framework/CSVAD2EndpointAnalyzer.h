//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSEndpointAnalyzerImpl-Protocol.h>

@class NSDictionary, NSMutableData, NSString;
@protocol CSEndpointAnalyzerDelegate, OS_dispatch_queue;

@interface CSVAD2EndpointAnalyzer : NSObject <CSEndpointAnalyzerImpl>
{
    struct OpaqueAudioComponentInstance *_audioUnitEPVAD2;
    _Bool _saveSamplesSeenInReset;
    _Bool _detectedOneShotStartpoint;
    _Bool _detectedRecurrentStartpoint;
    _Bool _communicatedStartPointDetection;
    _Bool _detectedOneShotEndpoint;
    _Bool _detectedRecurrentEndpoint;
    _Bool _communicatedEndpointDetection;
    _Bool _isConfigured;
    _Bool _recordingDidStop;
    id <CSEndpointAnalyzerDelegate> _delegate;
    int _endpointStyle;
    unsigned int _activeChannel;
    int _endpointMode;
    unsigned long _frameRate;
    NSMutableData *_floatSampleBuffer;
    NSDictionary *_topLevelParameterDict;
    NSString *_modelDictPath;
    NSObject<OS_dispatch_queue> *_apQueue;
    unsigned int _vtEndInSampleCount;
    double _interspeechWaitTime;
    double _startWaitTime;
    double _endWaitTime;
    double _automaticEndpointingSuspensionEndTime;
    double _minimumDurationForEndpointer;
    double _bypassSamples;
    double _delay;
    double _sampleRate;
    double _samplesSeen;
    double _numSamplesProcessed;
    double _lastOneShotStartpoint;
    double _lastOneShotEndpoint;
    double _lastRecurrentStartpoint;
    double _lastRecurrentEndpoint;
    double _previousSamplesSeen;
}

@property(nonatomic) unsigned int vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;
@property(nonatomic) _Bool recordingDidStop; // @synthesize recordingDidStop=_recordingDidStop;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue; // @synthesize apQueue=_apQueue;
@property(nonatomic) double previousSamplesSeen; // @synthesize previousSamplesSeen=_previousSamplesSeen;
@property(nonatomic) _Bool isConfigured; // @synthesize isConfigured=_isConfigured;
@property(retain, nonatomic) NSString *modelDictPath; // @synthesize modelDictPath=_modelDictPath;
@property(retain, nonatomic) NSDictionary *topLevelParameterDict; // @synthesize topLevelParameterDict=_topLevelParameterDict;
@property(retain, nonatomic) NSMutableData *floatSampleBuffer; // @synthesize floatSampleBuffer=_floatSampleBuffer;
@property(nonatomic) double lastRecurrentEndpoint; // @synthesize lastRecurrentEndpoint=_lastRecurrentEndpoint;
@property(nonatomic) double lastRecurrentStartpoint; // @synthesize lastRecurrentStartpoint=_lastRecurrentStartpoint;
@property(nonatomic) double lastOneShotEndpoint; // @synthesize lastOneShotEndpoint=_lastOneShotEndpoint;
@property(nonatomic) double lastOneShotStartpoint; // @synthesize lastOneShotStartpoint=_lastOneShotStartpoint;
@property(nonatomic) double numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(nonatomic) double samplesSeen; // @synthesize samplesSeen=_samplesSeen;
@property(nonatomic) _Bool communicatedEndpointDetection; // @synthesize communicatedEndpointDetection=_communicatedEndpointDetection;
@property(nonatomic) _Bool detectedRecurrentEndpoint; // @synthesize detectedRecurrentEndpoint=_detectedRecurrentEndpoint;
@property(nonatomic) _Bool detectedOneShotEndpoint; // @synthesize detectedOneShotEndpoint=_detectedOneShotEndpoint;
@property(nonatomic) _Bool communicatedStartPointDetection; // @synthesize communicatedStartPointDetection=_communicatedStartPointDetection;
@property(nonatomic) _Bool detectedRecurrentStartpoint; // @synthesize detectedRecurrentStartpoint=_detectedRecurrentStartpoint;
@property(nonatomic) _Bool detectedOneShotStartpoint; // @synthesize detectedOneShotStartpoint=_detectedOneShotStartpoint;
@property(nonatomic) unsigned long frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double bypassSamples; // @synthesize bypassSamples=_bypassSamples;
@property(nonatomic) _Bool saveSamplesSeenInReset; // @synthesize saveSamplesSeenInReset=_saveSamplesSeenInReset;
@property(nonatomic) double minimumDurationForEndpointer; // @synthesize minimumDurationForEndpointer=_minimumDurationForEndpointer;
@property(nonatomic) double automaticEndpointingSuspensionEndTime; // @synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime;
@property(nonatomic) double endWaitTime; // @synthesize endWaitTime=_endWaitTime;
@property(nonatomic) double startWaitTime; // @synthesize startWaitTime=_startWaitTime;
@property(nonatomic) double interspeechWaitTime; // @synthesize interspeechWaitTime=_interspeechWaitTime;
@property(nonatomic) int endpointMode; // @synthesize endpointMode=_endpointMode;
@property(nonatomic) unsigned int activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) int endpointStyle; // @synthesize endpointStyle=_endpointStyle;
@property(nonatomic) __weak id <CSEndpointAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_processAudioSamples:(id)arg1;
- (void)processAudioSamplesAsynchronously:(id)arg1;
- (void)handleVoiceTriggerWithActivationInfo:(id)arg1;
@property(readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property(readonly, nonatomic) double lastStartOfVoiceActivityTime;
- (void)_resetWithSampleRate:(unsigned int)arg1;
- (void)reset;
- (void)resetForNewRequestWithSampleRate:(unsigned int)arg1;
- (void)preheat;
- (void)recordingStoppedForReason:(unsigned int)arg1;
@property(readonly, nonatomic) _Bool canProcessCurrentRequest;
- (void)dealloc;
- (id)init;
- (void)_detectVoiceActivityInSamples:(float *)arg1 numSamples:(unsigned long)arg2;
- (void)_configureWithSampleRate:(double)arg1 andFrameRate:(unsigned long)arg2;
- (_Bool)_configureWithASBD:(struct AudioStreamBasicDescription *)arg1 andFrameRate:(unsigned long)arg2;
- (id)_getEndpointMetricsForAudioTimestamp:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double elapsedTimeWithNoSpeech;
@property(readonly, nonatomic) NSString *endpointerModelVersion;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

