//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NetworkExtension/NEOnDemandRule.h>

@class NSArray;

@interface NEOnDemandRuleEvaluateConnection : NEOnDemandRule
{
    NSArray *_connectionRules;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSArray *connectionRules; // @synthesize connectionRules=_connectionRules;
- (void).cxx_destruct;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
