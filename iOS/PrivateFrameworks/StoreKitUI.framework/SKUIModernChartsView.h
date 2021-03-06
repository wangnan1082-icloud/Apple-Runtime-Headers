//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIScrollView, _UIBackdropView;

@interface SKUIModernChartsView : UIView <UIScrollViewDelegate>
{
    _UIBackdropView *_backdropView;
    struct UIEdgeInsets _contentInset;
    UIView *_headerView;
    NSMutableArray *_headerViews;
    _Bool _hideHeader;
    UIScrollView *_scrollView;
    NSArray *_viewControllers;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void).cxx_destruct;
- (void)_updateHeader;
- (void)_layoutViewControllersWithColumnSize:(struct CGSize)arg1 contentInset:(struct UIEdgeInsets)arg2;
- (void)_layoutHeadersWithColumnSize:(struct CGSize)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setColumnViewControllers:(id)arg1;
@property(readonly, nonatomic) _UIBackdropView *backdropView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

