//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSArray, NSDate;

@interface FCTopStoriesFeedGroupCursor : FCFeedGroupEmittingCursor
{
    _Bool _collapsed;
    NSDate *_version;
    NSArray *_articleIDs;
    NSDate *_optionalStoriesLastRefreshDate;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(copy, nonatomic) NSDate *optionalStoriesLastRefreshDate; // @synthesize optionalStoriesLastRefreshDate=_optionalStoriesLastRefreshDate;
@property(copy, nonatomic) NSArray *articleIDs; // @synthesize articleIDs=_articleIDs;
@property(copy, nonatomic) NSDate *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
