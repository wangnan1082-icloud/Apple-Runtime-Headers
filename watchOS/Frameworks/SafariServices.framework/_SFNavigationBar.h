//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "_SFFluidProgressViewDelegate.h"
#import "_SFNavigationBarURLButtonDelegate.h"
#import "_UIBasicAnimationFactory.h"

@class NSArray, NSAttributedString, NSString, NSTimer, SFCrossfadingImageView, SFDismissButton, SFNavigationBarReaderButton, SFWebsiteNotSecureMessageView, UIButton, UIColor, UIImageView, UILabel, UILongPressGestureRecognizer, UITextField, _SFDimmingButton, _SFFluidProgressView, _SFNavigationBarBackdrop, _SFNavigationBarItem, _SFNavigationBarLabelsContainer, _SFNavigationBarURLButton, _SFToolbar, _UIBackdropViewSettings;

@interface _SFNavigationBar : UIView <UIGestureRecognizerDelegate, _SFFluidProgressViewDelegate, _SFNavigationBarURLButtonDelegate, _UIBasicAnimationFactory>
{
    UIButton *_compressedBarButton;
    UIView *_controlsContainer;
    _SFNavigationBarLabelsContainer *_labelsContainer;
    UIView *_labelScalingContainer;
    UILabel *_URLLabel;
    UILabel *_expandedURLLabel;
    _Bool _urlLabelShowsNotSecureAnnotation;
    SFWebsiteNotSecureMessageView *_websiteNotSecureMessageView;
    UILabel *_readerAvailabilityLabel;
    float _URLWidth;
    float _URLHeight;
    float _expandedURLWidth;
    float _expandedURLHeight;
    float _offsetOfURLInExpandedURL;
    UIView *_URLContainer;
    UIImageView *_URLFadeOut;
    UIView *_fakeTextFieldSelectionView;
    float _fakeSelectionStartOffset;
    float _fakeSelectionEndOffset;
    UIButton *_fakeClearButton;
    _Bool _usesLiftedAppearance;
    SFCrossfadingImageView *_searchIndicator;
    SFCrossfadingImageView *_lockView;
    NSArray *_URLAccessoryItems;
    _SFNavigationBarURLButton *_URLOutline;
    _SFFluidProgressView *_progressView;
    _SFNavigationBarBackdrop *_backdrop;
    UIView *_separator;
    _Bool _lockViewNeedsUpdate;
    NSAttributedString *_attributedTextWhenExpanded;
    SFNavigationBarReaderButton *_readerButton;
    _SFDimmingButton *_stopButton;
    _SFDimmingButton *_reloadButton;
    UILongPressGestureRecognizer *_readerLongPressGestureRecognizer;
    _SFDimmingButton *_readerAppearanceButton;
    UIButton *_mediaCaptureMuteButton;
    int _visibleTrailingButtonType;
    UILongPressGestureRecognizer *_reloadLongPressGestureRecognizer;
    UIButton *_cancelButton;
    float _cancelButtonIntrinsicWidth;
    _Bool _readerButtonWillShow;
    NSTimer *_readerAvailabilityLabelHideTimer;
    SFDismissButton *_dismissButton;
    UIView *_dismissButtonContainer;
    unsigned int _inputMode;
    _Bool _preferredBarTintColorIsDark;
    _Bool _preferredBarTintColorIsGreen;
    _Bool _preferredBarTintColorIsExtreme;
    _Bool _usesNarrowLayout;
    _Bool _unifiedFieldShowsProgressView;
    _Bool _usingLightControls;
    _Bool _controlsHidden;
    _Bool _expanded;
    _Bool _backdropGroupDisabled;
    _Bool _suppressesBlur;
    _SFNavigationBarItem *_item;
    unsigned int _tintStyle;
    _SFToolbar *_toolbar;
    _UIBackdropViewSettings *_customBackdropSettings;
    UITextField *_textField;
    NSString *_backdropGroupName;
    id <_SFNavigationBarDelegate> _delegate;
    float _contentUnderStatusBarHeight;
    float _maximumHeight;
    float _minimumBackdropHeight;
    UIView *_inputAccessoryView;
    UIColor *_preferredBarTintColor;
    UIColor *_preferredControlsTintColor;
}

+ (float)separatorHeight;
+ (float)minimumHeight;
+ (float)defaultHeight;
+ (int)_metricsCategory;
+ (void)initialize;
@property(retain, nonatomic) UIColor *preferredControlsTintColor; // @synthesize preferredControlsTintColor=_preferredControlsTintColor;
@property(retain, nonatomic) UIColor *preferredBarTintColor; // @synthesize preferredBarTintColor=_preferredBarTintColor;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(nonatomic) float minimumBackdropHeight; // @synthesize minimumBackdropHeight=_minimumBackdropHeight;
@property(nonatomic) float maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property(nonatomic) _Bool suppressesBlur; // @synthesize suppressesBlur=_suppressesBlur;
@property(nonatomic) float contentUnderStatusBarHeight; // @synthesize contentUnderStatusBarHeight=_contentUnderStatusBarHeight;
@property(nonatomic) __weak id <_SFNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic, getter=isBackdropGroupDisabled) _Bool backdropGroupDisabled; // @synthesize backdropGroupDisabled=_backdropGroupDisabled;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) _UIBackdropViewSettings *customBackdropSettings; // @synthesize customBackdropSettings=_customBackdropSettings;
@property(nonatomic, getter=areControlsHidden) _Bool controlsHidden; // @synthesize controlsHidden=_controlsHidden;
@property(readonly, nonatomic) _SFToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic, getter=isUsingLightControls) _Bool usingLightControls; // @synthesize usingLightControls=_usingLightControls;
@property(nonatomic) unsigned int tintStyle; // @synthesize tintStyle=_tintStyle;
@property(nonatomic) _Bool unifiedFieldShowsProgressView; // @synthesize unifiedFieldShowsProgressView=_unifiedFieldShowsProgressView;
@property(nonatomic) _Bool usesNarrowLayout; // @synthesize usesNarrowLayout=_usesNarrowLayout;
@property(retain, nonatomic) _SFNavigationBarItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)URLOutlinePopoverSourceInfo;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> reloadButtonPopoverSourceInfo;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> readerButtonPopoverSourceInfo;
@property(readonly, nonatomic) id <_SFPopoverSourceInfo> readerAppearanceButtonPopoverSourceInfo;
- (void)setTextFieldPlaceHolderColor:(id)arg1;
- (float)placeholderHorizontalInset;
- (id)newTextField;
- (id)toolbarPlacedOnTop;
- (void)updateToolbarTintColor;
- (_Bool)canBecomeFirstResponder;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (_Bool)navigationBarURLButtonShouldPaste:(id)arg1;
- (_Bool)navigationBarURLButtonShouldCopy:(id)arg1;
- (void)navigationBarURLButtonDidReceivePasteCommand:(id)arg1;
- (void)navigationBarURLButtonDidReceiveCopyCommand:(id)arg1;
- (_Bool)navigationBarURLButton:(id)arg1 shouldShowMenuForGestureWithRecognizer:(id)arg2;
- (id)textForNavigationBarURLButton:(id)arg1;
- (float)URLFieldHorizontalMargin;
- (void)_updatePlaceholderText;
- (id)_placeholderText;
- (void)_configureNavigationBarTrailingButtonTintedImages;
- (void)_updateControlTints;
- (void)_updateTintColorForControls;
- (void)backdropDidApplySettings:(id)arg1;
@property(nonatomic) _Bool updatesBackdrop;
- (id)_tintForWarningImage;
- (id)_lockImageUsingMiniatureVersion:(_Bool)arg1;
- (id)_tintForLockImage:(_Bool)arg1;
- (id)_EVCertLockAndTextColor;
- (void)_updateURLOutlineColor;
- (void)_updateSeparatorAlpha;
- (void)_updateBackdropGroupName;
- (void)_hideNotSecureWebsiteMessage;
- (void)_showNotSecureWebsiteMessage;
- (void)_updateNotSecureWarningsVisibility;
- (void)_setUpWebsiteNotSecureMessageIconAndLabelIfNeeded;
- (void)_updateShowsSearchIndicator;
- (void)_updateSearchIndicator;
- (void)_updateTextMetrics;
- (void)_updateTextColor;
- (id)_URLTextColor;
- (id)_URLControlsColor;
- (id)_placeholderColor;
- (void)_adjustLabelRectForLeadingButtonWithDelay:(double)arg1;
- (void)_updateMediaCaptureMuteButton;
- (void)_updateReaderButtonSelected;
- (void)_updateReaderButtonTint;
- (void)_updateReaderButtonAndAvailabilityTextVisibility;
- (void)_updateReaderButtonVisibilityAnimated:(_Bool)arg1 showAvailabilityText:(_Bool)arg2 adjustURLLabels:(_Bool)arg3;
- (void)_hideReaderAvailabilityLabelAnimated:(_Bool)arg1;
- (void)_hideReaderAvailabilityLabelNow;
- (void)_hideReaderAvailabilityLabelSoon;
- (void)_updateLockIconHasEVCertificateTint;
- (void)_updateShowsLockIcon;
- (void)_updateLockViewIfNeeded;
- (void)_updateActiveURLLabelAccessory;
@property(readonly, nonatomic) struct CGRect URLOutlineFrameInNavigationBarSpace;
- (void)setExpanded:(_Bool)arg1 textFieldSelectionRange:(struct _NSRange)arg2;
- (void)_updateToolbarAlpha;
- (void)_updateFakeViews;
- (_Bool)_isURLLabelAnnotatedWithAttributedString;
- (id)_attributedStringByInsertingNotSecureAnnotationInURL:(id)arg1 annotationOffset:(float *)arg2;
- (void)_updateText;
- (id)_expandedURLLabelParagraphStyle;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_hitTestCandidateViews;
- (void)clearEphemeralUI;
- (void)layoutSubviews;
- (float)_textFieldTopMargin;
- (void)_updateTextFieldFrame;
- (float)_minimumXForLabelOfWidth:(float)arg1 centeredInOutlineOfWidth:(float)arg2 leftAlignedToMinimumX:(float)arg3 maximumX:(float)arg4;
- (void)_updateBackdropFrame;
- (id)_viewToInsertProgressBarIn;
- (void)fluidProgressViewDidShowProgress:(id)arg1;
- (void)fluidProgressViewWillShowProgress:(id)arg1;
- (void)tintColorDidChange;
- (void)_updateProgressView;
- (id)_navigationBarTrailingButtonWithType:(int)arg1;
- (void)_updateNavigationBarTrailingButtonType;
- (int)_inferredNavigationBarTrailingButtonType;
- (void)_updateNavigationBarTrailingButtonsAlpha;
- (void)_updateNavigationBarTrailingButtonsVisibility;
- (int)_preferredLeadingButtonType;
- (void)_updateNavigationBarLeadingButtonsAlpha;
- (void)_updateNavigationBarLeadingButtonsVisibility;
- (void)_unsecuredWarningTransition:(id)arg1 toView:(id)arg2;
- (void)_transitionFromView:(id)arg1 toView:(id)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic, getter=_controlsAlpha) float controlsAlpha;
- (float)_squishTransformFactor;
- (void)_dismissButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_mediaCaptureMuteButtonTapped:(id)arg1;
- (void)_readerButtonTapped:(id)arg1;
- (void)_URLTapped:(id)arg1;
- (void)_compressedBarTapped;
- (void)_readerAppearanceButtonPressed;
- (void)_stopButtonPressed;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_readerButtonLongPressed:(id)arg1;
- (void)_reloadButtonLongPressed:(id)arg1;
- (void)_reloadButtonPressed;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 inputMode:(unsigned int)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_barMetricsDidChange;
- (void)_updateURLOutlineCornerRadius;
- (void)_updateProgressViewCornerRadius;
- (id)_URLLabelFont;
- (void)_updateFonts;
- (id)readerAppearanceButton;
@property(nonatomic) _Bool hasToolbar;
- (float)_editingScaleFactor;
- (id)_editingLabelFont;
- (id)_fadeOutImageWithSize:(struct CGSize)arg1 opaquePoint:(struct CGPoint)arg2 transparentPoint:(struct CGPoint)arg3 leftCapWidth:(float)arg4 topCapWidth:(float)arg5;
- (id)_dimmingButtonWithAction:(SEL)arg1;
- (id)_newNavigationButtonWithImage:(id)arg1 insets:(struct UIEdgeInsets)arg2 action:(SEL)arg3;
- (float)_customButtonHorizontalPadding;
- (float)_URLFieldHorizontalMargin;
@property(readonly, nonatomic) float visualHeight;
- (void)_updateBarTintColorMetrics;
- (void)_updateBackdropStyle;
- (_Bool)_shouldUpdateBackdropStyleForTransitionFromItem:(id)arg1 toItem:(id)arg2;
- (id)_backdropInputSettings;
@property(readonly, nonatomic) float dismissButtonPadding;
@property(readonly, nonatomic) struct CGSize dismissButtonSize;
- (void)setDismissButtonStyle:(int)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool isShowingPreferredControlsTintColor;
- (_Bool)_shouldShowPreferredBarTintColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
