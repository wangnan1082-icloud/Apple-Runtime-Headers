//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NRKGateKeeperReferenceCounter, NRKReminderList, NSArray, NSLock, NSMutableDictionary, NSMutableSet;

@interface NRKReloadShuttle : NSObject
{
    _Bool _cacheConnected;
    _Bool _isSuperseded;
    _Bool _expectSingleItem;
    NRKReminderList *_scheduledList;
    struct NSArray *_reminderListArray;
    struct NSMutableDictionary *_reminderListsDict;
    NRKGateKeeperReferenceCounter *_globalActiveFetchCounter;
    NSLock *_lock;
    CDUnknownBlockType _completion;
    NSMutableSet *_readyItemsSet;
}

@property(retain, nonatomic) NSMutableSet *readyItemsSet; // @synthesize readyItemsSet=_readyItemsSet;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NRKGateKeeperReferenceCounter *globalActiveFetchCounter; // @synthesize globalActiveFetchCounter=_globalActiveFetchCounter;
@property(nonatomic) _Bool expectSingleItem; // @synthesize expectSingleItem=_expectSingleItem;
@property(nonatomic) _Bool isSuperseded; // @synthesize isSuperseded=_isSuperseded;
@property(nonatomic, getter=isCacheConnected) _Bool cacheConnected; // @synthesize cacheConnected=_cacheConnected;
@property(retain, nonatomic) NSMutableDictionary *reminderListsDict; // @synthesize reminderListsDict=_reminderListsDict;
@property(retain, nonatomic) NSArray *reminderListArray; // @synthesize reminderListArray=_reminderListArray;
@property(retain, nonatomic) NRKReminderList *scheduledList; // @synthesize scheduledList=_scheduledList;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isReloadCompleted;
- (void)setItem:(id)arg1 onOldItem:(id)arg2 withItemID:(int)arg3 andSetterBlock:(CDUnknownBlockType)arg4;
- (void)setLoadPrimacy;
- (void)dealloc;
- (id)initWithFetchCounter:(id)arg1 andLoadOnlySingleItem:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
