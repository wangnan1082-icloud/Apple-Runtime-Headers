//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject-Protocol.h>

@class NSString;

@interface NSObject <NSObject>
{
    Class isa;
}

+ (id)mutableCopyWithZone:(struct _NSZone *)arg1;
+ (id)mutableCopy;
+ (id)copyWithZone:(struct _NSZone *)arg1;
+ (id)copy;
+ (struct _NSZone *)zone;
+ (void)dealloc;
+ (id)init;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (unsigned long long)retainCount;
+ (id)autorelease;
+ (oneway void)release;
+ (BOOL)retainWeakReference;
+ (BOOL)allowsWeakReference;
+ (BOOL)_isDeallocating;
+ (BOOL)_tryRetain;
+ (id)retain;
+ (id)new;
+ (id)debugDescription;
+ (id)description;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (void)forwardInvocation:(id)arg1;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (id)performSelector:(SEL)arg1;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (CDUnknownFunctionPointerType)methodForSelector:(SEL)arg1;
+ (CDUnknownFunctionPointerType)instanceMethodForSelector:(SEL)arg1;
+ (BOOL)isProxy;
+ (BOOL)isFault;
+ (BOOL)isEqual:(id)arg1;
+ (unsigned long long)hash;
+ (BOOL)conformsToProtocol:(id)arg1;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)isAncestorOfObject:(id)arg1;
+ (BOOL)isSubclassOfClass:(Class)arg1;
+ (BOOL)isKindOfClass:(Class)arg1;
+ (BOOL)isMemberOfClass:(Class)arg1;
+ (Class)superclass;
+ (Class)class;
+ (id)self;
+ (void)initialize;
+ (void)load;
- (id)mutableCopy;
- (id)copy;
- (struct _NSZone *)zone;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)retain;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (CDUnknownFunctionPointerType)methodForSelector:(SEL)arg1;
- (BOOL)isProxy;
- (BOOL)isFault;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)conformsToProtocol:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
@property(readonly) Class superclass;
- (Class)class;
- (id)self;

@end

