//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSCLAudioPlayer, MSCLAudioPlayerStatus, NSError;

@protocol MSCLAudioPlayerDelegate <NSObject>

@optional
- (void)audioPlayer:(MSCLAudioPlayer *)arg1 didChangeStatus:(MSCLAudioPlayerStatus *)arg2;
- (void)audioPlayer:(MSCLAudioPlayer *)arg1 didFailWithError:(NSError *)arg2;
@end
