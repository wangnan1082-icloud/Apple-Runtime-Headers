//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString, UIColor, UIImage, VUITextBadgeLayout;

__attribute__((visibility("hidden")))
@interface VUITextBadgeView : UIView
{
    double _strokeSize;
    UIImage *_backgroundImage;
    VUITextBadgeLayout *_badgeLayout;
    NSAttributedString *_attributedTitle;
    UIColor *_tintColor;
}

@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(retain, nonatomic) VUITextBadgeLayout *badgeLayout; // @synthesize badgeLayout=_badgeLayout;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) double strokeSize; // @synthesize strokeSize=_strokeSize;
- (void).cxx_destruct;
- (struct CGSize)_textSize;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)reset;
- (void)setText:(id)arg1 withBadgeLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

