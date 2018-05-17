//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FigXPCCoding.h"
#import "NSCopying.h"

@class FigCaptureSourceDepthDataFormat, FigCaptureSourceVideoFormat, NSDictionary, NSString;

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSString *_sourceID;
    struct OpaqueFigCaptureSource *_source;
    int _sourceType;
    NSDictionary *_sourceAttributes;
    FigCaptureSourceVideoFormat *_requiredFormat;
    float _requiredMaxFrameRate;
    float _requiredMinFrameRate;
    _Bool _hasSetVideoZoomFactorOnCaptureSource;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
    int _imageControlMode;
    _Bool _automaticallyEnablesLowLightBoostWhenAvailable;
    _Bool _applyMaxIntegrationTimeOverrideWhenAvailable;
    NSDictionary *_faceDetectionConfiguration;
    _Bool _sensorHDREnabled;
    int _colorSpace;
    _Bool _depthDataDeliveryEnabled;
    FigCaptureSourceDepthDataFormat *_depthDataFormat;
}

+ (int)sourceTypeForString:(id)arg1;
+ (id)stringForSourceType:(int)arg1;
@property(retain, nonatomic) FigCaptureSourceDepthDataFormat *depthDataFormat; // @synthesize depthDataFormat=_depthDataFormat;
@property(nonatomic) _Bool depthDataDeliveryEnabled; // @synthesize depthDataDeliveryEnabled=_depthDataDeliveryEnabled;
@property(nonatomic) int colorSpace; // @synthesize colorSpace=_colorSpace;
@property(nonatomic) _Bool sensorHDREnabled; // @synthesize sensorHDREnabled=_sensorHDREnabled;
@property(copy, nonatomic) NSDictionary *faceDetectionConfiguration; // @synthesize faceDetectionConfiguration=_faceDetectionConfiguration;
@property(nonatomic) _Bool applyMaxIntegrationTimeOverrideWhenAvailable; // @synthesize applyMaxIntegrationTimeOverrideWhenAvailable=_applyMaxIntegrationTimeOverrideWhenAvailable;
@property(nonatomic) _Bool automaticallyEnablesLowLightBoostWhenAvailable; // @synthesize automaticallyEnablesLowLightBoostWhenAvailable=_automaticallyEnablesLowLightBoostWhenAvailable;
@property(nonatomic) int imageControlMode; // @synthesize imageControlMode=_imageControlMode;
@property(nonatomic) float videoZoomRampAcceleration; // @synthesize videoZoomRampAcceleration=_videoZoomRampAcceleration;
@property(nonatomic) float videoZoomFactor; // @synthesize videoZoomFactor=_videoZoomFactor;
@property(nonatomic) _Bool hasSetVideoZoomFactorOnCaptureSource; // @synthesize hasSetVideoZoomFactorOnCaptureSource=_hasSetVideoZoomFactorOnCaptureSource;
@property(nonatomic) float requiredMinFrameRate; // @synthesize requiredMinFrameRate=_requiredMinFrameRate;
@property(nonatomic) float requiredMaxFrameRate; // @synthesize requiredMaxFrameRate=_requiredMaxFrameRate;
@property(retain, nonatomic) FigCaptureSourceVideoFormat *requiredFormat; // @synthesize requiredFormat=_requiredFormat;
@property(copy, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
- (int)_deviceType;
- (id)_sourceUID;
- (int)_sourceToken;
- (_Bool)_isCameraSource;
- (id)_sourceAttributes;
@property(readonly, nonatomic) struct OpaqueFigCaptureSource *source;
@property(readonly, nonatomic) int sourceType;
@property(readonly, nonatomic) int sourcePosition;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)initWithSourceType:(int)arg1;
- (id)initWithSource:(struct OpaqueFigCaptureSource *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
