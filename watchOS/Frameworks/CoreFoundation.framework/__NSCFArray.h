//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSMutableArray.h>

__attribute__((visibility("hidden")))
@interface __NSCFArray : NSMutableArray
{
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)retainCount;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (Class)classForCoder;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_c73467ff *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;

@end
