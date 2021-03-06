//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKOverlay-Protocol.h>

@class GEOTileCache, NSString;

@interface MKTileOverlay : NSObject <MKOverlay>
{
    NSString *_URLTemplate;
    struct CGSize _tileSize;
    _Bool _geometryFlipped;
    long long _minimumZ;
    long long _maximumZ;
    _Bool _canReplaceMapContent;
    unsigned int _providerID;
    GEOTileCache *_tileCache;
}

@property(nonatomic) _Bool canReplaceMapContent; // @synthesize canReplaceMapContent=_canReplaceMapContent;
@property long long maximumZ; // @synthesize maximumZ=_maximumZ;
@property long long minimumZ; // @synthesize minimumZ=_minimumZ;
@property(getter=isGeometryFlipped) _Bool geometryFlipped; // @synthesize geometryFlipped=_geometryFlipped;
@property(readonly) NSString *URLTemplate; // @synthesize URLTemplate=_URLTemplate;
@property struct CGSize tileSize; // @synthesize tileSize=_tileSize;
- (void).cxx_destruct;
- (void)_flushCaches;
- (id)_tilesInMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 contentScale:(double)arg3;
- (int)_zoomLevelForScale:(double)arg1;
- (void)_loadTile:(const struct _GEOTileKey *)arg1 result:(CDUnknownBlockType)arg2;
- (struct _GEOTileKey)_keyForPath:(CDStruct_cbb88d5e)arg1;
- (void)loadTileAtPath:(CDStruct_cbb88d5e)arg1 result:(CDUnknownBlockType)arg2;
- (id)URLForTilePath:(CDStruct_cbb88d5e)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (void)dealloc;
- (id)initWithURLTemplate:(id)arg1;
- (id)init;
- (void)_assignProviderID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

