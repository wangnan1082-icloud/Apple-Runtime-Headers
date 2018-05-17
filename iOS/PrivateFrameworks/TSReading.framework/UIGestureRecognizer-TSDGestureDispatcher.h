//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIGestureRecognizer.h"

#import "TSDGesture.h"

@class NSString, TSDRep;

@interface UIGestureRecognizer (TSDGestureDispatcher) <TSDGesture>
- (_Bool)isDone;
@property(readonly, nonatomic) int gestureState;
@property(nonatomic) id <TSDGestureDelegate> gestureDelegate;
- (struct CGPoint)naturalLocationForRep:(id)arg1;
- (struct CGPoint)boundsLocationForICC:(id)arg1;
- (struct CGPoint)unscaledLocationForICC:(id)arg1;
@property(retain, nonatomic) TSDRep *targetRep;
@property(retain, nonatomic) id <TSDGestureTarget> cachedGestureTarget;
@property(retain, nonatomic) NSString *gestureKind;
- (id)initWithGestureDispatcher:(id)arg1 gestureKind:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
