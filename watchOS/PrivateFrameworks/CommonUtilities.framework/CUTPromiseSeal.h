//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTPromise;
@protocol OS_dispatch_queue;

@interface CUTPromiseSeal : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CUTPromise *_promise;
}

@property(retain, nonatomic) CUTPromise *promise; // @synthesize promise=_promise;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)failWithError:(id)arg1;
- (void)fulfillWithValue:(id)arg1;
- (id)initWithQueue:(id)arg1;

@end

