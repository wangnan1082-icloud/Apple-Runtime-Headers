//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactGroupPickerViewController, CNPolicy, NSArray, NSString;

@protocol CNContactGroupPickerDelegate <NSObject>
- (void)contactGroupPickerDidFinish:(CNContactGroupPickerViewController *)arg1 withGroup:(NSString *)arg2;
- (void)contactGroupPickerDidCancel:(CNContactGroupPickerViewController *)arg1;
- (CNPolicy *)policy;
- (NSArray *)alreadyPickedGroups;
@end
