//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIVisualEffectView.h"

@class UIView;

@interface SiriUIVisualEffectView : UIVisualEffectView
{
    UIView *_customView;
}

@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
- (void).cxx_destruct;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
