//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FCTagRanking.h"

@class FCFeedPersonalizedArticles, NSArray, NSString;

@protocol FCFeedPersonalizing <FCTagRanking>
- (double)decayedPublisherDiversificationPenalty;
- (unsigned long long)whitelistLevelForTagID:(NSString *)arg1;
- (void)prepareAutoFavoritesWithCompletionHandler:(void (^)(void))arg1;
- (void)prepareForUseWithCompletionHandler:(void (^)(void))arg1;
- (NSArray *)limitArticlesByFlowRate:(NSArray *)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (NSArray *)limitArticlesByMinimumArticleQuality:(NSArray *)arg1;
- (NSArray *)diversifyArticles:(NSArray *)arg1 limit:(unsigned long long)arg2 preselectedArticles:(NSArray *)arg3;
- (NSArray *)diversifyArticles:(NSArray *)arg1 limit:(unsigned long long)arg2;
- (FCFeedPersonalizedArticles *)sortArticles:(NSArray *)arg1 options:(long long)arg2;
- (FCFeedPersonalizedArticles *)sortArticles:(NSArray *)arg1;
@end
