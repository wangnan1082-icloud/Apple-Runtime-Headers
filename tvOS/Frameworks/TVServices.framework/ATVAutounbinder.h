//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface ATVAutounbinder : NSObject
{
    NSMapTable *_bindingsByObject;
    _Bool _assertOnRetainEnabled;
}

- (void)_assertIllegalRetain;
- (void)_enableAssertOnRetain;
- (id)retain;
- (void)dealloc;
- (void)_notifyBindingAdaptors;
- (void)removeBinding:(id)arg1 fromObject:(id)arg2;
- (void)addBinding:(id)arg1 fromObject:(id)arg2;
- (id)init;

@end
