//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, RUIPage, UITableView, UIView;

@protocol RemoteUITableFooter <NSObject>
- (id)initWithAttributes:(NSDictionary *)arg1;

@optional
- (void)configureInPage:(RUIPage *)arg1;
- (float)footerHeightForWidth:(float)arg1 inTableView:(UITableView *)arg2;
- (void)setText:(NSString *)arg1 attributes:(NSDictionary *)arg2;
- (void)setDelegate:(id <RUITableFooterDelegate>)arg1;
- (float)footerHeightForWidth:(float)arg1 inView:(UIView *)arg2;
@end
