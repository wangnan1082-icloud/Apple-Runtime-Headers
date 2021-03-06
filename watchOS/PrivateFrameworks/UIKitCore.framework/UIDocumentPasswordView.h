//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UITextFieldDelegate-Protocol.h>

@class NSObject, NSString, UIDocumentPasswordField, UIImageView, UILabel, UITextField;
@protocol UIDocumentPasswordViewDelegate;

@interface UIDocumentPasswordView : UIView <UITextFieldDelegate>
{
    UIImageView *_iconView;
    UIDocumentPasswordField *_passwordTextField;
    UILabel *_label;
    NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate;
}

@property(readonly, nonatomic) UITextField *passwordField; // @synthesize passwordField=_passwordTextField;
@property(nonatomic) NSObject<UIDocumentPasswordViewDelegate> *passwordDelegate; // @synthesize passwordDelegate;
- (float)_textFieldWidth;
- (float)_labelHorizontalOffset;
- (id)_labelTextColor;
- (id)_labelFont;
- (void)_passwordEntered:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)_canDrawContent;
- (void)layoutSubviews;
- (struct CGRect)_iconRectForContainerRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithDocumentName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

