//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@class MPAVRoutingViewController, UITableViewCell;
@protocol MPAVRoutingThemeableCellView;

@protocol MPAVRoutingViewControllerThemeDelegate <NSObject>

@optional
- (struct UIEdgeInsets)contentInsetsForRoutingViewController:(MPAVRoutingViewController *)arg1;
- (void)routingViewController:(MPAVRoutingViewController *)arg1 willDisplayCell:(UITableViewCell<MPAVRoutingThemeableCellView> *)arg2;
@end

