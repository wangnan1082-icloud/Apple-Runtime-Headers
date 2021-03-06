//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIColor;

@interface AXHAStepSlider : UISlider
{
    _Bool _restrictsValuesToTicks;
    unsigned int _segmentCount;
    UIColor *_tickColor;
}

@property(retain, nonatomic) UIColor *tickColor; // @synthesize tickColor=_tickColor;
@property(nonatomic) _Bool restrictsValuesToTicks; // @synthesize restrictsValuesToTicks=_restrictsValuesToTicks;
@property(nonatomic) unsigned int segmentCount; // @synthesize segmentCount=_segmentCount;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned int)arg1;
- (unsigned int)numberOfTicks;
- (void)sliderTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

