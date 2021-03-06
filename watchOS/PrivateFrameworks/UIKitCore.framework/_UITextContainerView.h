//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/NSUITextViewCommonMethods-Protocol.h>
#import <UIKitCore/_UITextTiledLayerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSLayoutManager, NSMutableSet, NSString, NSTextContainer, NSTextStorage;
@protocol _UITextContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface _UITextContainerView : UIView <NSUITextViewCommonMethods, _UITextTiledLayerDelegate>
{
    struct UIEdgeInsets _textContainerInset;
    struct CGPoint _textContainerOrigin;
    struct CGSize _minSize;
    struct CGSize _maxSize;
    NSTextContainer *_textContainer;
    NSDictionary *_linkTextAttributes;
    unsigned int _invalidationSeqNo;
    int _invalidationSeqClipsToBounds;
    struct {
        unsigned int textContainerOriginInvalid:1;
        unsigned int verticalLayout:2;
        unsigned int horizontallyResizable:1;
        unsigned int verticallyResizable:1;
        unsigned int freezeTextContainerSize:1;
        unsigned int containedInTextView:1;
    } _tcvFlags;
    NSMutableSet *_ghostedRanges;
    NSMutableSet *_hiddenAreaRects;
    struct CGRect _constrainedTiledRenderingRect;
    NSArray *_maskedRectangles;
    int _contentsFormat;
    id <_UITextContainerViewDelegate> _delegate;
}

+ (Class)layerClass;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) __weak id <_UITextContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
- (void).cxx_destruct;
- (struct CGRect)_textTiledLayer:(id)arg1 constrainTileableBounds:(struct CGRect)arg2;
- (id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(struct CGRect)arg2;
- (void)_resetMaskedRectangles;
- (struct CGRect)_intersectRectWithConstrainedTiledRenderingRect:(struct CGRect)arg1;
- (void)_unconstrainTiledRendering;
- (void)_constrainTiledRenderingToRect:(struct CGRect)arg1;
- (void)_removeHiddenAreas;
- (void)_addHiddenArea:(struct CGRect)arg1;
- (void)removeAllGhostedRanges;
- (void)addGhostedRange:(struct _NSRange)arg1;
@property(nonatomic) float maxTileHeight;
@property(nonatomic) _Bool usesTiledViews;
- (struct CGRect)visibleRect;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *markedTextStyle;
@property(nonatomic) struct _NSRange markedRange;
- (void)setLayoutOrientation:(int)arg1;
@property(readonly, nonatomic) int layoutOrientation;
- (id)layoutManager:(id)arg1 effectiveCUICatalogForTextEffect:(id)arg2;
- (struct _NSRange)_extendedGlyphRangeForRange:(struct _NSRange)arg1 maxGlyphIndex:(unsigned int)arg2 drawingToScreen:(_Bool)arg3;
- (_Bool)_ensureLayoutCompleteForRect:(struct CGRect)arg1 withExtension:(_Bool)arg2;
- (_Bool)_ensureLayoutCompleteForRect:(struct CGRect)arg1 withExtensionFactor:(float)arg2 minimumExtensionDistance:(float)arg3 repetitions:(unsigned int)arg4;
- (void)_ensureLayoutCompleteToEndOfCharacterRange:(struct _NSRange)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;
- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_didScroll;
- (void)sizeToFit;
- (void)_sizeToConstrainedContainerUsedRect;
@property(nonatomic, getter=isVerticallyResizable) _Bool verticallyResizable;
@property(nonatomic, getter=isHorizontallyResizable) _Bool horizontallyResizable;
- (void)setConstrainedFrameSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setNeedsLayout;
- (void)_setFrameOrBounds:(struct CGRect)arg1 oldRect:(struct CGRect)arg2 settingAction:(CDUnknownBlockType)arg3;
- (void)_ensureMinAndMaxSizesConsistentWithBounds;
- (void)invalidateTextContainerOrigin;
- (struct CGPoint)textContainerOrigin;
@property(nonatomic) struct UIEdgeInsets textContainerInset;
@property(nonatomic, getter=_freezeTextContainerSize, setter=_setFreezeTextContainerSize:) _Bool freezeTextContainerSize;
- (void)tintColorDidChange;
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned int)arg2;
- (id)linkTextAttributes;
@property(readonly, nonatomic) NSTextStorage *textStorage;
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2 delegate:(id)arg3;
- (id)layer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

