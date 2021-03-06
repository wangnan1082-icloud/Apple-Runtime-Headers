//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, TIKeyboardBehaviors, TIKeyboardCandidate, TIKeyboardCandidateResultSet, TIKeyboardSecureCandidateRenderTraits;
@protocol UIKeyboardCandidateListDelegate;

@protocol UIKeyboardCandidateList <NSObject>
- (unsigned int)selectedSortIndex;
- (NSString *)statisticsIdentifier;
- (TIKeyboardBehaviors *)keyboardBehaviors;
- (_Bool)hasCandidates;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (unsigned int)currentIndex;
- (TIKeyboardCandidate *)currentCandidate;
- (void)showCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (_Bool)showCandidate:(TIKeyboardCandidate *)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id <UIKeyboardCandidateListDelegate>)arg1;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg1 inlineText:(NSString *)arg2 inlineRect:(struct CGRect)arg3 maxX:(float)arg4 layout:(_Bool)arg5;
- (_Bool)isFloatingList;
- (_Bool)isExtendedList;

@optional
- (TIKeyboardSecureCandidateRenderTraits *)secureCandidateRenderTraits;
- (unsigned int)rowForCandidateAtIndex:(unsigned int)arg1;
- (unsigned int)viewOffsetForCandidateAtIndex:(unsigned int)arg1;
- (NSString *)inlineText;
- (TIKeyboardCandidateResultSet *)candidates;
- (void)revealHiddenCandidates;
- (void)jumpToCompositions;
- (void)candidatesDidChange;
- (_Bool)hasCandidateInForwardDirection:(_Bool)arg1 granularity:(int)arg2;
- (_Bool)handleTabKeyWithShift:(_Bool)arg1;
- (_Bool)handleNumberKey:(unsigned int)arg1;
- (void)showCaret:(_Bool)arg1 gradually:(_Bool)arg2;
- (void)setInlineText:(NSString *)arg1;
- (void)setCandidates:(TIKeyboardCandidateResultSet *)arg1 type:(int)arg2 inlineText:(NSString *)arg3 inlineRect:(struct CGRect)arg4 maxX:(float)arg5 layout:(_Bool)arg6;
@end

