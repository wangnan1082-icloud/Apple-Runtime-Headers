//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKTimelineEntryModel.h>

@interface NTKStopwatchTimelineEntry : NTKTimelineEntryModel
{
    int _state;
    double _elapsedTime;
}

@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) int state; // @synthesize state=_state;
- (id)_createLargeUtilityTemplate;
- (id)_createSmallUtilityTemplate;
- (id)_createColorTemplate;
- (id)_createLargeModularTemplate;
- (id)_createSmallModularTemplate;
- (id)_stopwatchTimeTextProvider:(_Bool)arg1 twoUnitHeuristic:(_Bool)arg2;
- (id)templateForComplicationFamily:(int)arg1;

@end
