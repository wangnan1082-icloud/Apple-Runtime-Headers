//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHChartLayoutItem.h>

@class TSCHChartAxisID;

__attribute__((visibility("hidden")))
@interface TSCHChartReferenceLineLabelPaddingLayoutItem : TSCHChartLayoutItem
{
    TSCHChartAxisID *mAxisID;
}

@property(retain, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
- (void).cxx_destruct;
- (_Bool)p_hasReferenceLineLabelsWithModel:(id)arg1;
- (struct CGSize)p_calcMinSizeForModel:(id)arg1;
- (struct CGSize)calcMinSize;
- (id)initWithParent:(id)arg1 axisID:(id)arg2;

@end
