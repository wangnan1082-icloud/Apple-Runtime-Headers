//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "PKPassPersonalizationCellDelegate.h"
#import "PKPassPersonalizationFooterViewDelegate.h"
#import "PKPassPersonalizationTermsViewControllerDelegate.h"
#import "PKPaymentSetupViewControllerDelegate.h"

@class NSArray, NSString, PKContact, PKPass, PKPassPersonalizationFooterView, PKPassPersonalizationHeaderView, UIBarButtonItem, UIButton;

@interface PKPassPersonalizationViewController : UITableViewController <PKPassPersonalizationCellDelegate, PKPassPersonalizationFooterViewDelegate, PKPassPersonalizationTermsViewControllerDelegate, PKPaymentSetupViewControllerDelegate>
{
    PKPassPersonalizationHeaderView *_headerView;
    PKPassPersonalizationFooterView *_footerView;
    UIBarButtonItem *_personalizeNowButton;
    UIButton *_personalizeLaterButton;
    PKPass *_pass;
    NSString *_personalizationToken;
    PKContact *_contact;
    NSArray *_cellContexts;
    unsigned int _personalizationSource;
    _Bool _hasScrolledToCells;
    _Bool _termsAndConditionsAccepted;
    id <PKPassPersonalizationViewControllerDelegate> _delegate;
}

@property(nonatomic) id <PKPassPersonalizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_presentPersonalizationErrorAlert;
- (id)_nextCellForIndexPath:(id)arg1;
- (void)_positionFooterView;
- (void)_configureFooterView;
- (void)_configureHeaderViewForState:(unsigned int)arg1;
- (void)_scrollToCellsIfNeeded;
- (_Bool)_contactReadyForPersonalization;
- (void)_personalizePass;
- (void)_personalizeLaterButtonPressed:(id)arg1;
- (void)_personalizeNowButtonPressed:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)passPersonalizationTermsViewControllerDidDeclineTerms:(id)arg1;
- (void)passPersonalizationTermsViewControllerDidAcceptTerms:(id)arg1;
- (void)passPersonalizationFooterViewPrivacyLinkPressed:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)personalizationCellShouldReturn:(id)arg1;
- (void)personalizationCellDidChangeValue:(id)arg1;
- (_Bool)personalizationCellShouldBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPass:(id)arg1 personalizationToken:(id)arg2 personalizationSource:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
