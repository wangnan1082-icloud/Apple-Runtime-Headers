//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WLKContentRating : NSObject
{
    unsigned int _contentRatingSystem;
    NSString *_displayName;
    unsigned int _ratingValue;
}

+ (unsigned int)_ratingSystemForString:(id)arg1;
+ (Class)_classForContentRatingSystem:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int ratingValue; // @synthesize ratingValue=_ratingValue;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) unsigned int contentRatingSystem; // @synthesize contentRatingSystem=_contentRatingSystem;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

