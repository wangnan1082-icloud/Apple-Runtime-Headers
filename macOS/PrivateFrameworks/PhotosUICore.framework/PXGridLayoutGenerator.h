//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXLayoutGenerator.h>

@class PXGridLayoutMetrics;

@interface PXGridLayoutGenerator : PXLayoutGenerator
{
    long long _numberOfItemsWide;
}

- (struct _PXLayoutGeometry)_geometryForItemAtIndex:(unsigned long long)arg1;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (struct CGSize)size;
- (struct CGSize)estimatedSize;
- (id)initWithMetrics:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy, nonatomic) PXGridLayoutMetrics *metrics; // @dynamic metrics;

@end

