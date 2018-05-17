//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, UITextRange, _UIPositionedAttributedString;

@protocol UITextPasteSession <NSObject>
@property(nonatomic) __weak id <UITextPasteSessionDelegate> delegate;
@property(readonly, nonatomic) NSAttributedString *pasteResult;
@property(readonly, nonatomic, getter=isPastingBlocked) _Bool pastingBlocked;
@property(readonly, nonatomic) UITextRange *range;
- (_UIPositionedAttributedString *)positionedPasteResult;
- (void)pasteWithAnimator:(id <UITextPasteAnimating>)arg1;
@end
