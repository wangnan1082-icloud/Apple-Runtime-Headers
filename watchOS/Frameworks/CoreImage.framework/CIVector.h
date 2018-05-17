//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface CIVector : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long _count;
    union {
        float vec[4];
        float *ptr;
    } _u;
}

+ (_Bool)supportsSecureCoding;
+ (id)vectorWithString:(id)arg1;
+ (id)vectorWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)vectorWithCGRect:(struct CGRect)arg1;
+ (id)vectorWithCGPoint:(struct CGPoint)arg1;
+ (id)vectorWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3 W:(float)arg4;
+ (id)vectorWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
+ (id)vectorWithX:(float)arg1 Y:(float)arg2;
+ (id)vectorWithX:(float)arg1;
+ (id)vectorWithValues:(const float *)arg1 count:(unsigned long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly) NSString *stringRepresentation;
@property(readonly) struct CGAffineTransform CGAffineTransformValue;
@property(readonly) struct CGRect CGRectValue;
@property(readonly) struct CGPoint CGPointValue;
@property(readonly) float W;
@property(readonly) float Z;
@property(readonly) float Y;
@property(readonly) float X;
- (float)valueAtIndex:(unsigned long)arg1;
@property(readonly) unsigned long count;
- (void)finalize;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (id)initWithValues:(const float *)arg1 count:(unsigned long)arg2;
- (id)initWithCGAffineTransform:(struct CGAffineTransform)arg1;
- (id)initWithCGRect:(struct CGRect)arg1;
- (id)initWithCGPoint:(struct CGPoint)arg1;
- (id)initWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3 W:(float)arg4;
- (id)initWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (id)initWithX:(float)arg1 Y:(float)arg2;
- (id)initWithX:(float)arg1;
- (id)init;
@property(readonly) float *_values;

@end
