//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPaymentAuthorizationItemsView;

@protocol PKPaymentAuthorizationItemsViewDelegate <NSObject>

@optional
- (void)paymentAuthorizationItemsView:(PKPaymentAuthorizationItemsView *)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)paymentAuthorizationItemsView:(PKPaymentAuthorizationItemsView *)arg1 willUnhighlightItemAtIndex:(unsigned long long)arg2;
- (void)paymentAuthorizationItemsView:(PKPaymentAuthorizationItemsView *)arg1 willHighlightItemAtIndex:(unsigned long long)arg2;
- (BOOL)paymentAuthorizationItemsView:(PKPaymentAuthorizationItemsView *)arg1 shouldHighlightItemAtIndex:(unsigned long long)arg2;
@end

