//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVUIKit/TVLockupView.h>

@class NSString, UIImage;

@interface TVCaptionButtonView : TVLockupView
{
    long long _motionDirection;
    UIImage *_contentImage;
    NSString *_contentText;
    NSString *_title;
    NSString *_subtitle;
    id _target;
    SEL _action;
}

+ (Class)_concreteContentViewClass;
@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
@property(nonatomic) long long motionDirection; // @synthesize motionDirection=_motionDirection;
- (void).cxx_destruct;
- (void)_updateAppearanceForFocusUpdateContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_createFooterView;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

