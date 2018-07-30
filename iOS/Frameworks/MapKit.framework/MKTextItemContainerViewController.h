//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, UIStackView;

__attribute__((visibility("hidden")))
@interface MKTextItemContainerViewController : UIViewController
{
    id <GEOTextItemContainer> _textItemContainer;
    NSArray *_textItemViews;
    UIStackView *_stackView;
    double _maxWidth;
}

@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) NSArray *textItemViews; // @synthesize textItemViews=_textItemViews;
@property(readonly, nonatomic) id <GEOTextItemContainer> textItemContainer; // @synthesize textItemContainer=_textItemContainer;
- (void).cxx_destruct;
- (void)updateUIForTheme:(id)arg1;
- (void)infoCardThemeChanged:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)setupSubviewsWithMaxWidth:(double)arg1;
- (void)viewDidLayoutSubviews;
- (double)currentMaxWidth;
- (void)viewDidLoad;
- (id)initWithTextItemContainer:(id)arg1;

@end
