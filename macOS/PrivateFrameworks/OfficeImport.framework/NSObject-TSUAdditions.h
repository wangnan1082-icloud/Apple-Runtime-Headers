//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (TSUAdditions)
+ (BOOL)tsu_object:(id)arg1 isEqualToObject:(id)arg2;
+ (BOOL)tsu_overridesClassSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
+ (BOOL)tsu_overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
- (void)tsu_removeObserverForToken:(id)arg1;
- (id)tsu_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)tsu_performSelector:(SEL)arg1 withValue:(id)arg2;
@end

