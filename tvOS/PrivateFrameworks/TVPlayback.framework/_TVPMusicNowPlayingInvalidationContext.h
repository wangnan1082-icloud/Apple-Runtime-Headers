//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TVPMusicNowPlayingInvalidationContext : NSObject
{
    _Bool _queue;
    _Bool _playingItem;
    NSString *_playingItemChangeReason;
}

@property(copy, nonatomic) NSString *playingItemChangeReason; // @synthesize playingItemChangeReason=_playingItemChangeReason;
@property(nonatomic) _Bool playingItem; // @synthesize playingItem=_playingItem;
@property(nonatomic) _Bool queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)description;

@end

