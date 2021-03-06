//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class ABPersonListSearchController, CNContactListController, CNContactPickerScope, NSArray;

@protocol CNContactPickerViewControllerSearch <NSObject>
@property(getter=isSearchFieldVisible) BOOL searchFieldVisible;
@property(readonly) ABPersonListSearchController *searchController;
@property(readonly) CNContactListController *contactListController;
- (void)setAccounts:(NSArray *)arg1;
- (void)setPickerScope:(CNContactPickerScope *)arg1;
- (void)setInitialSelection;
@end

