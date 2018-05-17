//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSArray, NSMutableArray, NSMutableString, NSNumberFormatter, NSString, NSTimer, UIImage, UILabel;

@interface CUISPasscodeField : UIView <CAAnimationDelegate>
{
    UIImage *_dotImageEmpty;
    UIImage *_dotImageFull;
    UIView *_containerOuter;
    UIView *_containerInner;
    NSArray *_ringLayers;
    NSMutableArray *_dotLayers;
    NSArray *_dotViews;
    NSMutableString *_currentPasscode;
    int _style;
    _Bool _squished;
    unsigned int _expectedDigits;
    struct CGPath *_dotPath;
    UILabel *_lastDigitLabel;
    NSTimer *_lastDigitResetTimer;
    NSNumberFormatter *_lastDigitFormatter;
    _Bool _showCharacters;
    NSMutableArray *_digitViews;
    NSString *_lastDigitText;
    UILabel *_passwordLabel;
    _Bool _lastDigitPreview;
    id <CUISPasscodeFieldDelegate> _delegate;
}

@property(retain, nonatomic) NSMutableString *currentPasscode; // @synthesize currentPasscode=_currentPasscode;
@property(nonatomic) __weak id <CUISPasscodeFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int style; // @synthesize style=_style;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasContent;
- (void)backspace;
- (void)appendPreviewDigit:(unsigned int)arg1;
- (void)commitPreview;
- (void)clear:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hideLastDigit;
- (void)_resetLastDigit:(id)arg1;
- (void)_removeDigits:(int)arg1;
- (void)_addDigit;
- (void)_removeDots:(int)arg1;
- (id)_addDot;
- (void)_updateDotViews;
- (void)_regenerateWithSizeChange:(_Bool)arg1;
- (void)_createDotPathWithSize:(float)arg1;
- (void)_getDotSize:(float *)arg1 spacing:(float *)arg2 fontSize:(float *)arg3 forDigits:(unsigned int)arg4;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 expectedDigits:(unsigned int)arg2 squishedForScreenWithCancelButton:(_Bool)arg3 showCharacters:(_Bool)arg4;
- (id)initWithStyle:(int)arg1 expectedDigits:(unsigned int)arg2 squishedForScreenWithCancelButton:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
