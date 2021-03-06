//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUIServices/SBUIInteractionForwardingView.h>

@class NSLayoutConstraint, NSString, PKGlyphView, SBUIButton, SBUIPasscodePillButton, UILabel, UILayoutGuide;
@protocol SBUIPasscodeBiometricAuthenticationViewDelegate, SBUIPasscodeBiometricAuthenticationViewLayoutDelegate;

@interface SBUIPasscodeBiometricAuthenticationView : SBUIInteractionForwardingView
{
    _Bool _ancillaryButtonsVisible;
    _Bool _faceIDUsePasscodeButtonVisible;
    unsigned int _type;
    id <SBUIPasscodeBiometricAuthenticationViewLayoutDelegate> _layoutDelegate;
    id <SBUIPasscodeBiometricAuthenticationViewDelegate> _delegate;
    NSString *_unlockDestination;
    NSString *_touchIDReason;
    NSString *_faceIDReason;
    NSString *_faceIDReasonLine2;
    SBUIButton *_touchIDUsePasscodeButton;
    SBUIPasscodePillButton *_faceIDUsePasscodeButton;
    PKGlyphView *_touchIDGlyphView;
    SBUIButton *_emergencyCallButton;
    SBUIButton *_cancelButton;
    UILabel *_touchIDReasonLabel;
    UILabel *_faceIDLabel;
    UILabel *_faceIDReasonLabel;
    UILayoutGuide *_faceIDLabelAndReasonHelperGuide;
    UILayoutGuide *_faceIDLabelAndReasonLayoutGuide;
    NSLayoutConstraint *_faceIDLabelFaceIDReasonBaselineConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *faceIDLabelFaceIDReasonBaselineConstraint; // @synthesize faceIDLabelFaceIDReasonBaselineConstraint=_faceIDLabelFaceIDReasonBaselineConstraint;
@property(retain, nonatomic) UILayoutGuide *faceIDLabelAndReasonLayoutGuide; // @synthesize faceIDLabelAndReasonLayoutGuide=_faceIDLabelAndReasonLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *faceIDLabelAndReasonHelperGuide; // @synthesize faceIDLabelAndReasonHelperGuide=_faceIDLabelAndReasonHelperGuide;
@property(retain, nonatomic) UILabel *faceIDReasonLabel; // @synthesize faceIDReasonLabel=_faceIDReasonLabel;
@property(retain, nonatomic) UILabel *faceIDLabel; // @synthesize faceIDLabel=_faceIDLabel;
@property(retain, nonatomic) UILabel *touchIDReasonLabel; // @synthesize touchIDReasonLabel=_touchIDReasonLabel;
@property(retain, nonatomic) SBUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) SBUIButton *emergencyCallButton; // @synthesize emergencyCallButton=_emergencyCallButton;
@property(retain, nonatomic) PKGlyphView *touchIDGlyphView; // @synthesize touchIDGlyphView=_touchIDGlyphView;
@property(retain, nonatomic) SBUIPasscodePillButton *faceIDUsePasscodeButton; // @synthesize faceIDUsePasscodeButton=_faceIDUsePasscodeButton;
@property(retain, nonatomic) SBUIButton *touchIDUsePasscodeButton; // @synthesize touchIDUsePasscodeButton=_touchIDUsePasscodeButton;
@property(copy, nonatomic, setter=_setFaceIDReason2:) NSString *faceIDReasonLine2; // @synthesize faceIDReasonLine2=_faceIDReasonLine2;
@property(copy, nonatomic, setter=_setFaceIDReason:) NSString *faceIDReason; // @synthesize faceIDReason=_faceIDReason;
@property(copy, nonatomic, setter=_setTouchIDReason:) NSString *touchIDReason; // @synthesize touchIDReason=_touchIDReason;
@property(nonatomic) _Bool faceIDUsePasscodeButtonVisible; // @synthesize faceIDUsePasscodeButtonVisible=_faceIDUsePasscodeButtonVisible;
@property(nonatomic) _Bool ancillaryButtonsVisible; // @synthesize ancillaryButtonsVisible=_ancillaryButtonsVisible;
@property(copy, nonatomic) NSString *unlockDestination; // @synthesize unlockDestination=_unlockDestination;
@property(nonatomic) __weak id <SBUIPasscodeBiometricAuthenticationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SBUIPasscodeBiometricAuthenticationViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)_noteContentSizeCategoryDidChange;
- (float)_leadingForFaceIDReason;
- (void)_emergencyCallButtonHit;
- (void)_cancelButtonHit;
- (void)_usePasscodeButtonHit;
- (void)_setFaceIDReasonLine2:(id)arg1;
- (void)_createConstraints;
- (void)_createSubviews;
- (void)setGlyphViewState:(int)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setGlyphViewState:(int)arg1;
- (void)setAncillaryButtonsVisible:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool showsCancelButton;
@property(nonatomic) _Bool showsEmergencyCallButton;
- (void)_layoutAuthReasonLabel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 layoutDelegate:(id)arg2;

@end

