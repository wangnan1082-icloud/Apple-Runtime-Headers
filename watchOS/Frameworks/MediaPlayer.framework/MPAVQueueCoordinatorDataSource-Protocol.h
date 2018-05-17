//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPAVItem, MPAVQueueCoordinator;

@protocol MPAVQueueCoordinatorDataSource <NSObject>
- (MPAVItem *)queueCoordinator:(MPAVQueueCoordinator *)arg1 itemToFollowItem:(MPAVItem *)arg2;

@optional
- (void)queueCoordinatorDidChangeItems:(MPAVQueueCoordinator *)arg1;
- (void)queueCoordinator:(MPAVQueueCoordinator *)arg1 willInsertItem:(MPAVItem *)arg2 afterItem:(MPAVItem *)arg3;
- (void)queueCoordinator:(MPAVQueueCoordinator *)arg1 failedToLoadItem:(MPAVItem *)arg2;
@end
