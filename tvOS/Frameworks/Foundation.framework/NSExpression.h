//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSPredicate, NSString;

@interface NSExpression : NSObject <NSSecureCoding, NSCopying>
{
    struct _expressionFlags {
        unsigned int _evaluationBlocked:1;
        unsigned int _reservedExpressionFlags:31;
    } _expressionFlags;
    unsigned int reserved;
    unsigned long long _expressionType;
}

+ (_Bool)supportsSecureCoding;
+ (id)expressionForAnyKey;
+ (id)expressionForBlock:(CDUnknownBlockType)arg1 arguments:(id)arg2;
+ (id)expressionForMinusSet:(id)arg1 with:(id)arg2;
+ (id)expressionForIntersectSet:(id)arg1 with:(id)arg2;
+ (id)expressionForUnionSet:(id)arg1 with:(id)arg2;
+ (id)expressionForFunction:(id)arg1 arguments:(id)arg2;
+ (id)expressionForKeyPath:(id)arg1;
+ (id)_newKeyPathExpressionForString:(id)arg1;
+ (id)expressionForConditional:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;
+ (id)expressionForTernaryWithPredicate:(id)arg1 trueExpression:(id)arg2 falseExpression:(id)arg3;
+ (id)expressionForVariableNameAssignment:(id)arg1 expression:(id)arg2;
+ (id)expressionForFunction:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
+ (id)expressionForSubquery:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;
+ (id)expressionForAggregate:(id)arg1;
+ (id)expressionForSymbolicString:(id)arg1;
+ (id)expressionForVariable:(id)arg1;
+ (id)expressionForEvaluatedObject;
+ (id)expressionForConstantValue:(id)arg1;
+ (id)expressionWithFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)expressionWithFormat:(id)arg1;
+ (id)expressionWithFormat:(id)arg1 argumentArray:(id)arg2;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (_Bool)_shouldUseParensWithDescription;
@property(readonly, copy) CDUnknownBlockType expressionBlock;
@property(readonly, copy) NSExpression *falseExpression;
@property(readonly, copy) NSExpression *trueExpression;
- (id)subexpression;
@property(readonly, retain) id collection;
@property(readonly, copy) NSPredicate *predicate;
@property(readonly, copy) NSExpression *rightExpression;
@property(readonly, copy) NSExpression *leftExpression;
@property(readonly, copy) NSArray *arguments;
- (SEL)selector;
@property(readonly, copy) NSExpression *operand;
@property(readonly, copy) NSString *function;
@property(readonly, copy) NSString *variable;
@property(readonly, retain) id constantValue;
@property(readonly, copy) NSString *keyPath;
@property(readonly) unsigned long long expressionType;
- (id)predicateFormat;
- (id)description;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)allowEvaluation;
- (_Bool)_allowsEvaluation;
- (id)initWithExpressionType:(unsigned long long)arg1;

@end
