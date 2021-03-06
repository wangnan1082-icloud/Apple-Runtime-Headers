//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedFileList/SFLList-Protocol.h>
#import <SharedFileList/SFLSharePointsSet-Protocol.h>
#import <SharedFileList/SPMSharePointManagerObserver-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSString, SPMSharePointManager;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SFLSharePointList : NSObject <SFLList, SPMSharePointManagerObserver, SFLSharePointsSet>
{
    id _internalObservers;
    id _internalSharePointManager;
    id _items;
    unsigned long long _seed;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_internalQueue;
    struct os_unfair_lock_s _internalObserverLock;
    NSObject<OS_dispatch_group> *_internalInitializeGroup;
}

@property(readonly, retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) SPMSharePointManager *internalSharePointManager; // @synthesize internalSharePointManager=_internalSharePointManager;
@property(readonly) NSHashTable *observers; // @synthesize observers=_internalObservers;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)removeAllItems;
- (BOOL)moveItem:(id)arg1 afterItem:(id)arg2 error:(id *)arg3;
- (BOOL)moveItem:(id)arg1 toIndex:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)insertItem:(id)arg1 afterItem:(id)arg2 error:(id *)arg3;
- (BOOL)insertItem:(id)arg1 atIndex:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly) unsigned long long seed;
@property(readonly, copy) NSArray *snapshotItems;
- (void)sharePointsDidChange:(id)arg1;
- (void)_notifyObservers;
- (void)_notifyObserverListInitialize:(id)arg1;
- (void)_fetchItems;
- (BOOL)updateItem:(id)arg1 error:(id *)arg2;
- (BOOL)removeItem:(id)arg1 error:(id *)arg2;
- (BOOL)addItem:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSArray *allItems; // @dynamic allItems;
- (BOOL)containsItem:(id)arg1;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (void)setAuthorization:(struct AuthorizationOpaqueRef *)arg1;
@property(copy) NSDictionary *properties; // @dynamic properties;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)setPropertyValuesForKeysWithDictionary:(id)arg1 error:(id *)arg2;
- (unsigned long long)_cfTypeID;
- (id)initWithIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

