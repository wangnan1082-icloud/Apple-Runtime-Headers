//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface CAMBadgeView : UIView
{
    id <CAMBadgeViewDelegate> _delegate;
    float __fillCornerRadius;
    UIColor *__fillColor;
    UIColor *__contentColor;
}

@property(retain, nonatomic, setter=_setContentColor:) UIColor *_contentColor; // @synthesize _contentColor=__contentColor;
@property(retain, nonatomic, setter=_setFillColor:) UIColor *_fillColor; // @synthesize _fillColor=__fillColor;
@property(nonatomic, setter=_setFillCornerRadius:) float _fillCornerRadius; // @synthesize _fillCornerRadius=__fillCornerRadius;
@property(nonatomic) __weak id <CAMBadgeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_maskImage;
- (id)_invertMaskImage:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
