//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIButton, UILabel, UIScrollView, UIView;

@interface FAExplainAppleIDViewController : UIViewController
{
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_goToSettingsButton;
    _Bool _shouldShowInviteeInstructions;
}

@property(nonatomic) _Bool shouldShowInviteeInstructions; // @synthesize shouldShowInviteeInstructions=_shouldShowInviteeInstructions;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateFonts;
- (double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;

@end
