//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface VCPVideoKeyFrame : NSObject
{
    float _subjectAction;
    float _cameraMotion;
    float _interestingness;
    float _obstruction;
    float _colorfulness;
    BOOL _subMb;
    BOOL _isHeadingFrame;
    float _score;
    float _sharpness;
    float _faceSharpness;
    float _exposureScore;
    unsigned long long _statsFlags;
    NSMutableArray *_detectedFaces;
    CDStruct_1b6d18a9 _timestamp;
}

@property(retain, nonatomic) NSMutableArray *detectedFaces; // @synthesize detectedFaces=_detectedFaces;
@property(nonatomic) unsigned long long statsFlags; // @synthesize statsFlags=_statsFlags;
@property(nonatomic) BOOL isHeadingFrame; // @synthesize isHeadingFrame=_isHeadingFrame;
@property(nonatomic) float exposureScore; // @synthesize exposureScore=_exposureScore;
@property(nonatomic) float faceSharpness; // @synthesize faceSharpness=_faceSharpness;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
@property(nonatomic) float score; // @synthesize score=_score;
@property(nonatomic) CDStruct_1b6d18a9 timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (void)printStats;
- (BOOL)hasGoodSubjectAction;
- (float)computeScoreFromExposure;
- (float)computeScoreFromColorfulness;
- (float)computeExpressionScore;
- (float)computeScoreFromAction;
- (void)computeCurationScore;
- (float)computePenaltyScore;
- (float)computeContentScore;
- (float)computeVisualPleasingScore;
- (float)computeGlobalQuality;
- (void)setExposure:(float)arg1;
- (void)setMotionStatsFlag:(BOOL)arg1 cameraMotion:(float)arg2 subjectAction:(float)arg3 interestingness:(float)arg4 obstruction:(float)arg5 colorfulness:(float)arg6 subMb:(BOOL)arg7;
- (void)setFaceStatsFlag:(BOOL)arg1 detectedFaces:(id)arg2;
- (void)resetStatsFlag;
- (id)init;

@end

