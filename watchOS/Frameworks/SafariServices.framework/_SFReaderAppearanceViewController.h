//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SafariServices/UINavigationControllerDelegate-Protocol.h>

@class NSString, SFReaderAppearanceMainViewController, WBSReaderFont;
@protocol SFReaderAppearanceViewControllerDelegate;

@interface _SFReaderAppearanceViewController : UIViewController <UINavigationControllerDelegate>
{
    SFReaderAppearanceMainViewController *_mainViewController;
    id <SFReaderAppearanceViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SFReaderAppearanceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
@property(readonly, nonatomic) NSString *themeName;
@property(readonly, nonatomic) WBSReaderFont *selectedFont;
- (void)loadView;
- (id)initWithInitialReaderConfiguration:(id)arg1 fontManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

