//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPPropertySet, MPStoreModelMovieMediaClipBuilder, MPStoreModelPlaybackPositionBuilder, MPStoreModelStoreAssetBuilder;

@interface MPStoreModelMovieBuilder : MPStoreModelObjectBuilder
{
    MPStoreModelPlaybackPositionBuilder *_playbackPositionBuilder;
    MPStoreModelMovieMediaClipBuilder *_mediaClipBuilder;
    MPStoreModelStoreAssetBuilder *_storeAssetBuilder;
    MPPropertySet *_storeAssetProperties;
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int description:1;
        unsigned int duration:1;
        unsigned int explicitRating:1;
        unsigned int tagline:1;
        unsigned int artwork:1;
        unsigned int editorialArtwork:1;
        unsigned int keepLocalEnableState:1;
        unsigned int keepLocalManagedStatus:1;
        unsigned int hasCloudSyncSource:1;
        unsigned int localFileAsset:1;
        unsigned int libraryAdded:1;
        unsigned int libraryAddEligible:1;
    } _requestedMovieProperties;
}

+ (id)allSupportedProperties;
- (void).cxx_destruct;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2;

@end

