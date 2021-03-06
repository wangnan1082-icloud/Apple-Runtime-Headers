//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOComposedRoute, GEOMapServiceTraits, GEORouteMatch, NSObject;
@protocol GEORoutePreloadSessionDelegate, OS_os_log;

@protocol GEORoutePreloadSession <NSObject>
@property(readonly, nonatomic) NSObject<OS_os_log> *preloaderLog;
@property(nonatomic) unsigned int networkQuality;
@property __weak id <GEORoutePreloadSessionDelegate> delegate;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)setTraits:(GEOMapServiceTraits *)arg1;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg1;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned int)arg2 actualLength:(unsigned int *)arg3;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (void)tearDown;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)beginLoading;
- (_Bool)loggingEnabled;
- (_Bool)fullDebuggingEnabled;
- (_Bool)minimalDebuggingEnabled;
- (_Bool)isSufficientlyLoaded;
@end

