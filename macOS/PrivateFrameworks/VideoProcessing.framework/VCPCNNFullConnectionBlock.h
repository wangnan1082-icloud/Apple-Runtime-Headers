//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoProcessing/VCPCNNBlock.h>

@interface VCPCNNFullConnectionBlock : VCPCNNBlock
{
    float *_weight;
    float *_bias;
    int _numNeurons;
    int _neuronType;
}

+ (id)fcBlockWithNumNeurons:(int)arg1 NeuronType:(int)arg2;
- (BOOL)useGPU;
- (BOOL)supportGPU;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (int)loadWeights:(struct __sFILE *)arg1 inputDim:(int)arg2 outputDim:(int)arg3 quantFactor:(int)arg4;
- (int)readWeightsBias:(struct __sFILE *)arg1 weights:(float *)arg2 bias:(float *)arg3 inputDim:(int)arg4 outputDim:(int)arg5 quantFactor:(int)arg6;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (void)dealloc;
- (int)initializeRest;
- (id)initWithParameters:(int)arg1 NeuronType:(int)arg2;

@end

