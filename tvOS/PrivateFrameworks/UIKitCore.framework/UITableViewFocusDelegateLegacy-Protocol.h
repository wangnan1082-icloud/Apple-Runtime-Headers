//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewDelegate.h"

@class NSIndexPath, UITableView, UIView;

@protocol UITableViewFocusDelegateLegacy <UITableViewDelegate>

@optional
- (NSIndexPath *)indexPathForPreferredFocusedItemForTableView:(UITableView *)arg1;
- (_Bool)tableView:(UITableView *)arg1 shouldUpdateFocusFromRowAtIndexPath:(NSIndexPath *)arg2 toView:(UIView *)arg3 heading:(unsigned long long)arg4;
- (void)tableView:(UITableView *)arg1 didUnfocusRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didFocusRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)_tableView:(UITableView *)arg1 canFocusRowAtIndexPath:(NSIndexPath *)arg2;
@end
