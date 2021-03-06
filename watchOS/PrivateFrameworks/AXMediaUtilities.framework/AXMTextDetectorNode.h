//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@interface AXMTextDetectorNode : AXMEvaluationNode <NSSecureCoding>
{
    _Bool _detectDiacritics;
    _Bool _returnSubFeatures;
    _Bool _minimizeFalsePositives;
    unsigned int _detectionFlavor;
    float _minimumCharacterHeight;
}

+ (id)supportedDetectionLanguages;
+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool minimizeFalsePositives; // @synthesize minimizeFalsePositives=_minimizeFalsePositives;
@property(nonatomic) _Bool returnSubFeatures; // @synthesize returnSubFeatures=_returnSubFeatures;
@property(nonatomic) _Bool detectDiacritics; // @synthesize detectDiacritics=_detectDiacritics;
@property(nonatomic) float minimumCharacterHeight; // @synthesize minimumCharacterHeight=_minimumCharacterHeight;
@property(nonatomic) unsigned int detectionFlavor; // @synthesize detectionFlavor=_detectionFlavor;
- (void)evaluate:(id)arg1;
- (_Bool)shouldEvaluate:(id)arg1;
- (_Bool)requiresVisionFramework;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)freeResources;
- (void)nodeInitialize;

@end

