//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPhotosUI/NSCopying-Protocol.h>

@class NSArray;

@interface NPTOWatchCollectionList : NSObject <NSCopying>
{
    NSArray *_watchCollections;
}

+ (id)sharedWatchCollectionList;
- (void).cxx_destruct;
- (id)_readWatchCollectionListFromPreferences;
- (void)updateWatchCollectionList;
- (id)collectionsForTarget:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initFromPreferences;
- (void)writeWatchCollectionListToPreferences;
- (void)setWatchCollections:(id)arg1;
- (id)watchCollections;

@end

