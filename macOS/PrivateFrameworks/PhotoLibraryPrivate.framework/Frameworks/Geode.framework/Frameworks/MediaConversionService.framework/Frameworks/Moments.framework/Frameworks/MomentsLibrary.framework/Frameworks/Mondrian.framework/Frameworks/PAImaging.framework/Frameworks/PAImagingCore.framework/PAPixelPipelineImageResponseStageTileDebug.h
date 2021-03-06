//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PAImagingCore/PAPixelPipelineDebugTile-Protocol.h>

@class NSString, PFMemoryBufferInfo;

@interface PAPixelPipelineImageResponseStageTileDebug : NSObject <PAPixelPipelineDebugTile>
{
    int _purgeLevel;
    int _purgeState;
    PFMemoryBufferInfo *_memoryInfo;
    unsigned long long _accessCount;
    struct PFIntRect_st _tileBounds;
}

@property unsigned long long accessCount; // @synthesize accessCount=_accessCount;
@property int purgeState; // @synthesize purgeState=_purgeState;
@property int purgeLevel; // @synthesize purgeLevel=_purgeLevel;
@property(retain) PFMemoryBufferInfo *memoryInfo; // @synthesize memoryInfo=_memoryInfo;
@property struct PFIntRect_st tileBounds; // @synthesize tileBounds=_tileBounds;
- (void).cxx_destruct;
- (unsigned long long)debugTileAccessCount;
- (int)debugTilePurgeState;
- (int)debugTilePurgeLevel;
- (BOOL)debugFallback;
- (BOOL)debugComplete;
- (void)debugTileAccumulateMemoryInfo:(id)arg1;
- (struct PFIntRect_st)debugTileExtent;
- (id)debugTileDetails;
- (id)debugTileSummary;
- (id)debugTileTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

