//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKPolylinePath.h>

@class VKGGLTransitTile;

__attribute__((visibility("hidden")))
@interface VKTransitPolylinePath : VKPolylinePath
{
    unsigned long long _lineID;
    VKGGLTransitTile *_tile;
}

@property(readonly, nonatomic) VKGGLTransitTile *tile; // @synthesize tile=_tile;
@property(readonly, nonatomic) unsigned long long lineID; // @synthesize lineID=_lineID;
- (void)dealloc;
- (id)description;
- (id)initWithOverlay:(id)arg1 section:(id)arg2 points:(Matrix_8746f91e *)arg3 pointCount:(unsigned long long)arg4 reversePoints:(BOOL)arg5 transform:(CDStruct_5ae1f918 *)arg6 routeStartIndex:(unsigned int)arg7 routeEndIndex:(unsigned int)arg8 lineID:(unsigned long long)arg9 tile:(id)arg10;

@end

