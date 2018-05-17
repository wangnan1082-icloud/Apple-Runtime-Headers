//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNActiveRouteInfo, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNAlternateRoutesUpdater : NSObject
{
    MNActiveRouteInfo *_mainRoute;
    NSArray *_alternateRoutes;
    NSMutableArray *_trackedAlternateRoutes;
}

- (void).cxx_destruct;
- (id)_findTrackedAlternateRouteMatching:(id)arg1;
- (id)alternateRouteForLocation:(id)arg1;
- (_Bool)updateForReroute:(id)arg1 rerouteReason:(unsigned int)arg2;
- (_Bool)updateForLocation:(id)arg1;
- (_Bool)setAlternateRoutes:(id)arg1 forMainRoute:(id)arg2;
@property(readonly, nonatomic) NSArray *alternateRoutes;

@end
