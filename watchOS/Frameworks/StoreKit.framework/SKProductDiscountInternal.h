//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDecimalNumber, NSLocale, SKProductSubscriptionPeriod;

__attribute__((visibility("hidden")))
@interface SKProductDiscountInternal : NSObject
{
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    unsigned int _paymentMode;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
    unsigned int _numberOfPeriods;
}

- (void).cxx_destruct;

@end
