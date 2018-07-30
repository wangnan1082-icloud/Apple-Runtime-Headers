//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, PXViewLayoutHelper, UIImageView, UILabel;

@interface PXCMMTranscriptBubbleFooterView : UIView
{
    PXViewLayoutHelper *_layoutHelper;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_chevronImageView;
}

+ (double)desiredHeight;
+ (double)_secondaryBaselineToBottomSpacing;
+ (double)_primaryToSecondaryBaselineSpacing;
+ (double)_topToPrimaryBaselineSpacing;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primaryText;
@property(nonatomic) _Bool chevronIsHidden;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
