//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class NSStackView;

__attribute__((visibility("hidden")))
@interface FI_TDFRScrollingStackViewController : FI_TViewController
{
    struct TFENodeVector _targetNodes;
    struct TNSRef<NSStackView, void> _stackView;
    function_b1fce659 _viewWillAppearCallback;
    function_b1fce659 _viewWillDisappearCallback;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)reload;
- (void)loadView;
@property(readonly, retain, nonatomic) NSStackView *stackView;
- (void)setViewWillDisappearCallback:(const function_b1fce659 *)arg1;
- (function_b1fce659)viewWillDisppearCallback;
- (void)setViewWillAppearCallback:(const function_b1fce659 *)arg1;
- (function_b1fce659)viewWillAppearCallback;
- (void)setTargetNodes:(const struct TFENodeVector *)arg1;
- (struct TFENodeVector)targetNodes;

@end

