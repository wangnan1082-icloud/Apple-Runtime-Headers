//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FCPersonalizationTreatment, NSArray, NSDictionary, NSOrderedSet, NSSet;

@protocol FCHeadlineClusterOrdering <NSObject>
- (NSOrderedSet *)orderTopicsWithClusteredHeadlines:(NSDictionary *)arg1 additionalHeadlines:(NSArray *)arg2 subscribedTagIDs:(NSSet *)arg3 scoresByArticleID:(NSDictionary *)arg4 personalizer:(id <FCFeedPersonalizing>)arg5 tagNameProvider:(NSString * (^)(NSString *))arg6 personalizationTreatment:(FCPersonalizationTreatment *)arg7;
@end
