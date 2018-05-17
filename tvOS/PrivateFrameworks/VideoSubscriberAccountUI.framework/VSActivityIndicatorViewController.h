//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSObject<OS_dispatch_source>, NSString, UIActivityIndicatorView, UILabel, VSFontCenter;

__attribute__((visibility("hidden")))
@interface VSActivityIndicatorViewController : UIViewController
{
    UILabel *_activityTextLabel;
    _Bool _showingSpinner;
    NSObject<OS_dispatch_source> *_spinnerTimer;
    UIActivityIndicatorView *_spinnerView;
    _Bool _activityIndicatorHidden;
    NSString *_activityText;
    double _activityIndicatorDelay;
    VSFontCenter *_fontCenter;
}

@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(nonatomic) double activityIndicatorDelay; // @synthesize activityIndicatorDelay=_activityIndicatorDelay;
@property(nonatomic, getter=isActivityIndicatorHidden) _Bool activityIndicatorHidden; // @synthesize activityIndicatorHidden=_activityIndicatorHidden;
@property(copy, nonatomic) NSString *activityText; // @synthesize activityText=_activityText;
- (void).cxx_destruct;
- (id)_textColor;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
