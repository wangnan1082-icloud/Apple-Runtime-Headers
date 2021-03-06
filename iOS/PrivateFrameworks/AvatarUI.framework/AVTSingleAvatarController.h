//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarDisplayingController-Protocol.h>
#import <AvatarUI/AVTAvatarTransitionModel-Protocol.h>

@class AVTAdaptativeLayoutView, AVTImageTransitioningContainerView, AVTRenderingScope, AVTViewSession, NSString, _AVTAvatarRecordImageProvider;
@protocol AVTAvatarDisplayingControllerDelegate, AVTAvatarRecord, AVTPresenterDelegate, AVTTransition, AVTUILogger;

@interface AVTSingleAvatarController : NSObject <AVTAvatarTransitionModel, AVTAvatarDisplayingController>
{
    id <AVTAvatarDisplayingControllerDelegate> delegate;
    id <AVTPresenterDelegate> presenterDelegate;
    AVTAdaptativeLayoutView *_view;
    AVTImageTransitioningContainerView *_transitioningContainer;
    id <AVTAvatarRecord> _displayedRecord;
    AVTViewSession *_avtViewSession;
    _AVTAvatarRecordImageProvider *_thumbnailRenderer;
    AVTRenderingScope *_renderingScope;
    id <AVTUILogger> _logger;
    id <AVTTransition> _currentTransition;
}

@property(retain, nonatomic) id <AVTTransition> currentTransition; // @synthesize currentTransition=_currentTransition;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) AVTRenderingScope *renderingScope; // @synthesize renderingScope=_renderingScope;
@property(retain, nonatomic) _AVTAvatarRecordImageProvider *thumbnailRenderer; // @synthesize thumbnailRenderer=_thumbnailRenderer;
@property(retain, nonatomic) AVTViewSession *avtViewSession; // @synthesize avtViewSession=_avtViewSession;
@property(retain, nonatomic) id <AVTAvatarRecord> displayedRecord; // @synthesize displayedRecord=_displayedRecord;
@property(retain, nonatomic) AVTImageTransitioningContainerView *transitioningContainer; // @synthesize transitioningContainer=_transitioningContainer;
@property(retain, nonatomic) AVTAdaptativeLayoutView *view; // @synthesize view=_view;
@property(nonatomic) __weak id <AVTPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate;
@property(nonatomic) __weak id <AVTAvatarDisplayingControllerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)applyFullAlpha;
- (void)applyBaseAlpha;
- (id)liveView;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;
- (void)transitionToShowingDisplayedRecordWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)transitionToOtherDisplayedRecord;
- (void)updateImageViewWithAVTViewSnapshot;
- (void)updateImageViewWithDisplayedRecord;
- (void)prepareToTransitionToVisible:(_Bool)arg1 completionHandler:(CDUnknownBlockType *)arg2;
- (void)displayAvatarForRecord:(id)arg1 animated:(_Bool)arg2;
- (void)stopUsingAVTViewSessionSynchronously:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2;
- (void)reloadData;
- (void)viewDidLoad;
- (void)loadView;
- (_Bool)isViewLoaded;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

