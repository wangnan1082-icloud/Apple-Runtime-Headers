//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXTilingControllerZoomAnimationCoordinator, PXTilingLayout;

@protocol PXTilingControllerZoomAnimationCoordinatorDelegate <NSObject>
- (void)tilingControllerZoomAnimationCoordinator:(PXTilingControllerZoomAnimationCoordinator *)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(PXTilingLayout *)arg3 zoomAnimationContext:(id <PXZoomAnimationContext>)arg4 usingBlock:(void (^)(struct PXTileIdentifier, PXTileZoomAnimationOptions *))arg5;
@end
