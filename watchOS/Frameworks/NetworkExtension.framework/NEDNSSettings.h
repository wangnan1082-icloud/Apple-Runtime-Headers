//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationLegacySupport.h"
#import "NEConfigurationValidating.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface NEDNSSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    _Bool _matchDomainsNoSearch;
    NSArray *_servers;
    NSArray *_searchDomains;
    NSString *_domainName;
    NSArray *_matchDomains;
}

+ (_Bool)supportsSecureCoding;
@property _Bool matchDomainsNoSearch; // @synthesize matchDomainsNoSearch=_matchDomainsNoSearch;
@property(copy) NSArray *matchDomains; // @synthesize matchDomains=_matchDomains;
@property(copy) NSString *domainName; // @synthesize domainName=_domainName;
@property(copy) NSArray *searchDomains; // @synthesize searchDomains=_searchDomains;
@property(readonly) NSArray *servers; // @synthesize servers=_servers;
- (void).cxx_destruct;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServers:(id)arg1;

@end
