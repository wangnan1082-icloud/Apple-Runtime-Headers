//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NanoMediaUI/NACVolumeControllerDelegate-Protocol.h>
#import <NanoMediaUI/NMCConnectivityObserver-Protocol.h>
#import <NanoMediaUI/NMROriginObserverDelegate-Protocol.h>
#import <NanoMediaUI/NMUNowPlayingFeedbackViewControllerDelegate-Protocol.h>
#import <NanoMediaUI/NMUNowPlayingViewControllerDelegate-Protocol.h>
#import <NanoMediaUI/NMUNowPlayingViewDelegate-Protocol.h>
#import <NanoMediaUI/NMUSnapshotCapableInterface-Protocol.h>
#import <NanoMediaUI/NMUTransportControlsViewDelegate-Protocol.h>
#import <NanoMediaUI/PUICActionSheetControllerDelegate-Protocol.h>
#import <NanoMediaUI/PUICSliderDelegate-Protocol.h>

@class MPArtworkCatalog, NMRNowPlayingController, NMRNowPlayingState, NMROrigin, NMUNowPlayingArtwork, NMUNowPlayingArtworkView, NMUNowPlayingFeedbackViewController, NMUNowPlayingView, NMUTransportControlProvider, NSMutableDictionary, NSNumber, NSString, NSTimer, NSUserActivity, UIImage, _NMUTransportControlOptimisticState;
@protocol NACVolumeController, NMUNowPlayingViewControllerDelegate, NMUNowPlayingViewControllerPerfTestingDelegate;

@interface NMUNowPlayingViewController : UIViewController <NACVolumeControllerDelegate, NMUNowPlayingViewDelegate, NMUTransportControlsViewDelegate, PUICActionSheetControllerDelegate, PUICSliderDelegate, NMUNowPlayingViewControllerDelegate, NMUNowPlayingFeedbackViewControllerDelegate, NMCConnectivityObserver, NMUSnapshotCapableInterface, NMROriginObserverDelegate>
{
    NMUNowPlayingView *_nowPlayingView;
    int _nowPlayingViewStyle;
    NMRNowPlayingController *_nowPlayingController;
    NMUNowPlayingArtworkView *_artworkView;
    NSMutableDictionary *_actionItemsByMediaRemoteFeedbackCommands;
    NMUNowPlayingFeedbackViewController *_nowPlayingFeedbackActionController;
    NMUNowPlayingFeedbackViewController *_nowPlayingMoreMenuActionController;
    _Bool _canEnableMarqueeForNowPlayingView;
    _Bool _currentNowPlayingInfoIsOverridingSupportedCommands;
    id <NACVolumeController> _volumeController;
    NSNumber *_currentArtworkImagePersistentID;
    MPArtworkCatalog *_currentArtworkCatalog;
    NMUNowPlayingArtwork *_currentArtwork;
    UIImage *_pendingArtworkSourceImage;
    MPArtworkCatalog *_pendingArtworkCatalog;
    NSNumber *_pendingArtworkItemPersistentID;
    _Bool _shouldObserveVolumeChanges;
    int _viewAppearanceState;
    NSNumber *_optimisticPlaybackState;
    NSTimer *_optimisticPlaybackStateExpiryTimer;
    _NMUTransportControlOptimisticState *_optimisticAddToLibraryState;
    _NMUTransportControlOptimisticState *_optimisticLikeState;
    NMUTransportControlProvider *_transportControlProvider;
    _Bool _shouldShowStatusBarIndicator;
    NSTimer *_volumeStyleOverrideTimer;
    NSNumber *_placeholderPlaybackState;
    NSNumber *_placeholderPreferredPlaybackRate;
    NSTimer *_placeholderNowPlayingStateTimeoutTimer;
    _Bool _waitForMatchingPlaceholderNowPlayingInfo;
    id <NMUNowPlayingViewControllerDelegate> _nowPlayingTrackTapDelegate;
    NSString *_placeholderArtworkTemplateImageName;
    NMRNowPlayingState *_placeholderNowPlayingState;
    NMROrigin *_currentOrigin;
    NSUserActivity *_currentUserActivity;
    id <NMUNowPlayingViewControllerPerfTestingDelegate> _perfTestingDelegate;
    double _placeholderNowPlayingStateTimeout;
}

+ (void)_asyncPrewarm;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) __weak id <NMUNowPlayingViewControllerPerfTestingDelegate> perfTestingDelegate; // @synthesize perfTestingDelegate=_perfTestingDelegate;
@property(retain, nonatomic) NSUserActivity *currentUserActivity; // @synthesize currentUserActivity=_currentUserActivity;
@property(nonatomic) __weak NMROrigin *currentOrigin; // @synthesize currentOrigin=_currentOrigin;
@property(nonatomic) double placeholderNowPlayingStateTimeout; // @synthesize placeholderNowPlayingStateTimeout=_placeholderNowPlayingStateTimeout;
@property(nonatomic) _Bool waitForMatchingPlaceholderNowPlayingInfo; // @synthesize waitForMatchingPlaceholderNowPlayingInfo=_waitForMatchingPlaceholderNowPlayingInfo;
@property(retain, nonatomic) NMRNowPlayingState *placeholderNowPlayingState; // @synthesize placeholderNowPlayingState=_placeholderNowPlayingState;
@property(retain, nonatomic) NSString *placeholderArtworkTemplateImageName; // @synthesize placeholderArtworkTemplateImageName=_placeholderArtworkTemplateImageName;
@property(nonatomic) __weak id <NMUNowPlayingViewControllerDelegate> nowPlayingTrackTapDelegate; // @synthesize nowPlayingTrackTapDelegate=_nowPlayingTrackTapDelegate;
- (void).cxx_destruct;
- (void)_notifyPerfTestingDidUpdateUI;
- (void)_stopPlayback;
- (void)_startPlayback;
- (void)_updateUIForConnectivityState;
- (void)manager:(id)arg1 connectivityDidChange:(_Bool)arg2;
- (void)_primeAudioRoutingManagerIfNecessary;
- (void)_updateVolumeControllerObservationStatus;
- (void)_setShouldObserveVolumeChanges:(_Bool)arg1;
- (void)_updateVolumeController;
- (void)_virtualAudioRoutesDidChangeNotification:(id)arg1;
- (void)_updateVolumeControlVisibilityAnimated:(_Bool)arg1;
- (void)_updateEULimit;
- (void)volumeControllerDidUpdateVolumeWarningEnabled:(id)arg1;
- (void)volumeControllerDidUpdateEUVolumeLimit:(id)arg1;
- (void)volumeControllerDidUpdateVolumeControlAvailibility:(id)arg1;
- (void)volumeControllerDidUpdateVolumeValue:(id)arg1;
- (void)_volumeValueDidChange;
- (void)_togglePlaybackRate;
- (void)_handleVolumeStyleOverrideTimer;
- (void)_invalidateVolumeStyleOverrideTimer;
- (void)_scheduleVolumeStyleOverrideTimer;
- (void)_handleAirPlayAction;
- (id)actionController;
- (_Bool)canProvideActionController;
- (_Bool)shouldProvideAirPlayControls;
- (void)slider:(id)arg1 didTapTouchTarget:(int)arg2;
- (void)sliderDidEndCrownInteraction:(id)arg1;
- (void)sliderDidRequestFocus:(id)arg1;
- (void)feedbackActionSheetController:(id)arg1 willDismissForTappedAction:(int)arg2;
- (void)_sendMediaRemoteCommandForToggledFeedbackAction:(int)arg1;
- (void)_sendMediaRemoteCommandForToggledAddToLibraryAction;
- (void)transportControlsView:(id)arg1 tapOnControlType:(int)arg2;
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 launchApp:(_Bool)arg3;
- (void)nowPlayingViewReceivedTapOnTrackTitles:(id)arg1;
- (void)_artworkViewTapGestureRecognized:(id)arg1;
- (void)_toggleUnprocessedArtworkImageVisibility;
- (void)_setUnprocessedArtworkVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)nowPlayingViewControllerReceivedTapOnTrackTitles:(id)arg1;
- (void)_updateForNowPlayingApplicationInfoChange;
- (void)originObserver:(id)arg1 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateSupportedCommandsForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateElapsedTimeForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdatePlaybackStateForOrigin:(id)arg2;
- (void)originObserver:(id)arg1 didUpdateNowPlayingInfoForOrigin:(id)arg2;
- (_Bool)_shouldShowOriginName;
- (_Bool)_shouldUseExtendedTransportControls;
- (void)_presentMoreMenuActionController;
- (void)_updateMoreMenuActionController;
- (void)_presentLikeBanViewController;
- (void)_updateNowPlayingFeedbackController;
- (void)_updateAvailableAndHighlightedControls;
- (void)_updateTransportControlProvider;
- (void)_updateTrackTitleMarqueeForAppearanceAndPlaybackState;
- (void)_pauseMarquee;
- (void)_setViewAppearanceState:(int)arg1;
- (void)_refreshArtworkRelatedViewsForArtworkImageUpdate;
- (void)_updatePlaybackStateDisplay;
- (void)_updateArtworkImageWithSourceImage:(id)arg1 artworkCatalog:(id)arg2 itemPersistentID:(id)arg3;
- (void)_updateArtworkImageWithPlaceholderImage;
- (void)_updateOptimisticNowPlayingInfo;
- (void)_updateNowPlayingInfoDisplay;
- (void)_updateUIAnimated:(_Bool)arg1;
- (id)_currentRadioTrackMediaRemoteOptions;
- (id)_nowPlayingState;
- (float)_aggregatePreferredPlaybackRate;
- (_Bool)_aggregateIsPlaying;
- (void)_viewDidDisappear;
- (void)_viewWillDisappear;
- (void)_viewDidAppear;
- (void)_viewWillAppear;
- (void)prepareForSnapshot;
- (void)_optimisticallySetLikeBanActive:(_Bool)arg1 controlsView:(id)arg2;
- (void)_optimisticallySetAddToLibraryActive:(_Bool)arg1 controlsView:(id)arg2;
- (void)_handleOptimisticPlaybackStateExpiryTimer;
- (void)_invalidateOptimisticPlaybackStateExpiryTimer;
- (void)setOptimisticPlaybackState:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
@property(readonly, nonatomic) _Bool shouldVolumeAutomaticallyBecomeFirstResponder;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)_nowPlayingController;
- (void)_handlePlaceholderNowPlayingStateTimeout;
- (void)_schedulePlaceholderNowPlayingTimeoutTimerIfNeeded;
- (void)_invalidatePlaceholderNowPlayingStateTimeoutTimerIfNeeded;
@property(readonly, nonatomic) NMUNowPlayingView *nowPlayingView;
- (void)dealloc;
- (id)initWithNowPlayingController:(id)arg1 viewStyle:(int)arg2 transportControlProvider:(id)arg3;
- (id)initWithNowPlayingController:(id)arg1 viewStyle:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

