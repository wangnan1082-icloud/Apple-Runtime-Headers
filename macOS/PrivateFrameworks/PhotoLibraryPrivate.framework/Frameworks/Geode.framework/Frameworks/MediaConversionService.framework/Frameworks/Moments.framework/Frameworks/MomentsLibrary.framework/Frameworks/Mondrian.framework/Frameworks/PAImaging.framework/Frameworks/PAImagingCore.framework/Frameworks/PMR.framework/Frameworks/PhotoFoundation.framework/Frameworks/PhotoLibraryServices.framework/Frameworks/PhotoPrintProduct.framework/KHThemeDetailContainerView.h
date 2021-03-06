//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXView.h>

@class NSButton, NSMutableArray;

@interface KHThemeDetailContainerView : UXView
{
    NSMutableArray *_selfConstraints;
    UXView *_contentView;
    NSButton *_closeButton;
    NSButton *_similarThemesButton;
}

@property(readonly, nonatomic) NSButton *similarThemesButton; // @synthesize similarThemesButton=_similarThemesButton;
@property(readonly, nonatomic) NSButton *closeButton; // @synthesize closeButton=_closeButton;
@property(readonly, nonatomic) UXView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

