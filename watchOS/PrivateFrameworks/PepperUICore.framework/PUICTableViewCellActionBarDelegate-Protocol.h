//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/NSObject-Protocol.h>

@class NSArray, PUICTableViewCellActionBar, PUICTableViewRowAction;

@protocol PUICTableViewCellActionBarDelegate <NSObject>
- (unsigned int)nextStateForActionBar:(PUICTableViewCellActionBar *)arg1;
- (void)actionBar:(PUICTableViewCellActionBar *)arg1 tappedButtonForAction:(PUICTableViewRowAction *)arg2;
- (NSArray *)actionsForActionBar:(PUICTableViewCellActionBar *)arg1;
@end

