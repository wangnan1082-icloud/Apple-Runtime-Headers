//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSDisplayLink1.h>

__attribute__((visibility("hidden")))
@interface NSScreenDisplayLink : NSDisplayLink1
{
    long long _screenNumber;
    CDUnknownBlockType _handler;
    struct __CFRunLoopTimer *_timer;
    struct os_unfair_lock_s _lock;
    unsigned long long _scheduleCount;
    CDStruct_c75109f2 _targetTime;
    unsigned int _paused:1;
    unsigned int _firing:1;
}

- (double)duration;
- (double)timestamp;
- (void)setPaused:(BOOL)arg1;
- (BOOL)isPaused;
- (BOOL)isValid;
- (void)invalidate;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_schedule;
- (void)_fire;
- (void)dealloc;
- (id)init;
- (id)initWithScreen:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
