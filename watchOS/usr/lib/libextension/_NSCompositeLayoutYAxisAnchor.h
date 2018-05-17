//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSLayoutYAxisAnchor.h>

#import "NSCompositeLayoutAnchor.h"

@class NSArray, NSLayoutDimension;

@interface _NSCompositeLayoutYAxisAnchor : NSLayoutYAxisAnchor <NSCompositeLayoutAnchor>
{
    NSLayoutYAxisAnchor *_yAxisAnchor;
    float _constant;
    float _dimensionMultiplier;
    NSLayoutDimension *_dimension;
}

@property(readonly) NSArray *_childAnchors;
- (id)equationDescription;
- (float)_valueInEngine:(id)arg1;
- (id)_expressionInContext:(CDStruct_c22e37be)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithAnchor:(id)arg1;
- (id)initWithAnchor:(id)arg1 plusDimension:(id)arg2 times:(float)arg3 plus:(float)arg4;

@end
