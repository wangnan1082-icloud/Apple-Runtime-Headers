//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDTransformGradient.h>

#import <TSReading/TSDGradientStopContainer-Protocol.h>

@class NSArray, NSString, TSUColor;

@interface TSDMutableTransformGradient : TSDTransformGradient <TSDGradientStopContainer>
{
}

- (void)setGradientAngleInDegrees:(double)arg1;
- (void)upgradeIfNecessaryWithBaseNaturalSize:(struct CGSize)arg1;
- (void)setEndPoint:(struct CGPoint)arg1 inShapeWithNaturalSize:(struct CGSize)arg2;
- (void)setStartPoint:(struct CGPoint)arg1 inShapeWithNaturalSize:(struct CGSize)arg2;
@property(retain, nonatomic) TSUColor *lastColor;
@property(retain, nonatomic) TSUColor *firstColor;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
@property(nonatomic) unsigned long long gradientType; // @dynamic gradientType;
- (void)evenlyDistributeStops;
- (void)reverseStopOrder;
- (id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (id)insertStopAtFraction:(double)arg1;
- (id)removeStopAtIndex:(unsigned long long)arg1;
- (void)removeStop:(id)arg1;
- (void)insertGradientStop:(id)arg1;
@property(retain, nonatomic) NSArray *gradientStops; // @dynamic gradientStops;

// Remaining properties
@property(nonatomic) struct CGSize baseNaturalSize; // @dynamic baseNaturalSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGPoint endPoint; // @dynamic endPoint;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAdvancedGradient; // @dynamic isAdvancedGradient;
@property(nonatomic) double opacity; // @dynamic opacity;
@property(nonatomic) struct CGPoint startPoint; // @dynamic startPoint;
@property(readonly) Class superclass;

@end

