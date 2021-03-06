//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet;
@protocol OS_dispatch_queue;

@interface PLThumbnailIndexes : NSObject
{
    NSObject<OS_dispatch_queue> *isolation;
    NSMutableIndexSet *unusedIndexes;
    long long usedMax;
    unsigned long long _fetchTimestamp;
}

+ (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;
+ (void)recycleThumbnailIndexes:(id)arg1;
+ (unsigned long long)nextAvailableThumbnailIndexInLibrary:(id)arg1;
+ (void)getAvailableThumbnailIndexInLibrary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (void)getAvailableThumbnailIndexesInLibrary:(id)arg1 withCount:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
- (id)init;
- (id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1;
- (void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)getAvailableThumbnailIndexesFromLibrary:(id)arg1;
- (void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2;

@end

