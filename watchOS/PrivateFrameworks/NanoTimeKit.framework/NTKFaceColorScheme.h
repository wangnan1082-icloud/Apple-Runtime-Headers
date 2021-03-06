//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKDevice, NSArray, NSMutableDictionary, UIColor;

@interface NTKFaceColorScheme : NSObject
{
    NSMutableDictionary *_colorsByUnit;
    _Bool _containsOverrideFaceColor;
    CLKDevice *_device;
    NSArray *_faceColors;
    float _multicolorAlpha;
    float _siriAlpha;
}

+ (id)interpolationForDevice:(id)arg1 fromFaceColor:(unsigned int)arg2 toFaceColor:(unsigned int)arg3 fraction:(float)arg4 units:(unsigned int)arg5 brightenUnits:(unsigned int)arg6 overrideColor:(id)arg7 alternateHighlight:(_Bool)arg8;
+ (id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(float)arg3 brightenUnits:(unsigned int)arg4;
+ (id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(float)arg3;
+ (id)colorSchemeForDevice:(id)arg1 withFaceColor:(unsigned int)arg2 foregroundColor:(id)arg3 units:(unsigned int)arg4 alternateHighlight:(_Bool)arg5;
+ (id)colorSchemeForDevice:(id)arg1 withFaceColor:(unsigned int)arg2 units:(unsigned int)arg3;
@property(nonatomic) float siriAlpha; // @synthesize siriAlpha=_siriAlpha;
@property(nonatomic) float multicolorAlpha; // @synthesize multicolorAlpha=_multicolorAlpha;
@property(retain, nonatomic) NSArray *faceColors; // @synthesize faceColors=_faceColors;
@property(nonatomic) _Bool containsOverrideFaceColor; // @synthesize containsOverrideFaceColor=_containsOverrideFaceColor;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)_colorForUnit:(unsigned int)arg1;
- (void)_setColor:(id)arg1 forUnit:(unsigned int)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned int units;
@property(readonly, nonatomic) UIColor *upNextTextColor;
@property(readonly, nonatomic) UIColor *activityTickColor;
@property(readonly, nonatomic) UIColor *alternativeTickColor;
@property(readonly, nonatomic) UIColor *tickColor;
@property(readonly, nonatomic) UIColor *stackedImagesForegroundColor;
@property(readonly, nonatomic) UIColor *shiftedBackgroundColor;
@property(readonly, nonatomic) UIColor *shiftedForegroundColor;
@property(readonly, nonatomic) UIColor *accentColor;
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, nonatomic) UIColor *secondaryForegroundColor;
@property(readonly, nonatomic) UIColor *foregroundColor;
- (id)initForDevice:(id)arg1;

@end

