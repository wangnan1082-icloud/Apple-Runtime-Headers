//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPGeniusPlaybackQueue.h"

@interface MPGeniusPlaybackQueue (MPCAdditions)
- (void)_getPlaybackContextFromCloudControllerWithSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPlaybackContextFromMediaLibraryWithSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPlaybackContextWithRecommendedContentWithSeedAdamID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;
@end
