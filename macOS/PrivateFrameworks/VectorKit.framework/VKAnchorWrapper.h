//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKAnchorDelegate-Protocol.h>

@class NSString;
@protocol MDRenderTarget;

@interface VKAnchorWrapper : NSObject <VKAnchorDelegate>
{
    shared_ptr_2fc78ff4 _anchor;
    BOOL _followsTerrain;
    struct CGPoint _screenPointInCanvas;
    struct LayoutContext *_lastLayoutContext;
    struct Coordinate2D<Degrees, double> _lastCoordinate;
    BOOL _isUpdating;
    double _pointsPerMeter;
    id <MDRenderTarget> _displayLayer;
}

@property(nonatomic) id <MDRenderTarget> displayLayer; // @synthesize displayLayer=_displayLayer;
@property(nonatomic) BOOL followsTerrain; // @synthesize followsTerrain=_followsTerrain;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)anchorWorldPointDidChange:(void *)arg1;
- (void)updateIfNeeded;
- (void)layoutWithContext:(struct LayoutContext *)arg1;
- (void)_updateCachedPointWithContext:(struct LayoutContext *)arg1;
- (shared_ptr_2fc78ff4)_anchorWithContext:(struct LayoutContext *)arg1;
- (double)pointOffsetForDistanceOffset:(double)arg1;
- (struct CGPoint)pointInLayer:(id)arg1;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)destroyAnchor;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

