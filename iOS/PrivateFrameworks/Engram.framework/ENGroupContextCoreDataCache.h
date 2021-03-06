//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Engram/ENGroupContextCacheMiddleware-Protocol.h>

@class NSPersistentContainer, NSString;
@protocol OS_dispatch_queue;

@interface ENGroupContextCoreDataCache : NSObject <ENGroupContextCacheMiddleware>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSPersistentContainer *_container;
}

@property(retain, nonatomic) NSPersistentContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)groupContext:(id)arg1 fetchAllKnownGroups:(CDUnknownBlockType)arg2;
- (void)deleteCachedValueForForGroupContext:(id)arg1 withGroupID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteAllKnownGroupsForGroupContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)groupContext:(id)arg1 latestCachedGroupWithStableID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 cachedGroupWithID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)groupContext:(id)arg1 cacheGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)middlewareCacheCostForContext:(id)arg1;
- (void)_groupFromCypher:(id)arg1 groupID:(id)arg2 applicationData:(id)arg3 context:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithType:(unsigned long long)arg1 containerURL:(id)arg2 queue:(id)arg3;
- (id)initInMemoryCacheWithQueue:(id)arg1;
- (id)initOnDiskCacheWithContainerURL:(id)arg1 Queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

