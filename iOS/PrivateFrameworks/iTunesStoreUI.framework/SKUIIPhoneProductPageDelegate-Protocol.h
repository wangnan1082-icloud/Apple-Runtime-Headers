//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SKUIIPhoneProductPageViewController, SKUIItem;

@protocol SKUIIPhoneProductPageDelegate <NSObject>

@optional
- (_Bool)iPhoneProductPage:(SKUIIPhoneProductPageViewController *)arg1 shouldOpenURL:(NSURL *)arg2;
- (_Bool)iPhoneProductPage:(SKUIIPhoneProductPageViewController *)arg1 shouldOpenItem:(SKUIItem *)arg2;
@end
