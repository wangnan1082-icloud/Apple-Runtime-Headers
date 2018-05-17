//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutMetrics.h>

@interface PXGridLayoutMetrics : PXLayoutMetrics
{
    long long _axis;
    struct CGSize _itemSize;
    struct CGSize _interItemSpacing;
    struct CGSize _headerSize;
    struct CGSize _footerSize;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) struct CGSize footerSize; // @synthesize footerSize=_footerSize;
@property(nonatomic) struct CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property long long axis; // @synthesize axis=_axis;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
