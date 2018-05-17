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

@class NSNumber, NSString;

@interface NEIPv6Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    NSString *_destinationAddress;
    NSNumber *_destinationNetworkPrefixLength;
    NSString *_gatewayAddress;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultRoute;
+ (void)initGlobals;
@property(copy) NSString *gatewayAddress; // @synthesize gatewayAddress=_gatewayAddress;
@property(readonly) NSNumber *destinationNetworkPrefixLength; // @synthesize destinationNetworkPrefixLength=_destinationNetworkPrefixLength;
@property(readonly) NSString *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned int)arg2;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isDefaultRoute;
- (id)initWithDestinationAddress:(id)arg1 networkPrefixLength:(id)arg2;

@end
