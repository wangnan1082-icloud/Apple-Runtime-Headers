//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface RDLockedDictionary : NSMutableDictionary
{
    NSMutableDictionary *m_dictionary;
    int m_spinlock;
}

+ (id)dictionaryWithCapacity:(unsigned long long)arg1;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)dictionaryWithObjects:(id *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionaryWithContentsOfURL:(id)arg1;
+ (id)dictionaryWithContentsOfFile:(id)arg1;
+ (id)dictionary;
- (void).cxx_destruct;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)setDictionary:(id)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeAllObjects;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithObjectsAndKeys:(id)arg1;
- (id)initWithObjects:(id *)arg1 forKeys:(id *)arg2 count:(unsigned long long)arg3;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (Class)classForCoder;
- (void)dealloc;
- (id)init;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (id)objectEnumerator;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionInStringsFileFormat;
- (id)description;
- (id)allValues;
- (id)allKeysForObject:(id)arg1;
- (id)allKeys;
- (id)objectForKey:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (unsigned long long)count;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

