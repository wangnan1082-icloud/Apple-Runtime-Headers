//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCRPreferences : NSObject
{
}

+ (void)_setValue:(id)arg1 forKey:(id)arg2;
+ (id)_valueForKey:(id)arg1;
+ (int)_intForKey:(id)arg1;
+ (float)_floatForKey:(id)arg1;
+ (long long)_integerForKey:(id)arg1;
+ (id)stringForKey:(id)arg1;
+ (void)_setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
+ (void)setFloat:(float)arg1 forKey:(id)arg2;
+ (void)setInteger:(long long)arg1 forKey:(id)arg2;
+ (void)setString:(id)arg1 forKey:(id)arg2;
+ (unsigned long long)groupingBehavior;
+ (void)setVOModifier:(unsigned long long)arg1;
+ (unsigned long long)voModifier;

@end

