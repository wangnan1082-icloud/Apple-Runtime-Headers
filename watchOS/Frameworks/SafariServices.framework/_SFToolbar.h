//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class NSString, UIView, _UIBackdropView, _UIBackdropViewSettings;

@interface _SFToolbar : UIToolbar
{
    _UIBackdropView *_backgroundView;
    _UIBackdropViewSettings *_customBackdropSettings;
    UIView *_separator;
    _Bool _usesDarkTheme;
    int _placement;
    unsigned int _tintStyle;
}

@property(nonatomic) unsigned int tintStyle; // @synthesize tintStyle=_tintStyle;
@property(readonly, nonatomic) int placement; // @synthesize placement=_placement;
- (void).cxx_destruct;
- (void)updateBackdropSettings:(id)arg1;
- (_Bool)_tintUsesDarkTheme;
- (void)updateTintColor;
- (id)_backdropInputSettings;
@property(copy, nonatomic) NSString *backdropGroupName;
- (void)layoutSubviews;
@property(readonly, nonatomic) float URLFieldHorizontalMargin;
@property(readonly, nonatomic) int toolbarSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithPlacement:(int)arg1;

@end

