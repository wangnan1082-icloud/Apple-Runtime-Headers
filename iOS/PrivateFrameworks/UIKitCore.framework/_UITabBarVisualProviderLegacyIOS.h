//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UITabBarVisualProvider.h>

@class UIMotionEffect, UIScrollView, UIView, _UIBarBackground;

__attribute__((visibility("hidden")))
@interface _UITabBarVisualProviderLegacyIOS : _UITabBarVisualProvider
{
    _UIBarBackground *_backgroundView;
    UIView *_customBackgroundView;
    UIView *_accessoryView;
    UIScrollView *_itemsScrollView;
    UIView *_focusedItemHighlightView;
    UIMotionEffect *_focusedItemHighlightMotionEffect;
    _Bool _usingHorizontalLayout;
}

- (void).cxx_destruct;
- (id)_focusedItemHighlightView;
- (void)_shim_updateTabBarItemView:(id)arg1;
- (void)_shim_layoutItemsOnly;
- (void)_shim_setBackdropGroupName:(id)arg1;
- (id)_shim_backdropGroupName;
- (void)_shim_updateBackdropView;
- (void)_shim_updateFocusHighlightVisibility;
- (id)_shim_shadowView;
- (id)_shim_accessoryView;
- (void)_shim_setAccessoryView:(id)arg1;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)_focusedItemHighlightViewIsVisible;
- (void)_updateFocusedItemHighlightViewWithInterfaceStyle:(long long)arg1 visible:(_Bool)arg2;
- (void)_setFocusedItemHightlightVisible:(_Bool)arg1;
- (void)_updateFocusedItemHighlightFrame;
- (void)_updateHighlightMotionEffect;
- (id)preferredFocusedView;
- (id)_preferredFocusedViewATV;
- (id)_preferredFocusedViewCarplay;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tabBarSizeChanged:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateBackground;
- (void)_cleanupAdaptiveBackdrop;
- (void)_layoutTabBarItems;
- (void)_determineHorizontalLayout;
- (void)_configureItems:(id)arg1;
- (id)_parentViewForItems;
- (void)_updateAccessoryView;
- (struct CGRect)_shadowFrameForBounds:(struct CGRect)arg1 height:(double)arg2;
- (struct CGRect)_layoutRegion;
- (struct CGSize)intrinsicContentSizeGivenSize:(struct CGSize)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (id)createViewForTabBarItem:(id)arg1;
- (void)changeLayout;
- (void)changeAppearance;
- (void)changeSelectedItem:(id)arg1 fromItem:(id)arg2;
- (id)exchangeItem:(id)arg1 withItem:(id)arg2;
- (void)_applyAppearanceCustomizationsToItem:(id)arg1;
- (void)changeItemsTo:(id)arg1 removingItems:(id)arg2 selectedItem:(id)arg3 animate:(_Bool)arg4;
- (void)teardown;
- (void)prepare;

@end

