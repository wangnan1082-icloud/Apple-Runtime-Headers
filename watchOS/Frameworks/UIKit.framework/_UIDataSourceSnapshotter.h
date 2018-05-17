//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface _UIDataSourceSnapshotter : NSObject <NSCopying>
{
    struct _NSRange *_sectionRanges;
    int _sectionCount;
}

+ (id)snapshotForDataSourceBackedView:(id)arg1;
- (void)_recomputeRangeLocations;
- (_Bool)_insertSection:(int)arg1 withInitialCount:(int)arg2;
- (_Bool)_incrementSectionCount:(int)arg1 byCount:(int)arg2;
- (_Bool)_incrementSectionCount:(int)arg1;
- (_Bool)_deleteSection:(int)arg1;
- (_Bool)_decrementSectionCount:(int)arg1 byCount:(int)arg2;
- (_Bool)_decrementSectionCount:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)indexPathForAppendingInsertInSection:(int)arg1;
- (_Bool)indexPathIsSectionAppendingInsert:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (int)sectionForGlobalIndex:(int)arg1;
- (struct _NSRange)rangeForSection:(int)arg1;
- (int)globalIndexForIndexPath:(id)arg1;
- (id)indexPathForGlobalIndex:(int)arg1;
- (int)numberOfItemsBeforeSection:(int)arg1;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
- (int)numberOfItems;
- (id)description;
- (void)dealloc;
- (id)initWithDataSourceBackedView:(id)arg1;
- (id)initWithSectionCounts:(id)arg1;
- (id)init;

@end
