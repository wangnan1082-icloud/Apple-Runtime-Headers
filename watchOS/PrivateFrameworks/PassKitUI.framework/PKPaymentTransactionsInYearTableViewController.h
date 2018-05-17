//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UIViewControllerPreviewingDelegate.h"

@class NSArray, NSCalendar, NSDate, NSDateFormatter, NSString, PKPaymentPass, PKPaymentTransactionCellController, PKPeerPaymentContactResolver, PKPeerPaymentController;

@interface PKPaymentTransactionsInYearTableViewController : UITableViewController <UIViewControllerPreviewingDelegate>
{
    NSDate *_dateFromYear;
    NSCalendar *_calendar;
    NSArray *_transactionsByMonth;
    PKPaymentPass *_paymentPass;
    id <PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPaymentTransactionCellController *_transactionCellController;
    PKPeerPaymentContactResolver *_contactResolver;
    PKPeerPaymentController *_peerPaymentController;
    NSDateFormatter *_transactionMonthFormatter;
    int _detailViewStyle;
}

- (void).cxx_destruct;
- (void)_fetchDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_transactionMonthFormatter;
- (id)_transactionsInYearTitleString;
- (id)_transactionDetailViewControllerForTransaction:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithDateFromYear:(id)arg1 calendar:(id)arg2 paymentPass:(id)arg3 detailViewStyle:(int)arg4 paymentServiceDataProvider:(id)arg5 contactResolver:(id)arg6 peerPaymentController:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
