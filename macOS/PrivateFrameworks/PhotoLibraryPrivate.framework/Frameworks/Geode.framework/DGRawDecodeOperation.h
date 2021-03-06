//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSArray, NSDictionary, NSNumber, NSString;
@protocol DGImagePropertiesPromise;

@interface DGRawDecodeOperation : DGOperation
{
    double _xWhiteBalance;
    double _yWhiteBalance;
    double _BoostAmount;
    double _BoostPreserveHueAmount;
    double _defaultExposureBias;
    NSString *_inputMethodVersion;
    NSString *_sushiLevel;
    NSDictionary *_inputRAWDictionary;
    id <DGImagePropertiesPromise> _defaultImageProperties;
    NSNumber *_inputBoostAmount;
    NSNumber *_inputSharpenEnabled;
    NSNumber *_inputSharpenIntensity;
    NSNumber *_inputSharpenEdgeIntensity;
    NSNumber *_inputChromaBlurEnabled;
    NSNumber *_inputChromaBlurRadius;
    NSNumber *_inputNoiseTransitionEnabled;
    NSNumber *_inputBoostPreserveHueAmount;
    NSNumber *_inputChromaBlurMoireAmount;
    NSNumber *_inputChromaBlurMoireSize;
    NSNumber *_inputNoiseReductionAmount;
    NSNumber *_inputLNRAmount;
    NSNumber *_inputCNRAmount;
    NSNumber *_inputSharpnessAmount;
    NSNumber *_inputContrastAmount;
    NSNumber *_inputDetailAmount;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)_stringsTableName;
+ (void)initialize;
@property(retain, nonatomic) id <DGImagePropertiesPromise> defaultImageProperties; // @synthesize defaultImageProperties=_defaultImageProperties;
- (void).cxx_destruct;
- (BOOL)updatePresetOperationUsingNewRenderDescription:(id)arg1 previousOperation:(id)arg2 presetAdjustmentStack:(id)arg3;
- (id)defaultValueForInputKey:(id)arg1;
- (id)processImage:(id)arg1 options:(id)arg2;
- (BOOL)hasRAWNoiseReduction:(id)arg1;
- (void)addRawReconstructionOptions:(id)arg1 renderDescription:(id)arg2 legacySettings:(BOOL)arg3;
- (void)updateWithDefaultImagePropertiesPromise:(id)arg1;
@property(readonly) NSNumber *inputDetailAmount;
@property(readonly) NSNumber *inputContrastAmount;
@property(readonly) NSNumber *inputSharpnessAmount;
@property(readonly) NSNumber *inputCNRAmount;
@property(readonly) NSNumber *inputLNRAmount;
- (id)inputNoiseReductionAmount;
- (id)inputNoiseTransitionEnabled;
- (id)inputChromaBlurMoireAmount;
- (id)inputChromaBlurMoireSize;
- (id)inputChromaBlurRadius;
- (id)inputChromaBlurEnabled;
- (id)inputSharpenIntensity;
- (void)setInputSharpenEdgeIntensity:(id)arg1;
- (id)inputSharpenEdgeIntensity;
- (id)inputSharpenEnabled;
- (id)inputBoostPreserveHueAmount;
- (void)setInputBoostPreserveHueAmount:(id)arg1;
- (id)inputBoostAmount;
- (id)sushiLevelForRenderDescription:(id)arg1;
@property(copy, nonatomic) NSString *inputMethodVersion;
- (id)processImage:(id)arg1 masterSize:(struct PFIntSize_st)arg2 reduceNoiseOperation:(id)arg3 exposureOperation:(id)arg4 whiteBalanceOperation:(id)arg5 adjustmentsIntensityOperation:(id)arg6 cgImageProperties:(id)arg7 renderPipelineVersion:(long long)arg8 options:(id)arg9;
- (BOOL)moveBoostToEnd:(long long)arg1;
- (id)configureBoost:(id)arg1;
- (id)_maskImage:(id)arg1 bgImage:(id)arg2 mask:(id)arg3;
- (id)_filters;
- (id)filterOfType:(int)arg1 inFilters:(id)arg2;
- (void)setInputRAWDictionary:(id)arg1;
- (id)rawDecodeFilterRAWPreserveHueGamutMap;
- (BOOL)supportsSushiLevel:(id)arg1;
@property(readonly, nonatomic) NSArray *supportedSushiLevels;
@property(readonly, nonatomic) NSArray *supportedMethodVersions;
- (id)inputRAWDictionary;
- (int)rawOperationType;
- (BOOL)isEqualToOperation:(id)arg1;
- (void)setOperationDefaults;
- (id)initWithOperation:(id)arg1;
- (id)init;

@end

