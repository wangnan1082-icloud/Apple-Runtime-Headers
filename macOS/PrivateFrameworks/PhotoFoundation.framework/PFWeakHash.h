//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFWeakContainer.h>

@class NSPointerArray;

@interface PFWeakHash : PFWeakContainer
{
    struct _opaque_pthread_mutex_t _serializer;
    BOOL _objectHashing;
    // Error parsing type: A^{_opaque_pthread_t}, name: _serializedThread
    id *_objects;
    unsigned long long _capacity;
    NSPointerArray *_payload;
    unsigned long long _payloadPurgeCounter;
    unsigned long long *_inUse;
    unsigned long long _count;
    long long _nilledWeakCount;
    id <PFWeakHashDelegate> _delegate;
}

+ (void)initialize;
@property __weak id <PFWeakHashDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)enumerateObjectsAndPayloadsWithBlock:(CDUnknownBlockType)arg1;
- (id)payloadForObject:(id)arg1;
- (void)setPayload:(id)arg1 forObject:(id)arg2;
- (void)addObject:(id)arg1 withPayload:(id)arg2;
- (void)_setPayload:(id)arg1 inBucket:(unsigned long long)arg2;
- (unsigned long long)capacity;
- (unsigned long long)countByVerifyingWeakObjects;
- (unsigned long long)countEstimate;
- (id)allObjects;
- (void)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)_doEnumeration:(CDUnknownBlockType)arg1;
- (id)member:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (BOOL)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (unsigned long long)_addObject:(id)arg1;
- (void)weakReferenceBecameNil;
- (void)_processNilledWeakReferences;
- (void)_purgeOrphanedPayloads;
- (void)_resize;
- (BOOL)_shouldShrink;
- (BOOL)_shouldGrow;
- (unsigned long long)_bucketForObject:(id)arg1 foundInHash:(char *)arg2;
- (void)_rehashWithNewCapacity:(unsigned long long)arg1;
- (void)removeAllObjects;
- (BOOL)_removeAllObjects;
- (void)postDelegateBecameEmptyNotice;
- (void)dealloc;
- (id)initWithPointerHashing;
- (id)initWithObjectHashing;
- (id)init;
- (BOOL)_onSerializedThread;
- (void)_serialize:(CDUnknownBlockType)arg1;
- (void)_dumpBuckets;

@end
