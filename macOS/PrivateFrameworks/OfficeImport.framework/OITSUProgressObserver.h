//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface OITSUProgressObserver : NSObject
{
    double mValueInterval;
    NSObject<OS_dispatch_queue> *mQueue;
    CDUnknownBlockType mHandler;
    double mLastHandledValue;
    BOOL mLastHandledIndeterminate;
}

@property(readonly, nonatomic) double valueInterval; // @synthesize valueInterval=mValueInterval;
- (void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(BOOL)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

