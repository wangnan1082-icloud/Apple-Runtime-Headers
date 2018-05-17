//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMRMediaRemoteUpdater, NMROrigin, NSData, NSDictionary, NSObject<OS_dispatch_queue>, _NMRPlaybackQueue;

@interface NMRPlaybackQueue : NSObject
{
    _NMRPlaybackQueue *_upNextPlaybackQueue;
    _Bool _observingMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NMRMediaRemoteUpdater *_playbackQueueUpdater;
    NSDictionary *_nowPlayingInfo;
    id <NMRPlaybackQueueDelegate> _delegate;
    NMROrigin *_origin;
    CDStruct_dff5684f _observedRange;
}

@property(retain, nonatomic) NMROrigin *origin; // @synthesize origin=_origin;
@property(nonatomic) CDStruct_dff5684f observedRange; // @synthesize observedRange=_observedRange;
@property(nonatomic) __weak id <NMRPlaybackQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_itemWithIdentifier:(id)arg1;
- (id)_metadataForItemWithIdentifier:(id)arg1;
- (_Bool)_needsMetadataForMediaRemoteItem:(void *)arg1;
- (_Bool)_needsUpdateForMediaRemoteQueue:(void *)arg1;
- (CDStruct_dff5684f)_rangeOfItemsNeedingMetadataForMediaRemoteQueue:(void *)arg1;
- (void)_updateMetadataWithMediaRemoteItems:(id)arg1;
- (void)_updateWithMediaRemoteQueue:(void *)arg1;
- (void *)_mediaRemotePlaybackQueueWithRange:(CDStruct_dff5684f)arg1 includeMetadata:(_Bool)arg2;
- (id)_contentItemIdentifiers;
- (void)_refreshCurrentPlaybackQueueFromMediaRemoteWithCompletion:(CDUnknownBlockType)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)updateWithData:(id)arg1;
- (id)deltaPlaybackQueueDataFromPreviousData:(id)arg1 invalidatedMetadataIdentifiers:(id)arg2;
- (void *)copyMediaRemotePlaybackQueueWithRange:(CDStruct_dff5684f)arg1 includeMetadata:(_Bool)arg2;
- (void *)copyFullMediaRemotePlaybackQueueIncludingMetadata:(_Bool)arg1;
@property(readonly, nonatomic) NSData *fullPlaybackQueueData;
- (void)beginObservingMediaRemotePlaybackQueueForOrigin:(id)arg1;
- (void)dealloc;
- (id)init;

@end
