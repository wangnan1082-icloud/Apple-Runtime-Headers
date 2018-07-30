//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIFeedbackGenerator.h>

#import "UIFeedbackGeneratorUserInteractionDriven.h"

@class _UIDragFeedbackGeneratorConfiguration, _UIFeedback<_UIFeedbackContinuousPlayable>;

@interface _UIDragFeedbackGenerator : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
{
    long long _state;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
}

+ (Class)_configurationClass;
@property(retain, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // @synthesize playingContinuousFeedback=_playingContinuousFeedback;
@property(nonatomic, getter=_state, setter=_setState:) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)_stats_key;
- (void)_stopPlayingContinuousFeedback;
- (void)_startPlayingContinuousFeedbackNow;
- (void)_startPlayingContinuousFeedback;
- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;
@property(readonly, nonatomic, getter=_dragConfiguration) _UIDragFeedbackGeneratorConfiguration *dragConfiguration;

@end
