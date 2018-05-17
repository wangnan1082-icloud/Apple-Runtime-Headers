//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSDefaultObserver.h"

@class BSAbstractDefaultDomain, NSArray, NSObject<OS_dispatch_queue>, NSString;

@interface _BSDefaultObserver : NSObject <BSDefaultObserver>
{
    BSAbstractDefaultDomain *_defaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_defaultsToObserve;
    CDUnknownBlockType _fireBlock;
    _Bool _invalidated;
    // Error parsing type: AI, name: _debounceCounter
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)invalidate;
- (void)dealloc;
- (id)initWithAbstractDefaultDomain:(id)arg1 defaultsToObserve:(id)arg2 onQueue:(id)arg3 withBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
