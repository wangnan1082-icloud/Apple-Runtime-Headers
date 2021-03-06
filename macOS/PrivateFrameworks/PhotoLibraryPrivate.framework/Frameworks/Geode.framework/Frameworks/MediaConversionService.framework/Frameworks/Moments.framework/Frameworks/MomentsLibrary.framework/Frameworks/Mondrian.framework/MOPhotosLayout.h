//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mondrian/MOMediaViewLayout.h>

@class NSMutableArray, NSMutableIndexSet;

@interface MOPhotosLayout : MOMediaViewLayout
{
    NSMutableArray *_attributes;
    NSMutableArray *_attributesBySections;
    NSMutableArray *_supplementaryAttributes;
    NSMutableArray *_supplementaryAttributesBeforeStickiness;
    NSMutableArray *_supplementaryGlobalAttributes;
    double _largestHeight;
    struct CGSize _contentSize;
    struct NSEdgeInsets _contentInsets;
    struct NSEdgeInsets _sectionHeaderInsets;
    struct NSEdgeInsets _sectionInsets;
    unsigned long long _headerHeight;
    NSMutableIndexSet *_floatingHeaderIndexSet;
    BOOL _delegateSupplementaryViewDidBeginFloating;
    BOOL _delegateSupplementaryViewDidBeginPushing;
    BOOL _delegateSupplementaryViewDidEndFloating;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) double largestHeight; // @synthesize largestHeight=_largestHeight;
@property(readonly, nonatomic) NSMutableArray *supplementaryGlobalAttributes; // @synthesize supplementaryGlobalAttributes=_supplementaryGlobalAttributes;
@property(readonly, nonatomic) NSMutableArray *supplementaryAttributes; // @synthesize supplementaryAttributes=_supplementaryAttributes;
@property(readonly, nonatomic) NSMutableArray *attributesBySections; // @synthesize attributesBySections=_attributesBySections;
@property(readonly, nonatomic) NSMutableArray *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (BOOL)supportStickiness;
- (BOOL)supportHeaders;
- (BOOL)supportSections;
- (unsigned long long)orientation;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)_indexPathsForContentSupplementaryViewsOfKind:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (BOOL)invalidationContextHasSettingsChanged:(id)arg1;
- (void)invalidateLayoutForSettingsChange;
- (id)sectionsInRect:(struct CGRect)arg1;
- (id)indexPathsForSupplementaryElementsInRect:(struct CGRect)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (id)indexPathsForElementsInRect:(struct CGRect)arg1 attributes:(id)arg2;
- (struct NSEdgeInsets)insetsForScrollingItemAtIndexPath:(id)arg1 toScrollPosition:(unsigned long long)arg2;
@property unsigned long long headerHeight; // @synthesize headerHeight=_headerHeight;
@property struct NSEdgeInsets sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property struct NSEdgeInsets sectionHeaderInsets; // @synthesize sectionHeaderInsets=_sectionHeaderInsets;
@property struct NSEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (id)init;

@end

