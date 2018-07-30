//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UICollectionViewShadowUpdatesController.h>

@class NSArray, NSMutableArray, NSUUID;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragAndDropController : _UICollectionViewShadowUpdatesController
{
    int _sessionKind;
    NSMutableArray *__reorderedItems;
    NSUUID *_currentDropInsertionShadowUpdateIdentifier;
}

@property(nonatomic) int sessionKind; // @synthesize sessionKind=_sessionKind;
@property(retain, nonatomic) NSUUID *currentDropInsertionShadowUpdateIdentifier; // @synthesize currentDropInsertionShadowUpdateIdentifier=_currentDropInsertionShadowUpdateIdentifier;
@property(retain, nonatomic) NSMutableArray *_reorderedItems; // @synthesize _reorderedItems=__reorderedItems;
- (void).cxx_destruct;
- (_Bool)_deleteShadowUpdateWithIdentifier:(id)arg1;
- (void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1;
- (_Bool)_hasReorderingMoved;
- (_Bool)_isReordering;
- (_Bool)_removeMoveShadowUpdateMatchingReorderedItem:(id)arg1;
- (void)_removeReorderedItemsCellsFromViewHierarchy;
- (void)_resetReorderedItems;
- (int)_determineSessionKind;
- (void)didRebaseWithNewBaseUpdateMap:(id)arg1;
- (void)_shadowUpdatesWereReverted;
- (void)_rollbackCurrentDropInsertion;
- (void)_beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2;
- (void)_beginDragAndDropInsertingItemAtIndexPath:(id)arg1;
- (_Bool)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;
- (_Bool)updateWillCauseInternalInconsistency:(id)arg1;
- (id)indexPathForCurrentReorderedItem;
- (id)indexPathForOriginalReorderedItem;
- (id)indexPathForDragAndDropInsertion;
@property(readonly, nonatomic) unsigned long long reorderingCapabilities;
@property(readonly, nonatomic) NSArray *reorderedItems;
- (void)reset;
- (_Bool)isCellPerformingLegacyReorderingAtIndexPath:(id)arg1;
- (_Bool)cancelReorderingShouldRevertOrdering;
- (_Bool)hasShadowUpdates;
- (void)updateAppearanceForCell:(id)arg1 atIndexPath:(id)arg2;
- (CDUnknownBlockType)endReordering;
- (CDUnknownBlockType)cancelReordering;
- (void)updateReorderingTargetIndexPath:(id)arg1;
- (_Bool)beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2;
- (id)description;
- (id)initWithCollectionView:(id)arg1;

@end
