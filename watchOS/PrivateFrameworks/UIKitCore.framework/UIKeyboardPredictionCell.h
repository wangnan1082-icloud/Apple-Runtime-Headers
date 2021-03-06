//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class TIKeyboardCandidate, UILabel, UIMorphingLabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardPredictionCell : UIView
{
    UIMorphingLabel *m_label;
    UILabel *m_suggestionLabel;
    UIView *m_maskView;
    UIView *m_activeView;
    _Bool m_lightKeyboard;
    float m_maskViewMargin;
    _Bool _active;
    _Bool _isAutocorrection;
    _Bool _isTypedString;
    _Bool _isLongCandidate;
    _Bool _isEmoji;
    TIKeyboardCandidate *_prediction;
    UIView *_leftSeperatorView;
    UIView *_rightSeperatorView;
    unsigned int _slotID;
    int _candidateType;
    int _state;
}

+ (float)fontSizeForSingleLineLayout;
+ (float)predictionCellTopPadding;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) _Bool isEmoji; // @synthesize isEmoji=_isEmoji;
@property(nonatomic) int candidateType; // @synthesize candidateType=_candidateType;
@property(nonatomic) unsigned int slotID; // @synthesize slotID=_slotID;
@property(nonatomic) _Bool isLongCandidate; // @synthesize isLongCandidate=_isLongCandidate;
@property(nonatomic) _Bool isTypedString; // @synthesize isTypedString=_isTypedString;
@property(nonatomic) _Bool isAutocorrection; // @synthesize isAutocorrection=_isAutocorrection;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) UIView *rightSeperatorView; // @synthesize rightSeperatorView=_rightSeperatorView;
@property(retain, nonatomic) UIView *leftSeperatorView; // @synthesize leftSeperatorView=_leftSeperatorView;
@property(readonly, retain, nonatomic) TIKeyboardCandidate *prediction; // @synthesize prediction=_prediction;
- (_Bool)needsUpdateForRenderConfig:(id)arg1;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (id)label;
- (void)setText:(id)arg1 prediction:(id)arg2 active:(_Bool)arg3 isEmoji:(_Bool)arg4;
- (_Bool)shouldDisplayHeaderForPrediction:(id)arg1;
- (_Bool)shouldDisplayAsSuggestion:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setActive:(_Bool)arg1 withAttrText:(id)arg2;
- (void)setActive:(_Bool)arg1 withText:(id)arg2;
- (void)setCellAttributes;
- (id)textColor;
- (void)scrollLabelWithText:(id)arg1 force:(_Bool)arg2;
- (void)touchMoved:(float)arg1;
- (void)setVisibleRect;
- (struct CGRect)visibleRect;
- (void)dimKeys:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

