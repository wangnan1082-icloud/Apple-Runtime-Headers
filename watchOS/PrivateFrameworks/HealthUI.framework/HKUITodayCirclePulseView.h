//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, HKUITodayCirclePulseBackground;

@interface HKUITodayCirclePulseView : UIView
{
    UIView *_backgroundContainer;
    HKUITodayCirclePulseBackground *_background;
    CALayer *_dayLabel;
    float _circleDiameter;
}

@property(nonatomic) float circleDiameter; // @synthesize circleDiameter=_circleDiameter;
- (void).cxx_destruct;
- (void)pulse:(CDUnknownBlockType)arg1;
- (void)_layoutSubviews;
- (void)setDayLabelContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
