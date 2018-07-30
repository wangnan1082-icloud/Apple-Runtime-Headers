//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVTResourceCache.h"
#import "NSCacheDelegate.h"

@class NSCache, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface AVTInMemoryResourceCache : NSObject <NSCacheDelegate, AVTResourceCache>
{
    NSCache *_storage;
    NSMutableArray *_orderedEntries;
    NSObject<OS_dispatch_queue> *_storageLock;
    id <AVTUILogger> _logger;
}

+ (unsigned long long)costForItem:(id)arg1 scope:(id)arg2;
+ (id)keyForItem:(id)arg1 scope:(id)arg2;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *storageLock; // @synthesize storageLock=_storageLock;
@property(readonly, nonatomic) NSMutableArray *orderedEntries; // @synthesize orderedEntries=_orderedEntries;
@property(readonly, nonatomic) NSCache *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)handleChangeForItemForKey:(id)arg1;
- (id)observeChangesForItem:(id)arg1 key:(id)arg2;
- (void)nts_evictObjectsToFreeUpCost:(unsigned long long)arg1;
- (void)clearCache;
- (id)_resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)resourceForItem:(id)arg1 scope:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3;
- (id)resourceForItem:(id)arg1 scope:(id)arg2;
- (void)performStorageWork:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLockProvider:(CDUnknownBlockType)arg1 totalCostLimit:(unsigned long long)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
