//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (AVAdditions)
- (_Bool)avkit_isInAWindowAndVisible;
- (void)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 bestSoFar:(inout id *)arg3 shortestDistanceSoFar:(inout double *)arg4;
- (id)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)avkit_isDescendantOfViewPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)avkit_isAncestorOfViewPassingTest:(CDUnknownBlockType)arg1;
- (id)avkit_ancestorViewPassingTest:(CDUnknownBlockType)arg1;
@end

