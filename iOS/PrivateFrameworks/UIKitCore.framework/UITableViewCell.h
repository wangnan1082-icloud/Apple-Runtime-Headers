//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIScrollViewDelegate-Protocol.h>
#import <UIKitCore/_UIInteractiveHighlighting-Protocol.h>
#import <UIKitCore/_UILayoutEngineSuspending-Protocol.h>

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, NSTimer, UIColor, UIControl, UIFocusGuide, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UIStoryboardPreviewingSegueTemplateStorage, UITableViewCellDeleteConfirmationView, UITapGestureRecognizer, UITextField, UIVisualEffect, _UIFloatingContentView, _UITableViewCellOldEditingData, _UITableViewCellSeparatorView;
@protocol UITableConstants, UITable_UITableViewCellDelegate;

@interface UITableViewCell : UIView <UIScrollViewDelegate, _UILayoutEngineSuspending, _UIInteractiveHighlighting, NSCoding, UIGestureRecognizerDelegate>
{
    NSMutableDictionary *__editingControlTintColors;
    id <UITable_UITableViewCellDelegate> _tableView;
    id _layoutManager;
    id _target;
    SEL _editAction;
    SEL _accessoryAction;
    _UITableViewCellOldEditingData *_oldEditingData;
    id _editingData;
    double _rightMargin;
    long long _indentationLevel;
    double _indentationWidth;
    NSString *_reuseIdentifier;
    _UIFloatingContentView *_floatingContentView;
    long long _lineBreakModeBeforeFocus;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIView *_backgroundView;
    UIView *_selectedBackgroundView;
    UIView *_multipleSelectionBackgroundView;
    UIView *_selectedOverlayView;
    double _selectionFadeDuration;
    UIColor *_backgroundColor;
    UIColor *_separatorColor;
    UIVisualEffect *_separatorEffect;
    UIColor *_topShadowColor;
    UIColor *_bottomShadowColor;
    UIColor *_sectionBorderColor;
    UIView *_floatingSeparatorView;
    UIView *_topShadowAnimationView;
    UIView *_bottomShadowAnimationView;
    id _badge;
    struct __CFDictionary *_unhighlightedStates;
    id _selectionSegueTemplate;
    id _accessoryActionSegueTemplate;
    UIStoryboardPreviewingSegueTemplateStorage *_accessoryActionPreviewingSegueTemplateStorage;
    UIControl *_accessoryView;
    UIControl *_editingAccessoryView;
    UIView *_customAccessoryView;
    UIView *_customEditingAccessoryView;
    _UITableViewCellSeparatorView *_separatorView;
    _UITableViewCellSeparatorView *_topSeparatorView;
    UIView *_topShadowView;
    UITextField *_editableTextField;
    double _lastSelectionTime;
    NSTimer *_deselectTimer;
    double _textFieldOffset;
    double _indexBarExtentFromEdge;
    struct UIEdgeInsets _separatorInset;
    struct UIEdgeInsets _backgroundInset;
    SEL _returnAction;
    UIColor *_selectionTintColor;
    NSArray *_selectionEffects;
    UIColor *_accessoryTintColor;
    UIImage *_reorderControlImage;
    UILongPressGestureRecognizer *_longPressGesture;
    NSIndexPath *_representedIndexPath;
    _Bool _focusable;
    UITableViewCellDeleteConfirmationView *_swipeToDeleteConfirmationView;
    UITapGestureRecognizer *_swipeToDeleteCancelationGesture;
    UIView *_clearBlendingView;
    double _swipeToDeleteDistancePulled;
    double _sectionCornerRadius;
    double _sectionBorderWidth;
    double _defaultLeadingMarginWidth;
    double _defaultTrailingCellMarginWidth;
    UIFocusGuide *_editControlFocusGuide;
    UIFocusGuide *_reorderControlFocusGuide;
    id <UITableConstants> _constants;
    long long _dragState;
    struct {
        unsigned int showingDeleteConfirmation:1;
        unsigned int separatorStyle:3;
        unsigned int selectionStyle:3;
        unsigned int selectionFadeFraction:11;
        unsigned int editing:1;
        unsigned int editingStyle:3;
        unsigned int accessoryType:3;
        unsigned int editingAccessoryType:3;
        unsigned int showsAccessoryWhenEditing:1;
        unsigned int showsReorderControl:1;
        unsigned int showDisclosure:1;
        unsigned int showTopSeparator:1;
        unsigned int hideTopSeparatorDuringReordering:1;
        unsigned int disclosureClickable:1;
        unsigned int disclosureStyle:1;
        unsigned int showingRemoveControl:1;
        unsigned int sectionLocation:3;
        unsigned int tableViewStyle:1;
        unsigned int shouldIndentWhileEditing:1;
        unsigned int fontSet:1;
        unsigned int usingDefaultSelectedBackgroundView:1;
        unsigned int usingDefaultBackgroundView:1;
        unsigned int wasSwiped:1;
        unsigned int highlighted:1;
        unsigned int separatorDirty:1;
        unsigned int drawn:1;
        unsigned int drawingDisabled:1;
        unsigned int style:12;
        unsigned int showingMenu:1;
        unsigned int clipsContents:1;
        unsigned int animatingSelection:1;
        unsigned int backgroundColorSet:1;
        unsigned int needsSetup:1;
        unsigned int dontDrawTopShadow:1;
        unsigned int usingMultiselectbackgroundView:1;
        unsigned int isCarPlayCell:1;
        unsigned int deleteAnimationInProgress:1;
        unsigned int deleteCancelationAnimationInProgress:1;
        unsigned int animating:1;
        unsigned int shouldHaveFullLengthBottomSeparator:1;
        unsigned int shouldHaveFullLengthTopSeparator:1;
        unsigned int drawsSeparatorAtTopOfSection:1;
        unsigned int drawsSeparatorAtBottomOfSection:1;
        unsigned int separatorBackdropOverlayBlendMode:3;
        unsigned int separatorDrawsInVibrantLightMode:1;
        unsigned int separatorHidden:1;
        unsigned int hidingSeparatorsForSelection:1;
        unsigned int clippedBeforeSwiping:1;
        unsigned int allowsReorderingWhenNotEditing:1;
        unsigned int needsHeightCalculation:1;
        unsigned int reordering:1;
        unsigned int hasEditingFocusGuides:1;
        unsigned int focusStyle:3;
        unsigned int accessoryViewsHidden:1;
        unsigned int skipsLayout:1;
        unsigned int separatorInsetIsRelativeToCellEdges:1;
        unsigned int highlightingInteractively:1;
        unsigned int userInteractionEnabledBeforeDragging:2;
        unsigned int insetsContentViewsToSafeArea:1;
    } _tableCellFlags;
    _Bool _isLayoutEngineSuspended;
    _Bool _userInteractionEnabledWhileDragging;
    _Bool _shouldShowMenu;
}

+ (id)_defaultTopShadowColor;
+ (void)_initializeForIdiom:(long long)arg1;
+ (void)initialize;
@property(nonatomic, getter=_shouldShowMenu, setter=_setShouldShowMenu:) _Bool shouldShowMenu; // @synthesize shouldShowMenu=_shouldShowMenu;
@property(nonatomic) _Bool userInteractionEnabledWhileDragging; // @synthesize userInteractionEnabledWhileDragging=_userInteractionEnabledWhileDragging;
@property(nonatomic, getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:) _Bool _layoutEngineSuspended; // @synthesize _layoutEngineSuspended=_isLayoutEngineSuspended;
@property(retain, nonatomic, getter=_reorderControlFocusGuide, setter=_setReorderControlFocusGuide:) UIFocusGuide *reorderControlFocusGuide; // @synthesize reorderControlFocusGuide=_reorderControlFocusGuide;
@property(retain, nonatomic, getter=_editControlFocusGuide, setter=_setEditControlFocusGuide:) UIFocusGuide *editControlFocusGuide; // @synthesize editControlFocusGuide=_editControlFocusGuide;
- (void).cxx_destruct;
- (void)_highlightDidEndForInteraction:(id)arg1;
- (void)_highlightForInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(_Bool)arg3;
- (_Bool)_highlightsAlongsideDefaultEffect;
- (long long)_preferredHighlightAnimationStyleForInteraction:(id)arg1;
- (void)_prepareHighlightForInteraction:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_constants;
- (void)_setConstants:(id)arg1;
- (void)_setCurrentScreenScale:(double)arg1;
- (void)_prepareToEnterReuseQueue;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_updateDefaultAccessoryViewForFocus:(_Bool)arg1;
- (void)_updateDefaultLabelsForFocus:(_Bool)arg1;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusedView;
- (_Bool)canBecomeFocused;
- (void)_removeFocusedFloatingContentView;
- (void)_ensureFocusedFloatingContentView;
- (id)_subviewsForFloatingContentView;
@property(nonatomic) long long focusStyle;
- (_Bool)tableSpecificElementsHidden;
- (void)setTableSpecificElementsHidden:(_Bool)arg1;
- (void)setAccessoryActionPreviewingSegueTemplateStorage:(id)arg1;
- (id)accessoryActionPreviewingSegueTemplateStorage;
- (id)_previewingSegueTemplateStorageForLocation:(struct CGPoint)arg1 inView:(id)arg2;
- (void)_setAllowsReorderingWhenNotEditing:(_Bool)arg1;
- (_Bool)_allowsReorderingWhenNotEditing;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)_usesRoundedGroups;
- (_Bool)_accessoryViewsHidden;
- (void)_setAccessoryViewsHidden:(_Bool)arg1;
- (_Bool)_separatorHidden;
- (void)_setSeparatorHidden:(_Bool)arg1;
- (double)_sectionBorderWidth;
- (void)_setSectionBorderWidth:(double)arg1;
- (struct UIEdgeInsets)_backgroundInset;
- (void)_setBackgroundInset:(struct UIEdgeInsets)arg1;
- (void)_setIndexBarExtentFromEdge:(double)arg1;
- (double)_indexBarExtentFromEdge;
- (void)_setSeparatorEffect:(id)arg1;
- (id)_separatorEffect;
- (long long)_separatorBackdropOverlayBlendMode;
- (void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1;
- (_Bool)_separatorDrawsInVibrantLightMode;
- (void)_setSeparatorDrawsInVibrantLightMode:(_Bool)arg1;
- (void)_setSeparatorDrawsInVibrantLightModeUIAppearance:(id)arg1;
- (struct UIEdgeInsets)_rawSeparatorInset;
@property(nonatomic) struct UIEdgeInsets separatorInset;
- (_Bool)_shouldMaskToBoundsWhileAnimating;
- (_Bool)_isAnimating;
- (void)_setAnimating:(_Bool)arg1;
- (void)_setAnimating:(_Bool)arg1 clippingAdjacentCells:(_Bool)arg2;
- (SEL)returnAction;
- (void)setReturnAction:(SEL)arg1;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (void)setPlaceHolderValue:(id)arg1;
- (double)textFieldOffset;
- (void)setTextFieldOffset:(double)arg1;
- (id)editableTextField;
- (void)_actionButtonPushed:(id)arg1;
- (void)_swipeAccessoryButtonPushed;
- (void)_swipeDeleteButtonPushed;
- (void)_updateViewsForDeleteButton;
- (void)_setDeleteAnimationInProgress:(_Bool)arg1;
- (_Bool)_isDeleteAnimationInProgress;
- (id)_deleteConfirmationView;
- (_Bool)_isDeleteCancelationAnimationInProgress;
- (void)_setDeleteCancelationAnimationInProgress:(_Bool)arg1;
- (void)_updateSwipeWithDistancePulled:(double)arg1;
- (void)_handleSwipeDeleteCancelation:(id)arg1;
- (void)_beginSwiping;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_tableViewDidUpdateMarginWidth;
- (void)_updateSeparatorContent:(_Bool)arg1;
- (void)_setIsCarPlayCell:(_Bool)arg1 forceUpdateDefaults:(_Bool)arg2;
- (void)_setIsCarPlayCell:(_Bool)arg1;
- (_Bool)_isCarPlayCell;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets)arg1;
- (double)_defaultTrailingCellMarginWidth;
- (void)_setDefaultTrailingCellMarginWidth:(double)arg1;
- (double)_defaultLeadingMarginWidth;
- (void)_setDefaultLeadingMarginWidth:(double)arg1;
- (void)_setRightMarginWidth:(double)arg1;
- (double)_rightMarginWidth;
- (void)_setMarginWidth:(double)arg1;
- (double)_marginWidth;
- (double)_imageViewExtentFromCellLeadingEdge;
- (_Bool)_shouldApplyReadableWidthInsets;
- (struct UIEdgeInsets)_effectiveSafeAreaInsets;
- (_Bool)_insetsContentViewsToSafeArea;
- (void)_setInsetsContentViewsToSafeArea:(_Bool)arg1;
- (_Bool)_separatorInsetIsRelativeToCellEdges;
- (void)_setSeparatorInsetIsRelativeToCellEdges:(_Bool)arg1;
- (void)_setIndexPath:(id)arg1;
- (id)_indexPath;
- (_Bool)_isUsingOldStyleMultiselection;
- (_Bool)_shouldSaveOpaqueStateForView:(id)arg1;
- (_Bool)_isMultiselecting;
- (void)_setMultiselecting:(_Bool)arg1;
- (void)_multiselectColorChanged;
- (void)_startToEditTextField;
- (void)setTableViewStyle:(long long)arg1;
- (long long)tableViewStyle;
- (void)removeControl:(id)arg1 wasCanceledForTarget:(id)arg2;
- (struct CGRect)removeControl:(id)arg1 endFrameForTarget:(id)arg2;
- (struct CGRect)removeControl:(id)arg1 startFrameForTarget:(id)arg2;
- (void)_setDrawsTopShadow:(_Bool)arg1;
- (_Bool)_drawsTopShadow;
- (_Bool)_needsHeightCalculation;
- (void)_setNeedsHeightCalculation:(_Bool)arg1;
- (_Bool)_needsSetup;
- (void)_setNeedsSetup:(_Bool)arg1;
- (void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (SEL)_accessoryAction;
- (void)_setAccessoryAction:(SEL)arg1;
- (id)_target;
- (void)_setTarget:(id)arg1;
- (_Bool)wasSwiped;
- (void)setWasSwiped:(_Bool)arg1;
- (_Bool)_hasEditingAccessoryView;
- (_Bool)_hasAccessoryView;
- (id)_titleForDeleteConfirmationButton;
- (id)_topShadowView:(_Bool)arg1;
- (id)_selectedBackgroundView:(_Bool)arg1;
- (id)_backgroundView:(_Bool)arg1;
- (id)_separatorView:(_Bool)arg1;
- (id)_customEditingAccessoryView:(_Bool)arg1;
- (id)_customAccessoryView:(_Bool)arg1;
- (id)_editingAccessoryView:(_Bool)arg1;
- (id)_accessoryView:(_Bool)arg1;
- (id)_defaultAccessoryView;
- (id)_newAccessoryView:(_Bool)arg1;
- (void)removeEditingData;
- (id)editingData:(_Bool)arg1;
- (double)_editingButtonOffset;
- (_Bool)_isReorderable;
- (void)deleteConfirmationControlWasCancelled:(id)arg1;
- (void)deleteConfirmationControlWasClicked:(id)arg1;
- (void)editControlWasClicked:(id)arg1;
- (void)removeControlWillHideRemoveConfirmation:(id)arg1;
- (void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2;
- (void)removeControl:(id)arg1 willRemoveTarget:(id)arg2;
- (void)_willBeDeleted;
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1;
- (void)_grabberReleased:(id)arg1;
- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2 touch:(id)arg3;
- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2;
- (_Bool)_grabberBeganReorder:(id)arg1 touch:(id)arg2;
- (_Bool)_isReorderControlActive;
- (id)_removeControl;
- (void)_removeInnerShadow;
- (void)_animateInnerShadowForInsertion:(_Bool)arg1 withRowAnimation:(long long)arg2;
- (void)_removeFloatingSeparator;
- (void)_animateFloatingSeparatorForInsertion:(_Bool)arg1 withRowAnimation:(long long)arg2;
- (void)_drawSeparatorInRect:(struct CGRect)arg1;
- (void)_setDrawsTopSeparator:(_Bool)arg1;
- (void)_setShouldIndentWhileEditing:(_Bool)arg1;
- (void)_setShowingDeleteConfirmation:(_Bool)arg1;
- (id)_editingControlTintColorForStyle:(long long)arg1;
- (void)_setEditingControlTintColor:(id)arg1 forStyle:(long long)arg2;
- (void)_setEditingStyle:(long long)arg1;
- (id)_reorderControlImage;
- (void)_setReorderControlImage:(id)arg1;
- (id)_badge:(_Bool)arg1;
- (id)_imageView:(_Bool)arg1;
- (id)_editableTextField:(_Bool)arg1;
- (id)_detailTextLabel:(_Bool)arg1;
- (id)_textLabel:(_Bool)arg1;
- (id)_tableView;
- (void)_setTableView:(id)arg1;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (void)_updateFullWidthSwipeDeletionView;
- (_Bool)canBecomeFirstResponder;
- (void)_setSectionLocation:(int)arg1 animated:(_Bool)arg2 forceBackgroundSetup:(_Bool)arg3;
- (void)setSectionLocation:(int)arg1 animated:(_Bool)arg2;
- (void)setSectionLocation:(int)arg1;
- (void)_setupSelectedBackgroundView;
- (void)_setupBackgroundView;
- (int)sectionLocation;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (_Bool)_insetsBackground;
- (struct CGRect)contentRectForState:(unsigned long long)arg1;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)_didTransitionToState:(unsigned long long)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)_willTransitionToState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)_updateFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(_Bool)arg3;
- (void)_updateFloatingContentControlStateAnimated:(_Bool)arg1;
- (void)_layoutFloatingContentView;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)_setHiddenForReuse:(_Bool)arg1;
- (void)_updateCellMaskViewsForView:(id)arg1 backdropView:(id)arg2;
- (void)removeFromSuperview;
- (SEL)accessoryAction;
- (void)setAccessoryAction:(SEL)arg1;
- (SEL)editAction;
- (void)setEditAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
@property(nonatomic, getter=_skipsLayout, setter=_setSkipsLayout:) _Bool skipsLayout;
- (void)setCenter:(struct CGPoint)arg1;
- (void)_setFrame:(struct CGRect)arg1 skipLayout:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)_setDropAnimationContainerView:(id)arg1;
- (id)_dropAnimationContainerView;
- (struct CGRect)reorderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)accessoryRectForBounds:(struct CGRect)arg1 accessoryView:(id)arg2 isCustom:(_Bool)arg3;
- (struct CGRect)editRectForBounds:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)textRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)contentRectForBounds:(struct CGRect)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (struct CGRect)_delegateConfirmationRect;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, nonatomic) _Bool showingDeleteConfirmation;
- (void)setShowingDeleteConfirmation:(_Bool)arg1;
@property(nonatomic, getter=isEditing) _Bool editing;
- (void)_setEditing:(_Bool)arg1 animated:(_Bool)arg2 cellOrAncestorViewForAnimatedLayout:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (double)selectionFadeDuration;
- (void)setSelectionFadeDuration:(double)arg1;
- (_Bool)clipsContents;
- (void)setClipsContents:(_Bool)arg1;
- (unsigned long long)currentStateMask;
@property(nonatomic) double indentationWidth;
@property(nonatomic) long long indentationLevel;
- (_Bool)hidesAccessoryWhenEditing;
- (void)setHidesAccessoryWhenEditing:(_Bool)arg1;
@property(retain, nonatomic) UIView *editingAccessoryView;
@property(nonatomic) long long editingAccessoryType;
- (id)_accessoryTintColor;
- (void)_setAccessoryTintColor:(id)arg1;
@property(retain, nonatomic) UIView *accessoryView;
@property(nonatomic) long long accessoryType;
- (void)_syncAccessoryViewsIfNecessary;
@property(nonatomic) _Bool shouldIndentWhileEditing;
@property(nonatomic) _Bool showsReorderControl;
- (void)_setShowsReorderControl:(_Bool)arg1;
- (void)_finishTransitioningToReorderingAppearance:(_Bool)arg1;
- (void)_transitionToReorderingAppearance:(_Bool)arg1;
@property(readonly, nonatomic) long long editingStyle;
- (void)setEditingStyle:(long long)arg1;
- (long long)style;
- (id)selectedOverlayView;
- (id)layoutManager;
- (void)setLayoutManager:(id)arg1;
- (void)_drawContentInRect:(struct CGRect)arg1 selected:(_Bool)arg2;
- (void)_updateHighlightColors;
- (_Bool)_isHighlighted;
- (float)selectionPercent;
- (_Bool)isAtLeastHalfSelected;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_delayedDeselect;
- (void)_deselectAnimationFinished;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_cancelInternalPerformRequests;
- (void)showSelectedBackgroundView:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_isDragging;
- (void)_setDragging:(_Bool)arg1;
- (void)_updateUserInteractionEnabledForNewDragState:(unsigned long long)arg1;
- (void)dragStateDidChange:(long long)arg1;
- (void)_setDragState:(long long)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic, getter=isSelected) _Bool selected;
- (id)selectionTintColor;
- (void)setSelectionTintColor:(id)arg1;
@property(nonatomic) long long selectionStyle;
- (void)_setSelectionStyle:(long long)arg1 selectionTintColor:(id)arg2;
- (void)_setOpaque:(_Bool)arg1 forSubview:(id)arg2;
- (id)_multiselectBackgroundColor;
- (void)_clearOpaqueViewState:(id)arg1;
- (void)_saveOpaqueViewState:(id)arg1;
- (void)prepareForReuse;
@property(readonly, copy, nonatomic) NSString *reuseIdentifier;
- (void)setReuseIdentifier:(id)arg1;
- (void)setSectionBorderColor:(id)arg1;
- (id)sectionBorderColor;
- (id)bottomShadowColor;
- (void)setBottomShadowColor:(id)arg1;
- (id)topShadowColor;
- (void)setTopShadowColor:(id)arg1;
- (id)separatorColor;
- (void)setSeparatorColor:(id)arg1;
- (id)tableBackgroundColor;
- (void)setTableBackgroundColor:(id)arg1;
- (_Bool)_backgroundColorSet;
- (id)_contentBackgroundColor;
- (void)_setTableBackgroundCGColor:(struct CGColor *)arg1 withSystemColorName:(id)arg2;
- (long long)separatorStyle;
- (void)setSeparatorStyle:(long long)arg1;
@property(retain, nonatomic) UIView *multipleSelectionBackgroundView;
- (void)_forSpringBoardSetDefaultSelectedBackgroundView:(id)arg1;
- (id)_forSpringBoardDefaultSelectedBackgroundView;
@property(retain, nonatomic) UIView *selectedBackgroundView;
- (void)setSelectedBackgroundView:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *backgroundView;
@property(readonly, nonatomic) UIView *contentView;
- (id)_badgeText;
- (void)_setBadgeText:(id)arg1;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)selectedTextColor;
- (void)setSelectedTextColor:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (long long)lineBreakMode;
- (void)setLineBreakMode:(long long)arg1;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)_setFont:(id)arg1 layout:(_Bool)arg2;
- (id)text;
- (void)setText:(id)arg1;
@property(readonly, nonatomic) UIImageView *imageView;
@property(readonly, nonatomic) UILabel *detailTextLabel;
@property(readonly, nonatomic) UILabel *textLabel;
- (_Bool)_canDrawContent;
- (void)setDrawingEnabled:(_Bool)arg1;
- (_Bool)drawingEnabled;
- (void)_didCreateContentView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_encodableSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupMenuGesture;
- (void)_resetEditControlRotation;
- (void)_endSwiping:(_Bool)arg1;
- (void)_systemTextSizeChanged;
- (void)bringSubviewToFront:(id)arg1;
- (void)sendSubviewToBack:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_setupTableViewCellCommon;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (_Bool)_drawsSeparatorAtBottomOfSection;
- (void)_setDrawsSeparatorAtBottomOfSection:(_Bool)arg1;
- (_Bool)_drawsSeparatorAtTopOfSection;
- (void)_setDrawsSeparatorAtTopOfSection:(_Bool)arg1;
- (void)_updateSeparatorContent;
- (void)_setNeedsSeparatorUpdate;
- (id)_addSeparatorWithFrame:(struct CGRect)arg1;
- (_Bool)_hidesBottomSeparatorWhenUnselected;
- (_Bool)_shouldHideSeparator;
- (struct CGRect)_topSeparatorFrame;
- (_Bool)_showFullLengthTopSeparatorForTopOfSection;
- (_Bool)_showSeparatorAtTopOfSection;
- (struct UIEdgeInsets)_backgroundSeparatorInset;
- (struct CGRect)_separatorFrame;
- (double)_separatorHeight;
- (_Bool)_shouldHaveFullLengthTopSeparator;
- (void)_setShouldHaveFullLengthTopSeparator:(_Bool)arg1;
- (_Bool)_shouldHaveFullLengthBottomSeparator;
- (void)_setShouldHaveFullLengthBottomSeparator:(_Bool)arg1;
- (id)selectionSegueTemplate;
- (void)setSelectionSegueTemplate:(id)arg1;
- (id)accessoryActionSegueTemplate;
- (void)setAccessoryActionSegueTemplate:(id)arg1;
- (void)_setDrawsTopSeparatorDuringReordering:(_Bool)arg1;
- (_Bool)_drawsTopSeparatorDuringReordering;
- (void)_setReordering:(_Bool)arg1;
- (void)_resetSelectionTimer;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_menuDismissed:(id)arg1;
- (void)_topShadowDidFadeOut;
- (void)_updateTopShadowView:(_Bool)arg1;
- (void)_updateContentClip;
- (void)_showMenuFromLongPressGesture;
- (void)_longPressGestureRecognized:(id)arg1;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)_imageInsetSize;
- (struct CGSize)_textInsetSize;
- (id)_badge;
- (id)_imageView;
- (id)_editableTextField;
- (void)_contentViewLabelTextDidChange:(id)arg1;
- (void)_releaseDetailTextLabel;
- (void)_releaseTextLabel;
- (id)_detailTextLabel;
- (id)_textLabel;
- (id)_defaultFont;
- (void)_showReorderControl;
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(_Bool)arg1;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (_Bool)_isCurrentlyConsideredHighlighted;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(_Bool)arg2;
- (void)_layoutSubviewsAnimated:(_Bool)arg1;
- (id)_layoutDebuggingTitle;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (_Bool)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1;
- (void)setNeedsUpdateConstraints;
- (void)_removeRemoveControl;
- (void)_releaseRemoveControl;
- (id)_createRemoveControlForStyle:(long long)arg1;
- (id)_currentAccessoryView:(_Bool)arg1;
- (id)_disclosurePressedImage:(_Bool)arg1;
- (id)_disclosureImage:(_Bool)arg1;
- (id)_disclosureChevronImage:(_Bool)arg1;
- (id)_checkmarkImage:(_Bool)arg1;
- (id)_detailDisclosureImage:(_Bool)arg1;
- (id)_tintedDisclosureImagePressed:(_Bool)arg1;
- (void)_finishedFadingGrabber:(id)arg1 finished:(_Bool)arg2;
- (void)_setGrabberHidden:(_Bool)arg1;
- (void)_releaseReorderingControl;
- (id)_reorderingSeparatorView;
- (id)_reorderingControl;
- (void)_createReorderControlIfNeeded;
- (void)setOldEditingData:(id)arg1;
- (id)oldEditingData;
- (id)_swipeToDeleteConfirmationView;
- (_Bool)_isInModalViewController;
- (long long)_popoverControllerStyle;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

