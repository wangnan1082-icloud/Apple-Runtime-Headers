//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/UITableViewDataSource-Protocol.h>
#import <ChatKit/UITableViewDelegate-Protocol.h>

@class CKMessagePartChatItem, CKNanoStickerListTableViewCell, NSArray, NSString, UITableView;
@protocol CKNanoStickerListViewControllerDelegate;

@interface CKNanoStickerListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <CKNanoStickerListViewControllerDelegate> _delegate;
    CKMessagePartChatItem *_chatItem;
    UITableView *_tableView;
    NSArray *_stickers;
    CKNanoStickerListTableViewCell *_sizingCell;
}

@property(retain, nonatomic) CKNanoStickerListTableViewCell *sizingCell; // @synthesize sizingCell=_sizingCell;
@property(copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CKMessagePartChatItem *chatItem; // @synthesize chatItem=_chatItem;
@property(nonatomic) __weak id <CKNanoStickerListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)associatedStickerChatItems;
- (void)dismiss:(id)arg1;
- (void)done:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithChatItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

