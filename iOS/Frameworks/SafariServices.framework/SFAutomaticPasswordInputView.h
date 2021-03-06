//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInputView.h>

@class SFAutomaticPasswordExplanationView;
@protocol SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing;

__attribute__((visibility("hidden")))
@interface SFAutomaticPasswordInputView : UIInputView
{
    SFAutomaticPasswordExplanationView *_explanationView;
    _Bool _shouldAllowSelfSizing;
    long long _keyboardType;
    id <SFAutomaticPasswordInputViewDelegate> _delegate;
    id <SFAutomaticPasswordInputViewSizing> _inputViewSizing;
}

@property(nonatomic) _Bool shouldAllowSelfSizing; // @synthesize shouldAllowSelfSizing=_shouldAllowSelfSizing;
@property(nonatomic) __weak id <SFAutomaticPasswordInputViewSizing> inputViewSizing; // @synthesize inputViewSizing=_inputViewSizing;
@property(nonatomic) __weak id <SFAutomaticPasswordInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
- (void).cxx_destruct;
- (_Bool)allowsSelfSizing;
- (struct CGSize)intrinsicContentSize;
- (void)_useCustomPasswordButtonAction:(id)arg1;
- (void)_useStrongPasswordButtonAction:(id)arg1;
@property(nonatomic) long long keyboardAppearance;
- (id)initWithInputViewStyle:(long long)arg1 keyboardType:(long long)arg2;

@end

