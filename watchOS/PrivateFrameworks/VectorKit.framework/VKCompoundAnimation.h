//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKAnimation.h>

@class NSMutableArray;

@interface VKCompoundAnimation : VKAnimation
{
    CDUnknownBlockType _groupStepHandler;
    NSMutableArray *_animations;
}

@property(copy, nonatomic) CDUnknownBlockType groupStepHandler; // @synthesize groupStepHandler=_groupStepHandler;
@property(readonly, nonatomic) NSMutableArray *animations; // @synthesize animations=_animations;
- (void)onTimerFired:(double)arg1;
- (void)stopAnimation:(_Bool)arg1;
- (void)dealloc;
- (id)initWithAnimations:(id)arg1;
- (void)resume;
- (void)pause;
- (void)startWithRunner:(id)arg1;
- (_Bool)timed;
- (void)setDuration:(double)arg1;
- (double)duration;
- (void)setRunsForever:(_Bool)arg1;
- (_Bool)runsForever;
- (_Bool)running;

@end
