//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UITextView;

@interface REUISiriShortcutContentView : UIView
{
    _Bool _hasImage;
    UITextView *_textView;
    UIImageView *_imageView;
}

+ (id)new;
@property(readonly, nonatomic) _Bool hasImage; // @synthesize hasImage=_hasImage;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (id)_attributedTextFromTitle:(id)arg1 description:(id)arg2;
- (void)layoutSubviews;
- (void)setTitle:(id)arg1 description:(id)arg2 image:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

