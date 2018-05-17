//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@interface SXMediaSelectionViewController : UITableViewController
{
    id <SXMediaSelectionViewControllerDataSource> _dataSource;
    id <SXMediaSelectionViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) id <SXMediaSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SXMediaSelectionViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)selectedOptionAtIndexPath:(id)arg1;
- (unsigned long long)indexOfSelectionOptionInGroup:(unsigned long long)arg1;
- (id)displayNameForOptionAtIndexPath:(id)arg1;
- (id)displayNameForGroup:(unsigned long long)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)done:(id)arg1;
- (id)title;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;

@end
