//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VKPlatform : NSObject
{
    unsigned int _memSize;
    int _numCPUs;
    _Bool _isMac;
    _Bool _proceduralRoadAlpha;
    _Bool _useCheapTrafficShader;
    _Bool _supportsBuildingStrokes;
    _Bool _supports3DBuildingStrokes;
    _Bool _lowPerformanceDevice;
    _Bool _supportsCoastlineGlows;
    _Bool _supportsPerFragmentLighting;
    _Bool _supportsARMode;
}

+ (id)sharedPlatform;
@property(readonly, nonatomic) _Bool supportsARMode; // @synthesize supportsARMode=_supportsARMode;
@property(readonly, nonatomic) _Bool supportsPerFragmentLighting; // @synthesize supportsPerFragmentLighting=_supportsPerFragmentLighting;
@property(readonly, nonatomic) _Bool supportsCoastlineGlows; // @synthesize supportsCoastlineGlows=_supportsCoastlineGlows;
@property(readonly, nonatomic) _Bool supports3DBuildingStrokes; // @synthesize supports3DBuildingStrokes=_supports3DBuildingStrokes;
@property(readonly, nonatomic) _Bool supportsBuildingStrokes; // @synthesize supportsBuildingStrokes=_supportsBuildingStrokes;
@property(readonly, nonatomic) _Bool useCheapTrafficShader; // @synthesize useCheapTrafficShader=_useCheapTrafficShader;
@property(readonly, nonatomic) _Bool proceduralRoadAlpha; // @synthesize proceduralRoadAlpha=_proceduralRoadAlpha;
@property(readonly, nonatomic) unsigned int memorySize; // @synthesize memorySize=_memSize;
@property(readonly, nonatomic) double routeLineSimplificationEpsilon;
@property(readonly, nonatomic) _Bool lowPerformanceDevice;
@property(readonly, nonatomic) _Bool supports3DBuildings;
@property(readonly, nonatomic) _Bool supportsBuildingShadows;
@property(readonly, nonatomic) unsigned char processingQueueWidth;
@property(readonly, nonatomic) unsigned char tileDecodeQueueWidth;
@property(readonly, nonatomic) _Bool shouldPregenerateLabelGlyphs;
@property(readonly, nonatomic) _Bool shouldLayoutLabelsInParallel;
@property(readonly, nonatomic) _Bool shouldStyleLabelsInParallel;
@property(readonly, nonatomic) _Bool supportsHiResBuildings;
@property(readonly, nonatomic) _Bool shouldDrawWhenReady;
@property(readonly, nonatomic) _Bool isPad;
@property(readonly, nonatomic) _Bool canMakeSharingThumbnails;
@property(readonly, nonatomic) _Bool supportsHiResRTT;
@property(readonly, nonatomic) unsigned int tilePrefetchNumberOfScreens;
- (unsigned int)tileMaximumLimit:(unsigned int)arg1;
@property(readonly, nonatomic) _Bool roadsWithSimpleLineMeshesAvailable;
- (void)_determineHardware;
- (unsigned int)_calculateMemSize;
- (void)dealloc;
- (id)init;

@end

