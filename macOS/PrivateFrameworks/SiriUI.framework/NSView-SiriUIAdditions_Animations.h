//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface NSView (SiriUIAdditions_Animations)
- (void)siriui_cancelAnimationsForKey:(id)arg1;
- (void)siriui_animateKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 delay:(double)arg4 duration:(double)arg5 name:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)siriui_animateHide:(BOOL)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)siriui_animateToAlpha:(double)arg1 duration:(double)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)siriui_animateFade:(BOOL)arg1 duration:(double)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)siriui_animateTranslationFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 duration:(double)arg3 delay:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)siriui_hide:(BOOL)arg1 animate:(BOOL)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
@end

