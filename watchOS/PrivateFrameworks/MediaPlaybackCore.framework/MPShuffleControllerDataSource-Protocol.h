//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPShuffleController;

@protocol MPShuffleControllerDataSource <NSObject>
- (unsigned int)shuffleController:(MPShuffleController *)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned int)arg3;
- (id)shuffleController:(MPShuffleController *)arg1 identifierForItemAtIndex:(unsigned int)arg2;
- (unsigned int)itemCountForShuffleController:(MPShuffleController *)arg1;
@end

