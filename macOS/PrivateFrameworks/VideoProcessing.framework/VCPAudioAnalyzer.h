//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface VCPAudioAnalyzer : NSObject
{
    NSDictionary *_model;
    void *_inputBuffer;
    struct ComponentInstanceRecord *_audioUnit;
    struct AudioTimeStamp _audioTimestamp;
    struct AudioStreamBasicDescription _audioStream;
    struct AudioBufferList _audioBufferList;
    int _sampleBatchSize;
    CDStruct_1b6d18a9 _trackStart;
    BOOL _voiceActivity;
    CDStruct_1b6d18a9 _voiceStart;
    NSMutableArray *_voiceDetections;
    NSMutableArray *_utteranceDetections;
    NSMutableArray *_musicDetections;
    int _bufferedSamples;
}

+ (id)voiceDetector;
- (void).cxx_destruct;
- (int)analyzeAsset:(id)arg1 cancel:(CDUnknownBlockType)arg2 results:(id *)arg3;
- (int)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;
- (int)processAudioSamples;
- (void)addDetectionFromTime:(const CDStruct_1b6d18a9 *)arg1 toTime:(const CDStruct_1b6d18a9 *)arg2 result:(id)arg3;
- (int)initialize:(struct opaqueCMSampleBuffer *)arg1;
- (int)loadModel;
- (int)initializeAudioUnit:(const struct AudioStreamBasicDescription *)arg1;
- (id)audioFormatRequirements;
- (int)sampleBatchSize:(double)arg1;
- (void)dealloc;
- (id)init;

@end

