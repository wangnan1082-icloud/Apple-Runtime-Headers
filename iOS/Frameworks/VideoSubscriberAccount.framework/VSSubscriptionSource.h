//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding>
{
    long long _kind;
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)subscriptionSourceForAppWithBundleID:(id)arg1;
+ (id)subscriptionSourceForWebsiteWithDomainName:(id)arg1;
+ (id)subscriptionSourceForWebsiteWithURL:(id)arg1;
+ (id)currentSource;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long kind; // @synthesize kind=_kind;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
