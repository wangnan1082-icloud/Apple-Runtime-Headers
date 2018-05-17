//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ATVUpdatable.h"
#import "TVTableViewDelegate.h"

@class NSString, TVLListViewDataSource, TVTableView;

@interface TVLSearchResultsViewController : UIViewController <TVTableViewDelegate, ATVUpdatable>
{
    TVLListViewDataSource *_dataSource;
    TVTableView *_listView;
    id <TVLSearchResultsViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <TVLSearchResultsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_menuItemAtIndexPath:(id)arg1;
- (void)_evaluateJavascriptForEvent:(id)arg1 atIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (_Bool)updatableWithFeedElement:(id)arg1;
- (void)didUpdateFeedElementRequiringUserInterfaceUpdate:(_Bool)arg1 previousElement:(id)arg2;
- (void)setCurrentFeedElement:(id)arg1;
- (void)dealloc;
- (id)initWithSearchResultsElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
