//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import "UIAlertControllerContaining.h"
#import "UIAlertControllerVisualStyleProviding.h"
#import "UIPreviewInteractionControllerDelegate.h"
#import "_UIAlertControllerTextFieldViewControllerContaining.h"

@class NSArray, NSAttributedString, NSIndexSet, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject<UIAlertControllerVisualStyleProviding>, NSPointerArray, NSSet, NSString, UIAlertAction, UIAlertControllerVisualStyle, UIGestureRecognizer, UIPopoverController, UIPreviewInteractionController, UITapGestureRecognizer, UIView, _UIAlertControllerShimPresenter, _UIAlertControllerTextFieldViewController, _UIAnimationCoordinator;

@interface UIAlertController : UIViewController <UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIPreviewInteractionControllerDelegate, UIAlertControllerVisualStyleProviding>
{
    NSString *_message;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedMessage;
    NSAttributedString *_attributedDetailMessage;
    NSSet *_linkedAlertControllers;
    UIAlertAction *_cancelAction;
    NSMutableDictionary *_actionToKeyCommandsDictionary;
    NSMapTable *_keyCommandToActionMapTable;
    long long _resolvedStyle;
    long long _preferredStyle;
    UIViewController *_contentViewController;
    _UIAlertControllerTextFieldViewController *_textFieldViewController;
    UITapGestureRecognizer *_backButtonDismissGestureRecognizer;
    id _ownedTransitioningDelegate;
    _Bool _addContentViewControllerToViewHierarchyNeeded;
    _Bool _isInSupportedInterfaceOrientations;
    long long _batchActionChangesInProgressCount;
    _UIAlertControllerShimPresenter *_presenter;
    NSPointerArray *_actionsWithInvokedHandlers;
    _Bool _hidden;
    _Bool __shouldFlipFrameForShimDismissal;
    _Bool __shouldAllowNilParameters;
    _Bool _hasPreservedInputViews;
    NSMutableArray *_actions;
    UIViewController *_headerContentViewController;
    NSObject<UIAlertControllerVisualStyleProviding> *_styleProvider;
    UIAlertAction *_preferredAction;
    _UIAnimationCoordinator *_temporaryAnimationCoordinator;
    UIPreviewInteractionController *_previewInteractionController;
    UIAlertControllerVisualStyle *__visualStyle;
    UIViewController *_accessibilityViewControllerForSizing;
    NSIndexSet *_indexesOfActionSectionSeparators;
    NSMutableArray *__actionDelimiterIndices;
    UIPopoverController *__compatibilityPopoverController;
    UIView *__systemProvidedPresentationView;
    id <UIAlertControllerSystemProvidedPresentationDelegate> __systemProvidedPresentationDelegate;
    UIGestureRecognizer *_systemProvidedGestureRecognizer;
    id <UIAlertControllerCoordinatedActionPerforming> _coordinatedActionPerformingDelegate;
    UIView *__presentationSourceRepresentationView;
    long long _titleMaximumLineCount;
    long long _titleLineBreakMode;
}

+ (id)_alertControllerContainedInViewController:(id)arg1;
+ (id)_alertControllerWithTitle:(id)arg1 message:(id)arg2;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
+ (_Bool)_shouldUsePresentationController;
@property(nonatomic, getter=_titleLineBreakMode, setter=_setTitleLineBreakMode:) long long titleLineBreakMode; // @synthesize titleLineBreakMode=_titleLineBreakMode;
@property(nonatomic, getter=_titleMaximumLineCount, setter=_setTitleMaximumLineCount:) long long titleMaximumLineCount; // @synthesize titleMaximumLineCount=_titleMaximumLineCount;
@property(retain, nonatomic, setter=_setPresentationSourceRepresentationView:) UIView *_presentationSourceRepresentationView; // @synthesize _presentationSourceRepresentationView=__presentationSourceRepresentationView;
@property(nonatomic) __weak id <UIAlertControllerCoordinatedActionPerforming> coordinatedActionPerformingDelegate; // @synthesize coordinatedActionPerformingDelegate=_coordinatedActionPerformingDelegate;
@property(retain, nonatomic, getter=_systemProvidedGestureRecognizer, setter=_setSystemProvidedGestureRecognizer:) UIGestureRecognizer *systemProvidedGestureRecognizer; // @synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer;
@property(retain, nonatomic, setter=_setSystemProvidedPresentationDelegate:) id <UIAlertControllerSystemProvidedPresentationDelegate> _systemProvidedPresentationDelegate; // @synthesize _systemProvidedPresentationDelegate=__systemProvidedPresentationDelegate;
@property(retain, nonatomic, setter=_setSystemProvidedPresentationView:) UIView *_systemProvidedPresentationView; // @synthesize _systemProvidedPresentationView=__systemProvidedPresentationView;
@property(nonatomic, getter=_hasPreservedInputViews, setter=_setHasPreservedInputViews:) _Bool hasPreservedInputViews; // @synthesize hasPreservedInputViews=_hasPreservedInputViews;
@property(nonatomic, setter=_setCompatibilityPopoverController:) UIPopoverController *_compatibilityPopoverController; // @synthesize _compatibilityPopoverController=__compatibilityPopoverController;
@property(setter=_setShouldAllowNilParameters:) _Bool _shouldAllowNilParameters; // @synthesize _shouldAllowNilParameters=__shouldAllowNilParameters;
@property(readonly) NSMutableArray *_actionDelimiterIndices; // @synthesize _actionDelimiterIndices=__actionDelimiterIndices;
@property(copy, nonatomic, getter=_indexesOfActionSectionSeparators, setter=_setIndexesOfActionSectionSeparators:) NSIndexSet *indexesOfActionSectionSeparators; // @synthesize indexesOfActionSectionSeparators=_indexesOfActionSectionSeparators;
@property(retain, nonatomic, getter=_getAccessibilityViewControllerForSizing, setter=_setAccessibilityViewControllerForSizing:) UIViewController *accessibilityViewControllerForSizing; // @synthesize accessibilityViewControllerForSizing=_accessibilityViewControllerForSizing;
@property(retain, nonatomic, setter=_setVisualStyle:) UIAlertControllerVisualStyle *_visualStyle; // @synthesize _visualStyle=__visualStyle;
@property(retain, nonatomic, getter=_previewInteractionController, setter=_setPreviewInteractionController:) UIPreviewInteractionController *previewInteractionController; // @synthesize previewInteractionController=_previewInteractionController;
@property(retain, nonatomic) _UIAnimationCoordinator *temporaryAnimationCoordinator; // @synthesize temporaryAnimationCoordinator=_temporaryAnimationCoordinator;
@property _Bool _shouldFlipFrameForShimDismissal; // @synthesize _shouldFlipFrameForShimDismissal=__shouldFlipFrameForShimDismissal;
@property(retain, nonatomic) UIAlertAction *preferredAction; // @synthesize preferredAction=_preferredAction;
@property(nonatomic, getter=_isHidden, setter=_setHidden:) _Bool _hidden; // @synthesize _hidden;
@property(nonatomic, getter=_styleProvider, setter=_setStyleProvider:) __weak NSObject<UIAlertControllerVisualStyleProviding> *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(readonly) long long _resolvedStyle; // @synthesize _resolvedStyle;
@property(retain, nonatomic, setter=_setHeaderContentViewController:) UIViewController *_headerContentViewController; // @synthesize _headerContentViewController;
@property(readonly) UIAlertAction *_cancelAction; // @synthesize _cancelAction;
@property(readonly) NSMutableArray *_actions; // @synthesize _actions;
- (void).cxx_destruct;
- (_Bool)_canBePresentedAtLocation:(struct CGPoint)arg1;
- (_Bool)_isPresented;
- (_Bool)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg1;
- (void)previewInteractionController:(id)arg1 performCommitForPreviewViewController:(id)arg2 committedViewController:(id)arg3;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forPosition:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint)arg2 inView:(id)arg3 presentingViewController:(id *)arg4;
- (id)_setView:(id)arg1 forSystemProvidedPresentationWithDelegate:(id)arg2;
@property(nonatomic, getter=_effectAlpha, setter=_setEffectAlpha:) double effectAlpha;
- (void)_becomeFirstResponderIfAppropriate;
- (_Bool)_shouldBecomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)_restoreInputViewsAnimated:(_Bool)arg1;
- (void)_preserveInputViewsAnimated:(_Bool)arg1;
- (_Bool)_shouldPreserveInputViews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_removeAllTextFields;
- (void)_updateTextFieldViewControllerWithVisualStyle:(id)arg1;
- (_Bool)_hasContentToDisplay;
- (id)_containedAlertController;
- (void)_childViewController:(id)arg1 willTransitionToSize:(struct CGSize)arg2 withAnimations:(CDUnknownBlockType)arg3;
- (void)_contentViewControllerWillTransitionToSize:(struct CGSize)arg1 withAnimations:(CDUnknownBlockType)arg2;
- (void)_headerContentViewControllerWillTransitionToSize:(struct CGSize)arg1 withAnimations:(CDUnknownBlockType)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
@property(retain, nonatomic) UIViewController *contentViewController;
- (struct UIEdgeInsets)_contentInsets;
@property(readonly) UIView *_dimmingView;
@property(readonly) UIView *_foregroundView;
@property(readonly) UIAlertAction *_focusedAction;
- (id)cancelAction;
- (void)setCancelAction:(id)arg1;
- (_Bool)_shouldTreatEmptyStringsAsNil;
- (_Bool)_hasDetailMessage;
- (_Bool)_hasAttributedMessage;
- (_Bool)_hasMessage;
- (_Bool)_hasAttributedTitle;
- (_Bool)_hasTitle;
@property(copy, nonatomic, getter=_attributedDetailMessage, setter=_setAttributedDetailMessage:) NSAttributedString *_attributedDetailMessage;
@property(copy, nonatomic, getter=_attributedMessage, setter=_setAttributedMessage:) NSAttributedString *attributedMessage;
@property(copy, nonatomic, getter=_attributedTitle, setter=_setAttributedTitle:) NSAttributedString *attributedTitle;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (id)_viewControllerForSizing;
- (_Bool)_shouldFitWidthToContentViewControllerWidth;
- (_Bool)_shouldSizeToFillSuperview;
- (id)_alertControllerContainer;
- (_Bool)_viewControllerIsPresentedInModalPresentationContext:(id)arg1;
- (_Bool)_isPresentedAsPopoverWithLegacyUI;
- (_Bool)_isPresentedAsPopover;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_flipFrameForShimDismissalIfNecessary;
- (void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
- (long long)_modalPresentationStyleForResolvedStyle;
- (void)setModalPresentationStyle:(long long)arg1;
- (void)_updateModalPresentationStyle;
- (_Bool)_requiresCustomPresentationController;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)linkedAlertControllers;
- (void)unlinkAlertController:(id)arg1;
- (void)linkAlertController:(id)arg1;
- (void)_postDidBeginSystemProvidedDismissalOfAlertController;
- (void)_postWillBeginSystemProvidedDismissalOfAlertController;
- (void)_performAction:(id)arg1 invokeActionBlock:(CDUnknownBlockType)arg2 dismissAndPerformActionIfNotAlreadyPerformed:(CDUnknownBlockType)arg3;
- (void)_dismissAnimated:(_Bool)arg1 triggeringAction:(id)arg2 triggeredByPopoverDimmingView:(_Bool)arg3 dismissCompletion:(CDUnknownBlockType)arg4;
- (void)_endNoPresentingViewControllerPresentation;
- (void)_beginNoPresentingViewControllerPresentation;
- (void)_dismissAnimated:(_Bool)arg1 triggeringAction:(id)arg2;
- (void)_dismissFromPopoverDimmingView;
- (void)_dismissWithCancelAction;
- (void)_dismissFromBackButton:(id)arg1;
- (void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg1;
- (_Bool)_canDismissWithGestureRecognizer;
- (id)_dismissGestureRecognizer;
- (void)_clearActionHandlers;
- (void)_invokeHandlersForAction:(id)arg1;
- (void)_dismissWithAction:(id)arg1;
- (void)_dismissWithAction:(id)arg1 dismissCompletion:(CDUnknownBlockType)arg2;
- (id)visualStyleForAlertControllerStyle:(long long)arg1 traitCollection:(id)arg2 descriptor:(id)arg3;
- (_Bool)_shouldDismissOnSizeChange;
@property(readonly) _Bool _shouldProvideDimmingView;
@property(nonatomic) long long preferredStyle;
- (void)_uninstallBackGestureRecognizer;
- (void)_installBackGestureRecognizer;
- (long long)_buttonTypeForBackGestureForIdiom:(long long)arg1;
- (_Bool)_idiomSupportsBackGesture:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_resolvedStyleChanged;
- (id)_currentDescriptor;
- (void)_updateProvidedStyle;
- (void)_updateProvidedStyleWithTraitCollection:(id)arg1;
- (void)_reevaluateResolvedStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)_requiredNotificationsForRemoteServices;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_recomputePreferredContentSize;
- (_Bool)_needsPreferredSizeCalculated;
- (id)_alertControllerView;
- (void)viewDidLoad;
@property(readonly) _Bool _shouldReverseActions;
- (void)_setShouldReverseActions:(_Bool)arg1;
@property(readonly) _Bool _shouldAlignToKeyboard;
- (void)_updateShouldAlignToKeyboard;
- (void)loadView;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)setTextFieldsCanBecomeFirstResponder:(_Bool)arg1;
@property(setter=_setTextFieldsHidden:) _Bool _textFieldsHidden;
- (void)_didParentTextFieldViewController;
- (void)_willParentTextFieldViewController;
- (id)_textFieldContainingViewWithTextField:(id)arg1;
- (void)_returnKeyPressedInLastTextField;
- (_Bool)_shouldSupportReturnKeyPresses;
@property(readonly) _UIAlertControllerTextFieldViewController *_textFieldViewController;
@property(readonly, nonatomic) NSArray *textFields;
- (void)addTextFieldWithConfigurationHandler:(CDUnknownBlockType)arg1;
- (id)_actionForReturnKey;
@property(retain, nonatomic, setter=_setActions:) NSArray *actions;
- (void)_addReturnKeyCommandIfAppropriate;
- (id)_returnKeyCommand;
- (void)_handleReturn;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_handleKeyCommand:(id)arg1;
- (id)_keyCommandForAction:(id)arg1 input:(id)arg2 modifierFlags:(long long)arg3;
- (void)_removeKeyCommandForAction:(id)arg1;
- (void)_addKeyCommandForAction:(id)arg1 withInput:(id)arg2 modifierFlags:(long long)arg3;
- (void)_action:(id)arg1 changedToKeyCommandWithInput:(id)arg2 modifierFlags:(long long)arg3;
- (void)_addSectionDelimiter;
- (void)_removeAllActions;
- (void)_performBatchActionChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)_addActionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3 shouldDismissHandler:(CDUnknownBlockType)arg4;
- (void)_addActionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addAction:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
