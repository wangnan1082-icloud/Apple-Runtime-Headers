//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

#import "NSCacheDelegate.h"

@class NSCache, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, PHPhotoLibrary;

@interface PHBatchFetchingArray : NSArray <NSCacheDelegate>
{
    NSArray *_oids;
    NSSet *_oidsSet;
    id <PHBatchFetchingArrayDataSource> _dataSource;
    unsigned int _count;
    NSCache *_cache;
    unsigned int _firstBatchIndex;
    NSArray *_firstBatch;
    NSMutableDictionary *_uuidsByOIDs;
    NSObject<OS_dispatch_queue> *_firstBatchQueue;
    unsigned int _batchSize;
    unsigned int _propertyHint;
}

+ (_Bool)accessInstanceVariablesDirectly;
@property(readonly) NSArray *oids; // @synthesize oids=_oids;
- (void).cxx_destruct;
@property(readonly) NSSet *oidsSet;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (void)_invalidateUUIDCache;
- (void)_evictBatchNumber:(int)arg1;
- (void)_rememberUUIDsForBatch:(id)arg1;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)_phObjectAtIndex:(unsigned int)arg1;
- (id)__batchHelper:(unsigned int)arg1;
- (id)_phObjectsForOIDs:(id)arg1;
- (unsigned int)batchSize;
@property(readonly) PHPhotoLibrary *photoLibrary;
- (unsigned int)_populateObjectBuffer:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)indexOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
@property(readonly, copy) NSString *description;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 dataSource:(id)arg3;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
