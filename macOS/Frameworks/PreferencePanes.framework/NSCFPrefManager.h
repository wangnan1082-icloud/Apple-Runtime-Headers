//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface NSCFPrefManager : NSObject
{
    NSMutableDictionary *_registeredDefaults;
}

+ (id)standardPrefManager;
- (void).cxx_destruct;
- (void)copyCurrentUserPrefsToMachinePrefsForDomain:(id)arg1;
- (void)deleteValueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (float)floatForKey:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (BOOL)booleanForKey:(id)arg1;
- (void)setBoolean:(BOOL)arg1 forKey:(id)arg2;
- (void)deleteValueForKey:(id)arg1 inDomain:(id)arg2;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (id)stringForKey:(id)arg1 inDomain:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (double)doubleForKey:(id)arg1 inDomain:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (float)floatForKey:(id)arg1 inDomain:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (long long)integerForKey:(id)arg1 inDomain:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (BOOL)booleanForKey:(id)arg1 inDomain:(id)arg2;
- (void)setBoolean:(BOOL)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (void)synchronizeDomain:(id)arg1;
- (void)synchronize;
- (void)registerDefaults:(id)arg1 forDomain:(id)arg2;
- (id)init;
- (void *)_copyValueForKey:(id)arg1 inDomain:(id)arg2;

@end
