//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPaymentSetupBrowseProductsViewController, PKPaymentSetupProduct;

@protocol PKPaymentSetupBrowseProductsViewControllerDelegate <NSObject>
- (void)browseProductsViewController:(PKPaymentSetupBrowseProductsViewController *)arg1 didSelectProduct:(PKPaymentSetupProduct *)arg2 withCompletionHandler:(void (^)(_Bool, NSError *))arg3;
@end
