//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary;

@interface FCArticleListEditorialMetadata : NSObject
{
    NSDate *_publishDate;
    NSDictionary *_articleMetadata;
}

@property(retain, nonatomic) NSDictionary *articleMetadata; // @synthesize articleMetadata=_articleMetadata;
@property(retain, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
