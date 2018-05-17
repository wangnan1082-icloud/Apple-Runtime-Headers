//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ATVUpdatable.h"
#import "TVTableViewDelegate.h"

@class NSString, TVLMenuListDataSource, TVTableView, UILabel;

@interface TVLOptionListViewController : UIViewController <TVTableViewDelegate, ATVUpdatable>
{
    UILabel *_titleLabel;
    UILabel *_footnoteLabel;
    TVTableView *_listView;
    TVLMenuListDataSource *_listDataSource;
}

@property(retain, nonatomic) TVLMenuListDataSource *listDataSource; // @synthesize listDataSource=_listDataSource;
@property(retain, nonatomic) TVTableView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) UILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (_Bool)tableView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didUpdateFeedElementRequiringUserInterfaceUpdate:(_Bool)arg1 previousElement:(id)arg2;
- (void)setCurrentFeedElement:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (id)initWithElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
