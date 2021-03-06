//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSCircularBuffer : NSObject
{
    unsigned long long _maxSize;
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _currentIndex;
    NSMutableArray *_buffer;
}

+ (id)_rearrangeObjects:(id)arg1 forCurrentIndex:(unsigned long long)arg2;
@property(retain, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void).cxx_destruct;
- (id)_flush;
- (id)description;
- (id)flush;
- (void)addObject:(id)arg1;
@property(nonatomic) unsigned long long maxSize;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, copy, nonatomic) NSArray *allObjects;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (id)init;

@end

