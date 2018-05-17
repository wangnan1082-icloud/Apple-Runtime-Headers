//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayer/MPContentItem.h>

#import "NSCopying.h"

@class MPMediaItemArtwork, MPNowPlayingInfoLyricsItem, NSArray, NSDate, NSDictionary, NSString;

@interface MPNowPlayingContentItem : MPContentItem <NSCopying>
{
    NSDictionary *_nowPlayingInfo;
    id <MPNowPlayingContentItemArtworkDataSource> _artworkDataSource;
}

+ (_Bool)shouldPushArtworkData;
@property(retain, nonatomic) id <MPNowPlayingContentItemArtworkDataSource> artworkDataSource; // @synthesize artworkDataSource=_artworkDataSource;
- (void).cxx_destruct;
@property(nonatomic, getter=isExplicitItem) _Bool explicitItem;
- (void)_mergeContentItem:(id)arg1;
- (void)invalidateArtwork;
@property(retain, nonatomic) MPMediaItemArtwork *artwork; // @dynamic artwork;
@property(nonatomic) _Bool hasArtwork;
- (void)invalidateLyrics;
@property(copy, nonatomic) MPNowPlayingInfoLyricsItem *lyrics;
@property(nonatomic) _Bool hasLyrics;
- (void)invalidateDescription;
@property(nonatomic) _Bool hasDescription;
@property(copy, nonatomic) NSArray *sections;
- (void)invalidateLanguageOptions;
@property(copy, nonatomic) NSArray *currentLanguageOptions;
@property(copy, nonatomic) NSArray *availableLanguageOptions;
@property(nonatomic) _Bool hasLanguageOptions;
- (void)setElapsedTime:(double)arg1 playbackRate:(float)arg2;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo;
@property(readonly, nonatomic) NSDictionary *auxiliaryNowPlayingInfo;
@property(nonatomic) unsigned int mediaType;
@property(copy, nonatomic) NSDictionary *collectionInfo;
@property(readonly, nonatomic) double elapsedTimeTimestamp;
@property(nonatomic) float playbackRate;
@property(nonatomic) double elapsedTime;
@property(nonatomic) int editingStyleFlags;
@property(nonatomic) int radioStationType;
@property(nonatomic) int playlistType;
@property(nonatomic) long long legacyUniqueID;
@property(nonatomic) long long storeSubscriptionID;
@property(nonatomic) long long storeID;
@property(nonatomic) long long storeArtistID;
@property(nonatomic) long long storeAlbumID;
@property(nonatomic) int numberOfChildren;
@property(nonatomic, getter=isSteerable) _Bool steerable;
@property(nonatomic, getter=isSharableItem) _Bool sharableItem;
@property(nonatomic, getter=isAlwaysLiveItem) _Bool alwaysLiveItem;
@property(copy, nonatomic) NSString *externalContentIdentifier;
@property(copy, nonatomic) NSString *radioStationStringIdentifier;
@property(copy, nonatomic) NSString *genreName;
@property(copy, nonatomic) NSString *composerName;
@property(nonatomic) int trackNumber;
@property(nonatomic) int totalTrackCount;
@property(nonatomic) int totalDiscCount;
@property(nonatomic) int seasonNumber;
@property(nonatomic) int playCount;
@property(nonatomic) int episodeNumber;
@property(nonatomic) int discNumber;
@property(nonatomic) float defaultPlaybackRate;
@property(nonatomic) double startTime;
@property(nonatomic) double duration;
@property(copy, nonatomic) NSString *artworkIdentifier;
@property(copy, nonatomic) NSArray *artworkURLTemplates;
@property(copy, nonatomic) NSString *artworkURL;
@property(copy, nonatomic) NSString *trackArtistName;
@property(copy, nonatomic) NSString *seriesName;
@property(copy, nonatomic) NSString *radioStationName;
@property(copy, nonatomic) NSString *profileIdentifier;
@property(copy, nonatomic) NSString *localizedContentRating;
@property(copy, nonatomic) NSString *info;
@property(copy, nonatomic) NSString *directorName;
@property(copy, nonatomic) NSString *collectionIdentifier;
@property(copy, nonatomic) NSString *albumName;
@property(copy, nonatomic) NSString *albumArtistName;
@property(copy, nonatomic) NSDictionary *userInfo;
@property(copy, nonatomic) NSDictionary *deviceSpecificUserInfo;
@property(copy, nonatomic) NSDate *releaseDate;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
