//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PKPassPaymentSummaryCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSNumberFormatter, NSString, PKPaymentMessage, PKPaymentPass, UITableView;

@interface PKPassPaymentSummaryView : UIView <UITableViewDataSource, UITableViewDelegate, PKPassPaymentSummaryCellDelegate>
{
    NSNumberFormatter *_numberFormatter;
    UITableView *_tableView;
    _Bool _deepLinkingEnabled;
    PKPaymentPass *_pass;
    PKPaymentMessage *_message;
    NSString *_messageAppLaunchToken;
    id <PKPassPaymentSummaryViewDelegate> _delegate;
}

@property(nonatomic) id <PKPassPaymentSummaryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *messageAppLaunchToken; // @synthesize messageAppLaunchToken=_messageAppLaunchToken;
@property(readonly, nonatomic) PKPaymentMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (_Bool)_isSectionIndexOfMessage:(int)arg1;
- (int)_sectionIndexOfMessage;
- (void)_performAction:(int)arg1 forSection:(int)arg2 animated:(_Bool)arg3;
- (void)_configureCell:(id)arg1 forMessage:(id)arg2;
@property(readonly, nonatomic) _Bool hasContent;
- (void)setMessage:(id)arg1 appLaunchToken:(id)arg2 animated:(_Bool)arg3;
- (void)paymentSummaryCellDetailsButtonPressed:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
