//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface CAMZoomFactorLabel : UIView
{
    double _zoomFactor;
    NSString *_contentSizeCategory;
    UILabel *__label;
}

@property(readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property(copy, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct UIEdgeInsets)_labelInsets;
- (struct CGSize)intrinsicContentSize;
- (void)_updateFont;
- (id)initWithFrame:(struct CGRect)arg1;

@end
