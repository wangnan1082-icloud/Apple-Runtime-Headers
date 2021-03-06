//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIUCBBarButtonVisualProviderIOS.h>

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS
{
    UIView *_selectionBackgroundView;
    UIColor *_selectionBackgroundTintColor;
    UIColor *_selectionTintColor;
}

@property(retain, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;
@property(retain, nonatomic) UIColor *selectionBackgroundTintColor; // @synthesize selectionBackgroundTintColor=_selectionBackgroundTintColor;
- (void).cxx_destruct;
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

