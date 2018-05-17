//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class CAGradientLayer, NSArray, NSDictionary, UIView;

@interface CMKModeDial : UIControl
{
    int _orientation;
    id <CMKModeDialDataSource> _dataSource;
    int _selectedMode;
    NSArray *__modes;
    NSDictionary *__items;
    UIView *__meshTransformView;
    CAGradientLayer *__maskLayer;
    UIView *__itemsContainerView;
}

@property(readonly, nonatomic) UIView *_itemsContainerView; // @synthesize _itemsContainerView=__itemsContainerView;
@property(readonly, nonatomic) CAGradientLayer *_maskLayer; // @synthesize _maskLayer=__maskLayer;
@property(readonly, nonatomic) UIView *_meshTransformView; // @synthesize _meshTransformView=__meshTransformView;
@property(retain, nonatomic, setter=_setItems:) NSDictionary *_items; // @synthesize _items=__items;
@property(retain, nonatomic, setter=_setModes:) NSArray *_modes; // @synthesize _modes=__modes;
@property(nonatomic) int selectedMode; // @synthesize selectedMode=_selectedMode;
@property(nonatomic) id <CMKModeDialDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) int orientation; // @synthesize orientation=_orientation;
- (void).cxx_destruct;
- (void)updateToContentSize:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_configureMeshTransformForOrientation:(int)arg1;
- (id)_meshTransformForOrientation:(int)arg1;
- (id)_verticalMeshTransform;
- (id)_horizontalMeshTransform;
- (void)_configureMaskForOrientation:(int)arg1;
- (void)reloadData;
- (id)_selectedItem;
- (id)_font;
- (id)_titleForMode:(int)arg1;
- (void)_updateContainerOriginFromSelectedMode;
- (struct CGPoint)_verticalContainerOriginForMode:(int)arg1;
- (struct CGPoint)_horizontalContainerOriginForMode:(int)arg1;
- (float)_centeringNudgeForMode:(int)arg1;
- (void)setSelectedMode:(int)arg1 animated:(_Bool)arg2;
- (void)_layoutVerticalModeDial;
- (void)_layoutHorizontalModeDial;
- (struct CGSize)_interpolatedHorizontalMeshTransformSize;
- (void)layoutSubviews;
- (id)initWithOrientation:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKModeDialInitializationWithOrientation:(int)arg1;

@end
