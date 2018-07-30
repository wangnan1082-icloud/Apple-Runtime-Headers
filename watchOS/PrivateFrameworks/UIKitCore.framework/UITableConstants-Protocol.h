//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIColor, UIFont, UIImage, UITableViewCell, UITableViewHeaderFooterView;

@protocol UITableConstants <NSObject>
+ (id)sharedConstants;
- (float)defaultMaskGradientHeightForTableView:(id <UITable>)arg1;
- (float)defaultFocusedShadowRadiusForTableView:(id <UITable>)arg1;
- (float)defaultFocusedHorizontalOutsetForTableView:(id <UITable>)arg1;
- (float)defaultAlphaForDraggingCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (_Bool)reorderingCellWantsShadows:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (float)defaultAlphaForReorderingCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultReorderControlImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGSize)defaultReorderControlSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultMultiSelectHighlightedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultMultiSelectSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultMultiSelectNotSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultInsertImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDeleteImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGRect)defaultDeleteMinusRectForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (float)defaultSpaceBetweenEditAndReorderControlsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (float)defaultEditControlPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct CGSize)defaultEditControlSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultCheckmarkImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDisclosurePressedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultDisclosureImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFooterBackgroundColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderBackgroundColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFooterTextColorForTableViewStyle:(int)arg1;
- (UIColor *)defaultHeaderTextColorForTableViewStyle:(int)arg1;
- (UIFont *)defaultFooterFontForTableViewStyle:(int)arg1;
- (UIFont *)defaultHeaderFontForTableViewStyle:(int)arg1;
- (UIColor *)defaultFooterTextColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderTextColorForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultFooterFontForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultHeaderFontForView:(UITableViewHeaderFooterView *)arg1 inTableView:(id <UITable>)arg2;
- (float)defaultPlainHeaderLabelYPositionForTableView:(id <UITable>)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;
- (float)defaultPlainFirstSectionHeaderHeightForTableView:(id <UITable>)arg1;
- (float)defaultDetailTextLabelFontSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultDetailTextFontForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (float)defaultTextLabelFontSizeForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIFont *)defaultTextLabelFontForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (NSArray *)defaultSelectionEffectsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultSelectionTintColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultBackgroundColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (float)defaultPaddingBetweenHeaderAndRowsForTableView:(id <UITable>)arg1;
- (float)defaultPaddingBetweenRowsForTableView:(id <UITable>)arg1;
- (float)defaultContentAccessoryPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (float)defaultContentReorderPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (float)defaultContentEditPaddingForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (float)defaultTrailingCellMarginWidthForTableView:(id <UITable>)arg1;
- (float)defaultLeadingCellMarginWidthForTableView:(id <UITable>)arg1;
- (float)defaultMarginWidthForTableView:(id <UITable>)arg1;
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id <UITable>)arg1;
- (float)defaultSectionFooterHeightForTableView:(id <UITable>)arg1;
- (float)defaultSectionHeaderHeightForTableView:(id <UITable>)arg1;
- (_Bool)defaultRowHeightDependsOnCellStyle;
- (float)defaultRowHeightForTableView:(id <UITable>)arg1 cellStyle:(int)arg2;
- (float)defaultRowHeightForTableView:(id <UITable>)arg1;
- (int)defaultSeparatorStyleForTableViewStyle:(int)arg1;
- (UIColor *)defaultSeparatorColorForTableViewStyle:(int)arg1;
- (NSArray *)defaultBackgroundEffectsForTableViewStyle:(int)arg1;
- (UIColor *)defaultBackgroundColorForTableViewStyle:(int)arg1;
- (_Bool)supportsUserInterfaceStyles;
- (id <UITableConstants>)variantForActive:(_Bool)arg1 dark:(_Bool)arg2;
- (id <UITableConstants>)sidebarVariant;

@optional
- (UIImage *)defaultFocusedReorderControlImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedMultiSelectNotSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedMultiSelectSelectedImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedInsertImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedDeleteImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedCheckmarkImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIImage *)defaultFocusedDisclosureImageForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFocusedDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultFocusedTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2;
- (UIColor *)defaultHeaderTextColorForTableViewStyle:(int)arg1 userInterfaceStyle:(int)arg2;
- (UIColor *)defaultDetailTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2 forUserInterfaceStyle:(int)arg3;
- (UIColor *)defaultTextColorForCell:(UITableViewCell *)arg1 inTableView:(id <UITable>)arg2 forUserInterfaceStyle:(int)arg3;
@end
