//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioAmplitudeSampleExtractionHelper;

@interface AVWaveformGenerator : NSObject
{
    AVAudioAmplitudeSampleExtractionHelper *_audioAmplitudeSampleExtrationHelper;
}

- (void).cxx_destruct;
- (void)cancelAudioAmplitudeSampleGeneration;
- (void)generateAudioAmplitudeSamplesForAsset:(id)arg1 startTime:(double)arg2 duration:(double)arg3 numberOfSamples:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)init;

@end
