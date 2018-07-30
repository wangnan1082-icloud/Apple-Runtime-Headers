//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, UITapGestureRecognizer;

@interface WGExplanatoryView : UIView
{
    UIImageView *_glyphView;
    UILabel *_label;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
- (void)_configureExplanationLabelWithExplanation:(id)arg1;
- (void)_configureGlyphViewWithGlyph:(id)arg1;
- (void)_updateStyleForLabel;
- (void)_updateStyleForGlyphView;
- (id)_vibrantStyling;
- (void)_backgroundContrastDidChange:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithGlyph:(id)arg1 andExplanation:(id)arg2;

@end
