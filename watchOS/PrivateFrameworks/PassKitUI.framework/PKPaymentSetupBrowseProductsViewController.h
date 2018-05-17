//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitUI/PKPaymentSetupTableViewController.h>

#import "PKPaymentSetupActivitySpinnerProtocol.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSString, PKPaymentSetupBrowseProductsModel, PKPaymentSetupProduct, PKSearchableTableHeaderView;

@interface PKPaymentSetupBrowseProductsViewController : PKPaymentSetupTableViewController <UITableViewDelegate, UITextFieldDelegate, PKPaymentSetupActivitySpinnerProtocol>
{
    PKPaymentSetupBrowseProductsModel *_model;
    PKSearchableTableHeaderView *_headerView;
    id <PKPaymentSetupBrowseProductsViewControllerDelegate> _delegate;
    PKPaymentSetupProduct *_selectedProduct;
}

@property(readonly, nonatomic) PKPaymentSetupProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
@property(nonatomic) __weak id <PKPaymentSetupBrowseProductsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPaymentSetupBrowseProductsModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)_setNavigationBarEnabled:(_Bool)arg1;
- (void)hideActivitySpinner;
- (void)showActivitySpinner;
- (void)_updateFilterString:(id)arg1 userInteraction:(_Bool)arg2;
- (void)_notifyDelegateDidSelectProduct:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_nextTapped:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)clearSelectedProduct;
- (void)clearSearchField;
- (_Bool)_searchUIEnabled;
- (void)_updateSelectedProduct:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)_productAtIndexPath:(id)arg1;
- (_Bool)_isUnlikelySection:(int)arg1;
- (_Bool)_isLikelySection:(int)arg1;
- (_Bool)_showLikelySection;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 context:(int)arg2;
- (id)initWithProducts:(id)arg1 likelyProductIdentifiers:(id)arg2 context:(int)arg3;
- (id)initWithProducts:(id)arg1 context:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
