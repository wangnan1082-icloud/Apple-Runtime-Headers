//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TVPBaseMediaItem.h"

#import "TVPMediaItemReportingDelegate.h"

@class NSString, NSURL, TVHKMediaItem;

@interface TVHKPlayerMediaItem : TVPBaseMediaItem <TVPMediaItemReportingDelegate>
{
    TVHKMediaItem *_mediaItem;
    NSURL *_URL;
    unsigned long long _loadingContext;
}

@property(nonatomic) unsigned long long loadingContext; // @synthesize loadingContext=_loadingContext;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) TVHKMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;
- (id)_soundCheckMediaKind;
- (id)_contentRatingSystem;
- (id)_contentRatingDomain;
- (id)_contentRatingIsExplicitMusic;
- (id)_contentRatingRank;
- (id)_contentRatingLabel;
- (id)_mediaType;
- (id)_imageProxy;
- (id)_subtitle;
- (id)_serviceIdentifier;
- (id)_keybagPathURL;
- (_Bool)_isRental;
- (void)mediaItemPlayerItemStatusDidBecomeReadyToPlay:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3;
- (id)reportingDelegate;
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(_Bool)arg4;
- (void)cleanUpMediaItem;
- (void)prepareForPlaybackInitiationWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareForLoadingWithCompletion:(CDUnknownBlockType)arg1;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (_Bool)hasTrait:(id)arg1;
- (_Bool)isEqualToMediaItem:(id)arg1;
- (id)mediaItemURL;
@property(readonly, copy) NSString *description;
- (id)initWithMediaItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
