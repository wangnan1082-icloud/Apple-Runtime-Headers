//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOMapEdgeBuilder.h>

__attribute__((visibility("hidden")))
@interface GEOMapEdgeTransitBuilder : GEOMapEdgeBuilder
{
    struct deque<geo::TransitEdgePiece, std::__1::allocator<geo::TransitEdgePiece>> _pieces;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (id)_lastTile;
- (id)_firstTile;
- (Matrix_8746f91e)_lastPoint;
- (Matrix_8746f91e)_firstPoint;
- (_Bool)_shouldFindEdgeBehind;
- (_Bool)_shouldFindEdgeAhead;
- (_Bool)_findEdgeBehindInTile:(id)arg1;
- (_Bool)_findEdgeAheadInTile:(id)arg1;
- (void)_buildCompleteEdge;
- (unsigned long long)_maxTileCount;
- (id)initWithMap:(id)arg1 firstPiece:(const struct TransitEdgePiece *)arg2;

@end

