//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicCarDisplayUI/MCDButton.h>

@class UIColor;

@interface MCDLabelButton : MCDButton
{
    UIColor *_disabledTextColor;
}

@property(retain, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor=_disabledTextColor;
- (void).cxx_destruct;
- (id)colorForKnobFocusLayer;
- (void)setEnabled:(_Bool)arg1;
- (id)tintColor;
- (void)updateButtonOpacityForKnobUnfocused;

@end

