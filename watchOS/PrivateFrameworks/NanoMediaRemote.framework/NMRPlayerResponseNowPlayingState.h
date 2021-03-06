//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMediaRemote/NMRNowPlayingState.h>

#import <NanoMediaRemote/NSCopying-Protocol.h>

@class MPCPlayerResponse;

__attribute__((visibility("hidden")))
@interface NMRPlayerResponseNowPlayingState : NMRNowPlayingState <NSCopying>
{
    MPCPlayerResponse *_response;
    unsigned int _addStatus;
}

+ (_Bool)isAddToLibraryCommandEqualBetweenAddStatus:(unsigned int)arg1 andAddStatus:(unsigned int)arg2;
+ (_Bool)_isAddToLibraryCommandActiveFromAddStatus:(unsigned int)arg1;
+ (_Bool)_isAddToLibraryCommandEnabledFromAddStatus:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)_nowPlayingRadioStation;
- (id)_nowPlayingSong;
- (double)rewindTimeInterval;
- (double)fastForwardTimeInterval;
- (_Bool)isSkipBackwardCommandEnabled;
- (_Bool)isSkipForwardCommandEnabled;
- (id)previousTrackCommandEnabled;
- (id)nextTrackCommandEnabled;
- (_Bool)isAddToLibraryActive;
- (_Bool)isAddToLibraryCommandEnabled;
- (_Bool)isAddToLibraryCommandSupported;
- (id)localizedBookmarkTitle;
- (_Bool)isBookmarkedActive;
- (_Bool)isBookmarkCommandEnabled;
- (_Bool)isBookmarkCommandSupported;
- (int)banCommandPresentationStyle;
- (id)localizedBanTitle;
- (_Bool)isBannedActive;
- (_Bool)isBanCommandEnabled;
- (_Bool)isBanCommandSupported;
- (int)likeCommandPresentationStyle;
- (id)localizedLikeTitle;
- (_Bool)isLikedActive;
- (_Bool)isLikeCommandEnabled;
- (_Bool)isLikeCommandSupported;
- (_Bool)isPlaybackRateCommandSupported;
- (int)shuffleMode;
- (_Bool)isShuffleModeCommandSupported;
- (int)repeatMode;
- (_Bool)isRepeatModeCommandSupported;
- (id)applicationBundleIdentifier;
- (id)applicationDisplayName;
- (id)artworkImageData;
- (_Bool)isAlwaysLive;
- (_Bool)isAdvertisement;
- (id)radioStationHash;
- (id)radioStationIdentifier;
- (id)radioStationName;
- (id)artworkCatalog;
- (_Bool)isExplicitTrack;
- (id)album;
- (id)artist;
- (id)title;
- (id)storeAdamID;
- (id)itemAlbumPersistentID;
- (id)itemCompanionPersistentID;
- (id)itemPersistentID;
- (id)identifiers;
- (double)elapsedTimeAtLastUpdate;
- (unsigned int)playbackState;
- (float)preferredPlaybackRate;
- (float)playbackRate;
- (double)duration;
- (id)timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlayerResponse:(id)arg1 libraryAddStatus:(unsigned int)arg2;

@end

