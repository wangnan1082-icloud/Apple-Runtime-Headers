//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "MKMultilineText.h"

@class MKMultiPartAttributedString, NSColor, NSDictionary, NSFont, NSString, NSTextView, _MKMultiPartLabelMetrics;

@interface MKMultiPartLabel : NSView <MKMultilineText>
{
    NSTextView *_textView;
    struct CGRect _previousBounds;
    NSDictionary *_cachedTextAttributes;
    double _preferredMaxLayoutWidth;
    MKMultiPartAttributedString *_multiPartString;
    NSFont *_font;
    NSColor *_textColor;
    unsigned long long _textAlignment;
    _MKMultiPartLabelMetrics *_data;
}

@property(retain, nonatomic) _MKMultiPartLabelMetrics *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(retain, nonatomic) MKMultiPartAttributedString *multiPartString; // @synthesize multiPartString=_multiPartString;
- (void).cxx_destruct;
- (struct CGRect)frameForAlignmentRect:(struct CGRect)arg1;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1;
@property double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
- (double)lastBaselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;
- (struct CGSize)intrinsicContentSize;
- (void)setContentHuggingPriority:(float)arg1 forOrientation:(long long)arg2;
- (void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (id)_addDefaultAttributesToAttributedString:(id)arg1;
- (id)_attributedAjudstedMultiPartStringFromString:(id)arg1;
- (void)_updateTextViewTextAndInvalidateLayout:(id)arg1;
- (void)_updateStrings;
@property(retain, nonatomic) NSString *text;
- (id)_textAttributes;
@property(nonatomic) unsigned long long lineBreakMode;
@property(nonatomic) unsigned long long numberOfLines;
- (void)_setupTextView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
