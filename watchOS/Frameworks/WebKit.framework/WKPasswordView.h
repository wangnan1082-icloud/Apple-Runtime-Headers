//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIDocumentPasswordViewDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WKPasswordView : UIView <UIDocumentPasswordViewDelegate>
{
    struct RetainPtr<NSString> _documentName;
    struct RetainPtr<UIScrollView> _scrollView;
    struct RetainPtr<UIDocumentPasswordView> _passwordView;
    float _savedMinimumZoomScale;
    float _savedMaximumZoomScale;
    float _savedZoomScale;
    struct CGSize _savedContentSize;
    struct RetainPtr<UIColor> _savedBackgroundColor;
    CDUnknownBlockType _userDidEnterPassword;
}

@property(copy, nonatomic) CDUnknownBlockType userDidEnterPassword; // @synthesize userDidEnterPassword=_userDidEnterPassword;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)_keyboardDidShow:(id)arg1;
- (void)showPasswordFailureAlert;
- (void)hide;
- (void)showInScrollView:(id)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) NSString *documentName;
- (id)initWithFrame:(struct CGRect)arg1 documentName:(id)arg2;

@end
