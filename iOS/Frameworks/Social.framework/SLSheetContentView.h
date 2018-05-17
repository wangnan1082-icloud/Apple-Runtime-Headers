//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSMutableDictionary, SLSheetTextComposeView, UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface SLSheetContentView : UIView
{
    SLSheetTextComposeView *_textComposeView;
    NSMutableArray *_constraints;
    NSMutableDictionary *_intrinsicSizes;
    double _previewTopMargin;
    double _textViewTopMargin;
    UIView *_bottomSeparator;
    UIView *_autoCompletionModeSeparator;
    _Bool _autoCompletionMode;
    double _autoCompletionTextViewHeight;
    UIView *_previewView;
    UIView *_accessoryView;
}

@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UIView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (void)endAutoCompletionMode;
- (void)beginAutoCompletionMode;
- (void)preflightAutoCompletionModeWithApparentHeight:(double)arg1;
- (void)adjustComposeViewForPreview;
- (void)layoutSubviews;
- (void)updateTextViewMargin;
- (void)updatePreviewMargin;
- (double)_textTopMarginForContentSize:(struct CGSize)arg1;
- (double)_previewMarginForContentSize:(struct CGSize)arg1;
- (void)resetPreview;
- (void)_resetAccessoryView;
@property(readonly, nonatomic) UILabel *placeholderLabel;
@property(readonly, nonatomic) UITextView *textView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setIntrinsicSize:(struct CGSize)arg1 forVerticalSizeClass:(long long)arg2;
- (void)_setConstraints;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (void)_setupConstraints;
- (void)_setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
