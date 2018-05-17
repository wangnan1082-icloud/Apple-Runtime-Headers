//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NLExperimentalCondition;

@interface NLExperimentInstance : NSObject <NSCopying, NSSecureCoding>
{
    NLExperimentalCondition *_experimentalCondition;
    int _value;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int value; // @synthesize value=_value;
@property(readonly, nonatomic) NLExperimentalCondition *experimentalCondition; // @synthesize experimentalCondition=_experimentalCondition;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)testShouldSkipDailyProgressAlert;
- (_Bool)testShouldSkipSedentaryAlert;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExperimentalCondition:(id)arg1 value:(int)arg2;

@end
