//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NUAsyncContentViewControllerLoader.h"
#import "NUVideoPlayerEventTracker.h"

@class NSString;

@interface NUVideoLoadingCoordinator : NSObject <NUVideoPlayerEventTracker, NUAsyncContentViewControllerLoader>
{
    _Bool _loadStarted;
    id <SXVideoPlaybackController> _playbackController;
    CDUnknownBlockType _completionBlock;
}

@property(nonatomic, getter=hasLoadStarted) _Bool loadStarted; // @synthesize loadStarted=_loadStarted;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) id <SXVideoPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
- (void).cxx_destruct;
- (void)_invokeAndClearCompletionBlockWithError:(id)arg1;
- (id)loadContentWithTimeoutTime:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)playbackStartedForVideoAdWithMetadata:(id)arg1;
- (void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2;
- (id)initWithPlaybackController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
