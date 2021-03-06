//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class MPModelFileAsset, MPModelPlaybackPosition, MPModelPodcast, MPModelPodcastAuthor, NSDate, NSDateComponents, NSString, NSURL;

@interface MPModelPodcastEpisode : MPModelObject
{
    NSString *_commentText;
}

+ (id)__artworkCatalogBlock_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__author_KEY;
+ (id)__podcast_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__seasonNumber_KEY;
+ (id)__episodeNumber_KEY;
+ (id)__episodeType_KEY;
+ (id)__shareURL_KEY;
+ (id)__datePlayed_KEY;
+ (id)__descriptionText_KEY;
+ (id)__hasVideo_KEY;
+ (id)__explicitEpisode_KEY;
+ (id)__userRating_KEY;
+ (id)__duration_KEY;
+ (id)__releaseDateComponents_KEY;
+ (id)__title_KEY;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)kindWithVariants:(unsigned long long)arg1;
@property(copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
- (void).cxx_destruct;
- (id)artworkCatalog;
- (id)humanDescription;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(retain, nonatomic) MPModelPodcastAuthor *author; // @dynamic author;
@property(copy, nonatomic) NSDate *datePlayed; // @dynamic datePlayed;
@property(copy, nonatomic) NSString *descriptionText; // @dynamic descriptionText;
@property(nonatomic) double duration; // @dynamic duration;
@property(readonly, nonatomic) long long episodeNumber; // @dynamic episodeNumber;
@property(readonly, nonatomic) long long episodeType; // @dynamic episodeType;
@property(nonatomic, getter=isExplicitEpisode) _Bool explicitEpisode; // @dynamic explicitEpisode;
@property(readonly, nonatomic) _Bool hasVideo; // @dynamic hasVideo;
@property(retain, nonatomic) MPModelFileAsset *localFileAsset; // @dynamic localFileAsset;
@property(retain, nonatomic) MPModelPlaybackPosition *playbackPosition; // @dynamic playbackPosition;
@property(retain, nonatomic) MPModelPodcast *podcast; // @dynamic podcast;
@property(copy, nonatomic) NSDateComponents *releaseDateComponents; // @dynamic releaseDateComponents;
@property(readonly, nonatomic) long long seasonNumber; // @dynamic seasonNumber;
@property(copy, nonatomic) NSURL *shareURL; // @dynamic shareURL;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) float userRating; // @dynamic userRating;

@end

