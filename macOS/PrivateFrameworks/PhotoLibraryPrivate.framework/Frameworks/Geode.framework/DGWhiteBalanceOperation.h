//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Geode/DGOperation.h>

#import <Geode/DGAutoCalculable-Protocol.h>

@class NSColor, NSNumber, NSString;
@protocol DGImagePropertiesPromise;

@interface DGWhiteBalanceOperation : DGOperation <DGAutoCalculable>
{
    NSNumber *_inputColorType;
    NSNumber *_temperature;
    NSNumber *_tint;
    NSNumber *_isDefaults;
    NSColor *_inputGrayColor;
    NSNumber *_inputGrayWarmth;
    NSNumber *_inputEV;
    NSNumber *_inputSlope;
    NSNumber *_inputBias;
    NSColor *_legacyFaceColor;
    long long _legacyVersion;
    NSNumber *_inputFaceWarmth;
    id <DGImagePropertiesPromise> _defaultImageProperties;
    float _faceOrigI;
    float _faceOrigQ;
    float _faceStrength;
    NSNumber *_inputGrayY;
    NSNumber *_inputGrayI;
    NSNumber *_inputGrayQ;
    NSNumber *_versionSpecificTemp;
    NSNumber *_versionSpecificTint;
}

+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;
+ (struct DGRGBf_t)YIQFromFaceColor:(id)arg1 forRAW:(BOOL)arg2;
+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (void)setDefaultColorType:(long long)arg1;
+ (id)_stringsTableName;
@property(retain) NSNumber *versionSpecificTint; // @synthesize versionSpecificTint=_versionSpecificTint;
@property(retain) NSNumber *versionSpecificTemp; // @synthesize versionSpecificTemp=_versionSpecificTemp;
@property(nonatomic) float faceStrength; // @synthesize faceStrength=_faceStrength;
@property(nonatomic) float faceOrigQ; // @synthesize faceOrigQ=_faceOrigQ;
@property(nonatomic) float faceOrigI; // @synthesize faceOrigI=_faceOrigI;
@property(copy, nonatomic) NSNumber *inputFaceWarmth; // @synthesize inputFaceWarmth=_inputFaceWarmth;
@property(copy, nonatomic) NSNumber *inputBias; // @synthesize inputBias=_inputBias;
@property(copy, nonatomic) NSNumber *inputSlope; // @synthesize inputSlope=_inputSlope;
@property(copy, nonatomic) NSNumber *inputEV; // @synthesize inputEV=_inputEV;
@property(copy, nonatomic) NSNumber *inputGrayQ; // @synthesize inputGrayQ=_inputGrayQ;
@property(copy, nonatomic) NSNumber *inputGrayI; // @synthesize inputGrayI=_inputGrayI;
@property(copy, nonatomic) NSNumber *inputGrayY; // @synthesize inputGrayY=_inputGrayY;
@property(copy, nonatomic) NSNumber *inputGrayWarmth; // @synthesize inputGrayWarmth=_inputGrayWarmth;
@property(copy, nonatomic) NSColor *inputGrayColor; // @synthesize inputGrayColor=_inputGrayColor;
@property(copy, nonatomic) NSNumber *inputColorType; // @synthesize inputColorType=_inputColorType;
@property(copy, nonatomic) NSNumber *inputIsDefaults; // @synthesize inputIsDefaults=_isDefaults;
@property long long inputLegacyVersion; // @synthesize inputLegacyVersion=_legacyVersion;
- (void).cxx_destruct;
- (void)_applyAutoSettings:(id)arg1;
- (void)addAutoSettings:(id)arg1;
- (void)applySettingsValue:(id)arg1 forKey:(id)arg2;
- (BOOL)applySettingsDictionary:(id)arg1;
- (id)settingsDictionary;
- (void)setNilValueForKey:(id)arg1;
- (id)defaultValueForInputKey:(id)arg1;
- (id)processImage:(id)arg1 options:(id)arg2;
- (struct DGRGBf_t)inputFaceColorYIQValueForRAW;
- (struct DGRGBf_t)inputFaceColorYIQValue;
- (struct DGRGBf_t)inputFaceColorYIQValueWithDefault:(struct DGRGBf_t)arg1 forRAW:(BOOL)arg2;
- (struct DGRGBf_t)_inputGrayRGBColorConvertedToYIQ;
- (void)_setVersionSpecificTempTint;
- (void)updateWithDefaultImagePropertiesPromise:(id)arg1;
- (BOOL)wantsDefaultImageProperties;
- (void)addRawReconstructionOptions:(id)arg1 renderDescription:(id)arg2 legacySettings:(BOOL)arg3;
- (id)maskSupplier;
- (BOOL)isMaskable;
- (int)rawOperationType;
- (void)setOperationDefaults;
- (id)initWithOperation:(id)arg1;
- (id)init;
@property(copy, nonatomic) NSNumber *inputTint;
@property(copy, nonatomic) NSNumber *inputTemperature;
- (void)_updateFilter:(id)arg1;
- (BOOL)isEqualToOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

