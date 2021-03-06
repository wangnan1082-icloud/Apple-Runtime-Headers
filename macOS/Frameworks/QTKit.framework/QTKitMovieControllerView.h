//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <QTKit/StandardMovieUIInterface-Protocol.h>

@class NSImageView, StdMovieUIChapterPopup, StdMovieUIController, StdMovieUICustomMenuButton, StdMovieUIFastButton, StdMovieUIPlayPauseButton, StdMovieUISlider, StdMovieUITextItem, StdMovieUIVolumeButton;

__attribute__((visibility("hidden")))
@interface QTKitMovieControllerView : NSView <StandardMovieUIInterface>
{
    StdMovieUIController *_uiController;
    StdMovieUIVolumeButton *_volumeButton;
    StdMovieUIPlayPauseButton *_playOrPauseButton;
    StdMovieUISlider *_movieSlider;
    StdMovieUIFastButton *_reverseButton;
    StdMovieUIFastButton *_forwardButton;
    StdMovieUIChapterPopup *_chapterPopup;
    StdMovieUICustomMenuButton *_customMenuButton;
    NSImageView *_growButton;
    NSImageView *_fillerImage;
    NSView *_barWidget;
    BOOL _chapterDesired;
    BOOL _volumeDesired;
    BOOL _customDesired;
    BOOL _growDesired;
    BOOL _steppersDesired;
    BOOL _enabled;
    BOOL _editable;
    double _minWidthForUI;
    double _minWidthForVolumeButton;
    double _minWidthForSlider;
    double _minWidthForFwdRevButtons;
    double _minWidthForChapter;
    BOOL _registeredForNotifications;
    StdMovieUITextItem *_statusMessage;
}

+ (float)defaultHeight;
- (struct CGSize)maxSize;
- (struct CGSize)minSize;
- (double)loadedPercentage;
- (void)setPlaying:(BOOL)arg1;
- (void)setLoadedPercentage:(double)arg1;
- (void)setDuration:(double)arg1;
- (double)playHeadUpdateInterval;
- (void)deselect;
- (void)getSelectionStart:(double *)arg1 duration:(double *)arg2;
- (void)setSelectionStart:(double)arg1 duration:(double)arg2;
- (BOOL)volumeMuted;
- (void)setVolumeMuted:(BOOL)arg1;
- (double)volumeLevel;
- (void)setVolumeLevel:(double)arg1;
- (double)playHeadPosition;
- (void)setPlayHeadPosition:(double)arg1;
- (id)uiController;
- (void)setUIController:(id)arg1;
- (void)updateResolution;
- (void)_doPlayheadMovement:(id)arg1;
- (void)_doChapter:(id)arg1;
- (void)_doCustom:(id)arg1;
- (void)_doSelectionChange:(id)arg1;
- (void)_doVolumeChange:(id)arg1;
- (void)_doToggleMute:(id)arg1;
- (void)_doPause:(id)arg1;
- (void)_doFastForward:(id)arg1;
- (void)_doStepForward:(id)arg1;
- (void)_doFastReverse:(id)arg1;
- (void)_doStepReverse:(id)arg1;
- (void)_doGotoNext:(id)arg1;
- (void)_doGotoPrevious:(id)arg1;
- (void)_doPlayReverse:(id)arg1;
- (void)_doPlay:(id)arg1;
- (void)_sendActionToUIController:(SEL)arg1;
- (void)_forwardButtonMouseDown:(id)arg1;
- (void)_reverseButtonMouseDown:(id)arg1;
- (void)_volumeButtonMouseDown:(id)arg1;
- (BOOL)_setPlaying:(BOOL)arg1;
- (void)_setSelecting:(BOOL)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_adjustForGrowth:(double)arg1;
- (void)_adjustForShrinkage:(double)arg1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)completeUISetup;
- (void)loadImagesIfNecessary;
- (void)layoutControls;
- (void)relayoutControls;
- (void)computeMinimumWidths;
- (unsigned int)chapterIndex;
- (void)setChapterIndex:(unsigned int)arg1;
- (void)setChapterList:(id)arg1;
- (void)setStatusMessage:(id)arg1;
- (id)customMenu;
- (void)setCustomMenu:(id)arg1;
- (BOOL)isEditable;
- (BOOL)isEnabled;
- (BOOL)hasStepperButtons;
- (BOOL)hasChapterButton;
- (BOOL)hasVolumeButton;
- (BOOL)hasCustomMenuButton;
- (BOOL)hasGrowIcon;
- (void)setEditable:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHasStepperButtons:(BOOL)arg1;
- (void)setHasChapterButton:(BOOL)arg1;
- (void)setHasVolumeButton:(BOOL)arg1;
- (void)setHasCustomMenuButton:(BOOL)arg1;
- (void)setHasGrowIcon:(BOOL)arg1;
- (void)setZoomButtonsVisible:(BOOL)arg1;
- (BOOL)areZoomButtonsVisible;
- (void)setVolumeButtonVisible:(BOOL)arg1;
- (BOOL)isVolumeButtonVisible;
- (void)setTranslateButtonVisible:(BOOL)arg1;
- (BOOL)isTranslateButtonVisible;
- (void)setStepButtonsVisible:(BOOL)arg1;
- (BOOL)areStepButtonsVisible;
- (void)setHotSpotButtonVisible:(BOOL)arg1;
- (BOOL)isHotSpotButtonVisible;
- (void)setCustomButtonVisible:(BOOL)arg1;
- (BOOL)isCustomButtonVisible;
- (void)setBackButtonVisible:(BOOL)arg1;
- (BOOL)isBackButtonVisible;
- (void)setShowsResizeIndicator:(BOOL)arg1;
- (BOOL)showsResizeIndicator;
- (void)setMovie:(id)arg1;
- (id)movie;
- (void)finalize;
- (void)dealloc;

@end

