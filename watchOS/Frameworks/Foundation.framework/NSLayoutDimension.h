//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSLayoutAnchor.h>

@interface NSLayoutDimension : NSLayoutAnchor
{
}

- (_Bool)isCompatibleWithAnchor:(id)arg1;
- (_Bool)validateOtherAttribute:(int)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(float)arg2 constant:(float)arg3;
- (id)constraintLessThanOrEqualToConstant:(float)arg1;
- (id)constraintGreaterThanOrEqualToConstant:(float)arg1;
- (id)constraintEqualToConstant:(float)arg1;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(float)arg2;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(float)arg2;
- (id)ruleLessThanOrEqualToConstant:(float)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)ruleGreaterThanOrEqualToConstant:(float)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)ruleEqualToConstant:(float)arg1 priority:(float)arg2 identifier:(id)arg3;
- (id)ruleGreaterThanOrEqualToConstant:(float)arg1;
- (id)ruleLessThanOrEqualToConstant:(float)arg1;
- (id)ruleEqualToConstant:(float)arg1;
- (id)minusDimension:(id)arg1;
- (id)plusDimension:(id)arg1;
- (id)plus:(float)arg1;
- (id)times:(float)arg1;
- (id)anchorBySubtractingDimension:(id)arg1;
- (id)anchorByAddingDimension:(id)arg1;
- (id)anchorByAddingConstant:(float)arg1;
- (id)anchorByMultiplyingByConstant:(float)arg1;

@end
