//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPCMediaPlayerLegacyPlaylistManager.h"

#import "MPUQueueBehaviorManaging.h"

@class NSString;

@interface MPUAVPlaylistManager : MPCMediaPlayerLegacyPlaylistManager <MPUQueueBehaviorManaging>
{
}

- (void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) _Bool allowsUserVisibleUpcomingItems;
@property(readonly, nonatomic) _Bool canSeek;
@property(readonly, nonatomic) _Bool canSkipToPreviousItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) int playbackMode;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool userCanChangeShuffleAndRepeatType;

@end
