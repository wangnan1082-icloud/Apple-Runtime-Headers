//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate, NSNumber, NSSet, NSString, TVCKBookmark;

@interface TVCKStoreLookupItem : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_ITunesStoreIdentifier;
    NSSet *_childrenIDs;
    NSSet *_childLookupItems;
    unsigned long long _itemKind;
    NSString *_seasonID;
    TVCKBookmark *_bookmark;
    NSDate *_releaseDate;
    double _duration;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) TVCKBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(copy, nonatomic) NSString *seasonID; // @synthesize seasonID=_seasonID;
@property(nonatomic) unsigned long long itemKind; // @synthesize itemKind=_itemKind;
@property(copy, nonatomic) NSSet *childLookupItems; // @synthesize childLookupItems=_childLookupItems;
@property(copy, nonatomic) NSSet *childrenIDs; // @synthesize childrenIDs=_childrenIDs;
@property(copy, nonatomic) NSNumber *ITunesStoreIdentifier; // @synthesize ITunesStoreIdentifier=_ITunesStoreIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
