//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, TVCKDataQuery;

@protocol TVCKCloudQueryHandler
+ (NSString *)mlPropertyForATVProperty:(NSString *)arg1;
+ (NSString *)mlPredicatePropertyForATVProperty:(NSString *)arg1;
+ (NSString *)mlQueryPropertyForATVProperty:(NSString *)arg1;
- (void)handleQuery:(TVCKDataQuery *)arg1 withContext:(void *)arg2;
@end
