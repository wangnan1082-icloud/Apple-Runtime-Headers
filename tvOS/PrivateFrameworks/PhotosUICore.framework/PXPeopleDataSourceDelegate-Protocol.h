//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PXArrayChangeDetails, PXPeopleDataSource;

@protocol PXPeopleDataSourceDelegate <NSObject>
- (void)peopleDataSource:(PXPeopleDataSource *)arg1 didApplyIncrementalChanges:(PXArrayChangeDetails *)arg2;
- (void)peopleDataSourceMembersChanged:(PXPeopleDataSource *)arg1;
@end
