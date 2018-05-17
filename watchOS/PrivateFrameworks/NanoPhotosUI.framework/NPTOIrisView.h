//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NPTOVideoPlayerViewDelegate.h"

@class AVSynchronizedLayer, CALayer, NPTOVideoPlayerView, NSString, NSURL, UIImage, UIImageView;

@interface NPTOIrisView : UIView <NPTOVideoPlayerViewDelegate>
{
    double _vdt;
    double _sdt;
    _Bool _videoLoaded;
    float _vitalityProgress;
    double _vitalityPosition;
    _Bool _playing;
    id _timeObserver;
    AVSynchronizedLayer *_syncLayer;
    CALayer *_heroLayer;
    int _preparedForMode;
    int _transitionMode;
    NSURL *_videoURL;
    id <NPTOIrisViewDelegate> _delegate;
    NPTOVideoPlayerView *_playerView;
    UIImageView *_heroView;
}

@property(retain, nonatomic) UIImageView *heroView; // @synthesize heroView=_heroView;
@property(retain, nonatomic) NPTOVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <NPTOIrisViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (void)_cancelPlayback;
- (void)resumeInterruptedPlayback;
- (void)interruptPlayback;
- (_Bool)isPlaying;
- (void)pauseWithMode:(int)arg1;
- (void)_completePlaybackWithMode:(int)arg1;
- (void)playWithMode:(int)arg1;
- (void)_transitionFromHeroToVideo;
- (float)_scaleForTransitionWithMode:(int)arg1;
- (double)_transitionDurationForPauseWithMode:(int)arg1;
- (double)_transitionDurationForPlayWithMode:(int)arg1;
- (void)prepareToPlayWithMode:(int)arg1;
- (CDStruct_1b6d18a9)_endTimeForMode:(int)arg1;
- (CDStruct_1b6d18a9)_startTimeForMode:(int)arg1;
- (void)_resetVideoPlayer;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)setImage:(id)arg1 videoURL:(id)arg2 videoDuration:(double)arg3 stillDisplayTime:(double)arg4;
@property(retain, nonatomic) UIImage *image;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
