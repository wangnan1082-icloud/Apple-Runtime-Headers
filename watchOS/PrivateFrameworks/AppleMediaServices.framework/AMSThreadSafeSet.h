//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeSet : NSObject
{
    NSMutableSet *_backingSet;
    NSObject<OS_dispatch_queue> *_backingSetAccessQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backingSetAccessQueue; // @synthesize backingSetAccessQueue=_backingSetAccessQueue;
@property(retain, nonatomic) NSMutableSet *backingSet; // @synthesize backingSet=_backingSet;
- (void).cxx_destruct;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
@property(readonly, nonatomic) unsigned int count;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)init;

@end
