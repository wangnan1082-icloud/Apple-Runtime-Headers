//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ShotflowNetwork;

__attribute__((visibility("hidden")))
@interface ShotflowDetector : NSObject
{
    ShotflowNetwork *_network;
    float _overlap_threshold;
    float _filterThreshold;
    float _nmsThreshold;
    float _osfsThreshold;
    float _osfsSizeRatio;
    float _olmcsThreshold;
    int _olmcsMergeCountDelta;
    float _smartThreshold;
    float _smartDistanceFactor;
}

+ (id)processingDeviceDetectorWithModelPath:(id)arg1 networkThreshold:(float)arg2 filterThreshold:(float)arg3 preferredDeviceID:(int)arg4 engineID:(int)arg5 storageType:(int)arg6;
@property(nonatomic) float smartDistanceFactor; // @synthesize smartDistanceFactor=_smartDistanceFactor;
@property(nonatomic) float smartThreshold; // @synthesize smartThreshold=_smartThreshold;
@property(nonatomic) int olmcsMergeCountDelta; // @synthesize olmcsMergeCountDelta=_olmcsMergeCountDelta;
@property(nonatomic) float olmcsThreshold; // @synthesize olmcsThreshold=_olmcsThreshold;
@property(nonatomic) float osfsSizeRatio; // @synthesize osfsSizeRatio=_osfsSizeRatio;
@property(nonatomic) float osfsThreshold; // @synthesize osfsThreshold=_osfsThreshold;
@property(nonatomic) float nmsThreshold; // @synthesize nmsThreshold=_nmsThreshold;
@property(nonatomic) float filterThreshold; // @synthesize filterThreshold=_filterThreshold;
@property(nonatomic) float overlap_threshold; // @synthesize overlap_threshold=_overlap_threshold;
- (void).cxx_destruct;
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;
- (id)detect:(const struct vImage_Buffer *)arg1 inputIsBGR:(BOOL)arg2;
- (id)filterBoxes:(id)arg1;
- (id)smartMergeBoxes:(id)arg1;
- (id)mergeBoxes:(id)arg1;
- (id)overlappingLowMergeCountSuppression:(id)arg1;
- (id)overlappingSmallFacesSuppression:(id)arg1;
- (id)nmsBoxes:(id)arg1;
@property(nonatomic) float threshold;
- (id)initWithNetwork:(id)arg1 filterThreshold:(float)arg2;

@end

