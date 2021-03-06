//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVPlayerController, AVPlayerControllerTimeResolver, AVPlayerViewController, AVTimeFormatter, NSDictionary;

@interface AVPlaybackControlsViewController : UIViewController
{
    AVPlayerController *_playerController;
    AVPlayerControllerTimeResolver *_intervalTimeResolver;
    AVPlayerControllerTimeResolver *_resolutionTimeResolver;
    AVTimeFormatter *_elapsedTimeFormatter;
    AVTimeFormatter *_remainingTimeFormatter;
    id _AVSystemControllerCurrentRouteHasVolumeControlDidChangeObserver;
    _Bool _viewAppeared;
    _Bool _showsDoneButton;
    _Bool _playing;
    _Bool _playPauseButtonEnabled;
    _Bool _showsStreamingControls;
    _Bool _showsLiveStreamScrubber;
    _Bool _showsScaleButton;
    _Bool _showsLoadingIndicator;
    _Bool _showsMediaSelectionButton;
    _Bool _showsExitFullScreenButton;
    _Bool _showsPictureInPictureButton;
    _Bool _pictureInPictureButtonEnabled;
    _Bool _showsVolumeSlider;
    AVPlayerViewController *_playerViewController;
    int _scaleButtonType;
    NSDictionary *_metadata;
}

@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool showsVolumeSlider; // @synthesize showsVolumeSlider=_showsVolumeSlider;
@property(nonatomic, getter=isPictureInPictureButtonEnabled) _Bool pictureInPictureButtonEnabled; // @synthesize pictureInPictureButtonEnabled=_pictureInPictureButtonEnabled;
@property(nonatomic) _Bool showsPictureInPictureButton; // @synthesize showsPictureInPictureButton=_showsPictureInPictureButton;
@property(nonatomic) _Bool showsExitFullScreenButton; // @synthesize showsExitFullScreenButton=_showsExitFullScreenButton;
@property(nonatomic) _Bool showsMediaSelectionButton; // @synthesize showsMediaSelectionButton=_showsMediaSelectionButton;
@property(nonatomic) _Bool showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property(nonatomic) int scaleButtonType; // @synthesize scaleButtonType=_scaleButtonType;
@property(nonatomic) _Bool showsScaleButton; // @synthesize showsScaleButton=_showsScaleButton;
@property(nonatomic) _Bool showsLiveStreamScrubber; // @synthesize showsLiveStreamScrubber=_showsLiveStreamScrubber;
@property(nonatomic) _Bool showsStreamingControls; // @synthesize showsStreamingControls=_showsStreamingControls;
@property(nonatomic, getter=isPlayPauseButtonEnabled) _Bool playPauseButtonEnabled; // @synthesize playPauseButtonEnabled=_playPauseButtonEnabled;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property(nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void).cxx_destruct;
- (void)pictureInPictureButtonTapped:(id)arg1;
- (void)fullScreenButtonTapped:(id)arg1;
- (void)mediaSelectionButtonTapped:(id)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)endScanningBackward:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)seekChapterBackward:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)volumeSliderValueChanged:(id)arg1;
- (void)scaleButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)removeControlForUserInteractionObservation:(id)arg1;
- (void)addControlForUserInteractionObservation:(id)arg1;
- (void)updateVolumeSliderValue:(float)arg1;
- (void)updatePlaybackProgress:(float)arg1;
- (void)updateRemainingTimeLabel:(id)arg1;
- (void)updateElapsedTimeLabel:(id)arg1;
- (void)updatePlaybackControlsEnabledStates;
- (void)_userInteractionObservationControlTouchUp:(id)arg1;
- (void)_userInteractionObservationControlTouchDown:(id)arg1;
- (void)_updateVolumeSliderVisibility;
- (void)_updatePlaybackProgress;
- (void)_updateRemainingTimeLabel;
- (void)_updateElapsedTimeLabel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(retain, nonatomic) AVPlayerController *playerController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

