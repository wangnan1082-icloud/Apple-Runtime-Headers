//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, UICollectionView, UICollectionViewDropProposal, UIDragPreviewParameters;

@protocol UICollectionViewDropDelegate <NSObject>
- (void)collectionView:(UICollectionView *)arg1 performDropWithCoordinator:(id <UICollectionViewDropCoordinator>)arg2;

@optional
- (UIDragPreviewParameters *)collectionView:(UICollectionView *)arg1 dropPreviewParametersForItemAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidEnd:(id <UIDropSession>)arg2;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidExit:(id <UIDropSession>)arg2;
- (UICollectionViewDropProposal *)collectionView:(UICollectionView *)arg1 dropSessionDidUpdate:(id <UIDropSession>)arg2 withDestinationIndexPath:(NSIndexPath *)arg3;
- (void)collectionView:(UICollectionView *)arg1 dropSessionDidEnter:(id <UIDropSession>)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 canHandleDropSession:(id <UIDropSession>)arg2;
@end
