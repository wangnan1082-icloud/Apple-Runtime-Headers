//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoMusicCore/NSObject-Protocol.h>

@protocol NMCPlayerPlaybackIntent <NSObject>
- (void)resumePlayback;
- (void)replacePlaybackQueueWhilePreventingAutomaticPlayback:(_Bool)arg1 completionHandler:(void (^)(NSError *))arg2;

@optional
- (void)startPlaybackWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)getRemotePlaybackQueueRepresentationWithCompletionHandler:(void (^)(MPRemotePlaybackQueue *, NSError *))arg1;
- (void)getCompanionPlaybackQueueRepresentationWithCompletionHandler:(void (^)(MPRemotePlaybackQueue *, NSError *))arg1;
@end

