//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSPredicateOperator.h>

@interface NSStringPredicateOperator : NSPredicateOperator
{
    unsigned int _flags;
}

+ (_Bool)supportsSecureCoding;
- (unsigned int)options;
- (void)_setOptions:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)flags;
- (id)_modifierString;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 variant:(unsigned int)arg3;

@end
