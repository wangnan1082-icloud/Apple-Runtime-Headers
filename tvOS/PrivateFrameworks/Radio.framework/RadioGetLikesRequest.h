//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class RadioStation, SSURLConnectionRequest;

@interface RadioGetLikesRequest : RadioRequest
{
    unsigned long long _numberOfBannedTracks;
    unsigned long long _numberOfLikedTracks;
    SSURLConnectionRequest *_request;
    RadioStation *_station;
    _Bool _shouldProcessItems;
}

@property(nonatomic) _Bool shouldProcessItems; // @synthesize shouldProcessItems=_shouldProcessItems;
@property(nonatomic) unsigned long long numberOfLikedTracks; // @synthesize numberOfLikedTracks=_numberOfLikedTracks;
@property(nonatomic) unsigned long long numberOfBannedTracks; // @synthesize numberOfBannedTracks=_numberOfBannedTracks;
- (void).cxx_destruct;
- (void)startWithLikeBanCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (id)initWithStation:(id)arg1;
- (id)init;

@end
