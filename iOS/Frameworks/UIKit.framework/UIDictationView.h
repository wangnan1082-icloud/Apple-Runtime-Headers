//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SUICFlamesViewDelegate.h"

@class NSString, SUICFlamesView, UIButton, UIKeyboardDicationBackground;

@interface UIDictationView : UIView <SUICFlamesViewDelegate>
{
    UIKeyboardDicationBackground *_background;
    UIButton *_endpointButton;
    UIButton *_endpointButtonLandscape;
    int _state;
    _Bool _keyboardInTransition;
    _Bool _automaticAppearanceWasEnabled;
    SUICFlamesView *_flamesView;
    _Bool _showLanguageLabel;
    _Bool _switchingLanguage;
    id <UIDictationViewDisplayDelegate> _displayDelegate;
}

+ (struct CGSize)layoutSize;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (struct CGSize)viewSize;
+ (Class)dictationViewClass;
@property(nonatomic) _Bool switchingLanguage; // @synthesize switchingLanguage=_switchingLanguage;
@property(nonatomic) _Bool showLanguageLabel; // @synthesize showLanguageLabel=_showLanguageLabel;
@property(nonatomic) id <UIDictationViewDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
- (float)audioLevelForFlamesView:(id)arg1;
- (_Bool)visible;
- (void)endpointButtonPressed;
- (void)dealloc;
- (_Bool)drawsOwnBackground;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setState:(int)arg1;
- (_Bool)isShowing;
- (void)returnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)prepareForReturnToKeyboard;
- (void)keyboardDidShow:(id)arg1;
- (struct CGPoint)backgroundOffset;
- (struct CGPoint)contentOffset;
- (void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(struct CGPoint)arg3;
- (struct CGPoint)positionForShow;
- (void)show;
- (void)applicationEnteredBackground;
- (struct CGSize)currentScreenSize;
- (id)endpointButton;
- (void)highlightEndpointButton;
- (void)applicationWillResignActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
