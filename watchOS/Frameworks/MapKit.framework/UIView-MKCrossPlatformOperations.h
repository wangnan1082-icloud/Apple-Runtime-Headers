//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (MKCrossPlatformOperations)
+ (void)_mapkit_animateFromCurrentStateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_mapkit_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)_maps_setDoesNotTranslateAutoresizingConstraintsForViewsDictionary:(id)arg1;
- (_Bool)_mapkit_YCoordinate:(float)arg1 liesInDirection:(int)arg2 startingFromYCoordinate:(float)arg3;
- (float)_mapkit_YCoordinateAtDistance:(float)arg1 inDirection:(int)arg2 fromYCoordinate:(float)arg3;
- (struct CGRect)_mapkit_rectWithSize:(struct CGSize)arg1 XCoordinate:(float)arg2 atDistance:(float)arg3 inDirection:(int)arg4 fromEdge:(int)arg5;
- (float)_mapkit_YCoordinateAtDistance:(float)arg1 inDirection:(int)arg2 fromEdge:(int)arg3;
- (id)_mapkit_constraintsPinningSubviewToBounds:(id)arg1;
- (_Bool)_mapkit_isDescendantOfView:(id)arg1;
- (void)_mapkit_setContentHuggingPriority:(float)arg1 forAxis:(int)arg2;
- (float)_mapkit_contentHuggingPriorityForAxis:(int)arg1;
- (void)_mapkit_setContentCompressionResistancePriority:(float)arg1 forAxis:(int)arg2;
- (float)_mapkit_contentCompressionResistancePriorityForAxis:(int)arg1;
- (struct CGSize)_mapkit_sizeThatFits:(struct CGSize)arg1;
- (void)_mapkit_sizeToFit;
- (void)_mapkit_insertSubviewBelowAllOtherSubviews:(id)arg1;
- (void)_mapkit_insertSubviewAboveAllOtherSubviews:(id)arg1;
- (_Bool)_mapkit_isRTL;
- (void)_mapKit_setNeedsDisplay;
- (struct CGSize)_mapkit_fittingSize;
- (void)_mapkit_setBackgroundColor:(id)arg1;
- (void)_mapkit_layoutBelowIfNeeded;
- (void)_mapkit_layoutIfNeeded;
- (void)_mapkit_updateConstraintsIfNeeded;
- (void)_mapkit_setNeedsLayout;
- (void)_mapkit_setNeedsUpdateConstraints;
@end

