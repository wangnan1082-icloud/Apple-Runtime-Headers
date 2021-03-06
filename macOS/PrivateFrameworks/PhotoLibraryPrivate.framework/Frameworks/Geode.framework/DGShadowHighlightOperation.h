//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGShadowHighlightOperation : DGOperation
{
    int _legacyVersion;
    NSNumber *_inputHighlightAmount;
    NSNumber *_inputShadowAmount;
    NSNumber *_inputRadius;
    NSNumber *_inputColorCorrection;
    NSNumber *_inputHighlightTonalWidth;
    NSNumber *_inputMidtoneContrast;
    NSNumber *_inputShadowTonalWidth;
}

+ (id)outputKeys;
+ (id)inputKeys;
+ (id)attributes;
+ (id)_stringsTableName;
@property(copy, nonatomic) NSNumber *inputShadowTonalWidth; // @synthesize inputShadowTonalWidth=_inputShadowTonalWidth;
@property(copy, nonatomic) NSNumber *inputMidtoneContrast; // @synthesize inputMidtoneContrast=_inputMidtoneContrast;
@property(copy, nonatomic) NSNumber *inputHighlightTonalWidth; // @synthesize inputHighlightTonalWidth=_inputHighlightTonalWidth;
@property(copy, nonatomic) NSNumber *inputColorCorrection; // @synthesize inputColorCorrection=_inputColorCorrection;
@property(copy, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius=_inputRadius;
@property(copy, nonatomic) NSNumber *inputShadowAmount; // @synthesize inputShadowAmount=_inputShadowAmount;
@property(copy, nonatomic) NSNumber *inputHighlightAmount; // @synthesize inputHighlightAmount=_inputHighlightAmount;
@property int inputShadowHighlightLegacyVersion; // @synthesize inputShadowHighlightLegacyVersion=_legacyVersion;
- (void)setOperationDefaults;
- (BOOL)isMaskable;
- (id)processImage:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (id)initWithOperation:(id)arg1;
- (id)init;
- (id)_filterForPipelineVersion:(unsigned long long)arg1;

@end

