//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSString;

@protocol _CDStringKeyDataValueStoring
- (NSArray *)allKeys;
- (BOOL)removeDataForKeys:(NSArray *)arg1;
- (BOOL)removeDataForKey:(NSString *)arg1;
- (BOOL)setData:(NSData *)arg1 forKey:(NSString *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (BOOL)setData:(NSData *)arg1 forKey:(NSString *)arg2;
- (NSData *)dataForKey:(NSString *)arg1;
@end
