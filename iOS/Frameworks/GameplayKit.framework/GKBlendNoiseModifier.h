//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKNoiseModifier.h>

@interface GKBlendNoiseModifier : GKNoiseModifier
{
    double _lowerBound;
    double _upperBound;
    double _blendDistance;
}

- (id)cloneModule;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (int)requiredInputModuleCount;
- (id)initWithSelectionRangeLowerBound:(double)arg1 selectionRangeUpperBound:(double)arg2 selectionBoundaryBlendDistance:(double)arg3;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)init;

@end

